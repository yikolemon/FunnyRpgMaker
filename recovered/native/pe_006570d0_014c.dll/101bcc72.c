/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bcc72 */

void Unwind_101bcc72(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x14));
  }
  return;
}

