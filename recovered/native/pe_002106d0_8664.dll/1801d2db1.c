/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2db1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1801d2db1(double param_1)

{
  int iVar1;
  double dVar2;
  
  param_1 = param_1 / DAT_18032a0f8;
  if (param_1 <= DAT_18032a100) {
    param_1 = param_1 * _DAT_18032a108;
  }
  else {
    dVar2 = (double)FUN_180287e70(param_1,DAT_18032a110);
    param_1 = dVar2 * _DAT_18032a118 + _DAT_18032a120;
  }
  dVar2 = (double)FUN_180289960(param_1 * _DAT_18032a128);
  iVar1 = 0;
  if (0 < (int)dVar2) {
    iVar1 = (int)dVar2;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

