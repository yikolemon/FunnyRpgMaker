/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424b04 */

uint __cdecl FUN_00424b04(int param_1,uint param_2,byte param_3)

{
  return (param_2 & 0xff) << 8 | param_1 << 0x10 | (uint)param_3 | 0xff000000;
}

