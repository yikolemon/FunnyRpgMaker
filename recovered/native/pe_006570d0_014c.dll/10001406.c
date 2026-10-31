/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001406 */

void FUN_10001406(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + 1;
  *param_2 = iVar1;
  if (-1 < iVar1) {
    FUN_10001426(iVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

