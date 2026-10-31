/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10183f9e */

void __thiscall FUN_10183f9e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_10184184(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
    return;
  }
  FUN_10183fd2(iVar1,param_2);
  return;
}

