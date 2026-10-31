/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180157055 */

float FUN_180157055(longlong param_1,longlong param_2)

{
  return (((*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - *(float *)(param_2 + 4)) -
         *(float *)(param_2 + 0x24)) - *(float *)(param_2 + 0x1c);
}

