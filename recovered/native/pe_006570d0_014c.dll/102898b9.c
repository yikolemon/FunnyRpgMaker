/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102898b9 */

void Unwind_102898b9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffffef;
    FUN_10001134();
    return;
  }
  return;
}

