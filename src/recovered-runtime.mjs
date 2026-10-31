// New harness for the original extracted scripts. This is not recovered native UI code.
import { readFileSync } from 'node:fs';
import vm from 'node:vm';

const files = {
  speed: 'embedded_bb9988c5b22e.js',
  movement: 'embedded_baf7d6fc9410.js',
  font: 'embedded_91fcfb39b9f6.js',
  translation: 'embedded_8002763608a0.js',
  bridge: 'embedded_168c80fd869b.js',
  actors: 'embedded_288e3790f371.js',
  loadData: 'embedded_ecb6991f4647.js',
};

export function source(name) {
  if (!Object.hasOwn(files, name)) throw new Error(`Unknown recovered script: ${name}`);
  return readFileSync(new URL(`../recovered/scripts/${files[name]}`, import.meta.url), 'utf8');
}

export function createGameContext() {
  const globals = { console, SceneManager: { _scene: {}, goto() {} }, Scene_Title: function () {} };
  for (const name of ['Window_Base', 'Window_BattleLog', 'Window_Help', 'Window_MapName',
    'Window_Message', 'Window_NameBox', 'Window_Scrollable', 'Window_ScrollText',
    'Window_Selectable', 'Window_Command', 'Window_HorzCommand', 'Window_ChoiceList', 'Game_System']) {
    globals[name] = function () {};
    globals[name].prototype.drawText = function (text) { return text; };
    globals[name].prototype.convertEscapeCharacters = function (text) { return text; };
  }
  globals.Window_Base.prototype.standardFontFace = () => 'GameFont';
  globals.Game_System.prototype.mainFontFace = () => 'rmmz-mainfont';
  globals.$gamePlayer = { realMoveSpeed: () => 4 };
  globals.window = globals;
  return vm.createContext(globals);
}

export function runRecovered(context, name, replacements = {}) {
  // Replace literal placeholders once, without interpreting dictionary data as code.
  const keys = Object.keys(replacements).sort((a, b) => b.length - a.length);
  const pattern = keys.length ? new RegExp(keys.join('|'), 'g') : /$^/g;
  let code = source(name).replace(pattern, key => replacements[key]);
  if (name === 'loadData') code = `(${code})`;
  return vm.runInContext(code, context, { filename: files[name], timeout: 5000 });
}

export function createTranslator(entries) {
  if (!Array.isArray(entries) || entries.some(e => !Array.isArray(e) || e.length !== 2 || e.some(v => typeof v !== 'string'))) {
    throw new TypeError('Dictionary must be an array of [original, translation] string pairs');
  }
  const context = createGameContext();
  const insertions = entries.map(([original, translated]) =>
    `game_automaton.insert(${JSON.stringify(original)}, ${JSON.stringify(translated)});`).join('\n');
  runRecovered(context, 'translation', { FUNNY_GAME_TRANSLATION_REGEX: insertions });
  return {
    translate: text => context.__FUNNY_GAME_TRANSLATION_LOADER__.translate(text),
    drawText: text => new context.Window_Base().drawText(text),
    context,
  };
}
