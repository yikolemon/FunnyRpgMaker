/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e654e */

void FUN_1801e654e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801e6732(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4));
  *(int *)(param_4 + 8) = iVar1 + *(int *)(param_3 + 8);
  return;
}

