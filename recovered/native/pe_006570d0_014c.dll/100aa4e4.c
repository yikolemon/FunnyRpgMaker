/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aa4e4 */

void __fastcall FUN_100aa4e4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_100aa6bc(iVar1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
    return;
  }
  FUN_100aa50e(iVar1);
  return;
}

