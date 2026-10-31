/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193c4a */

void FUN_10193c4a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_20;
  local_20 = &local_10;
  local_10 = param_2;
  local_c = param_3;
  local_1c = *(float *)(*(int *)(param_1 + 0x2c) + 0x14);
  uVar1 = 0xc;
  if (DAT_10301460 <= local_1c) {
    uVar1 = 0;
  }
  local_14 = 8;
  if (DAT_10301464 <= local_1c) {
    local_14 = uVar1;
  }
  local_1c = local_1c * DAT_102b8c70;
  local_18 = param_4;
  FUN_1018c0fc();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

