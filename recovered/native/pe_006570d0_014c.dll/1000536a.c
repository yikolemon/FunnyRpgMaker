/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000536a */

void Unwind_1000536a(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_10001f04();
  }
  return;
}

