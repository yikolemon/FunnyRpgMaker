import test from 'node:test';
import assert from 'node:assert/strict';
import net from 'node:net';
import { mkdirSync } from 'node:fs';
import path from 'node:path';
import { createGameContext, runRecovered } from '../src/recovered-runtime.mjs';
import { PipeClient } from '../src/pipe-client.mjs';

test('new host client round-trips through the original bridge over a real local pipe', { timeout: 10000 }, async t => {
  mkdirSync('work', { recursive: true });
  const pipe = process.platform === 'win32'
    ? `\\\\.\\pipe\\FunnyRpgMaker-test-${process.pid}`
    : path.resolve(`work/test-${process.pid}.sock`);
  const context = createGameContext();
  let server;
  let client;
  t.after(async () => {
    client?.close();
    for (const socket of context.process?.__funny_game_player_server_state__?.sockets ?? []) socket.destroy();
    if (server?.listening) await new Promise(resolve => server.close(resolve));
  });
  let ready;
  let fail;
  const started = new Promise((resolve, reject) => { ready = resolve; fail = reject; });
  context.require = name => {
    assert.equal(name, 'net');
    return { createServer(callback) {
      server = net.createServer(callback);
      server.once('listening', ready);
      server.once('error', fail);
      return server;
    } };
  };
  context.process = {};
  context.Buffer = Buffer;
  context.$gameSystem = {};
  context.$gameParty = { _gold: 123 };
  context.setTimeout = callback => queueMicrotask(callback);
  context.console = { log() {}, warn() {}, error() {} };
  // The recovered template's surrounding quotes are preserved; only its literal marker changes.
  runRecovered(context, 'bridge', { NAMED_PIPE_LISTENER: pipe.replaceAll('\\', '\\\\') });
  await started;
  client = await PipeClient.connect(pipe);
  assert.deepEqual(await client.execute('$gameParty._gold'), { code: 200, result: 123 });
  assert.deepEqual(await client.execute('Promise.resolve("中文😀")'), { code: 200, result: '中文😀' });
  const error = await client.execute('throw new Error("expected integration error")');
  assert.equal(error.code, 100);
  assert.match(error.result, /expected integration error/);
});
