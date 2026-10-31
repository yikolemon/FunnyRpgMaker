/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003d9c */

void FUN_180003d9c(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    FUN_180004232(param_1,param_2 - param_1[2]);
    uVar1 = param_1[3];
  }
  else {
    param_1[2] = param_2;
  }
  puVar3 = param_1;
  if (7 < uVar1) {
    puVar3 = (undefined8 *)*param_1;
  }
  FUN_1802a82f0(puVar3,*param_3,param_3[1] * 2);
  puVar2 = (undefined2 *)((longlong)puVar3 + param_3[1] * 2);
  if (*(char *)(param_3 + 2) == '\x01') {
    *puVar2 = 0x5c;
    puVar2 = puVar2 + 1;
  }
  FUN_1802a82f0(puVar2,param_3[3],param_3[4] * 2);
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

