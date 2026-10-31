/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402b4e */

void Unwind_00402b4e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0xc) & 1) != 0) {
    FUN_0047f280(*(LPVOID *)(unaff_EBP + -0x14));
  }
  return;
}

