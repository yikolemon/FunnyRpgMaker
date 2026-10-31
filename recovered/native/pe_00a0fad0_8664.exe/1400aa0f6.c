/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aa0f6 */

undefined8 *
FUN_1400aa0f6(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined2 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000cf3e();
  }
  uVar4 = param_1[3] - uVar2;
  if (uVar4 < param_3) {
    param_1 = (undefined8 *)FUN_1400aa27c(param_1,param_3,uVar4,param_2,param_3,param_4);
  }
  else {
    param_1[2] = uVar2 + param_3;
    puVar3 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    lVar1 = (longlong)puVar3 + param_2 * 2;
    FUN_140135ff0(lVar1 + param_3 * 2,lVar1,(uVar2 - param_2) * 2 + 2);
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined2 *)(lVar1 + uVar2 * 2) = param_4;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
  }
  return param_1;
}

