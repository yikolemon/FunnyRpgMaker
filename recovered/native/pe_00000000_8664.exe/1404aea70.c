/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aea70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1404aea70(double param_1)

{
  return (int)((param_1 * DAT_140566db0 + _DAT_140566df0) - _DAT_140566df0) & 3;
}

