/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017686 */

undefined8 *
FUN_180017686(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar2 = param_2[2];
  if (0xf < (ulonglong)(param_3[2] + lVar2 + param_4[2])) {
    FUN_180003b06(param_1);
    param_1[2] = 0;
    lVar2 = param_2[2];
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_180003300(param_1,param_2,lVar2);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_180003300(param_1,param_3,*puVar1);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_180003300(param_1,param_4,*puVar1);
  return param_1;
}

