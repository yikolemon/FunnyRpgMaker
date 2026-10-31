/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed350 */

void Unwind_100ed350(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3050) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

