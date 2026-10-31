/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800010ec */

void FUN_1800010ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (7 < (ulonglong)param_1[3]) {
    FUN_18000171c(param_1,*param_1,param_1[3],param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}

