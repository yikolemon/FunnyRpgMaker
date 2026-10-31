/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb732 */

void Unwind_100cb732(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

