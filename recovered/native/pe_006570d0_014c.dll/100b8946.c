/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8946 */

void __fastcall FUN_100b8946(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != param_1 + 8) {
    FUN_100b81a8(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
    iVar1 = *(int *)(param_1 + 4);
  }
  if (iVar1 != param_1 + 4) {
    FUN_100b8aa8(*(int *)(param_1 + 0x14),
                 (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) * -0x55555555);
  }
  return;
}

