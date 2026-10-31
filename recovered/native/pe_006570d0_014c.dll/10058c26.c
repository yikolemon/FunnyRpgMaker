/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058c26 */

void Catch_10058c26(void)

{
  int unaff_EBP;
  char *local_24;
  undefined4 local_20;
  
  *(char ***)(unaff_EBP + -0x10) = &local_24;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  local_24 = "Rethrowing unknown exception in logger";
  FUN_10001f66();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  local_24 = (char *)(unaff_EBP + -0x1b4);
  FUN_10042e52();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_10001fee();
  local_20 = 0;
  local_24 = (char *)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

