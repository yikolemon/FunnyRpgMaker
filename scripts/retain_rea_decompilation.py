"""Retain a real REA decompile result with its full evidence envelope."""
import argparse
import json
from pathlib import Path

parser = argparse.ArgumentParser()
parser.add_argument('result', type=Path)
parser.add_argument('label')
args = parser.parse_args()
if not args.label or any(c not in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_' for c in args.label):
    parser.error('label must be alphanumeric with hyphens or underscores')
document = json.loads(args.result.read_text(encoding='utf-8-sig'))
code = document.get('normalized_result')
if not isinstance(code, str) or not document.get('evidence_id'):
    raise RuntimeError('Not a successful REA pseudocode evidence envelope')
root = Path(__file__).resolve().parents[1]
evidence = root / 'evidence/rea'
focused = root / 'recovered/focused'
evidence.mkdir(parents=True, exist_ok=True)
focused.mkdir(parents=True, exist_ok=True)
(evidence / (args.label + '.json')).write_text(json.dumps(document, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
(focused / (args.label + '.c')).write_text('/* Raw REA/Ghidra pseudocode; not directly compilable.\n * Evidence: ' + document['evidence_id'] + '\n */\n' + code.replace('\r\n', '\n'), encoding='utf-8', newline='')
print(focused / (args.label + '.c'))
