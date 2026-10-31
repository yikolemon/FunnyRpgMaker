/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d07c4 */

void Unwind_101d07c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

