/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101150be */

void FUN_101150be(float param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  *(float *)(iVar1 + 0x144) = (*(float *)(iVar1 + 0x50) - *(float *)(iVar1 + 0xc4)) + param_1;
  *(undefined1 *)(iVar1 + 0x185) = 1;
  return;
}

