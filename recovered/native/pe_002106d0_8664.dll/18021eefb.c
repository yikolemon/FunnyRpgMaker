/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021eefb */

void FUN_18021eefb(undefined8 *param_1,undefined8 param_2)

{
  FUN_1801c9b65(param_2,param_1[5]);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1801c9b65(param_2,param_1[2]);
  param_1[2] = 0;
  FUN_1801c9b65(param_2,param_1[1]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

