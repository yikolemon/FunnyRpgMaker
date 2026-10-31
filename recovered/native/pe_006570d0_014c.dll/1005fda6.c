/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005fda6 */

void Unwind_1005fda6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

