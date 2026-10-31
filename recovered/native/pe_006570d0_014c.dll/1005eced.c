/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005eced */

void Unwind_1005eced(void)

{
  int unaff_EBP;
  int iVar1;
  
  *(undefined1 *)(unaff_EBP + -0x348) = 1;
  if (*(int *)(unaff_EBP + -0x34c) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x34c) + -0x18;
    do {
      FUN_10001134();
      iVar1 = iVar1 + -0x18;
    } while (iVar1 != -0x18);
  }
  *(undefined1 *)(unaff_EBP + -0x348) = 1;
  return;
}

