/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119c5a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140119c5a(double param_1)

{
  if (param_1 <= DAT_140e8d7a0) {
    param_1 = param_1 / _DAT_140e8e450;
  }
  else {
    param_1 = (param_1 + DAT_140e8d7c0) / _DAT_140e8e460;
    param_1 = param_1 * param_1 * param_1;
  }
  return param_1 * DAT_140e8e0e8;
}

