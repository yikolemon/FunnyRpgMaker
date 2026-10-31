/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d18a1 */

void Unwind_100d18a1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

