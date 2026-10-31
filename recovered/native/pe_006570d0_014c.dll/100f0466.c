/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0466 */

void Unwind_100f0466(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + -0x14); iVar1 != 0; iVar1 = iVar1 + -0xc) {
    FUN_100f0b9a();
  }
  return;
}

