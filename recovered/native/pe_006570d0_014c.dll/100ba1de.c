/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba1de */

void __fastcall FUN_100ba1de(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != param_1 + 8) {
    FUN_100b9ad6(*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
    iVar1 = *(int *)(param_1 + 4);
  }
  if (iVar1 != param_1 + 4) {
    FUN_100ba4d6(*(int *)(param_1 + 0x1c),
                 (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2) * -0x49249249);
  }
  return;
}

