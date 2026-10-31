/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e428 */

float FUN_18016e428(longlong param_1,float param_2)

{
  return param_2 / (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14));
}

