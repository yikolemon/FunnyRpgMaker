/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10289130 */

void Unwind_10289130(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_10235870();
    return;
  }
  return;
}

