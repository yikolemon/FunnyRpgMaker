/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10288da0 */

void Unwind_10288da0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_10233130();
    return;
  }
  return;
}

