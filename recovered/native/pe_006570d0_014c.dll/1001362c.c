/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001362c */

void Unwind_1001362c(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0xf3) = 1;
  if (*(char *)(unaff_EBP + -0x34) == '\x01') {
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0xf3) = 1;
  return;
}

