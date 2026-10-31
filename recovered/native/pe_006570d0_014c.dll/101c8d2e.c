/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8d2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_101c8d2e(double param_1)

{
  int iVar1;
  float10 fVar2;
  
  param_1 = param_1 / DAT_103037f0;
  if (param_1 <= DAT_103037f8) {
    param_1 = param_1 * _DAT_10303800;
  }
  else {
    fVar2 = (float10)FUN_1026fab0(param_1,0xaaaaaaab,0x3fdaaaaa);
    param_1 = (double)fVar2 * _DAT_10303808 + _DAT_10303810;
  }
  fVar2 = (float10)FUN_1026ff80(param_1 * _DAT_10303818);
  iVar1 = 0;
  if (0 < (int)fVar2) {
    iVar1 = (int)fVar2;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

