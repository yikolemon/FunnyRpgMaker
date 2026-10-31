/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180060ac7 */

longlong FUN_180060ac7(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    FUN_1800617bf(param_3,param_1);
    param_3 = param_3 + 0x60;
  }
  return param_3;
}

