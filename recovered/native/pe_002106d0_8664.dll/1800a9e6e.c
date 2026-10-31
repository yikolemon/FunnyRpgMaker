/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a9e6e */

longlong FUN_1800a9e6e(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_18009c65c(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

