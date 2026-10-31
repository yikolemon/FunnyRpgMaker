/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001fad4 */

void FUN_18001fad4(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = param_1[1] - lVar1 >> 2;
  if (param_2 < uVar2) {
    lVar1 = lVar1 + param_2 * 4;
  }
  else {
    if (param_2 < uVar2 || param_2 - uVar2 == 0) {
      return;
    }
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2) {
      FUN_18001fb32(param_1);
      return;
    }
    lVar1 = FUN_18001fc70(param_1[1],param_2 - uVar2,param_3,param_1);
  }
  param_1[1] = lVar1;
  return;
}

