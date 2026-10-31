/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5299 */

uint FUN_101c5299(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

