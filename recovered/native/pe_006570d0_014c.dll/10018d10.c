/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018d10 */

void Unwind_10018d10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

