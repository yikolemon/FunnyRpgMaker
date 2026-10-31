"""Summarize exported functions; counts do not attest semantic equivalence."""
import csv
import json
from pathlib import Path

root = Path(__file__).resolve().parents[1]
inventory = json.loads((root / 'evidence/artifact_inventory.json').read_text(encoding='utf-8'))
modules = []
for image in inventory['images']:
    directory = root / 'recovered/native' / image['file']
    index = directory / 'functions.tsv'
    module = {'file': image['file'], 'sha256': image['sha256'], 'entry_address': hex(int(image['image_base'], 16) + int(image['entry_rva'], 16))}
    if not index.exists():
        module['status'] = 'not_exported'
    else:
        with index.open(encoding='utf-8', newline='') as stream:
            rows = list(csv.DictReader(stream, delimiter='\t'))
        module['exported_function_count'] = len(rows)
        module['decompiled_function_count'] = sum(row['status'] == 'ok' for row in rows)
        module['failed_function_count'] = sum(row['status'] == 'failed' for row in rows)
        module['status'] = 'export_present_completion_unverified'
        log = root / 'work/ghidra' / (Path(image['file']).stem + '.log')
        if log.exists():
            text = log.read_text(encoding='utf-8', errors='replace')
            if f'EXPORT COMPLETE {image["file"]}:' in text:
                module['status'] = 'export_complete'
            module['analysis_timeout_observed'] = 'analysis timed out' in text.lower() or 'analysis timeout' in text.lower()
    modules.append(module)
report = {'meaning': 'Ghidra-identified functions and exported pseudocode only; not original-source coverage or semantic equivalence', 'modules': modules}
path = root / 'evidence/native_export_summary.json'
path.write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps(report, indent=2))
