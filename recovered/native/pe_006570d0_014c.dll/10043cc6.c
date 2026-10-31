/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043cc6 */

void Unwind_10043cc6(void)

{
  int unaff_EBP;
  
  if (*(int *)(*(int *)(unaff_EBP + 0x14) + 8) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

