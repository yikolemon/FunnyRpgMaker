/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9750 */

void Unwind_100b9750(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    (*DAT_1039c964)(*(int *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  return;
}

