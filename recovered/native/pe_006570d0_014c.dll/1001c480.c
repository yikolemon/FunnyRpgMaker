/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c480 */

void Unwind_1001c480(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x12) == '\x01') {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  }
  return;
}

