/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b3629 */

void Unwind_101b3629(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xf0) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0xf0));
  }
  return;
}

