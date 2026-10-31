/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215be8 */

undefined8 * FUN_140215be8(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    param_1 = (undefined8 *)FUN_140215c4e(param_1,param_3,param_3,param_2,param_3);
  }
  else {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_1404b97c0((longlong)puVar2 + lVar1 * 2,param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
  }
  return param_1;
}

