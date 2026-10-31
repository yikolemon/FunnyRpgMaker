/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd76e */

undefined8 *
FUN_1800bd76e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1800bd7c6(param_1,param_2,*puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}

