/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800745ca */

longlong FUN_1800745ca(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x18;
  FUN_180074642(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x78);
  }
  return param_1;
}

