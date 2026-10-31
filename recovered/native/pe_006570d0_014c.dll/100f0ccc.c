/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0ccc */

void Unwind_100f0ccc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

