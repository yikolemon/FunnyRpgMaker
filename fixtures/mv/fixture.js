// Newly authored fixture: real MV classes with small synthetic database contents.
// Does not load the original FunnyGamePlayer executable or any game assets/saves.
$dataSystem = {
  locale: 'en_US', windowTone: [0, 0, 0, 0],
  switches: ['', 'Test switch'], variables: ['', 'Test variable'],
  terms: { basic: [], params: [], commands: [], messages: {} },
};
for (const type of ['boat', 'ship', 'airship']) {
  $dataSystem[type] = { startMapId: 0, startX: 0, startY: 0, characterName: '', characterIndex: 0 };
}
$dataActors = [null];
$dataClasses = [null];
$dataItems = [null];
$dataWeapons = [null];
$dataArmors = [null];
$dataStates = [null];
DataManager.createGameObjects();
$gameParty.gainGold(123);
$gameVariables.setValue(1, 7);
$gameSwitches.setValue(1, true);
SceneManager._scene = new Scene_Base();
window.__fixture = { window: new Window_Base(0, 0, 760, 240), drawCalls: [] };
// Preserve the engine's real Bitmap.drawText and record its final incoming text.
const originalDraw = Bitmap.prototype.drawText;
Bitmap.prototype.drawText = function (text) {
  __fixture.drawCalls.push(String(text));
  return originalDraw.apply(this, arguments);
};
document.body.appendChild(__fixture.window.contents._canvas);
__fixture.render = function () {
  const view = __fixture.window;
  view.contents.clear();
  view.resetFontSettings();
  view.drawText('Hello world', 0, 0, 700);
  view.drawText('Gold: ' + $gameParty.gold(), 0, 48, 700);
  view.drawText('Movement speed: ' + $gamePlayer.realMoveSpeed(), 0, 96, 700);
  document.getElementById('status').textContent = JSON.stringify({
    engine: Utils.RPGMAKER_NAME, version: Utils.RPGMAKER_VERSION,
    gold: $gameParty.gold(), variable1: $gameVariables.value(1),
    movementSpeed: $gamePlayer.realMoveSpeed(),
    translated: window.__FUNNY_GAME_TRANSLATION_LOAD_SUCCEEDED__ === true,
  }, null, 2);
};
document.getElementById('gold').onclick = function () { $gameParty.gainGold(100); __fixture.render(); };
document.getElementById('variable').onclick = function () { $gameVariables.setValue(1, $gameVariables.value(1) + 1); __fixture.render(); };
__fixture.render();
__fixture.window.windowskin.addLoadListener(function () {
  __fixture.render();
  window.__fixtureReady = true;
});
