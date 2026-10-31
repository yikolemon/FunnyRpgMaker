"""Build an integration fixture from pinned, MIT-licensed MV CoreScript sources."""
import json
from pathlib import Path
import shutil
import struct
import subprocess
import zlib

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'tools/mv-corescript'
REVISION = '182e31449707ba7e406db0485c44c2a9d11e2dcd'
if not SOURCE.exists():
    subprocess.run(['git', 'clone', 'https://github.com/rpgtkoolmv/corescript.git', str(SOURCE)], check=True)
    subprocess.run(['git', 'checkout', '--detach', REVISION], cwd=SOURCE, check=True)
actual = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=SOURCE, text=True).strip()
if actual != REVISION:
    raise RuntimeError(f'Expected pinned MV CoreScript {REVISION}, found {actual}; select that revision explicitly')
if subprocess.check_output(['git', 'status', '--porcelain'], cwd=SOURCE, text=True).strip():
    raise RuntimeError('MV CoreScript checkout is modified; refusing to label it as the pinned revision')
out = ROOT / 'work/mv-fixture'
(out / 'js').mkdir(parents=True, exist_ok=True)
for name in ('rpg_core', 'rpg_managers', 'rpg_objects', 'rpg_scenes', 'rpg_sprites', 'rpg_windows'):
    order = json.loads((SOURCE / (name + '.json')).read_text(encoding='utf-8'))
    content = '\n'.join((SOURCE / file).read_text(encoding='utf-8') for file in order)
    (out / 'js' / (name + '.js')).write_text(content, encoding='utf-8')
shutil.copytree(SOURCE / 'js/libs', out / 'js/libs', dirs_exist_ok=True)
shutil.copy(SOURCE / 'LICENSE', out / 'MV-CORESCRIPT-LICENSE')
for file in (ROOT / 'fixtures/mv').iterdir():
    if file.is_file():
        shutil.copy(file, out / file.name)

# Generate our own neutral window texture; no RPG Maker proprietary assets.
def chunk(kind, value):
    return struct.pack('>I', len(value)) + kind + value + struct.pack('>I', zlib.crc32(kind + value) & 0xffffffff)
image = b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', 192, 192, 8, 6, 0, 0, 0))
image += chunk(b'IDAT', zlib.compress((b'\x00' + bytes([240, 240, 240, 255]) * 192) * 192)) + chunk(b'IEND', b'')
(out / 'img/system').mkdir(parents=True, exist_ok=True)
(out / 'img/system/Window.png').write_bytes(image)
(out / 'provenance.json').write_text(json.dumps({'upstream': 'https://github.com/rpgtkoolmv/corescript', 'revision': REVISION, 'scope': 'Real engine classes; synthetic database and custom test scene, not a complete game'}, indent=2), encoding='utf-8')
print(out)
