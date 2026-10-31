/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc02f */

void Unwind_100cc02f(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x18) == '\x01') {
    FUN_1022c200(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}

