/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140135c3a */

void FUN_140135c3a(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = FUN_140135e1e(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4));
  *(int *)(param_4 + 8) = iVar1 + *(int *)(param_3 + 8);
  return;
}

