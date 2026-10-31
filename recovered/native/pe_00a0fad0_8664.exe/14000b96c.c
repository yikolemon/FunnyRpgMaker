/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b96c */

longlong FUN_14000b96c(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x18;
  FUN_14000b9e4(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x78);
  }
  return param_1;
}

