/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015873f */

ulonglong FUN_18015873f(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

