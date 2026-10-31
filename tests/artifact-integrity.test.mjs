import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';

test('recovered UTF-8 scripts match the original literal digests in the extraction inventory', () => {
  const inventory = JSON.parse(readFileSync(new URL('../evidence/artifact_inventory.json', import.meta.url), 'utf8'));
  const seen = new Set();
  for (const literal of inventory.script_literals) {
    if (seen.has(literal.file)) continue;
    seen.add(literal.file);
    assert.equal(literal.source_encoding, 'utf-8');
    const bytes = readFileSync(new URL(`../recovered/scripts/${literal.file}`, import.meta.url));
    assert.equal(bytes.length, literal.size, literal.file);
    assert.equal(createHash('sha256').update(bytes).digest('hex'), literal.sha256, literal.file);
  }
  assert.equal(seen.size, 7);
});
