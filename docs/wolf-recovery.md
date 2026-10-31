# Wolf 模块恢复：第一阶段（只读）

## 已完成

`src/wolf/` 是新写的可运行只读实现，依据原模块反编译结果并交叉核对
原程序包含的开源依赖 WolfTL。不是把原始伪代码换个名字后宣称可编译，
也不是原生注入模块的完整还原。

- 从 PE `RT_VERSION/VS_FIXEDFILEINFO` 读取文件版本，不加载 EXE。
- 恢复版本分支选择：`< 0x20018`、`[0x20018, 0x30000)`、`>= 0x30000`。
- 解析未压缩数据库 C0/C1 的 `.project` 与 `.dat` 配对：类型、字段、记录名和内容。
- 校验计数、字段存储索引、类型分隔符、结束标记和准确 EOF。
- 根据文件头选择 Shift-JIS 或 UTF-8；编码状态属于单次解析，不依赖全局变量。
- `Game.dat` 恢复已知前缀（标题/字体等）；末尾只保留“不透明字节数”，不猜结构。
- `CommonEvent.dat` 目前仅检查已知头部并读取声明事件数，**未验证事件正文**。

整数同时保留 uint32 原始值和 int32 解释，不猜哪个字段应有符号。
加密/压缩版本、未知头部、损坏数据返回明确限制或错误，不静默当成空数据库。
`unsupported-or-invalid` 表示此解析器不能接受输入，不等于证明游戏文件损坏。

## 如何运行

```powershell
cd D:\WorkSpace\FunnyRpgMaker
npm start -- wolf "tests/testgame/JPN HENTAI RABBIT HOOD"
# 加 --records 可读取各字段的离线初始值（可能产生较多输出）
npm start -- wolf "tests/testgame/JPN HENTAI RABBIT HOOD" --records
npm run test:wolf
```

`test:wolf` 是可选的本地游戏验证，不在公共 CI 中要求游戏本体。
它通过公开 CLI 解析数据，前后比较整个 `BasicData` 的 SHA-256/大小/mtime，
完整读取结果写到忽略的 `work/wolf-inspection.json`。
可提交摘要 `evidence/wolf_readonly_validation.json` 只有版本、散列、计数和覆盖限制，
不含游戏文本、图片、存档或数据库内容。

不要用 Windows PowerShell 的默认文本管道保存含日文的 JSON；它可能错误转换编码。
用上述验证脚本直接写 UTF-8 文件，或从 Node API `inspectWolfGame()` 获取结果。

## 本地游戏实测

- EXE：x86，文件版本 `2.24.2018.622`，版本分支 `2.24-to-pre-3.0`。
- CDataBase：30 类型 / 74 记录。
- DataBase：30 类型 / 84 记录。
- SysDatabase：28 类型 / 343 记录。
- 三套数据库合计 88 类型 / 501 记录，全部消费输入并通过结束标记/EOF 检查。
- `SysDataBaseBasic` 使用零字节头部；与当前已核验的包头不一致，明确不支持，未猜测兼容。
- CommonEvent 头部声明 400 个事件；正文未恢复，不算 400 个事件解析成功。
- Game.dat 仍有 28,943 个不透明尾部字节；没有声称恢复了这些字段。
- 整个 BasicData 的 15 个文件在验证前后未变化。
- 未启动游戏，也未读取或修改进程内存、存档。

## 反编译证据定位

以下路径均在 `recovered/native/` 下：

| 位置 | 恢复依据 |
| --- | --- |
| `pe_006570d0_014c.dll/1005f749.c` | x86 初始化，2.24 / 3.0 分支阈值 |
| `pe_002106d0_8664.dll/18005f009.c` | x64 `InitWolfRPGEditor`，扫描/初始化失败则退出 |
| `pe_002106d0_8664.dll/18005f7a1.c` | 从版本资源取 `dwFileVersionMS` |
| `pe_002106d0_8664.dll/1800a036a.c` | Database::init：读取 project/dat，类型数、结束标记、EOF 检查 |
| `pe_002106d0_8664.dll/1800a184e.c` | Type::ReadDat：分隔符、字段索引、记录数、逐行数据读取 |
| `pe_002106d0_8664.dll/1800a0f78.c` | project 类型、字段/记录名与编辑元数据 |
| `pe_002106d0_8664.dll/180070a54.c` | GameDat::load：已知字符串和不透明尾部 |
| `pe_002106d0_8664.dll/18008e47c.c` | CommonEvents::load：头部计数、正文循环、终止标记 |

源文件路径字符串明确出现 `WolfTL/WolfRPG/Database.hpp` 等，因此找到公开的
`https://github.com/Sinflower/WolfTL`，固定参考提交
`bfc38fc2735ab4f7f7ddbec8d57b7fef65f0712f`。
参考格式语义遵循该项目 MIT 许可，通知见 `licenses/WolfTL-MIT.txt`。
这不是声称公开依赖与原程序所用版本逐字相同；私有运行时接入仍以原始指令/伪代码为依据。

## 安全边界与下一步

- 单个文件限 64 MiB；累计声明集合项限 200,000；单字符串解码限 4 MiB。
  这些是本工具的资源界限，不是 Wolf 格式或原软件的固有限制。
- 当前只恢复文件读取，不提供任何文件写入或存档修改 API。
- **离线初始数据库值不等于运行中金币/变量，也不等于存档里的值。**
- 后续需要继续恢复 x86 2.24 分支的函数/内存定位、读取调度及运行时对象布局，
  再在隔离游戏副本上验证动态读取；不把任意猜测的地址用于写入。
