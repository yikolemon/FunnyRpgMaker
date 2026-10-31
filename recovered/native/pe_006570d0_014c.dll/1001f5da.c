/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f5da */

void Unwind_1001f5da(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0xc) & 1) != 0) {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x14),0x18);
  }
  return;
}

