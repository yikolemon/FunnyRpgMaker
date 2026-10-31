/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076838 */

longlong * FUN_180076838(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 != param_2) {
    if (*param_1 != 0) {
      thunk_FUN_180290e40();
    }
    *param_1 = 0;
    if (param_2 != 0) {
      lVar1 = FUN_180076877(param_2);
      *param_1 = lVar1;
    }
  }
  return param_1;
}

