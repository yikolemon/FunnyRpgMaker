# 验证记录

## 已执行

- 输入：`D:\WorkSpace\rpgmaker-steamdeck\FunnyGamePlayer.exe`，只读静态提取。
- 原始文件及拆分模块 SHA-256、偏移、导入导出：`artifact_inventory.json`。
- Node.js v22.22.0，`npm test`：16 / 16 通过。
- `npm run demo`：输出 `你好 世界`，移动速度 6（基础 4 + 增量 2）。
- 真实本地 Windows 命名管道：新增主机客户端 → 原始提取脚本 → 模拟游戏全局变量，
  已验证数字、Unicode、Promise 及异常响应。不是原生 DLL 或真实游戏集成验证。
- REA 6.7.0 + Ghidra 12.1.4 + Temurin JDK 21.0.13：
  `rea inspect work/artifacts/pe_00a0fad0_8664.exe --provider ghidra --json` 成功。
  此次 REA 观察到 8,803 个函数和 1,544 个字符串；数量是分析器识别结果，不代表原始源码函数数量。

## 环境调整

- 最新 Ghidra 12.2 要求 JDK 25，而且 REA 6.7.0 的 Windows 适配器只接受 12.1.x；
  初次启动失败后改用文档验证过的 Ghidra 12.1.4 + JDK 21，未修改系统默认 Java。
- 原始通信脚本使用旧式 `new Buffer()`，运行测试时会显示 Node 弃用警告；为保留证据未修改原脚本。

## 尚未建立

- 原生程序整体重新编译并运行、UI 等价性、真实游戏启动与接入。
- Windows 原生注入/钩子的行为恢复与验证。
- Linux / Steam Deck 上真实游戏兼容性。
- Ghidra 原始伪代码的完整语义等价性；识别成功不等于逻辑已人工核验。
