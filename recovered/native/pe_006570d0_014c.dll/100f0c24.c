/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0c24 */

void Unwind_100f0c24(void)

{
  int unaff_EBP;
  
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

