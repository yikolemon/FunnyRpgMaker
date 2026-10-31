/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa6eb */

longlong FUN_1800aa6eb(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_1800aa3e4(param_3,param_1);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}

