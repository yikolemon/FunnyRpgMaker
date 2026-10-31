/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006380c */

undefined8 * FUN_18006380c(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    param_1 = (undefined8 *)FUN_180063874(param_1,param_3,param_3,param_2,param_3);
  }
  else {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (3 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_1802a82f0((longlong)puVar2 + lVar1 * 4,param_2,param_3 << 2);
    *(undefined4 *)((longlong)puVar2 + (lVar1 + param_3) * 4) = 0;
  }
  return param_1;
}

