/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5c24 */

void Unwind_100d5c24(void)

{
  int unaff_EBP;
  
  if (*(int *)(&DAT_1039d03c + *(int *)(unaff_EBP + -0x14)) != 0) {
    FUN_100fa2cb(*(int *)(&DAT_1039d03c + *(int *)(unaff_EBP + -0x14)));
  }
  return;
}

