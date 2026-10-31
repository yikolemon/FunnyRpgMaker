/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400079d6 */

longlong * FUN_1400079d6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 != param_2) {
    if (*param_1 != 0) {
      thunk_FUN_1401212e0();
    }
    *param_1 = 0;
    if (param_2 != 0) {
      lVar1 = FUN_140007a15(param_2);
      *param_1 = lVar1;
    }
  }
  return param_1;
}

