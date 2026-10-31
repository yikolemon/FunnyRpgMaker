/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191bc9 */

void Unwind_10191bc9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x30));
  }
  return;
}

