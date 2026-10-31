/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ec48 */

void __thiscall FUN_1017ec48(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x5d1745e) {
    iVar1 = FUN_10001426(param_2 * 0x2c);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2 * 0x2c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

