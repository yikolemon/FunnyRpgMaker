/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8f55 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c8f55(double param_1)

{
  if (param_1 <= _DAT_10303b18) {
    param_1 = param_1 / _DAT_10303b00;
  }
  else {
    param_1 = (param_1 + DAT_10303b20) / _DAT_10303b08;
    param_1 = param_1 * param_1 * param_1;
  }
  return (float10)(param_1 * DAT_103037f0);
}

