/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a004 */

longlong FUN_18013a004(ulonglong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((ulonglong)(param_3 + param_2) <= param_1) {
    param_3 = param_1 - param_2;
  }
  lVar1 = param_1 - param_2;
  if (param_2 != 0) {
    lVar1 = param_3;
  }
  return lVar1;
}

