/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116a16 */

void FUN_180116a16(longlong param_1,float *param_2,float *param_3)

{
  *(uint *)(param_1 + 0x2d8) = (int)*param_3 & 0xffffU | (int)param_3[1] << 0x10;
  *(uint *)(param_1 + 0x2dc) =
       (int)(*param_2 - *(float *)(param_1 + 0x60)) & 0xffffU |
       (int)(param_2[1] - *(float *)(param_1 + 100)) << 0x10;
  return;
}

