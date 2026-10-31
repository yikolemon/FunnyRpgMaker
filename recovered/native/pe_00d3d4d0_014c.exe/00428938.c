/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00428938 */

void Unwind_00428938(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

