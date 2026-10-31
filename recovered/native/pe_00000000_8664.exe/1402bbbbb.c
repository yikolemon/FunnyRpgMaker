/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bbbbb */

longlong FUN_1402bbbbb(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_1402bb8b4(param_3,param_1);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}

