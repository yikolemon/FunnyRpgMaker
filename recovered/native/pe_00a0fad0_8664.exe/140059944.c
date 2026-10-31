/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059944 */

longlong FUN_140059944(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x98;
  FUN_140058b56(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0xf8);
  }
  return param_1;
}

