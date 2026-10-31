import { open, readdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import path from 'node:path';
import { parseWolfDatabase } from './database.mjs';
import { parseWolfGameData } from './game-data.mjs';
import { inspectPeVersion, wolfVersionBranch } from './pe-version.mjs';
import { openWolfEnvelope, WolfFormatError } from './reader.mjs';

const MAX_FILE_BYTES = 64 * 1024 * 1024;
async function capture(file) {
  const handle = await open(file, 'r');
  try {
    const stat = await handle.stat();
    if (!stat.isFile() || stat.size > MAX_FILE_BYTES) throw new Error(`Not a regular file within the ${MAX_FILE_BYTES}-byte inspection limit: ${file}`);
    const bytes = Buffer.alloc(stat.size);
    let offset = 0;
    while (offset < bytes.length) {
      const result = await handle.read(bytes, offset, bytes.length - offset, offset);
      if (!result.bytesRead) throw new Error(`Input changed during read: ${file}`);
      offset += result.bytesRead;
    }
    const after = await handle.stat();
    if (after.size !== stat.size || after.mtimeMs !== stat.mtimeMs) throw new Error(`Input changed during read: ${file}`);
    return { bytes, evidence: { file, size: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') } };
  } finally { await handle.close(); }
}

export async function inspectWolfGame(directory, { includeRecords = false } = {}) {
  const root = path.resolve(directory);
  const basic = path.join(root, 'Data/BasicData');
  const report = { mode: 'read-only-offline', root, engine: 'WOLF RPG candidate', executable: null,
    gameData: null, databases: [], commonEvents: null, limitations: [
      'No game executable, DLL, injection or live memory operations are performed',
      'No decryption, compressed database decoding, map parsing or CommonEvent body parsing',
      'Offline initial database values are not current live-game values or save data',
    ] };
  const executable = await capture(path.join(root, 'Game.exe'));
  const version = inspectPeVersion(executable.bytes);
  report.executable = { ...executable.evidence, ...version, nativeBranch: wolfVersionBranch(version.fileVersionMS) };
  const gameFile = await capture(path.join(basic, 'Game.dat'));
  try { report.gameData = { ...gameFile.evidence, status: 'parsed', ...parseWolfGameData(gameFile.bytes) }; }
  catch (error) { if (!(error instanceof WolfFormatError)) throw error; report.gameData = { ...gameFile.evidence, status: 'unsupported-or-invalid', code: error.code, reason: error.message }; }
  const names = await readdir(basic);
  for (const name of names.filter(n => n.toLowerCase().endsWith('.project')).sort()) {
    const stem = name.slice(0, -8);
    const dataName = names.find(n => n.toLowerCase() === (stem + '.dat').toLowerCase());
    if (!dataName) { report.databases.push({ name: stem, status: 'missing-dat' }); continue; }
    const project = await capture(path.join(basic, name)), data = await capture(path.join(basic, dataName));
    const entry = { name: stem, inputs: [project.evidence, data.evidence] };
    try {
      const parsed = parseWolfDatabase(project.bytes, data.bytes);
      entry.status = 'parsed'; entry.encoding = parsed.encoding; entry.version = parsed.version;
      entry.coverage = parsed.coverage; entry.bytesConsumed = parsed.bytesConsumed;
      entry.typeCount = parsed.types.length;
      entry.recordCount = parsed.types.reduce((n, t) => n + t.records.length, 0);
      if (includeRecords) entry.types = parsed.types;
    } catch (error) { if (!(error instanceof WolfFormatError)) throw error; entry.status = 'unsupported-or-invalid'; entry.code = error.code; entry.reason = error.message; }
    report.databases.push(entry);
  }
  const common = await capture(path.join(basic, 'CommonEvent.dat'));
  try {
    const reader = openWolfEnvelope(common.bytes, 'common');
    const formatMarker = reader.u8();
    if (formatMarker !== 0x8f) reader.error('unsupported_version', 'only uncompressed 0x8f CommonEvent header is inspected');
    const declaredEventCount = reader.count(1, 'common events');
    report.commonEvents = { ...common.evidence, status: 'header-only', formatMarker, declaredEventCount,
      bytesConsumed: reader.offset, unparsedBytes: reader.remaining, coverage: 'header-only-not-body-validated' };
  } catch (error) { if (!(error instanceof WolfFormatError)) throw error; report.commonEvents = { ...common.evidence, status: 'unsupported-or-invalid', code: error.code, reason: error.message }; }
  if (report.gameData.status === 'parsed' || report.databases.some(d => d.status === 'parsed')) report.engine = 'WOLF RPG';
  return report;
}
