/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115835 */

void FUN_10115835(int param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xd4) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0x98)) - *(float *)(param_1 + 0xa8)) +
                   *(float *)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xdc) = param_3;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}

