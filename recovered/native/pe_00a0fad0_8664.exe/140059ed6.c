/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059ed6 */

longlong FUN_140059ed6(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1400581a2(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x108);
  }
  return param_1;
}

