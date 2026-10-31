/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118479 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140118479(double param_1)

{
  double dVar1;
  
  param_1 = param_1 / DAT_140e8e0e8;
  if (param_1 <= DAT_140e8e0f0) {
    param_1 = param_1 * _DAT_140e8e0f8;
  }
  else {
    dVar1 = (double)FUN_1401a5d60(param_1,DAT_140e8e100);
    param_1 = dVar1 * _DAT_140e8e108 + _DAT_140e8e110;
  }
  return param_1 * _DAT_140e8e118;
}

