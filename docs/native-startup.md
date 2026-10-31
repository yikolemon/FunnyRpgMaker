# 启动链：已确认与待确认

## 原始伪代码

`recovered/focused/launch-helper-x64-wmain.c` 来自实际 REA/Ghidra 调用，
对应内嵌 `pe_00bf40d0_8664.exe` 的 `0x140001000`。
完整证据保存在 `evidence/rea/launch-helper-x64-wmain.json`。
这里不是只提取字符串，而是已经得到原生函数的反编译控制流。

## 此函数的可见行为

1. 调用 `setlocale(0, ".UTF-8")`。
2. 单参数为 `hotkey` 时，进入单独的热键处理函数，然后返回 0。
3. 参数足够时，将前两个参数转换为路径；错误文字分别为
   `INJECT_DLL_PATH not exist:` 和 `EXE_PATH not exist:`。
4. 检查已有热键管理状态；相应分支用 `CreateProcessW` 启动自身，
   命令行是 `register hotkey`，创建标志 `0x08000000`（`CREATE_NO_WINDOW`）。
5. 主启动路径委托给 `FUN_14001b267`，并涉及捕获 DLL 路径的回调。
6. 失败分支打印 `Unable to launch process:`，设置退出码 101，并调用 `TerminateProcess`。
7. 参数不够时打印 `USAGE: INJECT_DLL_PATH EXE_PATH`，返回 1。

以上是静态伪代码观察，不是实际执行验证。路径转换、进程创建/接入、热键管理等
被调函数还需要继续分析，不能仅凭错误文字声称已恢复完整 DLL 接入过程。

## 对移植的影响（推断）

后续检查 `pe_00bf40d0_8664.exe/14001b267.c` 发现它将创建标志与 4
（`CREATE_SUSPENDED`）按位或，进程创建后调用辅助函数，原调用未要求挂起时才恢复线程。
Ghidra 没恢复出完整调用签名，因此仍需核对寄存器和调用点，不能直接将伪代码当成可编译接口。

x64 DLL 的 `18001419c.c` 可见对 `nw.dll` 内 V8 导出名称的查找，包括
`NewFromUtf8`、`Utf8Value`、`GetCurrent` 和 `ScriptCompiler::Compile`。
`180018675.c` 可见生成命名管道路径并替换脚本的 `NAMED_PIPE_LISTENER` 占位符。
这些静态证据支持“原版通过原生 V8 接入来安装脚本”的判断，但尚未完成动态验证。

当前可运行原型采用新写的本地 CDP 接入层来验证已恢复的脚本功能，
并没有把它冒充原版 DLL 接入。这也意味着它暂时要求目标开放调试端口。

启动辅助程序明确依赖 Windows 进程及热键 API。
Steam Deck 原生 Linux 版本不能只重新编译 JavaScript；需要保留 Wine/Proton 路径，
或者重写游戏接入层。采用哪种方式应在恢复调用链并用真实游戏验证后决定。

## 其他静态定位线索

`evidence/native_import_references.tsv` 是 Capstone 扫描六个 PE 可执行节得到的
直接 IAT 引用。`unwind_function_start` 来自 x64 展开表，不是 Ghidra 的最终函数边界。
线性扫描并不证明指令可达，也不覆盖动态解析的 API。它用于选取后续分析入口，
不能当作完整调用图。
