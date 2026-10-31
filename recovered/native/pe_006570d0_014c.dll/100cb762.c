/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb762 */

void Unwind_100cb762(void)

{
  int unaff_EBP;
  
  if (*(int *)(*(int *)(unaff_EBP + -0x58) + 8) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

