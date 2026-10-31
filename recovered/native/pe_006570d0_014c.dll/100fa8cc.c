/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa8cc */

void Unwind_100fa8cc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x14));
  }
  return;
}

