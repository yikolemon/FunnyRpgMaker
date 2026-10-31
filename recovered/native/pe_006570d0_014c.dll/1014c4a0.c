/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c4a0 */

void FUN_1014c4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_48;
  local_3c = &local_20;
  local_20 = param_2;
  local_1c = param_10;
  local_24 = &local_18;
  local_18 = param_8;
  local_14 = param_9;
  local_28 = param_7;
  local_2c = param_6;
  local_30 = param_5;
  local_34 = param_4;
  local_38 = param_3;
  local_44 = param_1;
  local_40 = &LAB_1014c552;
  local_48 = 0;
  FUN_1014bb29();
  if (DAT_10388d00 == (local_10 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

