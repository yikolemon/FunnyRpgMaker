/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044420 */

void __thiscall FUN_10044420(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x10000000) {
    iVar1 = FUN_10001426(param_2 * 0x10);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = param_2 * 0x10 + iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

