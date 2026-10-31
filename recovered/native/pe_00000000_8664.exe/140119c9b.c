/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119c9b */

double FUN_140119c9b(double param_1)

{
  double dVar1;
  
  dVar1 = DAT_140e8e318;
  if (0.0 <= param_1) {
    if (DAT_140e8e318 <= param_1) {
      dVar1 = (double)FUN_1401a34c0(param_1,DAT_140e8e318);
      return dVar1;
    }
  }
  else {
    param_1 = (double)FUN_1401a34c0(param_1,DAT_140e8e318);
    param_1 = param_1 + dVar1;
  }
  return param_1;
}

