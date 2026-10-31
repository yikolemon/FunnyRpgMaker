/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fdbca */

uint FUN_100fdbca(float param_1,float param_2)

{
  return ~-(uint)(param_2 <= param_1) & (uint)param_2 | (uint)param_1 & -(uint)(param_2 <= param_1);
}

