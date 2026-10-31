/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140025074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140025074(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 / DAT_1400e7248;
  if (dVar1 <= DAT_1400e75b8) {
    dVar1 = dVar1 * _DAT_1400e75c0;
  }
  else {
    dVar1 = FUN_14009a2b0(dVar1);
    dVar1 = dVar1 * _DAT_1400e75d0 + _DAT_1400e75d8;
  }
  return dVar1;
}

