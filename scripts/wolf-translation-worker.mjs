import { readFileSync, statSync } from 'node:fs';
import { createInterface } from 'node:readline';
import { createWolfTranslator } from '../src/wolf/translation.mjs';

const file = process.argv[2];
if (!file || statSync(file).size > 32 * 1024 * 1024) throw new Error('A local dictionary within 32 MiB is required');
const translator = createWolfTranslator(JSON.parse(readFileSync(file, 'utf8').replace(/^\uFEFF/, '')));
console.log(JSON.stringify({ ready: true, entryCount: translator.entryCount }));
const lines = createInterface({ input: process.stdin, crlfDelay: Infinity });
for await (const line of lines) {
  let request;
  try {
    if (line.length > 65536) throw new Error('Request line exceeds 64K characters');
    request = JSON.parse(line);
    const translation = translator.translate(request.text);
    console.log(JSON.stringify({ id: request.id, translation, matched: translation !== request.text }));
  } catch (error) {
    console.log(JSON.stringify({ id: request?.id ?? null, error: error.message }));
  }
}
