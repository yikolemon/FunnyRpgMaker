/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7c0b */

void Unwind_100b7c0b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x30));
  }
  return;
}

