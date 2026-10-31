/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011587f */

void FUN_1011587f(int param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xd8) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0x9c)) - *(float *)(param_1 + 0xac)) +
                   *(float *)(param_1 + 200));
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}

