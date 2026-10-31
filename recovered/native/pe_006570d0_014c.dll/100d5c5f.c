/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5c5f */

void Unwind_100d5c5f(void)

{
  int unaff_EBP;
  int iVar1;
  
  if (*(int *)(unaff_EBP + -0x14) != -0x40) {
    iVar1 = *(int *)(unaff_EBP + -0x14) + 0x20;
    do {
      FUN_100d5aea();
      iVar1 = iVar1 + -0x20;
    } while (iVar1 != -0x20);
  }
  return;
}

