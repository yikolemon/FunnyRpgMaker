/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800880fa */

longlong FUN_1800880fa(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_1800881e2(param_3,param_1);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}

