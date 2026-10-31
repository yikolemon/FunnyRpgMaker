/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032bb57 */

void FUN_14032bb57(longlong param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xe4) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0xa8)) - *(float *)(param_1 + 0xb8)) +
                   *(float *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xec) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

