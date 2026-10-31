/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102896de */

void Unwind_102896de(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffe;
    FUN_10001fee();
    return;
  }
  return;
}

