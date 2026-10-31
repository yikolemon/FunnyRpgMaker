/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c18e4 */

void Unwind_100c18e4(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if ((unaff_EBP + -0x208 != iVar1 & *(byte *)(unaff_EBP + -0x1e)) == 1) {
    do {
      iVar1 = iVar1 + -0x28;
      FUN_1005b22e();
    } while (iVar1 != unaff_EBP + -0x208);
  }
  return;
}

