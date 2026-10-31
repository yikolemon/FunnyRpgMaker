/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b91c0 */

void Unwind_100b91c0(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x14) != 0) {
    (*DAT_1039c964)(**(int **)(unaff_EBP + -0x14));
    iVar1 = *(int *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

