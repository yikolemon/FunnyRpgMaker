/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000f4fe */

void Unwind_1000f4fe(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x14) == '\x01') {
    FUN_10001fee();
  }
  return;
}

