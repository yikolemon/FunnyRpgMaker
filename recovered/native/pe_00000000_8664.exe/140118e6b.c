/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118e6b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140118e6b(ulonglong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (DAT_140e8e130 * (double)(_DAT_1401ced50 & param_1)) /
          (DAT_140e8e128 - (double)(_DAT_1401ced50 & param_1));
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  iVar1 = FUN_140119d0e();
  dVar2 = (double)FUN_1401a5d60(dVar2,DAT_140e8e1a0);
  return dVar2 * (double)iVar1;
}

