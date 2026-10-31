import test from 'node:test';
import assert from 'node:assert/strict';
import { parseWolfDatabase } from '../src/wolf/database.mjs';
import { parseWolfGameData } from '../src/wolf/game-data.mjs';
import { WolfReader, WolfFormatError } from '../src/wolf/reader.mjs';
import { inspectPeVersion, wolfVersionBranch } from '../src/wolf/pe-version.mjs';

const u32 = value => { const b = Buffer.alloc(4); b.writeUInt32LE(value); return b; };
const str = value => { const b = Buffer.from(value + '\0'); return Buffer.concat([u32(b.length), b]); };
const cat = (...parts) => Buffer.concat(parts.flat());
function fixture(utf8 = false) {
  const header = Buffer.from([0, 0x57, 0, 0, 0x4f, 0x4c, utf8 ? 0x55 : 0, 0x46, 0x4d, 0]);
  const project = cat(u32(1), str(utf8 ? '类型' : 'Type'), u32(2), str('Number'), str('Text'),
    u32(1), str('Record'), str('Description'), u32(2), Buffer.from([0, 1]),
    u32(2), str(''), str(''), u32(2), u32(0), u32(0),
    u32(2), u32(0), u32(0), u32(2), u32(0), u32(0));
  const data = cat(header, Buffer.from([0xc1]), u32(1), u32(0xfffffffe), u32(0), u32(2),
    u32(1000), u32(2000), u32(1), u32(0xffffffff), str(utf8 ? '你好😀' : 'hello'), Buffer.from([0xc1]));
  return { project, data };
}

test('Wolf database reconstructs project names, dat storage slots and unsigned/signed facts', () => {
  const { project, data } = fixture();
  const result = parseWolfDatabase(project, data);
  assert.equal(result.bytesConsumed, data.length);
  assert.equal(result.types[0].records[0].name, 'Record');
  const [integer, text] = result.types[0].records[0].values;
  assert.equal(integer.value, 0xffffffff);
  assert.equal(integer.signedValue, -1);
  assert.equal(text.value, 'hello');
});

test('Wolf UTF-8 marker selects both dat and project decoding without ambient global state', () => {
  const { project, data } = fixture(true);
  const result = parseWolfDatabase(project, data);
  assert.equal(result.encoding, 'utf-8');
  assert.equal(result.types[0].name, '类型');
  assert.equal(result.types[0].records[0].values[1].value, '你好😀');
  const sjis = fixture();
  assert.equal(parseWolfDatabase(sjis.project, sjis.data).encoding, 'shift_jis');
});

test('Wolf databases reject all truncated prefixes and trailing bytes', () => {
  const { project, data } = fixture();
  for (let i = 0; i < data.length; i++) assert.throws(() => parseWolfDatabase(project, data.subarray(0, i)), WolfFormatError);
  for (let i = 0; i < project.length; i++) assert.throws(() => parseWolfDatabase(project.subarray(0, i), data), WolfFormatError);
  assert.throws(() => parseWolfDatabase(project, cat(data, Buffer.from([0]))), /unparsed bytes/);
  assert.throws(() => parseWolfDatabase(cat(project, Buffer.from([0])), data), /unparsed bytes/);
});

test('Wolf database validates storage indices, markers, versions and declared counts', () => {
  const { project, data } = fixture();
  const changed = (at, value) => { const copy = Buffer.from(data); copy.writeUInt32LE(value, at); return copy; };
  assert.throws(() => parseWolfDatabase(project, changed(27, 1999)), /outside its storage/);
  assert.throws(() => parseWolfDatabase(project, changed(15, 123)), /separator/);
  assert.throws(() => parseWolfDatabase(project, changed(11, 0)), /type counts differ/);
  const packed = Buffer.from(data); packed[10] = 0xc4;
  assert.throws(() => parseWolfDatabase(project, packed), /not implemented/);
  const encrypted = Buffer.from(data); encrypted[1] = 0x50;
  assert.throws(() => parseWolfDatabase(project, encrypted), /not decrypted or guessed/);
});

test('Wolf reader rejects oversized declarations and malformed strings', () => {
  assert.throws(() => new WolfReader(u32(0xffffffff)).count(1, 'entries'), /remaining bytes/);
  assert.throws(() => new WolfReader(u32(0)).string(), /zero-length/);
  assert.throws(() => new WolfReader(cat(u32(1), Buffer.from([65]))).string(), /NUL terminator/);
  assert.throws(() => new WolfReader(cat(u32(2), Buffer.from([0x81, 0]))).string(), /invalid shift_jis/);
  const reader = new WolfReader(cat(u32(200001), Buffer.alloc(200001)));
  assert.throws(() => reader.count(1, 'entries'), /200000/);
});

