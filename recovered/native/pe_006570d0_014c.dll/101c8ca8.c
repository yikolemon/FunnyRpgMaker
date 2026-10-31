/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8ca8 */

uint FUN_101c8ca8(int param_1,uint param_2,byte param_3)

{
  return (param_2 & 0xff) << 8 | param_1 << 0x10 | (uint)param_3 | 0xff000000;
}

