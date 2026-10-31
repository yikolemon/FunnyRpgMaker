/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8dc1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c8dc1(int param_1)

{
  float10 fVar1;
  double dVar2;
  
  dVar2 = (double)param_1 / _DAT_10303818;
  if (dVar2 <= DAT_10303ae8) {
    dVar2 = dVar2 / _DAT_10303800;
  }
  else {
    fVar1 = (float10)FUN_1026fab0((dVar2 + _DAT_10303af0) / _DAT_10303808,0x33333333,0x40033333);
    dVar2 = (double)fVar1;
  }
  return (float10)(dVar2 * DAT_103037f0);
}

