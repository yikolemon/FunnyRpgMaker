/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d4e0c */

void Unwind_100d4e0c(void)

{
  int *piVar1;
  int unaff_EBP;
  int iVar2;
  
  piVar1 = (int *)(unaff_EBP + -0x10c);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    iVar2 = *piVar1;
    FUN_100d5aea();
    iVar2 = iVar2 + -0x20;
    *piVar1 = iVar2;
  }
  return;
}

