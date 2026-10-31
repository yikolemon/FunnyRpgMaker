/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781956 */

void FUN_140781956(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  bVar2 = 0;
  if (*(uint *)(param_1 + 0x1c) != 0) {
    bVar2 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x1c) + 0xac) & 1;
  }
  if (*(uint *)(param_1 + 0x20) != 0) {
    bVar1 = *(byte *)((ulonglong)*(uint *)(param_1 + 0x20) + 0xac) & 1;
  }
  *(byte *)(param_1 + 0xac) =
       *(byte *)(param_1 + 0xac) & 0xfe |
       bVar1 | bVar2 |
       (0 < *(int *)(param_1 + 0x24) ||
       (*(uint *)(param_1 + 0x10) & (uint)(*(int *)(param_1 + 0x18) != 0) * 0x400 + 0x400) != 0);
  return;
}

