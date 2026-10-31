/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e438 */

uint FUN_14012e438(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

