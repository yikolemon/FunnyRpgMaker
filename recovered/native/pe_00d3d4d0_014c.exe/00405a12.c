/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405a12 */

void Unwind_00405a12(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  pvVar1 = *(LPVOID *)(*(int *)(unaff_EBP + -0x14) + 4);
  if (pvVar1 != (LPVOID)0x0) {
    thunk_FUN_00495f00(pvVar1);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = 0;
  return;
}

