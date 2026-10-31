/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100638ae */

void FUN_100638ae(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 + 1;
  *param_2 = uVar1;
  if (uVar1 < 0x40000000) {
    FUN_10001426(uVar1 * 4);
    *param_2 = *param_2 - 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

