/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ba9a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1401ba9a0(double param_1)

{
  return (int)((param_1 * DAT_140eb9bb0 + _DAT_140eb9bf0) - _DAT_140eb9bf0) & 3;
}

