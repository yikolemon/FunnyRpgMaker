/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b31e */

undefined4 __fastcall FUN_1020b31e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != *(int *)(param_1 + 8)) && (*(int *)(iVar1 + -4) == 2)) {
    *(int *)(param_1 + 0xc) = iVar1 + -8;
    return *(undefined4 *)(iVar1 + -8);
  }
  FUN_1020a812();
  return 0;
}

