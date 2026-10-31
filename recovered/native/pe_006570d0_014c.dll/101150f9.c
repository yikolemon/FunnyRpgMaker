/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101150f9 */

void FUN_101150f9(float param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  *(float *)(iVar1 + 0x148) = (*(float *)(iVar1 + 0x54) - *(float *)(iVar1 + 200)) + param_1;
  *(undefined1 *)(iVar1 + 0x185) = 1;
  return;
}

