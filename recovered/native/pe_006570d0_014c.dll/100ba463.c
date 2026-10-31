/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba463 */

void Unwind_100ba463(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  if (iVar1 != 0) {
    (*DAT_1039c964)(iVar1);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
  return;
}

