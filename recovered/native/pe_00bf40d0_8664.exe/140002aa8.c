/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002aa8 */

undefined8 * FUN_140002aa8(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_2) {
    param_1 = FUN_140002b0c(param_1,param_2,param_3,param_2,(short)param_3);
  }
  else {
    param_1[2] = lVar1 + param_2;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        *(short *)((longlong)puVar2 + uVar3 * 2 + lVar1 * 2) = (short)param_3;
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_2) * 2) = 0;
  }
  return param_1;
}

