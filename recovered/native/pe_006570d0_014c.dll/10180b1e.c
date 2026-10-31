/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180b1e */

void Unwind_10180b1e(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) == '\x01') {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x20),0x18);
  }
  return;
}

