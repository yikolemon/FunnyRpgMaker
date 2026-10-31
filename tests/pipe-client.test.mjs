import test from 'node:test';
import assert from 'node:assert/strict';
import { EventEmitter } from 'node:events';
import { PipeClient } from '../src/pipe-client.mjs';

class Socket extends EventEmitter {
  constructor() { super(); this.writes = []; }
  write(data, callback) { this.writes.push(data); callback?.(); }
  destroy() { this.destroyed = true; }
}
function frame(value) {
  const data = Buffer.from(JSON.stringify(value));
  const header = Buffer.alloc(4);
  header.writeUInt32LE(data.length);
  return Buffer.concat([header, data]);
}

test('host client serializes requests and handles fragmented UTF-8 replies', async () => {
  const socket = new Socket();
  const client = new PipeClient(socket);
  try {
    const a = client.execute('1+1');
    const b = client.execute('2+2');
    await new Promise(resolve => setImmediate(resolve));
    assert.equal(socket.writes.length, 1);
    const reply = frame({ code: 200, result: '你好' });
    socket.emit('data', reply.subarray(0, 5));
    socket.emit('data', reply.subarray(5));
    assert.deepEqual(await a, { code: 200, result: '你好' });
    await new Promise(resolve => setImmediate(resolve));
    assert.equal(socket.writes.length, 2);
    socket.emit('data', frame({ code: 200, result: 4 }));
    assert.equal((await b).result, 4);
  } finally { client.close(); }
});

test('oversized response rejects active and queued requests', async () => {
  const socket = new Socket();
  const client = new PipeClient(socket, { maxResponseBytes: 8 });
  const first = assert.rejects(client.execute('a'), /byte limit/);
  const second = assert.rejects(client.execute('b'), /byte limit/);
  await new Promise(resolve => setImmediate(resolve));
  const header = Buffer.alloc(4);
  header.writeUInt32LE(9);
  socket.emit('data', header);
  await Promise.all([first, second]);
  assert.equal(socket.destroyed, true);
});

test('malformed JSON and transport errors fail the connection', async () => {
  for (const scenario of ['json', 'socket']) {
    const socket = new Socket();
    const client = new PipeClient(socket);
    const rejected = assert.rejects(client.execute('a'));
    await new Promise(resolve => setImmediate(resolve));
    if (scenario === 'socket') socket.emit('error', new Error('broken pipe'));
    else socket.emit('data', Buffer.from([1, 0, 0, 0, 123]));
    await rejected;
    assert.equal(socket.destroyed, true);
  }
});

test('response timeout closes connection and rejects request', async () => {
  const socket = new Socket();
  const client = new PipeClient(socket, { timeoutMs: 10 });
  await assert.rejects(client.execute('a'), /timed out/);
  assert.equal(socket.destroyed, true);
});
