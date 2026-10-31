import { readFileSync } from 'node:fs';
import { createTranslator, createGameContext, runRecovered } from './recovered-runtime.mjs';
import { PipeClient } from './pipe-client.mjs';

const [command, dictionary, ...text] = process.argv.slice(2);
if (command === 'demo') {
  const translator = createTranslator([['Hello', '你好'], ['world', '世界']]);
  const context = createGameContext();
  runRecovered(context, 'movement', { MOVE_SPEED_ADD: '2' });
  console.log(JSON.stringify({
    scope: 'Recovered JavaScript modules running in a synthetic game context, not the full application',
    translation: translator.drawText('Hello world'),
    movementSpeed: context.$gamePlayer.realMoveSpeed(),
  }, null, 2));
} else if (command === 'translate' && dictionary && text.length) {
  const translator = createTranslator(JSON.parse(readFileSync(dictionary, 'utf8')));
  console.log(translator.translate(text.join(' ')));
} else if (command === 'inspect-pipe' && dictionary) {
  const client = await PipeClient.connect(dictionary);
  try {
    const expression = '({gold:$gameParty._gold,items:$gameParty._items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data})';
    console.log(JSON.stringify(await client.execute(expression), null, 2));
  } finally { client.close(); }
} else {
  console.log('Recovered-module prototype (not the original native application)\n\n  npm run demo\n  npm start -- translate dictionary.json "Hello world"\n  npm start -- inspect-pipe "\\\\.\\pipe\\<existing-game-pipe>"');
  if (command) process.exitCode = 1;
}
