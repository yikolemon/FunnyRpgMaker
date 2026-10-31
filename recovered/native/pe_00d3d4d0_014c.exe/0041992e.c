/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041992e */

void Unwind_0041992e(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  pvVar1 = *(LPVOID *)(*(int *)(unaff_EBP + -0x14) + 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0047f280(pvVar1);
  }
  return;
}

