/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008daee */

void Unwind_1008daee(void)

{
  int unaff_EBP;
  int iVar1;
  
  if (*(int *)(unaff_EBP + -0x18) != -0x94) {
    iVar1 = -*(int *)(unaff_EBP + -0x18);
    do {
      FUN_10001134();
      iVar1 = iVar1 + -0x18;
    } while (iVar1 != 0x94);
  }
  return;
}

