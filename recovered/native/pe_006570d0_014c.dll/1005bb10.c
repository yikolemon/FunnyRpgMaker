/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005bb10 */

void Unwind_1005bb10(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_10001f04();
  }
  return;
}

