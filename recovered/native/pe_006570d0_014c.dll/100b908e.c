/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b908e */

void Unwind_100b908e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar1 + 8) != 0) {
    (*DAT_1039c964)(*(int *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

