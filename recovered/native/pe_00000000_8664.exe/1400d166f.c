/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d166f */

ulonglong FUN_1400d166f(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

