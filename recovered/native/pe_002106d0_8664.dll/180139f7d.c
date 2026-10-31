/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139f7d */

longlong FUN_180139f7d(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  if (-1 < param_2 || param_3 - param_2 <= param_1) {
    if (param_1 <= param_4 - param_2) {
      param_4 = param_2 + param_1;
    }
    param_3 = param_4;
    if (param_2 < 1) {
      param_3 = param_2 + param_1;
    }
  }
  return param_3;
}

