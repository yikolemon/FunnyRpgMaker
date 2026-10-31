/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001411c */

void Unwind_1001411c(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x28) == '\x01') {
    FUN_10001fee();
  }
  return;
}

