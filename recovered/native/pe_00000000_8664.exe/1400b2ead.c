/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2ead */

longlong FUN_1400b2ead(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

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

