/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417d54 */

void Unwind_00417d54(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_0047f280(*(LPVOID *)(unaff_EBP + -0x18));
  }
  return;
}

