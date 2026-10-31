/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272920 */

void Catch_All_10272920(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = FUN_10272260();
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

