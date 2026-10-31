/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf464 */

uint FUN_1801cf464(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

