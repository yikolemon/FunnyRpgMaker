# 如何测试现在的重建版本

## 最简单：打开可操作窗口

Windows 上双击仓库根目录的 `preview.cmd`。
它只启动新建的 Chrome 测试配置，不会接管日常浏览器，也不运行原 EXE。
首次可能安装项目 npm 开发依赖并下载固定版本的开源 MV CoreScript。
需要 Node.js 22+、Python、Git 和 Chrome；Chrome 不在常见位置时设置 `CHROME_PATH`。

也可在 PowerShell 手动运行：

```powershell
cd D:\WorkSpace\FunnyRpgMaker
npm ci
python scripts/prepare_mv_fixture.py
npm run preview
```

窗口里可以操作：

- **移动速度 +2**：真实 `Game_Player.realMoveSpeed()` 从 4 变成 6。
- **全局速度 2×**：应用恢复的 SceneManager 时间倍率逻辑。
- **启用中文翻译**：真实 Window_Base / Bitmap 绘制的 `Hello world` 变成 `你好，世界`。
- **使用 sans-serif 字体**：应用原脚本的字体回退钩子。
- **金币 +100 / 变量 1 +1**：操作测试场景里的真实 MV 游戏对象。

关闭测试窗口即可结束。测试浏览器配置与截图保留在 `work/`，不提交到 Git。

**这是开源 MV 1.6.1 的真实引擎类 + 合成数据库/测试场景，不是完整商业游戏，
也不是已经还原的原版 UI。** 它验证接入与功能链路，不验证地图、战斗、存读档或原生 DLL。

## 自动化验证

```powershell
npm test
npm run test:engine
npm run preview -- --smoke
```

- `npm test`：脚本完整性、恢复逻辑、通信、CDP 客户端与兼容适配单元测试。
- `test:engine`：真实 Chrome → DevTools → 开源 MV 引擎，自动验证 CLI、游戏状态、
  速度、实际时钟倍率、字体和翻译绘制；报告写入 `evidence/mv_browser_validation.json`。
- `preview -- --smoke`：实际打开可见窗口，点击四个重建操作按钮并验证结果，然后关闭。
- 截图：`work/mv-integration.png` 和 `work/mv-preview.png`。

## 接入其他 MV/MZ 页面

目前新增的接入层通过本地 Chrome DevTools Protocol 执行恢复脚本，
**不是原程序的 DLL/V8 挂钩实现**。目标必须自行启用本地调试端口；
普通未开启调试的 EXE 不能直接附加。NW.js 对参数的支持取决于游戏所带版本。
真实第三方游戏和 MZ 尚未实测，不宣称兼容所有游戏。

```powershell
npm start -- game http://127.0.0.1:9222 list
npm start -- game http://127.0.0.1:9222 inspect TARGET_ID
npm start -- game http://127.0.0.1:9222 movement 2 TARGET_ID
npm start -- game http://127.0.0.1:9222 speed 2 TARGET_ID
npm start -- game http://127.0.0.1:9222 translation examples/dictionary.json TARGET_ID
```

仅有一个页面时可省略 ID；有多个页面时必须显式选择，不猜测目标。
开始或载入游戏后再执行修改。先备份存档，只在你有权测试的游戏副本上验证。
调试端口意味着能执行页面代码，务必保持 loopback，不开放给局域网或互联网。

原始脚本的修改可能随新游戏、读档或页面重载丢失；自动重新接入尚未实现。
