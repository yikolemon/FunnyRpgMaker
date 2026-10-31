/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100abe42 */

void __thiscall FUN_100abe42(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x5555556) {
    iVar1 = FUN_10001426(param_2 * 0x30);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 0x30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

