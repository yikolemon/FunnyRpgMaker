/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180a84 */

void Unwind_10180a84(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1a) == '\x01') {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x20),0x18);
  }
  return;
}

