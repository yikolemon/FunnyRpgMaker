/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004189d0 */

void Unwind_004189d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = NamedPipe::vftable;
  if ((HANDLE)puVar1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}

