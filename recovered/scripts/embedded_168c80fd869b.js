
(function () {
    var net = require("net");

    var json_stringify_safe = function (obj, maxDepth, spaces, replacer, cycleReplacer) {
        maxDepth = maxDepth === 0 || maxDepth != null ? maxDepth : Infinity;
        return JSON.stringify(
            obj,
            json_stringify_safe_serializer(replacer, maxDepth, cycleReplacer),
            spaces
        );
    };

    var json_stringify_safe_serializer = function (replacer, maxDepth, cycleReplacer) {
        var stack = [];
        var keys = [];

        if (cycleReplacer == null)
            cycleReplacer = function (key, value) {
                if (stack[0] === value) return "[Circular ~]";
                return ("[Circular ~." + keys.slice(0, stack.indexOf(value)).join(".") + "]");
            };

        return function (key, value) {
            if (stack.length > 0) {
                var thisPos = stack.indexOf(this);
                ~thisPos ? stack.splice(thisPos + 1) : stack.push(this);
                ~thisPos ? keys.splice(thisPos, Infinity, key) : keys.push(key);

                if (stack.length > maxDepth && typeof value === "object" && value !== null) {
                    return "[Object ~." + maxDepth + "]";
                }

                if (~stack.indexOf(value))
                    value = cycleReplacer.call(this, key, value);
            } else stack.push(value);

            return replacer == null ? value : replacer.call(this, key, value);
        };
    };

    var PIPE_NAME = "NAMED_PIPE_LISTENER";
    var STATE_KEY = "__funny_game_player_server_state__";

    // 保存跨页面 reload 的 Node 状态。
    var state =
        process[STATE_KEY] ||
        (process[STATE_KEY] = {
            server: null,
            sockets: [],
            generation: 0,
        });

    var closeOldServer = function () {
        return new Promise(function (resolve) {
            var oldServer = state.server;

            if (!oldServer) {
                resolve();
                return;
            }

            // 遍历数组，断开所有旧连接
            for (var i = 0; i < state.sockets.length; i++) {
                if (state.sockets[i]) {
                    state.sockets[i].destroy();
                }
            }
            state.sockets = [];

            state.server = null;

            try {
                oldServer.close(function (err) {
                    if (err && err.code !== "ERR_SERVER_NOT_RUNNING") {
                        console.warn("old server close failed:", err);
                    }
                    resolve();
                });
            } catch (err) {
                if (!err || err.code !== "ERR_SERVER_NOT_RUNNING") {
                    console.warn("old server close exception:", err);
                }
                resolve();
            }
        });
    };

    var createNewServer = function () {
        var currentGeneration = state.generation;

        var server = net.createServer(function (socket) {
            if (currentGeneration !== state.generation) {
                socket.destroy();
                return;
            }

            console.log("client connected");

            state.sockets.push(socket);

            var recvBuffer = new Buffer(0);

            socket.on("data", function (data) {
                if (currentGeneration !== state.generation) {
                    socket.destroy();
                    return;
                }

                recvBuffer = Buffer.concat([recvBuffer, data]);

                // 处理粘包的循环体
                var processPackets = function () {
                    if (recvBuffer.length < 4) {
                        return;
                    }

                    var bodyLength = recvBuffer.readUInt32LE(0);

                    if (recvBuffer.length < 4 + bodyLength) {
                        return;
                    }

                    // 使用 slice 替代 subarray
                    var body = recvBuffer.slice(4, 4 + bodyLength);
                    recvBuffer = recvBuffer.slice(4 + bodyLength);

                    var jsCode = body.toString("utf8");

                    // 封装 eval 执行逻辑，处理 Promise
                    var executeCode = function () {
                        try {
                            var evalResult = (0, eval)(jsCode);

                            if (
                                evalResult &&
                                typeof evalResult.then === "function"
                            ) {
                                // 如果是 Promise，等待 resolve 后再发送响应
                                evalResult
                                    .then(function (res) {
                                        sendResponse({
                                            code: 200,
                                            result: res == null ? null : res,
                                        });
                                        processPackets(); // 驱动下一个包的处理
                                    })
                                    .catch(function (err) {
                                        handleEvalError(err);
                                        processPackets();
                                    });
                            } else {
                                // 同步结果直接发送
                                sendResponse({
                                    code: 200,
                                    result:
                                        evalResult == null ? null : evalResult,
                                });
                                processPackets();
                            }
                        } catch (err) {
                            handleEvalError(err);
                            processPackets();
                        }
                    };

                    var handleEvalError = function (err) {
                        sendResponse({
                            code: 100,
                            result:
                                (err && err.stack) ||
                                (err && err.message) ||
                                String(err),
                        });
                    };

                    var sendResponse = function (response) {
                        var responseText;
                        try {
                            responseText = json_stringify_safe(response);
                        } catch (err) {
                            responseText = json_stringify_safe({
                                code: 101,
                                result:
                                    "JSON stringify failed: " +
                                    ((err && err.message) || String(err)),
                            });
                        }

                        var bodyBuffer = new Buffer(responseText, "utf8");
                        var headerBuffer = new Buffer(4);
                        headerBuffer.writeUInt32LE(bodyBuffer.length, 0);

                        if (!socket.destroyed) {
                            socket.write(Buffer.concat([headerBuffer, bodyBuffer]));
                        }
                    };

                    // 开始执行当前包
                    executeCode();
                };

                processPackets();
            });

            socket.on("close", function () {
                // 从数组中移除 socket
                var index = state.sockets.indexOf(socket);
                if (index !== -1) {
                    state.sockets.splice(index, 1);
                }
                console.log("client disconnected");
            });

            socket.on("error", function (err) {
                if (err.code !== "ECONNRESET" && err.code !== "EPIPE") {
                    console.error("socket error:", err);
                }
            });
        });

        server.on("error", function (err) {
            console.error("server error:", err);
        });

        return server;
    };

    var startNewServer = function () {
        return closeOldServer().then(function () {
            var server = createNewServer();
            state.server = server;

            server.listen(PIPE_NAME, function () {
                console.log("server listening, generation =", state.generation);
            });
        });
    };

    var delay = function (ms) {
        return new Promise(function (resolve) {
            setTimeout(resolve, ms);
        });
    };

    // 轮询检测
    var waitForGameSystemAndStart = function (count) {
        if (typeof $gameSystem === "object") {
            // 条件满足，启动服务
            if (!window.__funny_game_player_server_listener__) {
                window.__funny_game_player_server_listener__ = true;
                // 延迟一段时间再启动服务器，防止某些变量未加载完全
                delay(100).then(startNewServer).catch(function (err) {
                    console.error("failed to start server:", err);
                });
            }
            return;
        }
        if (count > 100) {
            // 全局变量检测超时
            return;
        }
        // 条件不满足
        delay(100).then(function () {
            waitForGameSystemAndStart(count + 1);
        });
    };

    // 启动轮询
    if (!window.__funny_game_player_server_started__) {
        window.__funny_game_player_server_started__ = true;
        state.generation++;
        waitForGameSystemAndStart(0);
    }
})();
