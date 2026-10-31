/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcba2 */

void FUN_100fcba2(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = *param_1;
  uStack_10 = param_1[1];
  uStack_c = param_1[2];
  fStack_8 = *(float *)(DAT_1039d74c + 0xccc) * (float)param_1[3];
  FUN_100fad3d(&local_14);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

