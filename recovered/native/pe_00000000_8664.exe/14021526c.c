/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021526c */

void FUN_14021526c(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    FUN_140215702(param_1,param_2 - param_1[2]);
    uVar1 = param_1[3];
  }
  else {
    param_1[2] = param_2;
  }
  puVar3 = param_1;
  if (7 < uVar1) {
    puVar3 = (undefined8 *)*param_1;
  }
  FUN_1404b97c0(puVar3,*param_3,param_3[1] * 2);
  puVar2 = (undefined2 *)((longlong)puVar3 + param_3[1] * 2);
  if (*(char *)(param_3 + 2) == '\x01') {
    *puVar2 = 0x5c;
    puVar2 = puVar2 + 1;
  }
  FUN_1404b97c0(puVar2,param_3[3],param_3[4] * 2);
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

