/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112cc4 */

uint FUN_10112cc4(float param_1,float param_2,float param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return -(uint)(param_1 < param_2) & (uint)param_2 | ~-(uint)(param_1 < param_2) & (uint)param_3;
}

