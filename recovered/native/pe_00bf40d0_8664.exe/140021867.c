/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021867 */

uint FUN_140021867(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

