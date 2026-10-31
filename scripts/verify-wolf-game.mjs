// Optional local integration verification. Never commits game content or changes game files.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { createReadStream } from 'node:fs';
import { mkdir, readdir, stat, writeFile } from 'node:fs/promises';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import path from 'node:path';

const root = path.resolve(process.argv[2] ?? 'tests/testgame/JPN HENTAI RABBIT HOOD');
async function manifest(directory, base = directory) {
  const rows = [];
  for (const entry of await readdir(directory, { withFileTypes: true })) {
    const file = path.join(directory, entry.name);
    if (entry.isSymbolicLink()) throw new Error('Verification refuses symbolic links');
    if (entry.isDirectory()) rows.push(...await manifest(file, base));
    else if (entry.isFile()) {
      const hash = createHash('sha256');
      for await (const block of createReadStream(file)) hash.update(block);
      const info = await stat(file);
      rows.push({ path: path.relative(base, file), sha256: hash.digest('hex'), size: info.size, mtimeMs: info.mtimeMs });
    }
  }
  return rows.sort((a, b) => a.path.localeCompare(b.path));
}
// Hash the whole BasicData directory, including files not parsed.
const basic = path.join(root, 'Data/BasicData');
const before = await manifest(basic);
const cli = await promisify(execFile)(process.execPath, ['src/cli.mjs', 'wolf', root, '--records'], { maxBuffer: 32 * 1024 * 1024, timeout: 30000, encoding: 'utf8' });
const report = JSON.parse(cli.stdout);
assert.equal(report.engine, 'WOLF RPG');
assert.equal(report.executable.machine, 0x14c);
const parsed = report.databases.filter(d => d.status === 'parsed');
assert.ok(parsed.length >= 3, 'At least three database pairs must be fully parsed');
assert.equal(report.gameData.status, 'parsed');
assert.equal(report.commonEvents.status, 'header-only');
assert.deepEqual(await manifest(basic), before, 'BasicData bytes/size/mtime must not change');
await mkdir('work', { recursive: true });
await writeFile('work/wolf-inspection.json', JSON.stringify(report, null, 2) + '\n');
const summary = {
  status: 'passed', mode: report.mode, gameId: 'local-user-supplied-wolf-fixture',
  executableSha256: report.executable.sha256, machine: report.executable.machine,
  fileVersion: report.executable.fileVersion, nativeBranch: report.executable.nativeBranch,
  parsedDatabases: parsed.map(({ name, typeCount, recordCount, inputs }) => ({ name, typeCount, recordCount, sha256: inputs.map(i => i.sha256) })),
  unsupportedDatabases: report.databases.filter(d => d.status !== 'parsed').map(({ name, status, code }) => ({ name, status, code })),
  commonEvents: { coverage: report.commonEvents.coverage, declaredEventCount: report.commonEvents.declaredEventCount },
  gameDataCoverage: report.gameData.coverage,
  verifiedUnchangedBasicDataFiles: before.length,
  limitations: report.limitations,
};
await writeFile('evidence/wolf_readonly_validation.json', JSON.stringify(summary, null, 2) + '\n');
console.log(JSON.stringify(summary, null, 2));
