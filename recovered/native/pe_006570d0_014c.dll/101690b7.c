/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101690b7 */

float10 FUN_101690b7(float param_1)

{
  float10 fVar1;
  float *local_18;
  float local_14;
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = *(float **)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8);
  if (local_18 == (float *)0x0) {
    local_18 = local_10;
    FUN_1010c3e4();
    fVar1 = (float10)local_10[0];
  }
  else {
    if ((int)param_1 < 0) {
      param_1 = local_18[3];
    }
    local_14 = *(float *)((int)local_18[0x19] + 0x1c + (int)param_1 * 0x1c) -
               *(float *)((int)local_18[0x19] + (int)param_1 * 0x1c);
    fVar1 = (float10)FUN_10169019();
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

