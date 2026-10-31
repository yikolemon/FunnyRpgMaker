/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140024012 */

undefined8 * FUN_140024012(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  if ((ulonglong)param_1[3] < param_2) {
    puVar1 = (undefined8 *)FUN_1400241fc(param_1,param_2,param_3,param_3 & 0xffffffff);
    return puVar1;
  }
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[2] = param_2;
  FUN_1401c5830(puVar1,param_3 & 0xffffffff,param_2);
  *(undefined1 *)((longlong)puVar1 + param_2) = 0;
  return param_1;
}

