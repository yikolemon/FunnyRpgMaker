/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086ec8 */

void Unwind_10086ec8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_100804b4();
  }
  return;
}

