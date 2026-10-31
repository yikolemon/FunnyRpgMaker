/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fd2e */

void FUN_14008fd2e(longlong param_1,float *param_2,float *param_3)

{
  *(uint *)(param_1 + 0x2d8) = (int)*param_3 & 0xffffU | (int)param_3[1] << 0x10;
  *(uint *)(param_1 + 0x2dc) =
       (int)(*param_2 - *(float *)(param_1 + 0x60)) & 0xffffU |
       (int)(param_2[1] - *(float *)(param_1 + 100)) << 0x10;
  return;
}

