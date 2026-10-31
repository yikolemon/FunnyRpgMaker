/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100afd9e */

void __thiscall FUN_100afd9e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_100aff7a(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x20;
    return;
  }
  FUN_100afdd2(iVar1,param_2);
  return;
}

