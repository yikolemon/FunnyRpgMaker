/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100981aa */

undefined4 *
FUN_100981aa(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *local_d0;
  char *pcStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  uint *local_c0;
  uint *local_bc;
  undefined1 local_b8 [36];
  undefined4 local_94;
  undefined4 local_90;
  char *local_8c;
  char *local_88;
  undefined1 local_84 [24];
  undefined1 local_6c [24];
  char *local_54;
  undefined4 uStack_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_d0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3b50;
  local_1c = ExceptionList;
  local_d0 = param_1;
  _pcStack_cc = CONCAT44(param_3,param_2);
  puStack_c4 = (undefined1 *)param_4;
  ExceptionList = &local_1c;
  FUN_1009848c();
  *local_24 = Command::CommandSpecialClasses::Move::vftable;
  local_30 = local_24 + 0xc;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  *(undefined1 *)(local_24 + 0xf) = 0;
  local_34 = local_24 + 0x10;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  local_14 = 4;
  local_28 = param_5 + 0x10;
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    local_6c[0] = FUN_10077c4c();
    puVar1 = (undefined1 *)local_24[0xd];
    if (puVar1 == (undefined1 *)local_24[0xe]) {
      _pcStack_cc = CONCAT44(uStack_c8,local_6c);
      local_d0 = puVar1;
      FUN_1004cf34();
    }
    else {
      *puVar1 = local_6c[0];
      local_24[0xd] = local_24[0xd] + 1;
    }
  }
  uVar2 = FUN_10077c4c();
  *(undefined1 *)(local_24 + 0xf) = uVar2;
  local_4c = FUN_10077b66();
  local_48 = 0;
  local_28 = (undefined1 *)local_4c;
  while( true ) {
    if (local_28 <= local_48) {
      ExceptionList = local_1c;
      return local_24;
    }
    local_44[0] = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_14 = 5;
    local_d0 = param_5;
    local_2c = local_48;
    cVar3 = FUN_100985b4();
    if (cVar3 == '\0') break;
    local_d0 = local_44;
    FUN_1009958e();
    local_14 = 0xffffffff;
    FUN_10004eae();
    local_48 = local_2c + 1;
  }
  local_94 = 0x228;
  local_90 = 0x62;
  local_8c = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
  ;
  local_88 = 
  "__thiscall Command::CommandSpecialClasses::Move::Move(const CommandType &, const uInts &, const tStrings &, const uint8_t &, FileCoder &)"
  ;
  _pcStack_cc = CONCAT44(uStack_c8,&local_94);
  local_d0 = local_84;
  FUN_10072232();
  local_14 = 6;
  local_54 = "{}RouteCommand initialization failed at index {} of {}";
  uStack_50 = 0x36;
  pcStack_cc = "{}RouteCommand initialization failed at index {} of {}";
  uStack_c8 = 0x36;
  local_bc = &local_4c;
  local_c0 = &local_48;
  puStack_c4 = local_84;
  local_d0 = local_6c;
  FUN_1007d8ca();
  local_14 = 7;
  local_d0 = local_6c;
  FUN_1006f6d8();
  local_d0 = local_b8;
  _pcStack_cc = CONCAT44(uStack_c8,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

