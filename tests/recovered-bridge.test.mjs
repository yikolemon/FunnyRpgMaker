import test from 'node:test';
import assert from 'node:assert/strict';
import { EventEmitter } from 'node:events';
import { createGameContext, runRecovered } from '../src/recovered-runtime.mjs';

function packet(text) {
  const body = Buffer.from(text);
  const header = Buffer.alloc(4);
  header.writeUInt32LE(body.length);
  return Buffer.concat([header, body]);
}

async function setup() {
  const context = createGameContext();
  let connection;
  let pipe;
  const server = new EventEmitter();
  server.listen = (name, callback) => { pipe = name; callback(); };
  server.close = callback => callback();
  context.require = name => {
    assert.equal(name, 'net');
    return { createServer(callback) { connection = callback; return server; } };
  };
  // No actual network, host process, filesystem, or real game is exposed.
  context.process = {};
  context.Buffer = Buffer;
  context.$gameSystem = {};
  context.setTimeout = callback => callback();
  context.console = { log() {}, warn() {}, error() {} };
  runRecovered(context, 'bridge', { NAMED_PIPE_LISTENER: 'test-only-pipe' });
  await new Promise(resolve => setImmediate(resolve));
  assert.equal(pipe, 'test-only-pipe');
  const responses = [];
  const socket = new EventEmitter();
  socket.destroyed = false;
  socket.destroy = () => { socket.destroyed = true; };
  socket.write = data => {
    assert.equal(data.readUInt32LE(0), data.length - 4);
    responses.push(JSON.parse(data.subarray(4).toString('utf8')));
  };
  connection(socket);
  return { context, socket, responses, connection };
}

test('original bridge handles fragmented and concatenated length-prefixed packets', async () => {
  const { socket, responses } = await setup();
  const first = packet('1 + 2');
  socket.emit('data', first.subarray(0, 2));
  assert.equal(responses.length, 0);
  socket.emit('data', Buffer.concat([first.subarray(2), packet('({ engine: "MV" })')]));
  assert.deepEqual(responses, [{ code: 200, result: 3 }, { code: 200, result: { engine: 'MV' } }]);
});

test('original bridge reports Promise results, evaluation failures and circular objects', async () => {
  const { socket, responses } = await setup();
  socket.emit('data', packet('Promise.resolve(42)'));
  await new Promise(resolve => setImmediate(resolve));
  assert.deepEqual(responses.shift(), { code: 200, result: 42 });
  socket.emit('data', packet('throw new Error("expected-test-error")'));
  assert.equal(responses[0].code, 100);
  assert.match(responses.shift().result, /expected-test-error/);
  socket.emit('data', packet('var cycle = {}; cycle.self = cycle; cycle'));
  assert.deepEqual(responses.shift(), { code: 200, result: { self: '[Circular ~.result]' } });
});

test('original bridge rejects sockets from a stale page generation', async () => {
  const { context, socket, responses } = await setup();
  context.process.__funny_game_player_server_state__.generation++;
  socket.emit('data', packet('40 + 2'));
  assert.equal(socket.destroyed, true);
  assert.equal(responses.length, 0);
});
