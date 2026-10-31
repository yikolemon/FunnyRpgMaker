/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a4f00 */

undefined4 __thiscall FUN_100a4f00(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_1ac [36];
  undefined1 local_188 [36];
  undefined1 local_164 [36];
  undefined1 local_140 [36];
  undefined1 local_11c [36];
  undefined1 local_f8 [96];
  int local_98 [2];
  char *local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  char *local_7c;
  char *local_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [24];
  int local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_1ac;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4200;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  cVar1 = FUN_100994f0(param_1 + 0xd);
  if (cVar1 == '\0') {
    local_88 = 0x13d;
    local_84 = 0x24;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_7c = "bool __thiscall Event::Init(FileCoder &)";
    FUN_10072232(local_58,&local_88);
    local_14 = 0;
    FUN_10020842(local_f8,local_58,"MAGIC invalid");
    local_14 = 1;
    FUN_1006f6d8(local_f8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_1ac,&DAT_10367ca8);
  }
  local_30 = param_2 + 0x10;
  uVar2 = FUN_10077b66();
  *param_1 = uVar2;
  FUN_1008a8f0(local_f8);
  local_14 = 2;
  FUN_100128b2(local_f8);
  local_14 = 0xffffffff;
  FUN_10001134();
  uVar2 = FUN_10077b66();
  param_1[7] = uVar2;
  uVar2 = FUN_10077b66();
  param_1[8] = uVar2;
  local_40 = FUN_10077b66();
  local_38 = local_40;
  cVar1 = FUN_100994f0(param_1 + 0x10);
  if (cVar1 == '\0') {
    local_88 = 0x145;
    local_84 = 0x24;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_7c = "bool __thiscall Event::Init(FileCoder &)";
    FUN_10072232(local_58,&local_88);
    local_14 = 3;
    FUN_10020842(local_f8,local_58,"MAGIC invalid");
    local_14 = 4;
    FUN_1006f6d8(local_f8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_188,&DAT_10367ca8);
  }
  local_34 = 0;
  local_3c = param_1 + 9;
  local_28 = 0;
  local_2c = param_1;
  while( true ) {
    local_21 = FUN_10077c4c();
    if (local_21 != 'y') break;
    FUN_100a5474();
    local_14 = 5;
    cVar1 = FUN_100a55a4(param_2,local_28);
    if (cVar1 == '\0') {
      local_98[0] = 0x14d;
      local_98[1] = 0x54;
      local_90 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_8c = "bool __thiscall Event::Init(FileCoder &)";
      FUN_10072232(&local_88,local_98);
      local_14 = 6;
      local_70 = "{}Page initialization failed at index {}";
      uStack_6c = 0x28;
      FUN_1008abf0(local_58,"{}Page initialization failed at index {}",0x28,&local_88,&local_34);
      local_14 = 7;
      FUN_1006f6d8(local_58);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_164,&DAT_10367ca8);
    }
    FUN_100a5b92(local_f8);
    local_34 = local_28 + 1;
    local_14 = 0xffffffff;
    local_28 = local_34;
    FUN_100a4b06();
  }
  local_98[0] = ((int)(local_2c[10] - local_2c[9]) >> 5) * -0x55555555;
  if (local_98[0] - local_38 != 0) {
    local_88 = 0x154;
    local_84 = 0x52;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_7c = "bool __thiscall Event::Init(FileCoder &)";
    FUN_10072232(local_58,&local_88);
    local_14 = 8;
    local_68 = "{}Expected {} Pages, but read: {} Pages";
    uStack_64 = 0x27;
    FUN_1007d8ca(local_f8,"{}Expected {} Pages, but read: {} Pages",0x27,local_58,&local_40,local_98
                );
    local_14 = 9;
    FUN_1006f6d8(local_f8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_140,&DAT_10367ca8);
  }
  if (local_21 == 'p') {
    *(undefined1 *)(local_2c + 0xc) = 1;
    ExceptionList = local_1c;
    return 1;
  }
  local_88 = 0x157;
  local_84 = 0x57;
  local_80 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_7c = "bool __thiscall Event::Init(FileCoder &)";
  FUN_10072232(local_58,&local_88);
  local_14 = 10;
  local_60 = "{}Event terminator not 0x70 (found: {:#02x})";
  uStack_5c = 0x2c;
  FUN_100963a5(local_f8,"{}Event terminator not 0x70 (found: {:#02x})",0x2c,local_58,&local_21);
  local_14 = 0xb;
  FUN_1006f6d8(local_f8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_11c,&DAT_10367ca8);
}

