/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002170f */

void Unwind_1002170f(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x40) == '\x01') {
    FUN_1022c200(*(undefined4 *)(unaff_EBP + -0x44));
  }
  return;
}

