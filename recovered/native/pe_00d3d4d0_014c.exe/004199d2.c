/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004199d2 */

void Unwind_004199d2(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  pvVar1 = *(LPVOID *)(*(int *)(unaff_EBP + -0x14) + 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0047f280(pvVar1);
  }
  return;
}

