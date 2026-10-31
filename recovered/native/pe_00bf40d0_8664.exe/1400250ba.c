/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400250ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400250ba(double param_1)

{
  double dVar1;
  
  if (param_1 <= _DAT_1400e66b0) {
    dVar1 = param_1 / _DAT_1400e75c0;
  }
  else {
    dVar1 = (param_1 + DAT_1400e66c8) / _DAT_1400e75d0;
    dVar1 = dVar1 * dVar1 * dVar1;
  }
  return dVar1 * DAT_1400e7248;
}

