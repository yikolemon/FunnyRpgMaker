/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa5f4 */

longlong FUN_1800aa5f4(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa0) {
    FUN_1800a9bf6(param_3,param_1);
    param_3 = param_3 + 0xa0;
  }
  return param_3;
}

