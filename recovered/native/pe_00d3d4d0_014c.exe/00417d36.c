/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417d36 */

void Unwind_00417d36(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  FUN_004057fe((int *)(unaff_EBP + -0x4c));
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

