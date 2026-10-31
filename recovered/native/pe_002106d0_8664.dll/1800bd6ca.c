/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd6ca */

longlong FUN_1800bd6ca(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_1800bd76e(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

