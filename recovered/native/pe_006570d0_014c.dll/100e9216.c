/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9216 */

uint __thiscall FUN_100e9216(int *param_1,uint param_2)

{
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_4;
  if ((uint)((param_1[2] - *param_1 >> 3) * -0x55555555) < param_2) {
    if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    FUN_100e93bc(&param_2);
  }
  if (DAT_10388d00 == (local_4 ^ (uint)&local_4)) {
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

