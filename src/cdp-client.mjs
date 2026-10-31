// New local DevTools adapter, not the original DLL/V8-hook implementation.
export class CdpClient {
  constructor(socket, { timeoutMs = 10000, maxMessageBytes = 16 * 1024 * 1024 } = {}) {
    this.socket = socket;
    this.timeoutMs = timeoutMs;
    this.maxMessageBytes = maxMessageBytes;
    this.nextId = 1;
    this.pending = new Map();
    this.failure = null;
    socket.addEventListener('message', event => {
      try {
        if (typeof event.data !== 'string' || Buffer.byteLength(event.data) > maxMessageBytes) {
          throw new Error('Invalid or oversized DevTools message');
        }
        const message = JSON.parse(event.data);
        if (message.id === undefined) return;
        const pending = this.pending.get(message.id);
        if (!pending) return;
        this.pending.delete(message.id);
        clearTimeout(pending.timer);
        if (message.error) pending.reject(new Error(`${message.error.code}: ${message.error.message}`));
        else pending.resolve(message.result);
      } catch (error) { this.fail(error); }
    });
    socket.addEventListener('error', () => this.fail(new Error('DevTools transport error')));
    socket.addEventListener('close', () => this.fail(new Error('DevTools connection closed')));
  }

  static async connect(url, options = {}) {
    const parsed = new URL(url);
    if (parsed.protocol !== 'ws:' || !['127.0.0.1', 'localhost', '[::1]'].includes(parsed.hostname)) {
      throw new Error('Only local loopback DevTools WebSockets are supported');
    }
    const socket = new WebSocket(parsed);
    await new Promise((resolve, reject) => {
      const timer = setTimeout(() => { socket.close(); reject(new Error('DevTools connect timed out')); }, options.timeoutMs ?? 10000);
      socket.addEventListener('open', () => { clearTimeout(timer); resolve(); }, { once: true });
      socket.addEventListener('error', () => { clearTimeout(timer); reject(new Error('DevTools connect failed')); }, { once: true });
    });
    return new CdpClient(socket, options);
  }

  call(method, params = {}) {
    return new Promise((resolve, reject) => {
      if (this.failure) { reject(this.failure); return; }
      const id = this.nextId++;
      const timer = setTimeout(() => {
        this.pending.delete(id);
        reject(new Error(`DevTools operation timed out: ${method}; effects may be unknown`));
      }, this.timeoutMs);
      this.pending.set(id, { resolve, reject, timer });
      try { this.socket.send(JSON.stringify({ id, method, params })); }
      catch (error) { this.fail(error); }
    });
  }

  async evaluate(expression) {
    const result = await this.call('Runtime.evaluate', { expression, awaitPromise: true, returnByValue: true });
    if (result.exceptionDetails) {
      throw new Error(result.exceptionDetails.exception?.description ?? result.exceptionDetails.text);
    }
    return result.result.value;
  }

  fail(error) {
    if (this.failure) return;
    this.failure = error;
    for (const pending of this.pending.values()) { clearTimeout(pending.timer); pending.reject(error); }
    this.pending.clear();
    this.socket.close();
  }

  close() { this.fail(new Error('DevTools client closed')); }
}

export async function listGamePages(endpoint) {
  const base = new URL(endpoint);
  if (base.protocol !== 'http:' || !['127.0.0.1', 'localhost', '[::1]'].includes(base.hostname) || base.username || base.password) {
    throw new Error('DevTools endpoint must be a local loopback HTTP URL');
  }
  const response = await fetch(new URL('/json/list', base), { signal: AbortSignal.timeout(5000), redirect: 'error' });
  if (!response.ok) throw new Error(`DevTools discovery failed: HTTP ${response.status}`);
  const targets = await response.json();
  if (!Array.isArray(targets)) throw new Error('Invalid DevTools target inventory');
  return targets.filter(t => t.type === 'page' && typeof t.webSocketDebuggerUrl === 'string')
    .map(({ id, title, url, webSocketDebuggerUrl }) => ({ id, title, url, webSocketDebuggerUrl }));
}
