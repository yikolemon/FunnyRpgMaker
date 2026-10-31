# FunnyRpgMaker：FunnyGamePlayer 逆向重建

目标：从用户提供的 `FunnyGamePlayer.exe` 恢复程序逻辑，逐步重建可运行工程。
**目前不是原程序的完整替代品，也不是已经完成的 Steam Deck 移植版。**

## 当前能运行什么

**现在可以打开可操作的真实 MV 引擎测试窗口：Windows 双击 `preview.cmd`，
或运行 `npm run preview`。** 已验证速度、字体、翻译与状态读取链路。
准备步骤、自动化测试及真实游戏接入限制见 [测试指南](docs/testing.md)。
这是新写的接入层和测试界面，不是已完成的原版桌面程序。

已从原二进制提取七段去重后的 JavaScript，包含原有注释和占位符：

| 文件 | 功能 |
| --- | --- |
| `recovered/scripts/embedded_bb9988c5b22e.js` | MV 时间 / MZ 更新倍率 |
| `recovered/scripts/embedded_baf7d6fc9410.js` | 玩家移动速度 |
| `recovered/scripts/embedded_91fcfb39b9f6.js` | MV / MZ 字体回退 |
| `recovered/scripts/embedded_168c80fd869b.js` | Node 命名管道通信与脚本执行 |
| `recovered/scripts/embedded_8002763608a0.js` | AC 自动机翻译、换行重排、绘制钩子 |
| `recovered/scripts/embedded_288e3790f371.js` | 角色属性清单 |
| `recovered/scripts/embedded_ecb6991f4647.js` | DataManager 异步数据加载函数表达式 |

`src/` 是新写的运行适配层，不是冒充反编译结果的原生源码。
它直接执行上述提取脚本，在模拟 RPG Maker 上下文中验证逻辑。

需要 Node.js 22+；下列模块测试/命令行演示无需安装 npm 依赖，
浏览器测试和可见窗口需先 `npm ci`：

```sh
npm test
npm run demo
npm start -- translate examples/dictionary.json "Hello world"
```

通信测试同时包含模拟 socket 和真实本地命名管道往返；后者仍使用模拟游戏状态，
不启动真实游戏，也不开放 TCP 端口。新增的 `src/pipe-client.mjs` 是按恢复协议实现的主机端。
已有游戏通信管道时可运行 `npm start -- inspect-pipe "\\.\pipe\实际名称"` 读取状态；
这不会自动完成 DLL 接入，真实游戏接入尚未验证。
提取到的通信脚本本身支持执行收到的 JavaScript，切勿直接暴露给不可信客户端。
Node `vm` 不是安全沙箱，只用于运行已检查的恢复脚本；不要用它执行陌生脚本。

## 原生反编译

### Wolf RPG：已有可运行的只读恢复模块

`npm start -- wolf "游戏目录"` 可识别 EXE 版本并解析支持的初始数据库；
已在用户提供的 x86 Wolf 2.24 游戏上只读验证三套数据库（88 类型 / 501 记录）。
这是离线数据读取，**不是运行中金币/变量修改，也不是已完成 DLL 接入**。
完整依据、用法和覆盖限制见 [Wolf 恢复说明](docs/wolf-recovery.md)。

### 批量伪代码

外层 x64 EXE 中发现另外五个嵌入 PE：两个 DLL、三个 EXE，包含 x86 与 x64。
偏移、散列、导入导出表见 `evidence/artifact_inventory.json`。
模块的确切职责需要结合反编译和调用关系验证，不能只靠文件名推断。

已经通过 REA 实际反编译一个启动辅助程序的主函数：
`recovered/focused/launch-helper-x64-wmain.c`。
它包含路径检查、热键管理分支、进程启动及错误处理；分析说明见
[`docs/native-startup.md`](docs/native-startup.md)。该函数不是完整程序，也不能直接编译。

安装本地工具、提取并批量导出：

```powershell
python -m pip install -r scripts/requirements.txt
python scripts/setup_tools.py
python scripts/extract_artifacts.py D:\WorkSpace\rpgmaker-steamdeck\FunnyGamePlayer.exe
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/decompile.ps1
```

- Ghidra / JDK 装在被忽略的 `tools/` 内，不改系统 Java。
- 输入及拆出的 EXE / DLL 不提交到 Git。
- `recovered/native/` 是 Ghidra 原始伪代码，不是可直接编译的 C++。
- 当前六个模块的批量导出已完成，共 59,939 个函数伪代码，详见 `evidence/native_export_summary.json`。
- 每个函数保留地址；`functions.tsv` 记录成功/失败，`calls.tsv` 记录静态调用边。
- `strings.tsv` / `string_refs.tsv` 记录识别出的字符串及其静态引用（取决于分析覆盖）。
- `work/ghidra/` 保存本地分析数据库和日志，不提交到 Git。
- 源码中的第三方组件名称、版权和原有注释应保留；本仓库不声称拥有原软件版权。

## 完成标准与尚未验证项

模块测试通过只表明提取脚本在测试上下文中按所测场景工作，不证明原生程序已重建。
完整初版还需要恢复入口、配置、进程启动与模块加载、游戏通信接入和 UI，
并在真实 RPG Maker 游戏上验证。Linux/Steam Deck 兼容性需要单独验证。
