/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100422e2 */

void Catch_100422e2(void)

{
  int unaff_EBP;
  undefined1 auStack_c [8];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10001f66("Rethrowing unknown exception in logger");
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_10042e52(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10001fee();
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

