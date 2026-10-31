// Local dictionary translation using the recovered AC/reflow implementation, not an online service.
import vm from 'node:vm';
import { source } from '../recovered-runtime.mjs';

export function normalizeWolfDictionary(value) {
  let entries;
  if (Array.isArray(value)) entries = value;
  else if (value && typeof value === 'object') entries = Object.entries(value);
  else throw new TypeError('Expected a string-to-string object or [original, translation] pairs');
  if (entries.length > 100000) throw new RangeError('Dictionary exceeds the host limit of 100000 entries');
  if (entries.some(e => !Array.isArray(e) || e.length !== 2 || e.some(s => typeof s !== 'string'))) {
    throw new TypeError('Every dictionary entry must contain two strings');
  }
  return entries.filter(([original]) => original.length !== 0);
}

export function createWolfTranslator(dictionary) {
  const entries = normalizeWolfDictionary(dictionary);
  const original = source('translation');
  const marker = '    // 翻译缓存';
  const end = original.indexOf(marker);
  if (end < 0 || original.indexOf(marker, end + marker.length) !== -1) throw new Error('Recovered translation template changed');
  const prefix = original.slice(0, end).replace('FUNNY_GAME_TRANSLATION_REGEX',
    'for (var entryIndex = 0; entryIndex < __entries.length; entryIndex++) game_automaton.insert(__entries[entryIndex][0], __entries[entryIndex][1]);');
  const context = vm.createContext({ __entries: entries });
  vm.runInContext(prefix + '\nglobalThis.__translator = game_automaton;\n})();', context, { timeout: 30000 });
  delete context.__entries;
  const cache = new Map();
  return {
    entryCount: entries.length,
    translate(text) {
      if (typeof text !== 'string' || text.length > 8192) throw new TypeError('Captured text must be a string of at most 8192 UTF-16 units');
      if (cache.has(text)) { const value = cache.get(text); cache.delete(text); cache.set(text, value); return value; }
      context.__text = text;
      try {
        const value = vm.runInContext('__translator.translate(__text)', context, { timeout: 1000 });
        cache.set(text, value);
        if (cache.size > 512) cache.delete(cache.keys().next().value);
        return value;
      } finally { delete context.__text; }
    },
  };
}
