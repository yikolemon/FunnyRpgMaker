/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800645dc */

undefined8 * FUN_1800645dc(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 - param_2 == 0) {
    param_1[3] = 3;
    *(undefined4 *)param_1 = 0;
  }
  else {
    FUN_180066112(param_1,param_2,param_3 - param_2 >> 2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

