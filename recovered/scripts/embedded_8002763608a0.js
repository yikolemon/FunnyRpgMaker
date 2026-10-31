
(function () {
    var stringToCodePoints = function (str) {
        var result = [];
        var i = 0;
        while (i < str.length) {
            var c1 = str.charCodeAt(i);
            if (c1 >= 0xD800 && c1 <= 0xDBFF && i + 1 < str.length) {
                var c2 = str.charCodeAt(i + 1);
                if (c2 >= 0xDC00 && c2 <= 0xDFFF) {
                    result.push(((c1 - 0xD800) << 10) + (c2 - 0xDC00) + 0x10000);
                    i += 2;
                    continue;
                }
            }
            result.push(c1);
            i++;
        }
        return result;
    };

    var codePointsToString = function (codePoints) {
        var result = "";
        for (var i = 0; i < codePoints.length; i++) {
            var cp = codePoints[i];
            if (cp <= 0xFFFF) {
                result += String.fromCharCode(cp);
            } else {
                cp -= 0x10000;
                result += String.fromCharCode(0xD800 + (cp >> 10), 0xDC00 + (cp & 0x3FF));
            }
        }
        return result;
    };

    /**
     * 对应 C++ 的 reflow_translation 逻辑
     * 将 original (CodePoint数组) 的换行格式按字符数比例分配到 translation 译文中
     */
    var reflowTranslation = function (original, translation) {
        var lines = [{ length: 0, lineBreak: "" }];

        // 1. 解析原文，统计每行长度并记录换行符 (\r, \n, \r\n)
        for (var i = 0; i < original.length; ) {
            var ch = original[i];
            if (ch === 0x000d) {
                // \r
                if (i + 1 < original.length && original[i + 1] === 0x000a) {
                    // \r\n
                    lines[lines.length - 1].lineBreak = "\r\n";
                    i += 2;
                } else {
                    lines[lines.length - 1].lineBreak = "\r";
                    i++;
                }
                lines.push({ length: 0, lineBreak: "" });
            } else if (ch === 0x000a) {
                // \n
                lines[lines.length - 1].lineBreak = "\n";
                i++;
                lines.push({ length: 0, lineBreak: "" });
            } else {
                lines[lines.length - 1].length++;
                i++;
            }
        }

        // 如果最后一行无内容且无换行，多余行去掉
        if (
            lines.length > 1 &&
            lines[lines.length - 1].length === 0 &&
            lines[lines.length - 1].lineBreak === ""
        ) {
            lines.pop();
        }

        // 统计除换行符外的总字符数
        var totalLength = 0;
        for (var j = 0; j < lines.length; j++) {
            totalLength += lines[j].length;
        }

        // 原文没有普通字符（例如只有换行）
        if (totalLength === 0) {
            var res = translation;
            for (var k = 0; k < lines.length; k++) {
                res += lines[k].lineBreak;
            }
            return res;
        }

        // 按累计比例重新分配译文字符
        var transCP = stringToCodePoints(translation);
        var result = "";
        var cumulativeSrc = 0;
        var cumulativeDst = 0;

        for (var idx = 0; idx < lines.length; idx++) {
            cumulativeSrc += lines[idx].length;

            var nextDst;
            if (idx + 1 === lines.length) {
                nextDst = transCP.length;
            } else {
                // 四舍五入取整：(a * b + c / 2) / c
                nextDst = Math.floor((transCP.length * cumulativeSrc + Math.floor(totalLength / 2)) / totalLength);
            }

            result += codePointsToString(transCP.slice(cumulativeDst, nextDst));
            cumulativeDst = nextDst;
            result += lines[idx].lineBreak;
        }

        return result;
    };

    var ACAutomaton = function () {
        this.nodes = [];
        this.patterns = [];
        this.isBuilt = false;
        this.clear();
    };

    ACAutomaton.prototype.clear = function () {
        this.nodes = [];
        this.patterns = [];
        this.nodes.push(this._createNode());
        this.isBuilt = false;
    };

    ACAutomaton.prototype._createNode = function () {
        return {
            next: Object.create(null),
            fail: 0,
            patterns: [],
            outputs: [],
        };
    };

    ACAutomaton.prototype.insert = function (patternStr, translationStr) {
        this.isBuilt = false;

        var pattern = stringToCodePoints(patternStr);
        if (pattern.length === 0) return;

        var current = 0;
        for (var i = 0; i < pattern.length; i++) {
            var ch = pattern[i];
            if (!(ch in this.nodes[current].next)) {
                var newNode = this.nodes.length;
                this.nodes.push(this._createNode());
                this.nodes[current].next[ch] = newNode;
            }
            current = this.nodes[current].next[ch];
        }

        this.patterns.push({
            length: pattern.length,
            translation: translationStr,
        });
        this.nodes[current].patterns.push(this.patterns.length - 1);
    };

    ACAutomaton.prototype.build = function () {
        if (this.isBuilt) return;

        var q = [];
        var rootNext = this.nodes[0].next;

        this.nodes[0].fail = 0;
        this.nodes[0].outputs = [].concat(this.nodes[0].patterns);

        for (var ch in rootNext) {
            var child = rootNext[ch];
            this.nodes[child].fail = 0;
            this.nodes[child].outputs = [].concat(this.nodes[child].patterns);
            q.push(child);
        }

        var head = 0;
        while (head < q.length) {
            var current = q[head++];
            var currentNode = this.nodes[current];

            for (var chKey in currentNode.next) {
                var ch = Number(chKey);
                var childNode = currentNode.next[ch];

                var f = currentNode.fail;
                while (f !== 0 && !(ch in this.nodes[f].next)) {
                    f = this.nodes[f].fail;
                }

                if (ch in this.nodes[f].next) {
                    var targetFail = this.nodes[f].next[ch];
                    this.nodes[childNode].fail = targetFail === childNode ? 0 : targetFail;
                } else {
                    this.nodes[childNode].fail = 0;
                }

                this.nodes[childNode].outputs = [].concat(this.nodes[childNode].patterns);
                var failNode = this.nodes[this.nodes[childNode].fail];
                if (failNode.outputs.length > 0) {
                    this.nodes[childNode].outputs = this.nodes[childNode].outputs.concat(failNode.outputs);
                }

                q.push(childNode);
            }
        }
        this.isBuilt = true;
    };

    ACAutomaton.prototype.translate = function (textStr) {
        if (!this.isBuilt) this.build();

        var text = stringToCodePoints(textStr);
        if (text.length === 0) return textStr;

        //----------------------------------------------------------
        // 1. 去掉 CR/LF，建立 clean -> original 映射 (对齐 C++ 逻辑)
        //----------------------------------------------------------
        var cleanText = [];
        var posMap = [];

        for (var idx = 0; idx < text.length; idx++) {
            var cp = text[idx];
            if (cp === 0x000d || cp === 0x000a) {
                // \r 或 \n
                continue;
            }
            cleanText.push(cp);
            posMap.push(idx);
        }

        if (cleanText.length === 0) return textStr;

        //----------------------------------------------------------
        // 2. AC自动机匹配
        //----------------------------------------------------------
        var matches = [];
        var current = 0;

        for (var i = 0; i < cleanText.length; i++) {
            var ch = cleanText[i];

            while (current !== 0 && !(ch in this.nodes[current].next)) {
                current = this.nodes[current].fail;
            }
            if (ch in this.nodes[current].next) {
                current = this.nodes[current].next[ch];
            } else {
                current = 0;
            }

            var outputs = this.nodes[current].outputs;
            for (var j = 0; j < outputs.length; j++) {
                var patternIndex = outputs[j];
                var pattern = this.patterns[patternIndex];
                matches.push({
                    start: i + 1 - pattern.length,
                    end: i + 1,
                    patternIndex: patternIndex,
                });
            }
        }

        if (matches.length === 0) return textStr;

        //----------------------------------------------------------
        // 3. 全局最长优先贪婪覆盖
        //----------------------------------------------------------
        matches.sort(function (a, b) {
            var lenA = a.end - a.start;
            var lenB = b.end - b.start;
            if (lenA !== lenB) {
                return lenB - lenA; // 长度降序
            }
            return a.start - b.start; // 起始位置升序
        });

        var covered =
            typeof Uint8Array !== "undefined"
                ? new Uint8Array(cleanText.length)
                : new Array(cleanText.length);

        if (typeof Uint8Array === "undefined") {
            for (var k = 0; k < covered.length; k++) covered[k] = false;
        }

        var selected = [];

        for (var m = 0; m < matches.length; m++) {
            var match = matches[m];
            var has_overlap = false;
            for (var n = match.start; n < match.end; n++) {
                if (covered[n]) {
                    has_overlap = true;
                    break;
                }
            }
            if (!has_overlap) {
                selected.push(match);
                for (var p = match.start; p < match.end; p++) {
                    covered[p] = 1;
                }
            }
        }

        // 重新按起始位置升序排列
        selected.sort(function (a, b) {
            return a.start - b.start;
        });

        //----------------------------------------------------------
        // 4. 拼接结果与换行重排
        //----------------------------------------------------------
        var resultComponents = [];
        var textPos = 0; // 对应原始字符流索引

        for (var r = 0; r < selected.length; r++) {
            var selMatch = selected[r];

            var realStart = posMap[selMatch.start];
            var realEnd = posMap[selMatch.end - 1];

            if (realStart > textPos) {
                resultComponents.push(codePointsToString(text.slice(textPos, realStart)));
            }

            var originalMatched = text.slice(realStart, realEnd + 1);
            var reflowed = reflowTranslation(originalMatched, this.patterns[selMatch.patternIndex].translation);

            resultComponents.push(reflowed);
            textPos = realEnd + 1;
        }

        if (textPos < text.length) {
            resultComponents.push(codePointsToString(text.slice(textPos, text.length)));
        }

        return resultComponents.join("");
    };

    ACAutomaton.prototype.nodeCount = function () {
        return this.nodes.length;
    };

    ACAutomaton.prototype.patternCount = function () {
        return this.patterns.length;
    };

    var game_automaton = new ACAutomaton();

    FUNNY_GAME_TRANSLATION_REGEX

    game_automaton.build();

    // 翻译缓存
    window.__FUNNY_GAME_TRANSLATION_LOADER__ = game_automaton;
    window.__FUNNY_GAME_TRANSLATION_MAP_ORIG2TS__ = Object.create(null);
    window.__FUNNY_GAME_TRANSLATION_MAP_TS2ORIG__ = Object.create(null);
    window.__FUNNY_GAME_TRANSLATION_MAP_COUNT__ = 0;

    var game_translation_map_translate = function (text) {
        if (typeof(text) === "string" && text) {
            if (window.__FUNNY_GAME_TRANSLATION_MAP_TS2ORIG__[text]) return text;
            var find_ts = window.__FUNNY_GAME_TRANSLATION_MAP_ORIG2TS__[text];
            if (find_ts) return find_ts;

            // 缓存数量太多时清理缓存
            if (window.__FUNNY_GAME_TRANSLATION_MAP_COUNT__ > 10000) {
                window.__FUNNY_GAME_TRANSLATION_MAP_ORIG2TS__ = Object.create(null);
                window.__FUNNY_GAME_TRANSLATION_MAP_TS2ORIG__ = Object.create(null);
                window.__FUNNY_GAME_TRANSLATION_MAP_COUNT__ = 0;
            }

            var translated = window.__FUNNY_GAME_TRANSLATION_LOADER__.translate(text);

            window.__FUNNY_GAME_TRANSLATION_MAP_ORIG2TS__[text] = translated;
            window.__FUNNY_GAME_TRANSLATION_MAP_TS2ORIG__[translated] = text;
            window.__FUNNY_GAME_TRANSLATION_MAP_COUNT__++;

            return translated;
        }
        return text;
    };

    // 批量替换类属性
    var bat_hook_text_function = function (clazz) {
        if (!clazz.__drawText_uxmw_orig) {
            clazz.__drawText_uxmw_orig = clazz.prototype.drawText;
            clazz.prototype.drawText = function (text) {
                text = game_translation_map_translate(text);
                return clazz.__drawText_uxmw_orig.apply(this, arguments);
            };
        }
        if (!clazz.__convertEscapeCharacters_uxmw_orig) {
            clazz.__convertEscapeCharacters_uxmw_orig = clazz.prototype.convertEscapeCharacters;
            clazz.prototype.convertEscapeCharacters = function (text) {
                text = game_translation_map_translate(text);
                return clazz.__convertEscapeCharacters_uxmw_orig.apply(this, arguments);
            };
        }
    }

    var bat_sub_clazz = [
	    Window_BattleLog,
	    Window_Help,
	    Window_MapName,
	    Window_Message,
	    Window_NameBox,
	    Window_Scrollable,
	    Window_ScrollText,
	    Window_Selectable,
	    Window_Command,
	    Window_HorzCommand,
	    Window_ChoiceList,
    ];
    for (var c = 0; c < bat_sub_clazz.length; c++) {
        try {
            bat_hook_text_function(bat_sub_clazz[c]);
        } catch { // 忽略可能不存在的派生类
        }
    }
    bat_hook_text_function(Window_Base);

    // 刷新标题界面
    if (SceneManager._scene instanceof Scene_Title) {
        SceneManager.goto(Scene_Title);
    }

    window.__FUNNY_GAME_TRANSLATION_LOAD_SUCCEEDED__ = true;
})();
