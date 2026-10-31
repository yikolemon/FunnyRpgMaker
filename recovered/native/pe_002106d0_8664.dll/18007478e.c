/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007478e */

longlong FUN_18007478e(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x20;
  FUN_180074806(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x80);
  }
  return param_1;
}

