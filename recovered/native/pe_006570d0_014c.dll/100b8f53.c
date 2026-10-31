/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8f53 */

void Unwind_100b8f53(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}

