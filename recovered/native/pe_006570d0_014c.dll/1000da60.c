/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000da60 */

void Unwind_1000da60(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x18),0x18);
  }
  return;
}

