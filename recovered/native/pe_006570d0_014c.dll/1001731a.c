/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001731a */

void Unwind_1001731a(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x18) == '\x01') {
    FUN_10001fee();
  }
  return;
}

