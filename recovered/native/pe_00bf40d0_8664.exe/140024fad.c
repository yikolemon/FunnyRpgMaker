/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024fad */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140024fad(int param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1 / _DAT_1400e7278;
  if (dVar1 <= DAT_1400e75a0) {
    dVar1 = dVar1 / _DAT_1400e7258;
  }
  else {
    dVar1 = FUN_14009a2b0((dVar1 + _DAT_1400e75a8) / _DAT_1400e7268);
  }
  return dVar1 * DAT_1400e7248;
}

