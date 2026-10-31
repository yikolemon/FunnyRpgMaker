/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c84ac */

void Unwind_100c84ac(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x12) == '\x01') {
    FUN_10001f04();
  }
  return;
}

