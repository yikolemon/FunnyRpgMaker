/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d512a */

void Unwind_100d512a(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xa8) == '\x01') {
    FUN_10018a12();
  }
  return;
}

