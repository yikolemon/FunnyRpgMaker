/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075b86 */

longlong FUN_180075b86(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_180073b36(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x118);
  }
  return param_1;
}

