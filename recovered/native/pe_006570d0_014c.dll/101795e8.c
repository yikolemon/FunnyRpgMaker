/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101795e8 */

void Unwind_101795e8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0xc) & 1) != 0) {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x14),0x30);
  }
  return;
}

