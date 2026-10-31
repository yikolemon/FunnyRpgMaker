// Read-only Wolf format recovery. See docs/wolf-recovery.md for native/upstream provenance.
export class WolfFormatError extends Error {
  constructor(code, message, offset) { super(`${message} at byte 0x${offset.toString(16)}`); this.code = code; this.offset = offset; }
}

export class WolfReader {
  constructor(bytes, encoding = 'shift_jis', label = 'Wolf file') {
    if (!Buffer.isBuffer(bytes)) throw new TypeError('Expected Buffer');
    this.bytes = bytes; this.offset = 0; this.encoding = encoding; this.label = label;
    this.decoder = new TextDecoder(encoding, { fatal: true });
    this.work = 0;
  }
  get remaining() { return this.bytes.length - this.offset; }
  error(code, message) { throw new WolfFormatError(code, `${this.label}: ${message}`, this.offset); }
  take(length) {
    if (!Number.isSafeInteger(length) || length < 0 || length > this.remaining) this.error('truncated', `need ${length} bytes, have ${this.remaining}`);
    const value = this.bytes.subarray(this.offset, this.offset + length); this.offset += length; return value;
  }
  u8() { return this.take(1)[0]; }
  u32() { return this.take(4).readUInt32LE(); }
  count(minimumBytes, label) {
    const count = this.u32();
    if (count > Math.floor(this.remaining / minimumBytes)) this.error('invalid_count', `${label} count exceeds remaining bytes`);
    this.work += count;
    if (this.work > 200000) this.error('resource_limit', 'inspection exceeds 200000 declared collection entries');
    return count;
  }
  string() {
    const length = this.u32();
    if (!length) this.error('invalid_string', 'zero-length string');
    if (length > 4 * 1024 * 1024) this.error('resource_limit', 'string exceeds 4 MiB decoding limit');
    const start = this.offset;
    let value = this.take(length);
    if (value.at(-1) !== 0) this.error('invalid_string', 'string has no NUL terminator');
    value = value.subarray(0, -1);
    try { return this.decoder.decode(value); }
    catch { throw new WolfFormatError('invalid_encoding', `${this.label}: invalid ${this.encoding} text`, start); }
  }
  finish() { if (this.remaining) this.error('trailing_data', `${this.remaining} unparsed bytes`); }
}

export function openWolfEnvelope(bytes, kind) {
  const marker = kind === 'game' ? 9 : 6;
  const expected = Buffer.from([0, 0x57, 0, 0, 0x4f, 0x4c, 0, 0x46, kind === 'common' ? 0x43 : 0x4d, 0]);
  if (bytes.length < 10) throw new WolfFormatError('truncated', 'Wolf envelope is incomplete', 0);
  const utf8 = bytes[marker] === 0x55;
  if (utf8) expected[marker] = 0x55;
  if (!bytes.subarray(0, 10).equals(expected)) throw new WolfFormatError('unsupported_envelope', 'Unsupported/encrypted Wolf envelope (not decrypted or guessed)', 0);
  const reader = new WolfReader(bytes, utf8 ? 'utf-8' : 'shift_jis', kind);
  reader.take(10);
  return reader;
}
