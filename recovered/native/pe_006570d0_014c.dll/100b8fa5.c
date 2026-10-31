/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8fa5 */

void Unwind_100b8fa5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x50));
  }
  return;
}

