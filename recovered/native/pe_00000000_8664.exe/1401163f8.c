/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401163f8 */

float FUN_1401163f8(longlong param_1,float param_2)

{
  return param_2 / (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14));
}

