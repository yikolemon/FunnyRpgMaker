/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10014500 */

void Unwind_10014500(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x18) == '\x01') {
    FUN_10001fee();
  }
  return;
}

