/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004215c */

void Catch_1004215c(void)

{
  int unaff_EBP;
  char *local_20;
  undefined4 local_1c;
  
  *(char ***)(unaff_EBP + -0x10) = &local_20;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  local_20 = "Rethrowing unknown exception in logger";
  FUN_10001f66();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  local_20 = (char *)(unaff_EBP + -0x54);
  FUN_10042e52();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10001fee();
  local_1c = 0;
  local_20 = (char *)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

