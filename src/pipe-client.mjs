// New host-side transport, matching the protocol recovered from embedded_168c80fd869b.js.
import net from 'node:net';

export class PipeClient {
  constructor(socket, { timeoutMs = 5000, maxResponseBytes = 16 * 1024 * 1024 } = {}) {
    this.socket = socket;
    this.timeoutMs = timeoutMs;
    this.maxResponseBytes = maxResponseBytes;
    this.buffer = Buffer.alloc(0);
    this.pending = null;
    this.queue = Promise.resolve();
    this.failure = null;
    socket.on('data', chunk => this.receive(chunk));
    socket.on('error', error => this.fail(error));
    socket.on('close', () => this.fail(new Error('Game pipe closed')));
  }

  static connect(path, options = {}) {
    return new Promise((resolve, reject) => {
      const socket = net.createConnection(path);
      const timer = setTimeout(() => socket.destroy(new Error('Game pipe connection timed out')), options.timeoutMs ?? 5000);
      const onError = error => { clearTimeout(timer); reject(error); };
      socket.once('error', onError);
      socket.once('connect', () => {
        clearTimeout(timer);
        socket.removeListener('error', onError);
        resolve(new PipeClient(socket, options));
      });
    });
  }

  execute(code) {
    // There are no request IDs in the original protocol: only one request may be outstanding.
    const result = this.queue.then(() => new Promise((resolve, reject) => {
      if (this.failure) { reject(this.failure); return; }
      const body = Buffer.from(code, 'utf8');
      if (body.length > 0xffffffff) { reject(new RangeError('Request exceeds uint32 framing')); return; }
      const header = Buffer.alloc(4);
      header.writeUInt32LE(body.length);
      const timer = setTimeout(() => this.fail(new Error('Game pipe response timed out')), this.timeoutMs);
      this.pending = { resolve, reject, timer };
      this.socket.write(Buffer.concat([header, body]), error => { if (error) this.fail(error); });
    }));
    this.queue = result.catch(() => {});
    return result;
  }

  receive(chunk) {
    // A response exceeding the host's explicit safety cap closes the connection.
    if (this.buffer.length + chunk.length > this.maxResponseBytes + 4) {
      this.fail(new Error('Game response exceeds configured byte limit'));
      return;
    }
    this.buffer = Buffer.concat([this.buffer, chunk]);
    if (this.buffer.length < 4) return;
    const size = this.buffer.readUInt32LE(0);
    if (size > this.maxResponseBytes) { this.fail(new Error('Game response exceeds configured byte limit')); return; }
    if (this.buffer.length < size + 4) return;
    if (this.buffer.length !== size + 4 || !this.pending) {
      this.fail(new Error('Unexpected game pipe response framing'));
      return;
    }
    let response;
    try {
      response = JSON.parse(this.buffer.subarray(4).toString('utf8'));
      if (!response || typeof response !== 'object' || !Number.isInteger(response.code) || !Object.hasOwn(response, 'result')) {
        throw new Error('Invalid game response envelope');
      }
    } catch (error) { this.fail(error); return; }
    this.buffer = Buffer.alloc(0);
    const pending = this.pending;
    this.pending = null;
    clearTimeout(pending.timer);
    pending.resolve(response);
  }

  fail(error) {
    if (this.failure) return;
    this.failure = error;
    if (this.pending) {
      clearTimeout(this.pending.timer);
      this.pending.reject(error);
      this.pending = null;
    }
    this.socket.destroy();
  }

  close() { this.fail(new Error('Game pipe client closed')); }
}
