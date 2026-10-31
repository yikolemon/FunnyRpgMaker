import assert from 'node:assert/strict';
import { mkdir, writeFile } from 'node:fs/promises';
import { openMvFixture } from '../src/browser-fixture.mjs';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import path from 'node:path';
import { buildGameScript, inspectGameExpression } from '../src/game-scripts.mjs';

const fixture = await openMvFixture();
const { client, page, context, errors, provenance } = fixture;
try {
  const before = await client.evaluate(inspectGameExpression);
  assert.equal(before.engine, 'MV');
  assert.equal(before.gold, 123);
  assert.equal(before.movementSpeed, 4);
  // MV does not have these MZ-only classes. This proves the compatibility adapter matters.
  assert.equal(await client.evaluate('typeof Window_NameBox'), 'undefined');
  const cli = await promisify(execFile)(process.execPath, ['src/cli.mjs', 'game', fixture.endpoint, 'movement', '2'], { timeout: 15000 });
  assert.equal(JSON.parse(cli.stdout).movementSpeed, 6);
  await client.evaluate(buildGameScript('speed', 2));
  await client.evaluate(buildGameScript('font', 'sans-serif'));
  await client.evaluate(buildGameScript('translation', [['Hello world', '你好，世界']]));
  const after = await client.evaluate(inspectGameExpression);
  assert.equal(after.movementSpeed, 6);
  assert.equal(after.speedRatio, 2);
  assert.equal(after.translationLoaded, true);
  const clock = await client.evaluate(`(async () => {
    const raw = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup;
    const realStart = raw.call(SceneManager);
    const scaledStart = SceneManager._getTimeInMsWithoutMobileSafari();
    await new Promise(resolve => setTimeout(resolve, 50));
    const realDelta = raw.call(SceneManager) - realStart;
    const scaledDelta = SceneManager._getTimeInMsWithoutMobileSafari() - scaledStart;
    return {realDelta, scaledDelta, ratio: scaledDelta / realDelta};
  })()`);
  assert.ok(clock.ratio > 1.8 && clock.ratio < 2.2, 'Real SceneManager clock must advance at approximately 2x');
  assert.match(await client.evaluate('Window_Base.prototype.standardFontFace()'), /^sans-serif, /);
  await client.evaluate('__fixture.drawCalls.length = 0; __fixture.render()');
  assert.ok((await client.evaluate('__fixture.drawCalls')).includes('你好，世界'), 'Translated text must reach the real Bitmap renderer');
  await page.getByRole('button', { name: '金币 +100' }).click();
  assert.equal((await client.evaluate(inspectGameExpression)).gold, 223);
  await page.screenshot({ path: 'work/mv-integration.png', fullPage: true });
  assert.deepEqual(errors, []);
  const report = { status: 'passed', runtime: 'Real Chrome + upstream MV CoreScript, synthetic database/test scene',
    upstream: provenance, browser: context.browser().version(), before, after, clock,
    verified: ['DevTools discovery/attach', 'public CLI movement command', 'real Game_Party read and UI button mutation', 'real Game_Player speed',
      'real SceneManager clock advances at approximately 2x', 'Window_Base font hook', 'translation reaches real Bitmap.drawText'],
    notVerified: ['original DLL injection', 'full game/map/battle/save-load', 'MZ engine', 'Steam Deck'], pageErrors: errors };
  const reportPath = process.env.MV_VALIDATION_REPORT ?? 'evidence/mv_browser_validation.json';
  await mkdir(path.dirname(reportPath), { recursive: true });
  await writeFile(reportPath, JSON.stringify(report, null, 2) + '\n');
  console.log(JSON.stringify(report, null, 2));
} catch (error) {
  console.error('Browser page errors:', errors);
  throw error;
} finally {
  await fixture.close();
}
