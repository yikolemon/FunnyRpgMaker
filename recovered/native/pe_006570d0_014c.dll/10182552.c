/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10182552 */

uint __thiscall FUN_10182552(int *param_1,uint param_2)

{
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_4;
  if ((uint)((param_1[2] - *param_1 >> 2) * -0x33333333) < param_2) {
    if (0xccccccc < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    FUN_10183da2(&param_2);
  }
  if (DAT_10388d00 == (local_4 ^ (uint)&local_4)) {
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

