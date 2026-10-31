/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10289713 */

void Unwind_10289713(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffd;
    FUN_10247360();
    return;
  }
  return;
}

