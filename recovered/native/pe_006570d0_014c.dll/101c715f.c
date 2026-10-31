/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c715f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c715f(double param_1)

{
  float10 fVar1;
  
  param_1 = param_1 / DAT_103037f0;
  if (param_1 <= DAT_103037f8) {
    param_1 = param_1 * _DAT_10303800;
  }
  else {
    fVar1 = (float10)FUN_1026fab0(param_1,0xaaaaaaab,0x3fdaaaaa);
    param_1 = (double)fVar1 * _DAT_10303808 + _DAT_10303810;
  }
  return (float10)(param_1 * _DAT_10303818);
}

