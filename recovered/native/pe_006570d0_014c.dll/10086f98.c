/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086f98 */

void __thiscall FUN_10086f98(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x6666667) {
    iVar1 = FUN_10001426(param_2 * 0x28);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

