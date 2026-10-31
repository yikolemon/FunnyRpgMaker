/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003c6e */

undefined8 * FUN_140003c6e(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140003cc6(param_1,param_2,*puVar1);
  return param_1;
}

