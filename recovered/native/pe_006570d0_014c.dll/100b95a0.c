/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b95a0 */

void Unwind_100b95a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x5c));
  }
  return;
}

