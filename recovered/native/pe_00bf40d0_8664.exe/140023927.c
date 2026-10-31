/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023927 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140023927(double param_1)

{
  uint uVar1;
  double dVar2;
  
  dVar2 = FUN_14009a2b0((double)(_DAT_1400b6b00 & (ulonglong)param_1));
  uVar1 = FUN_14002516e(param_1);
  return ((double)(int)uVar1 * DAT_1400e7288 * dVar2) / (dVar2 + DAT_1400e7290);
}

