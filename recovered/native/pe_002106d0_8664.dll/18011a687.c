/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a687 */

void FUN_18011a687(longlong param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xe4) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0xa8)) - *(float *)(param_1 + 0xb8)) +
                   *(float *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xec) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

