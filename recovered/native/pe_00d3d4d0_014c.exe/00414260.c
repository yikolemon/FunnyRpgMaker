/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00414260 */

void Unwind_00414260(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x13) = uVar1;
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_0040226e((undefined4 *)(unaff_EBP + -0x30));
  }
  *(undefined1 *)(unaff_EBP + -0x13) = uVar1;
  return;
}

