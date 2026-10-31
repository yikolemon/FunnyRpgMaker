/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102898db */

void Unwind_102898db(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffffdf;
    FUN_10001134();
    return;
  }
  return;
}

