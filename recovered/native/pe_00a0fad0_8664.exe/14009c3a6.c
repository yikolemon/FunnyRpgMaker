/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009c3a6 */

undefined8 *
FUN_14009c3a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_118 [56];
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_58 = param_1;
  FUN_14009c742();
  *local_58 = Command::CommandSpecialClasses::Move::vftable;
  local_60 = local_58 + 0xc;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  *(undefined1 *)(local_58 + 0xf) = 0;
  local_68 = local_58 + 0x10;
  local_58[0x10] = 0;
  local_58[0x11] = 0;
  local_58[0x12] = 0;
  lVar1 = param_6 + 0x10;
  for (uVar5 = 0; uVar5 < 5; uVar5 = uVar5 + 1) {
    local_88[0] = FUN_14008ab9c(lVar1);
    puVar2 = (undefined1 *)local_58[0xd];
    if (puVar2 == (undefined1 *)local_58[0xe]) {
      FUN_1400660b8(local_60,puVar2,local_88,param_4,param_5);
    }
    else {
      *puVar2 = local_88[0];
      local_58[0xd] = local_58[0xd] + 1;
    }
  }
  uVar3 = FUN_14008ab9c(lVar1);
  *(undefined1 *)(local_58 + 0xf) = uVar3;
  uVar5 = FUN_14008aab0(lVar1);
  uVar6 = 0;
  while( true ) {
    if (uVar5 <= uVar6) {
      return local_58;
    }
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    cVar4 = FUN_14009c88e(local_88,param_6);
    if (cVar4 == '\0') break;
    FUN_14009dc82(local_68,local_88);
    FUN_140016e5c(&local_80);
    uVar6 = uVar6 + 1;
  }
  local_e0 = 0x1c00000223;
  local_d8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
  ;
  local_d0 = 
  "__cdecl Command::CommandSpecialClasses::Move::Move(const CommandType &, const uInts &, const tStrings &, const uint8_t &, FileCoder &)"
  ;
  FUN_140087f79(local_a8);
  FUN_14000ed8c(local_c8,local_a8,"RouteCommand initialization failed");
  FUN_1400886d4(local_118,local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_118,&DAT_1401a5720);
}

