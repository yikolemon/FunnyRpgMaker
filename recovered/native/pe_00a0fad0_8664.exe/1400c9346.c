/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c9346 */

longlong FUN_1400c9346(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa0) {
    FUN_1400c88c8(param_3,param_1);
    param_3 = param_3 + 0xa0;
  }
  return param_3;
}

