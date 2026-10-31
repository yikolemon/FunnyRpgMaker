/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011504e */

float FUN_1011504e(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  return (*(float *)(iVar1 + 0x148) - *(float *)(iVar1 + 0x54)) + *(float *)(iVar1 + 200);
}

