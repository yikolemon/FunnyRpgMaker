/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb49c */

void Unwind_100cb49c(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x52) == '\x01') {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x4c),100);
  }
  return;
}

