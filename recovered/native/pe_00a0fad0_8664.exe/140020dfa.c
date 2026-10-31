/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140020dfa */

longlong FUN_140020dfa(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_140006874(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

