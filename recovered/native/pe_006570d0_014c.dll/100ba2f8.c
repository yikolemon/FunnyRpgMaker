/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba2f8 */

void Unwind_100ba2f8(void)

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
  return;
}

