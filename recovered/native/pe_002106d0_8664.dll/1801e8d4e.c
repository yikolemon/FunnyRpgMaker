/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e8d4e */

void FUN_1801e8d4e(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10);
  iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x6db6db6d) >> 0x20) - iVar1;
  FUN_1801ea1f2(param_1,*(int *)(param_3 + 0x10) + ((iVar1 >> 2) - (iVar1 >> 0x1f)) + -0x10);
  return;
}

