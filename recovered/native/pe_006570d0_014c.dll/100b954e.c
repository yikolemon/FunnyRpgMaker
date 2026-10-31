/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b954e */

void Unwind_100b954e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x38));
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}

