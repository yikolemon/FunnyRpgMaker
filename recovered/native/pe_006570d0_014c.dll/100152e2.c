/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100152e2 */

void __fastcall FUN_100152e2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    FUN_10015308();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_10015350();
  return;
}

