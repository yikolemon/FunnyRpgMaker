/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b951b */

void Unwind_100b951b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x38));
  }
  return;
}

