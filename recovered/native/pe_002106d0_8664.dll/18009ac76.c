/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009ac76 */

undefined8 * FUN_18009ac76(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong in_stack_00000030;
  undefined1 local_130 [56];
  undefined8 local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  uint local_60;
  uint local_5c;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_58 = param_1;
  FUN_18009b04e();
  *local_58 = Command::CommandSpecialClasses::Move::vftable;
  local_68 = local_58 + 0xc;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  *(undefined1 *)(local_58 + 0xf) = 0;
  local_70 = local_58 + 0x10;
  local_58[0x10] = 0;
  local_58[0x11] = 0;
  local_58[0x12] = 0;
  lVar1 = in_stack_00000030 + 0x10;
  for (uVar5 = 0; uVar5 < 5; uVar5 = uVar5 + 1) {
    local_90[0] = FUN_180078732(lVar1);
    puVar2 = (undefined1 *)local_58[0xd];
    if (puVar2 == (undefined1 *)local_58[0xe]) {
      FUN_18004dc74(local_68,puVar2,local_90);
    }
    else {
      *puVar2 = local_90[0];
      local_58[0xd] = local_58[0xd] + 1;
    }
  }
  uVar3 = FUN_180078732(lVar1);
  *(undefined1 *)(local_58 + 0xf) = uVar3;
  uVar5 = FUN_180078646(lVar1);
  uVar6 = 0;
  local_60 = uVar5;
  while( true ) {
    if (uVar5 <= uVar6) {
      return local_58;
    }
    local_90[0] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_5c = uVar6;
    cVar4 = FUN_18009b19a(local_90,in_stack_00000030);
    if (cVar4 == '\0') break;
    FUN_18009c45e(local_70,local_90);
    FUN_180004cea(&local_88);
    uVar6 = uVar6 + 1;
  }
  local_f8 = 0x6200000228;
  local_f0 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
  ;
  local_e8 = 
  "__cdecl Command::CommandSpecialClasses::Move::Move(const CommandType &, const uInts &, const tStrings &, const uint8_t &, FileCoder &)"
  ;
  FUN_180072a20(local_b0);
  local_e0 = "{}RouteCommand initialization failed at index {} of {}";
  local_d8 = 0x36;
  FUN_18007e521(local_d0,&local_e0,local_b0,&local_5c,&local_60);
  FUN_18006f972(local_130,local_d0);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_130,&DAT_1803a63b0);
}

