/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169038 */

float FUN_10169038(int param_1,float param_2)

{
  return param_2 / (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14));
}

