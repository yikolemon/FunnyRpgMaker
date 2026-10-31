/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078eb0 */

longlong FUN_140078eb0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_140058679(param_3,param_1);
    param_3 = param_3 + 0x50;
  }
  return param_3;
}

