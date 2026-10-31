/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ec26 */

void Unwind_1017ec26(void)

{
  int unaff_EBP;
  
  FUN_10001fee();
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
  return;
}

