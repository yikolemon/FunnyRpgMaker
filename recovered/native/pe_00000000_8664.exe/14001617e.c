/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001617e */

undefined8 * FUN_14001617e(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  if ((ulonglong)param_1[3] < param_3) {
    puVar1 = (undefined8 *)FUN_1400161d6(param_1,param_3);
    return puVar1;
  }
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[2] = param_3;
  FUN_1401c5180(puVar1,param_2,param_3);
  *(undefined1 *)((longlong)puVar1 + param_3) = 0;
  return param_1;
}

