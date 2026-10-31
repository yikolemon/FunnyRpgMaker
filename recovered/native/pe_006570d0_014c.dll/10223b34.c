/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223b34 */

float10 FUN_10223b34(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return (float10)((dVar1 + DAT_10322748) /
                  ((double)(~-(ulonglong)(dVar1 == param_2) & (ulonglong)param_2 |
                           (ulonglong)param_1 & -(ulonglong)(dVar1 == param_2)) + DAT_10322748));
}

