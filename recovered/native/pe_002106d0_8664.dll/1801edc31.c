/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edc31 */

void FUN_1801edc31(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*param_2 * (longlong)*(int *)(param_1 + 0x184);
  *(int *)(param_1 + 0x1c8) = (int)((ulonglong)((lVar1 >> 0x3f) + lVar1 + 0x8000) >> 0x10);
  return;
}

