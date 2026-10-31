/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100164b2 */

void Unwind_100164b2(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0xc) == '\x01') {
    FUN_10004eae();
  }
  return;
}

