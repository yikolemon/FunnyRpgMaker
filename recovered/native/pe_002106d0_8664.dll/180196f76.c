/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196f76 */

float FUN_180196f76(longlong param_1)

{
  uint uVar1;
  
  uVar1 = -(uint)(0.0 < *(float *)(param_1 + 0xda8));
  return (float)(~uVar1 & DAT_1802de928 | (uint)*(float *)(param_1 + 0xda8) & uVar1) *
         *(float *)(param_1 + 0xdac) * *(float *)(param_1 + 0xdb0);
}

