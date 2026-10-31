/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187556 */

void Unwind_10187556(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 8);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

