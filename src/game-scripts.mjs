// New integration glue around byte-preserved recovered script templates.
import { source } from './recovered-runtime.mjs';

export function buildGameScript(name, value) {
  if (name === 'speed' || name === 'movement') {
    if (!Number.isFinite(value) || (name === 'speed' && (value <= 0 || value > 20)) ||
      (name === 'movement' && (value < -10 || value > 10))) {
      throw new RangeError(name === 'speed' ? 'Speed must be > 0 and <= 20' : 'Movement increment must be between -10 and 10');
    }
    return source(name).replace(name === 'speed' ? /GLOBAL_SPEED_RATIO/g : /MOVE_SPEED_ADD/g, String(value));
  }
  if (name === 'font') {
    if (typeof value !== 'string' || !value.trim()) throw new TypeError('Font family must be a nonempty string');
    return source(name).replace('"GAME_FONT_FAMILY"', () => JSON.stringify(value));
  }
  if (name === 'translation') {
    if (!Array.isArray(value) || value.some(e => !Array.isArray(e) || e.length !== 2 || e.some(s => typeof s !== 'string'))) {
      throw new TypeError('Dictionary must contain [original, translation] string pairs');
    }
    const insert = value.map(([a, b]) => `game_automaton.insert(${JSON.stringify(a)},${JSON.stringify(b)});`).join('\n');
    const original = source(name).replace('FUNNY_GAME_TRANSLATION_REGEX', () => insert);
    // These two MZ-only classes are bare identifiers in the original template.
    // Lexical undefined bindings let its existing try/catch skip missing classes on MV.
    // This compatibility wrapper is newly written; the extracted source remains untouched.
    return `(function(Window_NameBox, Window_Scrollable) {\n${original}\n}).call(window, typeof Window_NameBox === 'undefined' ? undefined : Window_NameBox, typeof Window_Scrollable === 'undefined' ? undefined : Window_Scrollable);`;
  }
  throw new Error(`Unsupported game operation: ${name}`);
}

export const inspectGameExpression = `(() => {
  if (typeof Utils === 'undefined' || !['MV', 'MZ'].includes(Utils.RPGMAKER_NAME))
    throw new Error('Selected page is not a supported RPG Maker MV/MZ runtime');
  if (typeof $gameSystem !== 'object' || !$gameSystem || typeof $gamePlayer !== 'object' || !$gamePlayer)
    throw new Error('Game objects are not ready; start or load a game first');
  return {engine: Utils.RPGMAKER_NAME, version: Utils.RPGMAKER_VERSION,
    gold: $gameParty.gold(), movementSpeed: $gamePlayer.realMoveSpeed(),
    switches: $gameSwitches._data, variables: $gameVariables._data,
    translationLoaded: window.__FUNNY_GAME_TRANSLATION_LOAD_SUCCEEDED__ === true,
    speedRatio: window.__FunnyGame__GlobalSpeedRatio__ ?? 1};
})()`;
