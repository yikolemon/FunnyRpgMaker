"""Recover direct x86/x64 IAT references without executing target images.

This is a static instruction scan, not a control-flow reachability claim.
"""
import csv
from pathlib import Path
import bisect
import capstone
from capstone.x86_const import X86_OP_MEM, X86_REG_RIP
import pefile

root = Path(__file__).resolve().parents[1]
output = root / 'evidence/native_import_references.tsv'
with output.open('w', encoding='utf-8', newline='') as stream:
    writer = csv.writer(stream, delimiter='\t', lineterminator='\n')
    writer.writerow(['image', 'address', 'unwind_function_start', 'dll', 'import', 'instruction'])
    for path in sorted((root / 'work/artifacts').glob('*')):
        pe = pefile.PE(str(path))
        base = pe.OPTIONAL_HEADER.ImageBase
        is64 = pe.FILE_HEADER.Machine == 0x8664
        imports = {}
        for library in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
            for item in library.imports:
                imports[item.address] = (library.dll.decode(), item.name.decode() if item.name else f'ordinal:{item.ordinal}')
        ranges = sorted((base + e.struct.BeginAddress, base + e.struct.EndAddress) for e in getattr(pe, 'DIRECTORY_ENTRY_EXCEPTION', []) if hasattr(e.struct, 'BeginAddress'))
        starts = [a for a, _ in ranges]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64 if is64 else capstone.CS_MODE_32)
        decoder.detail = True
        decoder.skipdata = True
        for section in pe.sections:
            if not section.Characteristics & 0x20000000:
                continue
            for instruction in decoder.disasm(section.get_data(), base + section.VirtualAddress):
                if instruction.id == 0 or instruction.mnemonic not in ('call', 'jmp'):
                    continue
                for operand in instruction.operands:
                    if operand.type != X86_OP_MEM:
                        continue
                    mem = operand.mem
                    target = None
                    if is64 and mem.base == X86_REG_RIP and not mem.index:
                        target = instruction.address + instruction.size + mem.disp
                    elif not is64 and not mem.base and not mem.index:
                        target = mem.disp & 0xffffffff
                    if target not in imports:
                        continue
                    owner = ''
                    i = bisect.bisect_right(starts, instruction.address) - 1
                    if i >= 0 and instruction.address < ranges[i][1]:
                        owner = hex(ranges[i][0])
                    dll, name = imports[target]
                    writer.writerow([path.name, hex(instruction.address), owner, dll, name, instruction.mnemonic + ' ' + instruction.op_str])
print(output)
