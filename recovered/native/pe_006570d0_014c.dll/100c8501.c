/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8501 */

void Unwind_100c8501(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + -0x18); iVar1 != -8; iVar1 = iVar1 + -8) {
    FUN_100431d4();
  }
  return;
}

