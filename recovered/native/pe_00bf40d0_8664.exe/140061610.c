/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061610 */

void FUN_140061610(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1400611fd((longlong)param_1);
  if ((code *)param_1[0xe7] != (code *)0x0) {
    (*(code *)param_1[0xe7])(param_1[0xe6]);
    FUN_14001c53d(lVar1,param_1[0xe6]);
    param_1[0xe6] = 0;
  }
  return;
}

