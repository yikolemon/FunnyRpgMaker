/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040573e */

void Unwind_0040573e(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  pvVar1 = *(LPVOID *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  if (pvVar1 != (LPVOID)0x0) {
    thunk_FUN_00495f00(pvVar1);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0;
  return;
}

