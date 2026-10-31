/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400882f6 */

longlong FUN_1400882f6(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = param_1 + 2;
  if (*plVar1 == 0) {
    lVar3 = -1;
  }
  else {
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    uVar4 = *plVar1 - 1;
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    lVar5 = (longlong)param_1 + uVar4 + 1;
    lVar2 = FUN_14008846c(param_1,lVar5,param_2);
    lVar3 = -1;
    if (lVar2 != lVar5) {
      lVar3 = lVar2 - (longlong)param_1;
    }
  }
  return lVar3;
}

