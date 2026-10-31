/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a964 */

void Unwind_1012a964(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar2 = 0x18;
  do {
    iVar1 = *(int *)(unaff_EBP + -0x5c + iVar2);
    if (iVar1 != 0) {
      FUN_100fa2cb(iVar1);
    }
    iVar2 = iVar2 + -0xc;
  } while (iVar2 != 0);
  return;
}

