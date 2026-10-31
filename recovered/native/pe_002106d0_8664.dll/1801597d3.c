/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801597d3 */

ulonglong FUN_1801597d3(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return -(ulonglong)(param_1 < param_2) & (ulonglong)param_2 |
         ~-(ulonglong)(param_1 < param_2) & (ulonglong)param_3;
}

