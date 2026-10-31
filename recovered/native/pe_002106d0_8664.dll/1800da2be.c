/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da2be */

ulonglong FUN_1800da2be(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar4 = 0xffffffffffffffff;
  if ((param_3 <= uVar2 - uVar1 && uVar1 <= uVar2) && (uVar4 = param_3, uVar1 != 0)) {
    lVar3 = thunk_FUN_18023b6c0(param_3 + (longlong)param_1,uVar2 + (longlong)param_1,puVar5);
    uVar4 = 0xffffffffffffffff;
    if (lVar3 != uVar2 + (longlong)param_1) {
      uVar4 = lVar3 - (longlong)param_1;
    }
  }
  return uVar4;
}

