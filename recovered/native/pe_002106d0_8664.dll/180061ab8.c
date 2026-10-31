/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180061ab8 */

void FUN_180061ab8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (3 < (ulonglong)param_1[3]) {
    FUN_180061b30(param_1,*param_1,param_1[3],param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  param_1[3] = 3;
  *(undefined4 *)param_1 = 0;
  return;
}

