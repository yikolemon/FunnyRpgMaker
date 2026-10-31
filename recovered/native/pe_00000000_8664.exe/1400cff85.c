/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cff85 */

float FUN_1400cff85(longlong param_1,longlong param_2)

{
  return (((*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - *(float *)(param_2 + 4)) -
         *(float *)(param_2 + 0x24)) - *(float *)(param_2 + 0x1c);
}

