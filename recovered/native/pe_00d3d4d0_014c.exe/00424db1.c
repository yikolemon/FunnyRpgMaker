/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424db1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00424db1(double param_1)

{
  double dVar1;
  
  if (param_1 <= _DAT_004d80d8) {
    dVar1 = param_1 / _DAT_004d80c0;
  }
  else {
    dVar1 = (param_1 + DAT_004d80e0) / _DAT_004d80c8;
    dVar1 = dVar1 * dVar1 * dVar1;
  }
  return (float10)(dVar1 * DAT_004d7da0);
}

