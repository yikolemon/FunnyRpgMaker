/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008199c */

double FUN_14008199c(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return (dVar1 + DAT_14010a670) /
         ((double)(~-(ulonglong)(dVar1 == param_2) & (ulonglong)param_2 |
                  (ulonglong)param_1 & -(ulonglong)(dVar1 == param_2)) + DAT_14010a670);
}

