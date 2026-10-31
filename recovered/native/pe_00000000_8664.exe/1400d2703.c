/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d2703 */

ulonglong FUN_1400d2703(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return -(ulonglong)(param_1 < param_2) & (ulonglong)param_2 |
         ~-(ulonglong)(param_1 < param_2) & (ulonglong)param_3;
}

