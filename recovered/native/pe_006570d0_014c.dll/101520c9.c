/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101520c9 */

void __fastcall FUN_101520c9(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}

