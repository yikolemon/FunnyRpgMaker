/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d720a */

void FUN_100d720a(undefined8 *param_1,int param_2)

{
  undefined8 local_28 [3];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (8 < param_2 - (int)param_1) {
    local_28[0] = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_100d7126(param_1,0,(param_2 + -8) - (int)param_1 >> 3,local_28);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

