/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10289757 */

void Unwind_10289757(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffff7;
    FUN_10247360();
    return;
  }
  return;
}

