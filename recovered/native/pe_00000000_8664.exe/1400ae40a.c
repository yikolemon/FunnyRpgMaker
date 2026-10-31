/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ae40a */

longlong FUN_1400ae40a(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

