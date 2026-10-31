/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004e3b4 */

undefined8 *
FUN_14004e3b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,uint param_5)

{
  if ((int)param_5 < 0) {
    param_5 = 6;
  }
  else if (999999999 < param_5) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  FUN_14004e913(param_1,param_2,param_3,(double)param_4,param_5);
  return param_1;
}

