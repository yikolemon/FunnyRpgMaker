/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10100218 */

void Unwind_10100218(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_100d6b94();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 8);
  return;
}

