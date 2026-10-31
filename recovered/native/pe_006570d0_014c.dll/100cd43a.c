/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd43a */

undefined4 FUN_100cd43a(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = param_1;
  FUN_10016fb8();
  uVar1 = FUN_1005205a(param_1);
  FUN_102283a0(uVar1,0x30);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

