"""Validate a local screenshot-enabled run without publishing game text/screenshots."""
import argparse
import hashlib
import json
from pathlib import Path
import unicodedata

parser = argparse.ArgumentParser()
parser.add_argument('run', type=Path)
parser.add_argument('--report', type=Path, default=Path('evidence/wolf_subtitle_display_validation.json'))
args = parser.parse_args()
summary = json.loads((args.run / 'summary.json').read_text(encoding='utf-8'))
transitions = [json.loads(line) for line in (args.run / 'ui-transitions.jsonl').read_text(encoding='utf-8').splitlines()]
assert summary['originalSourceUnchanged']
assert transitions, 'No actual UI transition was recorded'
for key in ('decodeErrors', 'workerErrors', 'captureErrors', 'dropped'):
    assert summary['counts'][key] == 0, key
assert summary['counts']['screenshotSaved']
assert all(not any(unicodedata.category(char) == 'Cc' and char not in '\r\n\t'
                   for char in item['original'] + item['translation']) for item in transitions), 'Engine controls reached the GUI'
assert all(a['generation'] < b['generation'] for a, b in zip(transitions, transitions[1:])), 'Old generation replayed'
assert all((a['original'], a['translation']) != (b['original'], b['translation'])
           for a, b in zip(transitions, transitions[1:])), 'Identical caption repainted'
screenshot = args.run / 'subtitle-window.png'
from PIL import Image
with Image.open(screenshot) as image:
    image.verify()
with Image.open(screenshot) as image:
    size = list(image.size)
times = [round(item['seconds'], 3) for item in transitions]
report = {
    'status': 'passed', 'scope': 'Captured runtime transitions and subtitle-window screenshot',
    'counts': summary['counts'], 'uiTransitionSeconds': times,
    'longestObservedCaptionHoldSeconds': round(max((b - a for a, b in zip(times, times[1:])), default=0), 3),
    'controlCharactersInUi': 0, 'strictlyIncreasingGenerations': True,
    'screenshot': {'sha256': hashlib.sha256(screenshot.read_bytes()).hexdigest(), 'size': size,
                   'storedLocallyOnly': True},
    'originalSourceUnchanged': True,
    'limitations': ['Screenshot reviewed separately; image validity alone is not visual glyph verification',
                    'Not full gameplay or all drawing-control coverage', 'External subtitles, not in-place game translation'],
}
args.report.parent.mkdir(parents=True, exist_ok=True)
args.report.write_text(json.dumps(report, indent=2), encoding='utf-8')
print(json.dumps(report, indent=2))
