/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007fbcc */

longlong FUN_18007fbcc(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_18007f8d0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x108);
  }
  return param_1;
}

