/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aab40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1400aab40(double param_1)

{
  return (int)((param_1 * DAT_140111810 + _DAT_140111850) - _DAT_140111850) & 3;
}

