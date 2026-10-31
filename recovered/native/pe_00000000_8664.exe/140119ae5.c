/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119ae5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140119ae5(double param_1)

{
  int iVar1;
  double dVar2;
  
  param_1 = param_1 / DAT_140e8e0e8;
  if (param_1 <= DAT_140e8e0f0) {
    param_1 = param_1 * _DAT_140e8e0f8;
  }
  else {
    dVar2 = (double)FUN_1401a5d60(param_1,DAT_140e8e100);
    param_1 = dVar2 * _DAT_140e8e108 + _DAT_140e8e110;
  }
  dVar2 = (double)FUN_1401a7810(param_1 * _DAT_140e8e118);
  iVar1 = 0;
  if (0 < (int)dVar2) {
    iVar1 = (int)dVar2;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

