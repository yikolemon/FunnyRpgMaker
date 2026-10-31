/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800746b4 */

longlong FUN_1800746b4(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x10;
  FUN_18007472c(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x70);
  }
  return param_1;
}

