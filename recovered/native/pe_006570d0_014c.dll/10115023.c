/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115023 */

float FUN_10115023(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  return (*(float *)(iVar1 + 0x144) - *(float *)(iVar1 + 0x50)) + *(float *)(iVar1 + 0xc4);
}

