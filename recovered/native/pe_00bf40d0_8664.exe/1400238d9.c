/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400238d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400238d9(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 / DAT_1400e7248;
  if (dVar1 <= DAT_1400e7250) {
    dVar1 = dVar1 * _DAT_1400e7258;
  }
  else {
    dVar1 = FUN_14009a2b0(dVar1);
    dVar1 = dVar1 * _DAT_1400e7268 + _DAT_1400e7270;
  }
  return dVar1 * _DAT_1400e7278;
}

