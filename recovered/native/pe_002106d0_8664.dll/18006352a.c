/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006352a */

undefined8 *
FUN_18006352a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = param_2 + 2;
  if (3 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_180063582(param_1,param_2,*puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}

