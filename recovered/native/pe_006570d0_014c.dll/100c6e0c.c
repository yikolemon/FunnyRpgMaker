/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6e0c */

void __thiscall FUN_100c6e0c(int *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = FUN_10001426(param_2 * 2);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

