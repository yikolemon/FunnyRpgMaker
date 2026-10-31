/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234ad4 */

double FUN_180234ad4(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return (dVar1 + DAT_18034d570) /
         ((double)(~-(ulonglong)(dVar1 == param_2) & (ulonglong)param_2 |
                  (ulonglong)param_1 & -(ulonglong)(dVar1 == param_2)) + DAT_18034d570);
}

