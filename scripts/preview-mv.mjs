import assert from 'node:assert/strict';
import { openMvFixture } from '../src/browser-fixture.mjs';
import { buildGameScript, inspectGameExpression } from '../src/game-scripts.mjs';

const fixture = await openMvFixture({ headless: false });
const { page, client } = fixture;
try {
  await page.exposeBinding('applyRecoveredOperation', async ({ frame }, operation, value) => {
    if (frame !== page.mainFrame() || page.url() !== fixture.url) throw new Error('Only the owned test page can use preview controls');
    await client.evaluate(inspectGameExpression);
    await client.evaluate(buildGameScript(operation, value));
    await page.evaluate(() => __fixture.render());
    return client.evaluate(inspectGameExpression);
  });
  await page.evaluate(() => {
    const panel = document.createElement('section');
    const heading = document.createElement('h2');
    heading.textContent = '重建接入层（新界面，非原版 UI）';
    panel.appendChild(heading);
    const output = document.createElement('pre');
    output.id = 'operation-result';
    for (const [label, operation, value] of [
      ['移动速度 +2', 'movement', 2], ['全局速度 2×', 'speed', 2],
      ['启用中文翻译', 'translation', [['Hello world', '你好，世界']]], ['使用 sans-serif 字体', 'font', 'sans-serif'],
    ]) {
      const button = document.createElement('button');
      button.textContent = label;
      button.onclick = async () => {
        button.disabled = true;
        try { output.textContent = JSON.stringify(await window.applyRecoveredOperation(operation, value), null, 2); }
        catch (error) { output.textContent = '操作失败（效果可能未知）: ' + error.message; }
        finally { button.disabled = false; }
      };
      panel.appendChild(button);
    }
    panel.appendChild(output);
    document.querySelector('h1').after(panel);
    window.__previewReady = true;
  });
  console.log(`Visible MV test window opened. DevTools endpoint: ${fixture.endpoint}\nClose the window to stop. This does not run the original EXE.`);
  if (process.argv.includes('--smoke')) {
    for (const label of ['移动速度 +2', '全局速度 2×', '启用中文翻译', '使用 sans-serif 字体']) {
      const button = page.getByRole('button', { name: label, exact: true });
      await button.click();
      await page.waitForFunction(name => [...document.querySelectorAll('button')].find(b => b.textContent === name)?.disabled === false, label);
    }
    const result = await client.evaluate(inspectGameExpression);
    assert.equal(result.movementSpeed, 6);
    assert.equal(result.speedRatio, 2);
    assert.equal(result.translationLoaded, true);
    assert.deepEqual(fixture.errors, []);
    assert.ok((await client.evaluate('__fixture.drawCalls')).includes('你好，世界'));
    await page.screenshot({ path: 'work/mv-preview.png', fullPage: true });
    console.log('Visible preview smoke test passed: four UI controls applied successfully.');
  } else {
    await new Promise(resolve => {
      page.once('close', resolve);
      process.once('SIGINT', resolve);
      process.once('SIGTERM', resolve);
    });
  }
} finally { await fixture.close(); }
