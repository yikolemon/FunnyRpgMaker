/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bbac4 */

longlong FUN_1402bbac4(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa0) {
    FUN_1402bb0c6(param_3,param_1);
    param_3 = param_3 + 0xa0;
  }
  return param_3;
}

