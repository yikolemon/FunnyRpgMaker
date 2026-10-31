/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012fb09 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012fb09(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_50;
  local_30 = &local_1c;
  local_1c = _DAT_102b8a10;
  uStack_18 = _UNK_102b8a14;
  uStack_14 = _UNK_102b8a18;
  uStack_10 = _UNK_102b8a1c;
  local_34 = &local_2c;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  local_38 = param_7;
  local_3c = param_6;
  local_40 = param_5;
  FUN_1012f842();
  if (DAT_10388d00 == (local_c ^ (uint)&local_50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

