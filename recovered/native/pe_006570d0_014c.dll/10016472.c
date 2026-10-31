/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016472 */

void Unwind_10016472(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0xc) == '\x01') {
    FUN_10004eae();
  }
  return;
}

