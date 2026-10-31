/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024f45 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140024f45(double param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = param_1 / DAT_1400e7248;
  if (dVar2 <= DAT_1400e7250) {
    dVar2 = dVar2 * _DAT_1400e7258;
  }
  else {
    dVar2 = FUN_14009a2b0(dVar2);
    dVar2 = dVar2 * _DAT_1400e7268 + _DAT_1400e7270;
  }
  dVar2 = (double)FUN_14009aea0((ulonglong)(dVar2 * _DAT_1400e7278));
  iVar1 = 0;
  if (0 < (int)dVar2) {
    iVar1 = (int)dVar2;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

