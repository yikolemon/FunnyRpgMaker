/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e24ea */

float FUN_1400e24ea(longlong param_1)

{
  uint uVar1;
  
  uVar1 = -(uint)(0.0 < *(float *)(param_1 + 0xda8));
  return (float)(~uVar1 & DAT_140211698 | (uint)*(float *)(param_1 + 0xda8) & uVar1) *
         *(float *)(param_1 + 0xdac) * *(float *)(param_1 + 0xdb0);
}

