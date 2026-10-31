/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a6c1 */

void FUN_18011a6c1(longlong param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xe8) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0xac)) - *(float *)(param_1 + 0xbc)) +
                   *(float *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return;
}

