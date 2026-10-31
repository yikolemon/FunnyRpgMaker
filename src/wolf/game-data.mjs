// Format semantics adapted from WolfTL (MIT), see licenses/WolfTL-MIT.txt.
import { openWolfEnvelope } from './reader.mjs';

export function parseWolfGameData(bytes) {
  const reader = openWolfEnvelope(bytes, 'game');
  const unknownConfig = reader.take(reader.u32());
  const stringCount = reader.u32();
  if (![8, 9, 10, 11, 12, 13, 14].includes(stringCount)) reader.error('unsupported_version', `unverified Game.dat string count ${stringCount}`);
  const title = reader.string();
  if (reader.string() !== '0000-0000') reader.error('invalid_marker', 'Game.dat magic string mismatch');
  const keyLength = reader.u32();
  reader.take(keyLength); // Deliberately not retained or exposed; not needed for read-only inspection.
  const font = reader.string();
  const subFonts = [reader.string(), reader.string(), reader.string()];
  const defaultPlayerGraphic = reader.string();
  const titlePlus = stringCount >= 9 ? reader.string() : null;
  const optionalText = [];
  if (stringCount > 9) for (let i = 0; i < 4; i++) optionalText.push(reader.string());
  if (stringCount > 13) optionalText.push(reader.string());
  const declaredFileSize = reader.u32();
  const unknownSize = reader.u32();
  const unknownWordCount = reader.u32();
  reader.take(unknownWordCount * 2);
  const unknownIntOffsets = [reader.u32(), reader.u32()];
  const unclassifiedTailBytes = reader.remaining;
  reader.take(reader.remaining);
  return { format: 'wolf-game-data', encoding: reader.encoding, title, titlePlus, font, subFonts,
    defaultPlayerGraphic, stringCount, optionalText, unknownConfigBytes: unknownConfig.length,
    declaredFileSize, unknownSize, unknownWordCount, unknownIntOffsets, unclassifiedTailBytes,
    coverage: 'known-prefix-and-opaque-tail', bytesConsumed: reader.offset };
}
