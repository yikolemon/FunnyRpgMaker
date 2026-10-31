/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b6e04 */

void Unwind_101b6e04(void)

{
  int unaff_EBP;
  
  if (*(int *)(&DAT_103a41d0 + *(int *)(unaff_EBP + -0x14)) != 0) {
    FUN_100fa2cb(*(int *)(&DAT_103a41d0 + *(int *)(unaff_EBP + -0x14)));
  }
  return;
}

