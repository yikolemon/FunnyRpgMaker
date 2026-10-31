/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a90b */

void Unwind_1012a90b(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  for (iVar2 = *(int *)(unaff_EBP + -0x18); iVar2 != 0; iVar2 = iVar2 + -0xc) {
    iVar1 = *(int *)(unaff_EBP + -0x5c + iVar2);
    if (iVar1 != 0) {
      FUN_100fa2cb(iVar1);
    }
  }
  return;
}

