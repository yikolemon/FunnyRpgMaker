/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403410c4 */

void FUN_1403410c4(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  bVar2 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0xd4) & 1;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0xd4) & 1;
  }
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) & 0xfe |
       bVar1 | bVar2 |
       (0 < *(int *)(param_1 + 0x30) ||
       (*(uint *)(param_1 + 0x10) & (uint)(*(longlong *)(param_1 + 0x18) != 0) * 0x400 + 0x400) != 0
       );
  return;
}

