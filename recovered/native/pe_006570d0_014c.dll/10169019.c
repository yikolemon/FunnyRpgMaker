/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169019 */

float FUN_10169019(int param_1,float param_2)

{
  return (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * param_2;
}

