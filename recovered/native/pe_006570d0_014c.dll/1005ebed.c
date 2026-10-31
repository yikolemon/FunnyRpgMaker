/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ebed */

void Unwind_1005ebed(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x342) == '\x01') {
    FUN_10001f04();
  }
  return;
}

