/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b79e5 */

void FUN_101b79e5(void)

{
  int iVar1;
  
  iVar1 = FUN_100fcb2d();
  FUN_100fd2b4(0xb,(float)(int)(*(float *)(iVar1 + 0x50) * DAT_102b71d8));
  FUN_100fd2b4(0xe,(float)(int)(DAT_102b71d8 * *(float *)(iVar1 + 0x60)));
  return;
}

