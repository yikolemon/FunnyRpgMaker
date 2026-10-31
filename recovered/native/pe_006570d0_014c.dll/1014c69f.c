/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c69f */

void FUN_1014c69f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_34;
  local_10 = &local_c;
  local_c = param_9;
  local_8 = param_10;
  local_14 = param_8;
  local_18 = param_7;
  local_1c = param_6;
  local_20 = param_5;
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  local_34 = 1;
  FUN_1014bb29();
  if (DAT_10388d00 == (local_4 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

