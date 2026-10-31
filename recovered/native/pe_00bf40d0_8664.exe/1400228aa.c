/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400228aa */

void FUN_1400228aa(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  FUN_14001c53d(lVar1,*param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  FUN_14001c53d(lVar1,(longlong)param_1);
  return;
}

