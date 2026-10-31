/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8edb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c8edb(double param_1)

{
  float10 fVar1;
  
  param_1 = param_1 / DAT_103037f0;
  if (param_1 <= DAT_10303af8) {
    param_1 = param_1 * _DAT_10303b00;
  }
  else {
    fVar1 = (float10)FUN_1026fab0(param_1,0x55555555,0x3fd55555);
    param_1 = (double)fVar1 * _DAT_10303b08 + _DAT_10303b10;
  }
  return (float10)param_1;
}

