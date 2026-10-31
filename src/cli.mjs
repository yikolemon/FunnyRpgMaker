import { readFileSync } from 'node:fs';
import { createTranslator, createGameContext, runRecovered } from './recovered-runtime.mjs';
import { PipeClient } from './pipe-client.mjs';
import { CdpClient, listGamePages } from './cdp-client.mjs';
import { buildGameScript, inspectGameExpression } from './game-scripts.mjs';
import { inspectWolfGame } from './wolf/inspect.mjs';

const [command, dictionary, ...text] = process.argv.slice(2);
if (command === 'wolf' && dictionary) {
  if (text.some(arg => arg !== '--records')) throw new Error('Usage: wolf GAME_DIRECTORY [--records]');
  console.log(JSON.stringify(await inspectWolfGame(dictionary, { includeRecords: text.includes('--records') }), null, 2));
} else if (command === 'demo') {
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
} else if (command === 'game' && dictionary) {
  const [action, argument, selectedId] = text;
  const targets = await listGamePages(dictionary);
  if (action === 'list') {
    console.log(JSON.stringify(targets.map(({ id, title, url }) => ({ id, title, url })), null, 2));
  } else {
    const targetId = action === 'inspect' ? argument : selectedId;
    const target = targetId ? targets.find(t => t.id === targetId) : targets.length === 1 ? targets[0] : null;
    if (!target) throw new Error('Select one page explicitly: game ENDPOINT list, then supply its target ID');
    const client = await CdpClient.connect(target.webSocketDebuggerUrl);
    try {
      await client.evaluate(inspectGameExpression); // Fail before mutation if the selected page is not ready.
      if (action !== 'inspect') {
        let value;
        if (action === 'speed' || action === 'movement') value = argument?.trim() ? Number(argument) : NaN;
        else if (action === 'font') value = argument;
        else if (action === 'translation' && argument) value = JSON.parse(readFileSync(argument, 'utf8'));
        else throw new Error('Game action must be list, inspect, speed, movement, font, or translation');
        await client.evaluate(buildGameScript(action, value));
      }
      console.log(JSON.stringify(await client.evaluate(inspectGameExpression), null, 2));
    } finally { client.close(); }
  }
} else if (command === 'inspect-pipe' && dictionary) {
  const client = await PipeClient.connect(dictionary);
  try {
    const expression = '({gold:$gameParty._gold,items:$gameParty._items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data})';
    console.log(JSON.stringify(await client.execute(expression), null, 2));
  } finally { client.close(); }
} else {
  console.log('Recovered-module prototype (not the original native application)\n\n  npm run demo\n  npm start -- translate dictionary.json "Hello world"\n  npm start -- game http://127.0.0.1:9222 list\n  npm start -- game http://127.0.0.1:9222 inspect [target-id]\n  npm start -- game http://127.0.0.1:9222 movement 2 [target-id]\n  npm start -- game http://127.0.0.1:9222 translation examples/dictionary.json [target-id]\n  npm start -- inspect-pipe "\\\\.\\pipe\\<existing-game-pipe>"');
  console.log('  npm start -- wolf "D:/path/to/WolfGame" [--records]   (offline, read-only)');
  if (command) process.exitCode = 1;
}
