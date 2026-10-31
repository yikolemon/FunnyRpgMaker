"""Read-only extraction of embedded PE images and printable script literals."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import pefile

parser = argparse.ArgumentParser()
parser.add_argument('binary', type=Path)
args = parser.parse_args()
root = Path(__file__).resolve().parents[1]
out = root / 'work' / 'artifacts'
out.mkdir(parents=True, exist_ok=True)
evidence = root / 'evidence'
evidence.mkdir(exist_ok=True)
scripts = root / 'recovered' / 'scripts'
scripts.mkdir(parents=True, exist_ok=True)
data = args.binary.read_bytes()
images = []
for match in re.finditer(b'MZ', data):
    offset = match.start()
    try:
        pe = pefile.PE(data=data[offset:], fast_load=True)
        size = max([pe.OPTIONAL_HEADER.SizeOfHeaders] + [s.PointerToRawData + s.SizeOfRawData for s in pe.sections])
        if size <= 0 or offset + size > len(data):
            continue
        blob = data[offset:offset + size]
        name = f'pe_{offset:08x}_{pe.FILE_HEADER.Machine:04x}'
        path = out / (name + ('.dll' if pe.is_dll() else '.exe'))
        path.write_bytes(blob)
        pe.parse_data_directories(directories=[1, 0, 6])
        imports = [{ 'dll': entry.dll.decode(errors='replace'), 'symbols': [i.name.decode(errors='replace') if i.name else f'ordinal:{i.ordinal}' for i in entry.imports]} for entry in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', [])]
        exports = [{'name': s.name.decode(errors='replace') if s.name else None, 'rva': hex(s.address)} for s in getattr(getattr(pe, 'DIRECTORY_ENTRY_EXPORT', None), 'symbols', [])]
        images.append({'file': path.name, 'offset': hex(offset), 'size': size, 'machine': hex(pe.FILE_HEADER.Machine), 'image_base': hex(pe.OPTIONAL_HEADER.ImageBase), 'entry_rva': hex(pe.OPTIONAL_HEADER.AddressOfEntryPoint), 'sha256': hashlib.sha256(blob).hexdigest(), 'imports': imports, 'exports': exports})
    except pefile.PEFormatError:
        continue

literals = []
for match in re.finditer(rb'[^\x00]{80,}', data):
    value = match.group()
    if b'function' in value and any(token in value for token in (b'window.', b'require(', b'$gameActors', b'DataManager.')):
        digest = hashlib.sha256(value).hexdigest()
        filename = f'embedded_{digest[:12]}.js'
        try:
            text = value.decode('utf-8')
            encoding = 'utf-8'
        except UnicodeDecodeError:
            try:
                text = value.decode('gb18030')
                encoding = 'gb18030'
            except UnicodeDecodeError:
                continue
        (scripts / filename).write_text(text, encoding='utf-8', newline='')
        literals.append({'file': filename, 'offset': hex(match.start()), 'size': len(value), 'sha256': digest, 'source_encoding': encoding})
report = {'source': str(args.binary.resolve()), 'source_sha256': hashlib.sha256(data).hexdigest(), 'source_size': len(data), 'images': images, 'script_literals': literals}
(evidence / 'artifact_inventory.json').write_text(json.dumps(report, indent=2), encoding='utf-8')
print(json.dumps({'images': [{k: i[k] for k in ('file', 'offset', 'size', 'exports')} for i in images], 'scripts': literals}, indent=2))
