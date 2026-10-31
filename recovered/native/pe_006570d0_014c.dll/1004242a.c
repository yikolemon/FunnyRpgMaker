/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004242a */

void __thiscall FUN_1004242a(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x20000000) {
    iVar1 = FUN_10001426(param_2 * 8);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

