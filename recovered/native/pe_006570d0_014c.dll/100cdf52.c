/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cdf52 */

void Unwind_100cdf52(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x34) = NamedPipe::vftable;
  if (*(HANDLE *)(unaff_EBP + -0x30) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(unaff_EBP + -0x30));
  }
  return;
}

