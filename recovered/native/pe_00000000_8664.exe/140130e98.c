/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130e98 */

double FUN_140130e98(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return (dVar1 + DAT_140e950a0) /
         ((double)(~-(ulonglong)(dVar1 == param_2) & (ulonglong)param_2 |
                  (ulonglong)param_1 & -(ulonglong)(dVar1 == param_2)) + DAT_140e950a0);
}

