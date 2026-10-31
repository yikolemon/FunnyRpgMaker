/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bc72e */

void Unwind_101bc72e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x100) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x100));
  }
  return;
}

