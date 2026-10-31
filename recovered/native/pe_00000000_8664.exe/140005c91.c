/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005c91 */

undefined8 *
FUN_140005c91(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar2 = param_2[2];
  if (0xf < (ulonglong)(param_3[2] + lVar2 + param_4[2])) {
    FUN_14000401c(param_1);
    param_1[2] = 0;
    lVar2 = param_2[2];
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140003816(param_1,param_2,lVar2);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_140003816(param_1,param_3,*puVar1);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_140003816(param_1,param_4,*puVar1);
  return param_1;
}

