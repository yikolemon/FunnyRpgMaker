/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401184c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401184c7(ulonglong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_1401a5d60(_DAT_1401ced50 & param_1,DAT_140e8e120);
  iVar1 = FUN_140119d0e(param_1);
  return ((double)iVar1 * DAT_140e8e128 * dVar2) / (dVar2 + DAT_140e8e130);
}

