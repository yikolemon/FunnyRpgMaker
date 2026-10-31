/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139feb */

longlong FUN_180139feb(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_1 <= (ulonglong)(param_4 - param_2)) {
    param_4 = param_2 + param_1;
  }
  lVar1 = param_2 + param_1;
  if (param_2 != 0) {
    lVar1 = param_4;
  }
  return lVar1;
}

