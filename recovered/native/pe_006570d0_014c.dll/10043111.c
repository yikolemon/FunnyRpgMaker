/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043111 */

void Unwind_10043111(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x218) != unaff_EBP + -0x208) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x218));
  }
  return;
}

