/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ccc88 */

void Unwind_100ccc88(void)

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

