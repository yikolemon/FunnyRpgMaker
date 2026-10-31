/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119b4d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140119b4d(int param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1 / _DAT_140e8e118;
  if (dVar1 <= DAT_140e8e430) {
    dVar1 = dVar1 / _DAT_140e8e0f8;
  }
  else {
    dVar1 = (double)FUN_1401a5d60((dVar1 + _DAT_140e8e438) / _DAT_140e8e108,DAT_140e8e440);
  }
  return dVar1 * DAT_140e8e0e8;
}

