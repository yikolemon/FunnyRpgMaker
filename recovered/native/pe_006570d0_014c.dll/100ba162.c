/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba162 */

void Unwind_100ba162(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    (*DAT_1039c964)(*(int *)(unaff_EBP + -0x1c));
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  return;
}

