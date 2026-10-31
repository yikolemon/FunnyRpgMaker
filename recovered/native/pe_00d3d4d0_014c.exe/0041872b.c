/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041872b */

void Unwind_0041872b(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x30) = NamedPipe::vftable;
  if (*(HANDLE *)(unaff_EBP + -0x2c) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
  }
  return;
}

