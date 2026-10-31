/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400699ac */

void FUN_1400699ac(longlong *param_1,ulonglong param_2,undefined8 param_3)

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
      FUN_140069a0a(param_1);
      return;
    }
    lVar1 = FUN_140069b48(param_1[1],param_2 - uVar2,param_3,param_1);
  }
  param_1[1] = lVar1;
  return;
}

