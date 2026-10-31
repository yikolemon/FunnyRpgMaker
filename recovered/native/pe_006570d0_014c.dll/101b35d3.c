/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b35d3 */

void Unwind_101b35d3(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0xfc);
  while (iVar1 != 0) {
    iVar1 = *(int *)(unaff_EBP + -0xfc);
    FUN_100d5aea();
    iVar1 = iVar1 + -0x20;
    *(int *)(unaff_EBP + -0xfc) = iVar1;
  }
  return;
}

