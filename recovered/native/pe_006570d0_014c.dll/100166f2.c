/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100166f2 */

void Unwind_100166f2(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x28) == '\x01') {
    FUN_10001fee();
  }
  return;
}

