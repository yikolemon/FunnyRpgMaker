/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102895af */

void Unwind_102895af(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_1000dcbe();
    return;
  }
  return;
}

