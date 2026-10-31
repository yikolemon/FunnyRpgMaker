/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ce9ce */

void Unwind_101ce9ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

