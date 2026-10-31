# 验证记录

## 已执行

- 输入：`D:\WorkSpace\rpgmaker-steamdeck\FunnyGamePlayer.exe`，只读静态提取。
- 原始文件及拆分模块 SHA-256、偏移、导入导出：`artifact_inventory.json`。
- Node.js v22.22.0，`npm test`：26 / 26 通过，包含七段原始脚本的 SHA-256 完整性检查。
- `npm run demo`：输出 `你好 世界`，移动速度 6（基础 4 + 增量 2）。
- 真实本地 Windows 命名管道：新增主机客户端 → 原始提取脚本 → 模拟游戏全局变量，
  已验证数字、Unicode、Promise 及异常响应。不是原生 DLL 或真实游戏集成验证。
- REA 6.7.0 + Ghidra 12.1.4 + Temurin JDK 21.0.13：
  `rea inspect work/artifacts/pe_00a0fad0_8664.exe --provider ghidra --json` 成功。
  此次 REA 观察到 8,803 个函数和 1,544 个字符串；数量是分析器识别结果，不代表原始源码函数数量。
- REA 实际反编译 `pe_00bf40d0_8664.exe` 的 `0x140001000` 成功，
  已保存原始 C 伪代码和完整证据。启动链观察见 `docs/native-startup.md`。

## 环境调整

- 最新 Ghidra 12.2 要求 JDK 25，而且 REA 6.7.0 的 Windows 适配器只接受 12.1.x；
  初次启动失败后改用文档验证过的 Ghidra 12.1.4 + JDK 21，未修改系统默认 Java。
- 原始通信脚本使用旧式 `new Buffer()`，运行测试时会显示 Node 弃用警告；为保留证据未修改原脚本。

## 批量原生导出完成

六个模块均出现 `EXPORT COMPLETE`，共导出 59,939 个函数伪代码：
外层 EXE 12,408；x64 DLL 16,053；x86 DLL 15,538；其余三个 EXE 分别为
8,683、3,862、3,395。统计见 `native_export_summary.json`。
导出器报告失败数为 0，但部分函数存在无法读取地址等警告；成功生成伪代码
不表示完整、准确或可编译，也不等于所有原始函数都被识别。

## 真实 MV 引擎接入与可见窗口

- `npm run test:engine` 通过。实际 Chrome 155.0.8059.82 加载固定提交的
  开源 MV 1.6.1 CoreScript，使用合成数据库与自定义测试场景。
- 已通过真实 DevTools HTTP / WebSocket 发现和附加页面，并调用公开 CLI 修改移动速度 4 → 6。
- 验证真实 `Game_Party` 金币读取和 UI 按钮修改、`Window_Base` 字体、
  恢复的翻译文本到达真实 `Bitmap.drawText`。
- 实测 SceneManager 原始时钟推进约 64.9 ms，恢复的倍率时钟推进约 129.8 ms，比例为 2。
  单次功能验证，不是性能基准。完整报告：`mv_browser_validation.json`。
- `npm run preview -- --smoke` 已在本机打开可见 Chrome 窗口，自动点击四个接入控制按钮，
  验证结果后关闭；截图保存在本地 `work/mv-preview.png`。
- 原模板引用 MZ 专有类导致 MV 兼容性问题；新写的词法包装允许原有 try/catch
  跳过缺失类，不改动提取脚本或给 MV 全局补造类。
- 新接入层使用 CDP，不能等同原版 DLL/V8 接入实现。真实商业游戏、MZ、Steam Deck 仍未验证。
- 新增 GitHub Actions 引擎任务；此处仅报告本机执行结果，不把尚未查看的 CI 结果算作通过。

## 尚未建立

- 原生程序整体重新编译并运行、UI 等价性、真实游戏启动与接入。
- Windows 原生注入/钩子的行为恢复与验证。
- Linux / Steam Deck 上真实游戏兼容性。
- Ghidra 原始伪代码的完整语义等价性；识别成功不等于逻辑已人工核验。
