/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019e3c */

longlong FUN_140019e3c(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x88;
  FUN_140019cf4(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0xe8);
  }
  return param_1;
}