test('Wolf Game.dat exposes opaque-tail coverage instead of inventing semantics', () => {
  const header = Buffer.from([0, 0x57, 0, 0, 0x4f, 0x4c, 0, 0x46, 0x4d, 0]);
  const bytes = cat(header, u32(0), u32(9), str('Title'), str('0000-0000'), u32(0), str('Font'),
    str(''), str(''), str(''), str(''), str('Plus'), u32(0), u32(0), u32(0), u32(0), u32(0), Buffer.from([1, 2, 3]));
  const result = parseWolfGameData(bytes);
  assert.equal(result.title, 'Title');
  assert.equal(result.unclassifiedTailBytes, 3);
  assert.equal(result.coverage, 'known-prefix-and-opaque-tail');
  assert.equal(result.bytesConsumed, bytes.length);
});

test('Wolf version branch preserves the original 2.24 boundary and rejects non-PE inputs', () => {
  assert.equal(wolfVersionBranch(0x20017), 'pre-2.24');
  assert.equal(wolfVersionBranch(0x20018), '2.24-to-pre-3.0');
  assert.equal(wolfVersionBranch(0x30000), '3.0-or-newer');
  assert.equal(wolfVersionBranch(null), 'unknown');
  assert.throws(() => inspectPeVersion(Buffer.alloc(64)), /DOS signature/);
  assert.throws(() => inspectPeVersion(Buffer.alloc(1)), WolfFormatError);
});

function versionPe() {
  const bytes = Buffer.alloc(0x400);
  bytes.writeUInt16LE(0x5a4d, 0); bytes.writeUInt32LE(0x80, 60);
  bytes.writeUInt32LE(0x4550, 0x80); bytes.writeUInt16LE(0x14c, 0x84);
  bytes.writeUInt16LE(1, 0x86); bytes.writeUInt16LE(224, 0x94);
  const optional = 0x98;
  bytes.writeUInt16LE(0x10b, optional);
  bytes.writeUInt32LE(0x1000, optional + 112); bytes.writeUInt32LE(0x200, optional + 116);
  const section = optional + 224;
  bytes.writeUInt32LE(0x1000, section + 12); bytes.writeUInt32LE(0x200, section + 16); bytes.writeUInt32LE(0x200, section + 20);
  for (const at of [0x200, 0x218, 0x230]) bytes.writeUInt16LE(1, at + 14);
  bytes.writeUInt32LE(16, 0x210); bytes.writeUInt32LE(0x80000018, 0x214);
  bytes.writeUInt32LE(1, 0x228); bytes.writeUInt32LE(0x80000030, 0x22c);
  bytes.writeUInt32LE(1041, 0x240); bytes.writeUInt32LE(0x48, 0x244);
  bytes.writeUInt32LE(0x1100, 0x248); bytes.writeUInt32LE(92, 0x24c);
  bytes.writeUInt16LE(92, 0x300); bytes.writeUInt16LE(52, 0x302);
  Buffer.from('VS_VERSION_INFO\0', 'utf16le').copy(bytes, 0x306);
  bytes.writeUInt32LE(0xfeef04bd, 0x328); bytes.writeUInt32LE(0x20018, 0x330);
  bytes.writeUInt32LE((2018 << 16) | 622, 0x334);
  return bytes;
}

test('read-only PE version parser follows RT_VERSION tree and validates resource extents', () => {
  const bytes = versionPe();
  const version = inspectPeVersion(bytes);
  assert.deepEqual(version.fileVersion, [2, 24, 2018, 622]);
  assert.equal(version.fileVersionMS, 0x20018);
  assert.equal(version.machine, 0x14c);
  const corrupt = Buffer.from(bytes); corrupt.writeUInt32LE(0x9000, 0x248);
  assert.throws(() => inspectPeVersion(corrupt), /does not map/);
  const signature = Buffer.from(bytes); signature.writeUInt32LE(0, 0x328);
  assert.throws(() => inspectPeVersion(signature), /VS_FIXEDFILEINFO/);
  const tree = Buffer.from(bytes); tree.writeUInt32LE(0x80000999, 0x214);
  assert.throws(() => inspectPeVersion(tree), /exceeds directory extent/);
});
