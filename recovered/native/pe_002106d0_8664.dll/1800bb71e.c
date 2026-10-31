/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb71e */

undefined8 * FUN_1800bb71e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_180017ca0(param_1,puVar1,param_2[2]);
  }
  param_1[4] = param_2[4];
  return param_1;
}

