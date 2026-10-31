/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037f8f8 */

float FUN_14037f8f8(longlong param_1,float param_2)

{
  return param_2 / (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14));
}

