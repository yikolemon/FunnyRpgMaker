/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421311 */

uint __cdecl FUN_00421311(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

