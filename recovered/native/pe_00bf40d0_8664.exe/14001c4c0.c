/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c4c0 */

void FUN_14001c4c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14001c53d(lVar1,param_1[4]);
  param_1[4] = 0;
  FUN_14001c53d(lVar1,param_1[5]);
  param_1[5] = 0;
  FUN_14001c53d(lVar1,param_1[6]);
  param_1[6] = 0;
  FUN_14001c53d(lVar1,param_1[8]);
  param_1[8] = 0;
  FUN_14001c53d(lVar1,param_1[0xb]);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14001c4a0((longlong)param_1);
  return;
}

