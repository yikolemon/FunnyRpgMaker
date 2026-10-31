/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129a86 */

void __fastcall FUN_10129a86(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  bVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    bVar2 = *(byte *)(*(int *)(param_1 + 0x1c) + 0xac) & 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 0xac) & 1;
  }
  *(byte *)(param_1 + 0xac) =
       *(byte *)(param_1 + 0xac) & 0xfe |
       bVar1 | bVar2 |
       (0 < *(int *)(param_1 + 0x24) ||
       (*(uint *)(param_1 + 0x10) & (uint)(*(int *)(param_1 + 0x18) != 0) * 0x400 + 0x400) != 0);
  return;
}

