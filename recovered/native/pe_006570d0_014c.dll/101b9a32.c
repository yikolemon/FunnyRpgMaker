/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9a32 */

void Unwind_101b9a32(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x18));
  }
  return;
}

