/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d02c */

void FUN_14001d02c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

