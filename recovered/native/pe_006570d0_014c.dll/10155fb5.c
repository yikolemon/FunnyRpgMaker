/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10155fb5 */

float10 FUN_10155fb5(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return (float10)(double)(-(ulonglong)(param_1 < param_2) & (ulonglong)param_2 |
                          ~-(ulonglong)(param_1 < param_2) & (ulonglong)param_3);
}

