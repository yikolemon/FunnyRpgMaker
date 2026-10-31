/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119c14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140119c14(double param_1)

{
  double dVar1;
  
  param_1 = param_1 / DAT_140e8e0e8;
  if (param_1 <= DAT_140e8e448) {
    param_1 = param_1 * _DAT_140e8e450;
  }
  else {
    dVar1 = (double)FUN_1401a5d60(param_1,DAT_140e8e458);
    param_1 = dVar1 * _DAT_140e8e460 + _DAT_140e8e468;
  }
  return param_1;
}

