/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013465 */

void Unwind_10013465(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0xf5) = 1;
  if (*(char *)(unaff_EBP + -0xbc) == '\x01') {
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0xf5) = 1;
  return;
}

