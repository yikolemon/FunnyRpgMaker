import test from 'node:test';
import assert from 'node:assert/strict';
import { createWolfTranslator, normalizeWolfDictionary } from '../src/wolf/translation.mjs';

test('Wolf translation uses recovered longest-match logic without MV globals', () => {
  const translator = createWolfTranslator({ hello: '你好', 'hello world': '完整句子', world: '世界' });
  assert.equal(translator.translate('hello world!'), '完整句子!');
  assert.equal(translator.translate('hello!'), '你好!');
  assert.equal(translator.translate('unmatched'), 'unmatched');
  assert.equal(translator.translate('hello!'), '你好!');
});

test('Wolf subtitles preserve Unicode, proportional newline placement and control-code surroundings', () => {
  const translator = createWolfTranslator([['abcd', '甲乙丙丁'], ['😀x', '猫😀']]);
  assert.equal(translator.translate('ab\r\ncd'), '甲乙\r\n丙丁');
  assert.equal(translator.translate('\\c[2]😀x\\c[0]'), '\\c[2]猫😀\\c[0]');
});

test('dictionary content cannot inject code and empty translations remain intentional values', () => {
  const value = '$&"); throw new Error("injected"); //';
  const translator = createWolfTranslator({ test: value, hide: '', '': 'ignored' });
  assert.equal(translator.entryCount, 2);
  assert.equal(translator.translate('test'), value);
  assert.equal(translator.translate('hide'), '');
});

test('Wolf translator validates dictionaries and captured-message size', () => {
  for (const input of [null, 1, { key: 1 }, [['missing']]]) assert.throws(() => normalizeWolfDictionary(input));
  const translator = createWolfTranslator({ a: 'b' });
  assert.throws(() => translator.translate('x'.repeat(8193)));
  assert.throws(() => translator.translate(null));
});
