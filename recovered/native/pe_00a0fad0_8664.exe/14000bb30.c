/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bb30 */

longlong FUN_14000bb30(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x20;
  FUN_14000bba8(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x80);
  }
  return param_1;
}

