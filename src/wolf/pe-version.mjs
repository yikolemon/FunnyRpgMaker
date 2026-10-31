// Parse RT_VERSION without loading/executing the PE or requiring Windows APIs.
import { WolfFormatError } from './reader.mjs';

export function inspectPeVersion(bytes) {
  const fail = message => { throw new WolfFormatError('invalid_pe', message, 0); };
  const check = (at, size) => { if (!Number.isSafeInteger(at) || at < 0 || at + size > bytes.length) fail('PE structure outside file'); };
  const u16 = at => { check(at, 2); return bytes.readUInt16LE(at); };
  const u32 = at => { check(at, 4); return bytes.readUInt32LE(at); };
  if (u16(0) !== 0x5a4d) fail('Missing DOS signature');
  const pe = u32(60);
  if (u32(pe) !== 0x4550) fail('Missing PE signature');
  const machine = u16(pe + 4);
  const sections = u16(pe + 6);
  const optionalSize = u16(pe + 20);
  const optional = pe + 24;
  const magic = u16(optional);
  if (![0x10b, 0x20b].includes(magic)) fail('Unknown PE optional-header format');
  check(optional, optionalSize);
  const directories = optional + (magic === 0x20b ? 112 : 96);
  if (directories + 24 > optional + optionalSize) fail('Missing resource directory');
  const resourceRva = u32(directories + 16), resourceSize = u32(directories + 20);
  const table = optional + optionalSize;
  check(table, sections * 40);
  const rvaToFile = (rva, size) => {
    for (let i = 0; i < sections; i++) {
      const s = table + i * 40;
      const va = u32(s + 12), rawSize = u32(s + 16), raw = u32(s + 20);
      if (rva >= va && rva - va + size <= rawSize) { const file = raw + rva - va; check(file, size); return file; }
    }
    fail('Resource RVA does not map to file-backed section bytes');
  };
  if (!resourceRva || !resourceSize) return { machine, fileVersion: null, fileVersionMS: null, limitation: 'no resource directory' };
  const root = rvaToFile(resourceRva, resourceSize);
  let work = 0;
  const relative = (at, size) => { if (at < 0 || at + size > resourceSize) fail('Resource tree exceeds directory extent'); return root + at; };
  const entries = at => {
    const p = relative(at, 16);
    const count = u16(p + 12) + u16(p + 14);
    work += count;
    if (work > 200000) throw new WolfFormatError('resource_limit', 'PE resource traversal exceeds 200000 entries', p);
    relative(at + 16, count * 8);
    return Array.from({ length: count }, (_, i) => ({ name: u32(p + 16 + i * 8), target: u32(p + 20 + i * 8) }));
  };
  const resource = entries(0).find(e => e.name === 16);
  if (!resource) return { machine, fileVersion: null, fileVersionMS: null, limitation: 'no RT_VERSION entry' };
  if (!(resource.target & 0x80000000)) fail('RT_VERSION has no name directory');
  const versions = [];
  for (const name of entries(resource.target & 0x7fffffff)) {
    if (!(name.target & 0x80000000)) fail('RT_VERSION name has no language directory');
    for (const language of entries(name.target & 0x7fffffff)) {
      if (language.target & 0x80000000) fail('Unexpected nested RT_VERSION directory');
      const leaf = relative(language.target, 16);
      const size = u32(leaf + 4);
      const offset = rvaToFile(u32(leaf), size);
      const key = Buffer.from('VS_VERSION_INFO\0', 'utf16le');
      if (size < 6 + key.length || u16(offset) > size || !bytes.subarray(offset + 6, offset + 6 + key.length).equals(key)) fail('Invalid VS_VERSION_INFO header');
      const fixed = offset + ((6 + key.length + 3) & ~3);
      if (fixed + 52 > offset + u16(offset) || u16(offset + 2) < 52 || u32(fixed) !== 0xfeef04bd) fail('Invalid VS_FIXEDFILEINFO');
      const ms = u32(fixed + 8), ls = u32(fixed + 12);
      versions.push({ language: language.name, fileVersionMS: ms, fileVersion: [ms >>> 16, ms & 65535, ls >>> 16, ls & 65535] });
    }
  }
  if (!versions.length) fail('Empty RT_VERSION');
  if (new Set(versions.map(v => v.fileVersion.join('.'))).size !== 1) fail('Conflicting language-specific file versions');
  return { machine, fileVersion: versions[0].fileVersion, fileVersionMS: versions[0].fileVersionMS,
    languages: versions.map(v => v.language), authority: 'PE RT_VERSION VS_FIXEDFILEINFO' };
}

export function wolfVersionBranch(code) {
  if (!Number.isInteger(code) || code <= 0xffff) return 'unknown';
  return code < 0x20018 ? 'pre-2.24' : code < 0x30000 ? '2.24-to-pre-3.0' : '3.0-or-newer';
}
