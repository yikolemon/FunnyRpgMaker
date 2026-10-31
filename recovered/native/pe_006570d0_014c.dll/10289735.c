/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10289735 */

void Unwind_10289735(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffb;
    FUN_10247360();
    return;
  }
  return;
}

