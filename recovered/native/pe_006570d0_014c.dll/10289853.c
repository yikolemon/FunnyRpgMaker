/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10289853 */

void Unwind_10289853(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffd;
    FUN_10001134();
    return;
  }
  return;
}

