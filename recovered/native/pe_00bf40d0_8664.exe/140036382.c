/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140036382 */

void FUN_140036382(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10);
  iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x6db6db6d) >> 0x20) - iVar1;
  FUN_140037826(param_1,*(int *)(param_3 + 0x10) + ((iVar1 >> 2) - (iVar1 >> 0x1f)) + -0x10);
  return;
}

