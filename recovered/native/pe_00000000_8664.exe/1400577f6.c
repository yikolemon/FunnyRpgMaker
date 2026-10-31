/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400577f6 */

longlong FUN_1400577f6(undefined8 *param_1,undefined4 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_1 + 2;
  lVar4 = -1;
  if (param_3 < *puVar1) {
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    lVar2 = (longlong)param_1 + *puVar1 * 2;
    lVar3 = FUN_1400595ca((longlong)param_1 + param_3 * 2,lVar2,param_2);
    lVar4 = -1;
    if (lVar3 != lVar2) {
      lVar4 = lVar3 - (longlong)param_1 >> 1;
    }
  }
  return lVar4;
}

