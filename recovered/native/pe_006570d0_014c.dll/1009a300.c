/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a300 */

void Unwind_1009a300(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0xc) & 1) != 0) {
    FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x14),0x58);
  }
  return;
}

