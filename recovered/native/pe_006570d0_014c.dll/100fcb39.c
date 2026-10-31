/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcb39 */

void FUN_100fcb39(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_14;
  puVar1 = (undefined4 *)(DAT_1039d74c + 0xe00 + param_1 * 0x10);
  local_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_c = puVar1[2];
  fStack_8 = param_2 * *(float *)(DAT_1039d74c + 0xccc) * (float)puVar1[3];
  FUN_100fad3d(&local_14);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

