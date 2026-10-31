// Adapted format semantics from Sinflower/WolfTL (MIT), Copyright (c) 2024 Sinflower.
// Full notice: licenses/WolfTL-MIT.txt. Native cross-checks: docs/wolf-recovery.md.
import { WolfReader, openWolfEnvelope } from './reader.mjs';

function readProject(bytes, encoding) {
  const reader = new WolfReader(bytes, encoding, 'database project');
  const count = reader.count(29, 'types');
  const types = [];
  for (let t = 0; t < count; t++) {
    const name = reader.string();
    const fields = [];
    const fieldCount = reader.count(5, 'fields');
    for (let f = 0; f < fieldCount; f++) fields.push({ name: reader.string() });
    const recordNames = [];
    const records = reader.count(5, 'records');
    for (let r = 0; r < records; r++) recordNames.push(reader.string());
    const description = reader.string();
    const typeBytes = reader.take(reader.u32());
    if (typeBytes.length < fields.length) reader.error('schema_mismatch', 'field type array smaller than fields');
    for (let f = 0; f < fields.length; f++) fields[f].editorType = typeBytes[f];
    for (const group of ['unknownText', 'stringArguments', 'integerArguments', 'defaultValue']) {
      const entries = reader.count(4, group);
      if (entries > fields.length) reader.error('schema_mismatch', `${group} exceeds field count`);
      for (let f = 0; f < entries; f++) {
        if (group === 'unknownText') fields[f][group] = reader.string();
        else if (group === 'defaultValue') fields[f][group] = reader.u32();
        else {
          const values = [];
          const n = reader.count(group === 'stringArguments' ? 5 : 4, group);
          for (let i = 0; i < n; i++) values.push(group === 'stringArguments' ? reader.string() : reader.u32());
          fields[f][group] = values;
        }
      }
    }
    types.push({ name, description, fields, recordNames });
  }
  reader.finish();
  return types;
}

export function parseWolfDatabase(projectBytes, dataBytes) {
  const reader = openWolfEnvelope(dataBytes, 'database');
  const version = reader.u8();
  if (![0xc0, 0xc1].includes(version)) reader.error('unsupported_version', `database version 0x${version.toString(16)} not implemented`);
  const types = readProject(projectBytes, reader.encoding);
  const count = reader.count(17, 'database types');
  if (count !== types.length) reader.error('schema_mismatch', 'project/dat type counts differ');
  for (const type of types) {
    if (reader.u32() !== 0xfffffffe) reader.error('invalid_marker', 'missing database type separator');
    type.unknownHeader = reader.u32();
    const fieldCount = reader.count(4, 'stored fields');
    if (fieldCount > type.fields.length) reader.error('schema_mismatch', 'dat contains more fields than project');
    if (type.unknownHeader === 120000) type.unknownHeaderString = reader.string();
    const indices = [];
    for (let f = 0; f < fieldCount; f++) indices.push(reader.u32());
    const integerCount = indices.filter(i => i < 2000).length;
    const stringCount = fieldCount - integerCount;
    const records = reader.u32();
    if (records > type.recordNames.length) reader.error('schema_mismatch', 'dat has more records than project');
    const minimumRowBytes = integerCount * 4 + stringCount * 5;
    if (minimumRowBytes && records > Math.floor(reader.remaining / minimumRowBytes)) reader.error('invalid_count', 'record values exceed remaining bytes');
    type.projectRecordCount = type.recordNames.length;
    type.storedFieldCount = fieldCount;
    type.records = [];
    for (let r = 0; r < records; r++) {
      const integers = [], strings = [];
      const offset = reader.offset;
      for (let i = 0; i < integerCount; i++) integers.push(reader.u32());
      for (let i = 0; i < stringCount; i++) strings.push(reader.string());
      const values = indices.map((index, f) => {
        const name = type.fields[f].name;
        if (index < 1000) return { name, storageIndex: index, kind: 'invalid', value: null };
        const isString = index >= 2000;
        const slot = index - (isString ? 2000 : 1000);
        const storage = isString ? strings : integers;
        if (slot >= storage.length) reader.error('invalid_index', `field ${f} refers outside its storage array`);
        return isString ? { name, storageIndex: index, kind: 'string', value: storage[slot] }
          : { name, storageIndex: index, kind: 'integer', value: storage[slot], signedValue: storage[slot] | 0 };
      });
      type.records.push({ name: type.recordNames[r], sourceOffset: offset, values });
    }
    delete type.recordNames;
  }
  if (reader.u8() !== version) reader.error('invalid_marker', 'database terminator differs from version');
  reader.finish();
  return { format: 'wolf-database', version, encoding: reader.encoding, coverage: 'complete-for-supported-grammar', bytesConsumed: reader.offset, types };
}
