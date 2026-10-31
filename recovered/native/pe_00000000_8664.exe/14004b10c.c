/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004b10c */

undefined8 * FUN_14004b10c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_2[2];
  uVar2 = lVar1 + 1;
  if ((ulonglong)param_2[3] < uVar2) {
    (**(code **)*param_2)(param_2);
    lVar1 = param_2[2];
    uVar2 = lVar1 + 1;
  }
  param_2[2] = uVar2;
  *(undefined1 *)(param_2[1] + lVar1) = param_3;
  *param_1 = param_2;
  return param_1;
}

