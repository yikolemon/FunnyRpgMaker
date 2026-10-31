/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ffc0 */

undefined8 * FUN_14000ffc0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  if ((ulonglong)param_1[3] < param_3) {
    puVar1 = (undefined8 *)FUN_14001001c(param_1,param_3);
    return puVar1;
  }
  puVar1 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[2] = param_3;
  FUN_140135ff0(puVar1,param_2,param_3 * 2);
  *(undefined2 *)((longlong)puVar1 + param_3 * 2) = 0;
  return param_1;
}

