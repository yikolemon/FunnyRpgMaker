/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d31d */

void FUN_14013d31d(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*param_2 * (longlong)*(int *)(param_1 + 0x184);
  *(int *)(param_1 + 0x1c8) = (int)((ulonglong)((lVar1 >> 0x3f) + lVar1 + 0x8000) >> 0x10);
  return;
}

