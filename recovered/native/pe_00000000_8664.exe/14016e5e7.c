/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016e5e7 */

void FUN_14016e5e7(undefined8 *param_1,undefined8 param_2)

{
  FUN_140128b39(param_2,param_1[5]);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_140128b39(param_2,param_1[2]);
  param_1[2] = 0;
  FUN_140128b39(param_2,param_1[1]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

