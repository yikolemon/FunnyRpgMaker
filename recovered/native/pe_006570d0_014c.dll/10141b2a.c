/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141b2a */

void FUN_10141b2a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_30;
  local_20 = &local_10;
  local_10 = 0;
  local_14 = param_7;
  local_18 = param_6;
  local_1c = param_5;
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_1013dd9a();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

