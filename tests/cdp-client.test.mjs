import test from 'node:test';
import assert from 'node:assert/strict';
import { CdpClient, listGamePages } from '../src/cdp-client.mjs';

class Socket extends EventTarget {
  messages = [];
  send(value) { this.messages.push(JSON.parse(value)); }
  reply(value) { this.dispatchEvent(new MessageEvent('message', { data: JSON.stringify(value) })); }
  close() { this.closed = true; }
}

test('CDP correlates out-of-order responses by request ID and ignores events', async () => {
  const socket = new Socket();
  const client = new CdpClient(socket);
  try {
    const a = client.call('A');
    const b = client.call('B');
    socket.reply({ method: 'Runtime.consoleAPICalled', params: {} });
    socket.reply({ id: 2, result: { value: 'b' } });
    socket.reply({ id: 1, result: { value: 'a' } });
    assert.deepEqual(await a, { value: 'a' });
    assert.deepEqual(await b, { value: 'b' });
  } finally { client.close(); }
});

test('CDP evaluates values but rejects runtime exceptions and protocol errors', async () => {
  const socket = new Socket();
  const client = new CdpClient(socket);
  try {
    const value = client.evaluate('42');
    socket.reply({ id: 1, result: { result: { type: 'number', value: 42 } } });
    assert.equal(await value, 42);
    const exception = assert.rejects(client.evaluate('throw new Error()'), /example failure/);
    socket.reply({ id: 2, result: { exceptionDetails: { text: 'example failure' } } });
    await exception;
    const error = assert.rejects(client.call('Missing'), /not found/);
    socket.reply({ id: 3, error: { code: -32601, message: 'not found' } });
    await error;
  } finally { client.close(); }
});

test('CDP close rejects all outstanding calls and prevents further sends', async () => {
  const socket = new Socket();
  const client = new CdpClient(socket);
  const a = assert.rejects(client.call('A'), /closed/);
  const b = assert.rejects(client.call('B'), /closed/);
  client.close();
  await Promise.all([a, b]);
  await assert.rejects(client.call('C'), /closed/);
  assert.equal(socket.messages.length, 2);
});

test('CDP timeout reports unknown effects instead of retrying a mutation', async () => {
  const socket = new Socket();
  const client = new CdpClient(socket, { timeoutMs: 10 });
  try {
    await assert.rejects(client.call('Runtime.evaluate'), /effects may be unknown/);
    assert.equal(socket.messages.length, 1);
    assert.equal(client.pending.size, 0);
  } finally { client.close(); }
});

test('CDP adapter rejects nonlocal discovery and WebSocket endpoints', async () => {
  await assert.rejects(listGamePages('https://example.com:9222'), /loopback/);
  await assert.rejects(CdpClient.connect('ws://example.com:9222/devtools/page/x'), /loopback/);
});

test('malformed or oversized DevTools replies reject pending work and close the connection', async () => {
  for (const oversized of [false, true]) {
    const socket = new Socket();
    const client = new CdpClient(socket, { maxMessageBytes: 20 });
    const rejected = assert.rejects(client.call('A'));
    socket.dispatchEvent(new MessageEvent('message', { data: oversized ? 'x'.repeat(21) : '{' }));
    await rejected;
    assert.equal(socket.closed, true);
  }
});
