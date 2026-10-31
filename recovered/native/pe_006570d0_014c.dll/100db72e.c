/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100db72e */

void Unwind_100db72e(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x129) == '\x01') {
    FUN_10001fee();
  }
  return;
}

