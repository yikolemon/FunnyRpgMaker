import test from 'node:test';
import assert from 'node:assert/strict';
import vm from 'node:vm';
import { createGameContext } from '../src/recovered-runtime.mjs';
import { buildGameScript } from '../src/game-scripts.mjs';

test('MV translation adapter handles absent MZ classes without changing the global namespace', () => {
  const context = createGameContext();
  delete context.Window_NameBox;
  delete context.Window_Scrollable;
  vm.runInContext(buildGameScript('translation', [['Hello', '你好']]), context);
  assert.equal(new context.Window_Base().drawText('Hello'), '你好');
  assert.equal('Window_NameBox' in context, false);
  assert.equal('Window_Scrollable' in context, false);
  vm.runInContext(buildGameScript('translation', [['Hello', 'Updated']]), context);
  assert.equal(new context.Window_Base().drawText('Hello'), 'Updated');
});

test('font and translation strings remain literal, including replacement metacharacters', () => {
  const context = createGameContext();
  const font = '$&"; throw new Error("injected"); //';
  vm.runInContext(buildGameScript('font', font), context);
  assert.equal(new context.Window_Base().standardFontFace(), font + ', GameFont');
  vm.runInContext(buildGameScript('translation', [['Hello', '$&\"\\\n😀']]), context);
  assert.equal(new context.Window_Base().drawText('Hello'), '$&\"\\\n😀');
});

test('numeric operation bounds and dictionary contracts fail before producing scripts', () => {
  for (const value of [NaN, Infinity, 0, -1, 21, '2']) assert.throws(() => buildGameScript('speed', value));
  for (const value of [NaN, Infinity, -11, 11, '2']) assert.throws(() => buildGameScript('movement', value));
  assert.throws(() => buildGameScript('translation', [['missing']]));
  assert.throws(() => buildGameScript('font', ''));
  assert.throws(() => buildGameScript('unknown', 1));
});
