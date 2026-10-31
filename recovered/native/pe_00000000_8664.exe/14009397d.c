/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009397d */

void FUN_14009397d(longlong param_1,float param_2,undefined4 param_3)

{
  *(float *)(param_1 + 0xe8) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0xac)) - *(float *)(param_1 + 0xbc)) +
                   *(float *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return;
}

