/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dea5b */

void Unwind_100dea5b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

