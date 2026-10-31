import test from 'node:test';
import assert from 'node:assert/strict';
import { createGameContext, createTranslator, runRecovered } from '../src/recovered-runtime.mjs';

test('translation matches original AC longest-match logic and drawText hook', () => {
  const t = createTranslator([['Hello', '你好'], ['Hello world', '完整句子'], ['world', '世界']]);
  assert.equal(t.translate('Hello world!'), '完整句子!');
  assert.equal(t.drawText('Hello!'), '你好!');
  assert.equal(t.drawText('你好!'), '你好!');
  assert.equal(t.translate('unmatched'), 'unmatched');
});

test('translation preserves proportional line breaks and Unicode code points', () => {
  const t = createTranslator([['abcd', '甲乙丙丁'], ['😀x', '猫😀']]);
  assert.equal(t.translate('ab\r\ncd'), '甲乙\r\n丙丁');
  assert.equal(t.translate('😀x'), '猫😀');
  assert.equal(t.translate(''), '');
});

test('dictionary strings remain data even when containing code-like characters', () => {
  const value = '\"); throw new Error("injected"); //';
  assert.equal(createTranslator([['x', value]]).translate('x'), value);
  assert.throws(() => createTranslator({ x: 'y' }), TypeError);
});

test('movement adds speed, clamps at zero, and does not double-hook', () => {
  const c = createGameContext();
  runRecovered(c, 'movement', { MOVE_SPEED_ADD: '2' });
  assert.equal(c.$gamePlayer.realMoveSpeed(), 6);
  runRecovered(c, 'movement', { MOVE_SPEED_ADD: '3' });
  assert.equal(c.$gamePlayer.realMoveSpeed(), 7);
  runRecovered(c, 'movement', { MOVE_SPEED_ADD: '-9' });
  assert.equal(c.$gamePlayer.realMoveSpeed(), 0);
});

test('font hooks preserve original fallback and can update configured family', () => {
  const c = createGameContext();
  runRecovered(c, 'font', { GAME_FONT_FAMILY: 'ExampleFont' });
  assert.equal(new c.Window_Base().standardFontFace(), 'ExampleFont, GameFont');
  assert.equal(new c.Game_System().mainFontFace(), 'ExampleFont, rmmz-mainfont');
  runRecovered(c, 'font', { GAME_FONT_FAMILY: 'OtherFont' });
  assert.equal(new c.Window_Base().standardFontFace(), 'OtherFont, GameFont');
});

test('global speed scales original MV time and MZ repeat delta', () => {
  const c = createGameContext();
  let clock = 100;
  c.SceneManager._getTimeInMsWithoutMobileSafari = () => clock;
  c.SceneManager.determineRepeatNumber = delta => delta;
  runRecovered(c, 'speed', { GLOBAL_SPEED_RATIO: '2' });
  assert.equal(c.SceneManager._getTimeInMsWithoutMobileSafari(), 100);
  clock = 110;
  assert.equal(c.SceneManager._getTimeInMsWithoutMobileSafari(), 120);
  assert.equal(c.SceneManager.determineRepeatNumber(3), 6);
  runRecovered(c, 'speed', { GLOBAL_SPEED_RATIO: '3' });
  clock = 120;
  assert.equal(c.SceneManager._getTimeInMsWithoutMobileSafari(), 150);
});

test('actor inventory skips empty slots and returns the original selected fields', () => {
  const c = createGameContext();
  c.$gameActors = { _data: [null, { _actorId: 1, _name: 'Hero', _paramPlus: [0, 2],
    _hp: 100, _mp: 30, _tp: 10, mhp: 120, mmp: 40, atk: 20, def: 15,
    mat: 12, mdf: 11, agi: 8, luk: 5 }] };
  const actors = JSON.parse(JSON.stringify(runRecovered(c, 'actors')));
  assert.equal(actors.length, 1);
  assert.deepEqual(actors[0], { actorId: 1, name: 'Hero', paramPlus: [0, 2],
    hp: 100, mp: 30, tp: 10, mhp: 120, mmp: 40, atk: 20, def: 15,
    mat: 12, mdf: 11, agi: 8, luk: 5 });
});

test('original data loader resolves loaded global data and restores XHR send', async () => {
  const c = createGameContext();
  const timers = [];
  c.setTimeout = (callback, ms) => timers.push({ callback, ms });
  c.XMLHttpRequest = function () {};
  const originalSend = function () { this.onload(); };
  c.XMLHttpRequest.prototype.send = originalSend;
  c.DataManager = { loadDataFile(name, src) {
    assert.equal(src, 'Actors.json');
    const xhr = new c.XMLHttpRequest();
    xhr.onload = () => { c[name] = ['loaded']; };
    xhr.send();
  } };
  const load = runRecovered(c, 'loadData');
  assert.deepEqual(await load('$dataActors', 'Actors.json'), ['loaded']);
  assert.equal(c.XMLHttpRequest.prototype.send, originalSend);
  assert.equal(timers[0].ms, 3000);
});
