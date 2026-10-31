/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a4a1c */

longlong FUN_1800a4a1c(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1800a3ba4(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0xf8);
  }
  return param_1;
}

