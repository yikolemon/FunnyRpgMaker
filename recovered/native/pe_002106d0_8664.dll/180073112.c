/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073112 */

longlong FUN_180073112(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_1 + 2;
  lVar3 = -1;
  if (param_3 < *puVar1) {
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    lVar4 = *puVar1 + (longlong)param_1;
    lVar2 = FUN_180006039(param_3 + (longlong)param_1,lVar4,param_2);
    lVar3 = -1;
    if (lVar2 != lVar4) {
      lVar3 = lVar2 - (longlong)param_1;
    }
  }
  return lVar3;
}

