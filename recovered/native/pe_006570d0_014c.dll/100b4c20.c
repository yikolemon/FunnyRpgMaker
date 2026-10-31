/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4c20 */

void Unwind_100b4c20(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1ca) == '\x01') {
    FUN_10001fee();
  }
  return;
}

