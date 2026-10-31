/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418bc3 */

void Unwind_00418bc3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00493bd8();
}

