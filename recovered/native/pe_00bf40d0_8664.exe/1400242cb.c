/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400242cb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400242cb(double param_1)

{
  uint uVar1;
  double dVar2;
  
  dVar2 = (DAT_1400e7290 * (double)(_DAT_1400b6b00 & (ulonglong)param_1)) /
          (DAT_1400e7288 - (double)(_DAT_1400b6b00 & (ulonglong)param_1));
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  uVar1 = FUN_14002516e(param_1);
  dVar2 = FUN_14009a2b0(dVar2);
  return dVar2 * (double)(int)uVar1;
}

