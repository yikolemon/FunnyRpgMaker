/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111cd7 */

void FUN_10111cd7(int param_1,float *param_2,float *param_3)

{
  *(uint *)(param_1 + 0x2ac) = (int)*param_3 & 0xffffU | (int)param_3[1] << 0x10;
  *(uint *)(param_1 + 0x2b0) =
       (int)(*param_2 - *(float *)(param_1 + 0x50)) & 0xffffU |
       (int)(param_2[1] - *(float *)(param_1 + 0x54)) << 0x10;
  return;
}

