// Owns only the newly launched test browser/server, never an existing user browser.
import { existsSync } from 'node:fs';
import { mkdir, mkdtemp, readFile } from 'node:fs/promises';
import path from 'node:path';
import { chromium } from 'playwright-core';
import { serveFixture } from './fixture-server.mjs';
import { CdpClient, listGamePages } from './cdp-client.mjs';

export async function openMvFixture({ headless = true } = {}) {
  const chrome = [process.env.CHROME_PATH, 'C:/Program Files/Google/Chrome/Application/chrome.exe',
    '/usr/bin/google-chrome', '/usr/bin/chromium', '/usr/bin/chromium-browser'].find(p => p && existsSync(p));
  if (!chrome) throw new Error('Install Chrome/Chromium or set CHROME_PATH');
  if (!existsSync('work/mv-fixture/provenance.json')) throw new Error('Run python scripts/prepare_mv_fixture.py first');
  await mkdir('work', { recursive: true });
  const profile = await mkdtemp(path.resolve('work/mv-browser-'));
  const server = await serveFixture('work/mv-fixture');
  let context;
  let client;
  let closing;
  const errors = [];
  const close = () => closing ??= (async () => {
    client?.close();
    try { await context?.close(); } finally { await server.close(); }
  })();
  try {
    context = await chromium.launchPersistentContext(profile, { executablePath: chrome, headless,
      viewport: { width: 1000, height: 900 }, args: ['--remote-debugging-port=0'] });
    const page = context.pages()[0];
    page.on('pageerror', error => errors.push(error.message));
    await page.goto(server.url);
    await page.waitForFunction(() => window.__fixtureReady === true, undefined, { timeout: 15000 });
    const active = await readFile(path.join(profile, 'DevToolsActivePort'), 'utf8');
    const endpoint = `http://127.0.0.1:${Number(active.split('\n')[0])}`;
    const target = (await listGamePages(endpoint)).find(t => t.url === server.url);
    if (!target) throw new Error('Fixture page was not discoverable over DevTools');
    client = await CdpClient.connect(target.webSocketDebuggerUrl);
    const provenance = JSON.parse(await readFile('work/mv-fixture/provenance.json', 'utf8'));
    return { context, page, client, errors, endpoint, provenance, url: server.url, close };
  } catch (error) {
    console.error('Browser page errors:', errors);
    await close();
    throw error;
  }
}
