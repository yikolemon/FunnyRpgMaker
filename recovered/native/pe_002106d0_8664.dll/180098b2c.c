/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180098b2c */

undefined8 FUN_180098b2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_290 [56];
  undefined1 local_258 [56];
  undefined1 local_220 [56];
  undefined1 local_1e8 [56];
  undefined1 local_1b0 [56];
  undefined1 local_178 [56];
  char *local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8 [4];
  uint local_94;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  byte local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  local_61 = FUN_180078732(lVar1);
  if (local_61 != 0x8e) {
    local_e0 = 0x60000000cf;
    local_d8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_180072a20(local_b8);
    local_140 = "{}CommonEvent header indicator not 0x8E (got {:#02x})";
    local_138 = 0x35;
    FUN_1800984d1(&local_88,&local_140,local_b8,&local_61);
    FUN_18006f972(local_290,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_290,&DAT_1803a63b0);
  }
  uVar7 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar7 = FUN_180078646(lVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  local_b8[0] = 7;
  local_90 = param_1;
  FUN_18007750c(param_2,&local_88);
  lVar11 = local_90;
  if ((longlong *)(local_90 + 0x10) != &local_88) {
    FUN_180004cea();
    *(longlong *)(lVar11 + 0x10) = local_88;
    *(longlong *)(lVar11 + 0x18) = lStack_80;
    *(longlong *)(lVar11 + 0x20) = local_78;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
  }
  FUN_180004cea(&local_88);
  FUN_18008b8a0(param_2,&local_88);
  lVar11 = local_90;
  FUN_180012524(local_90 + 0x28,&local_88);
  FUN_1800010ec(&local_88);
  uVar8 = FUN_180078646(lVar1);
  for (local_94 = 0; local_94 < uVar8; local_94 = local_94 + 1) {
    FUN_180099bc6(&local_c8,param_2);
    if (*(int *)(local_c8 + 0x20) == -1) {
      local_e0 = 0x65000000dd;
      local_d8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_180072a20(local_b8);
      local_130 = "{}Initialization of Command #{} in CommonEvent #{} failed";
      local_128 = 0x39;
      FUN_18007e521(&local_88,&local_130,local_b8,&local_94,local_90 + 4);
      FUN_18006f972(local_258,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_258,&DAT_1803a63b0);
    }
    FUN_18009dc8a(lVar11 + 0x48,&local_c8);
    plVar13 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
  }
  FUN_18008b8a0(param_2,&local_88);
  FUN_180012524(local_90 + 0x60,&local_88);
  FUN_1800010ec(&local_88);
  FUN_18008b8a0(param_2,&local_88);
  FUN_180012524(local_90 + 0x80,&local_88);
  FUN_1800010ec(&local_88);
  local_61 = FUN_180078732(lVar1);
  lVar11 = local_90;
  if (local_61 != 0x8f) {
    local_e0 = 0x5e000000e7;
    local_d8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_180072a20(local_b8);
    local_120 = "{}CommonEvent data indicator not 0x8F (got {:#02x})";
    local_118 = 0x33;
    FUN_1800984d1(&local_88,&local_120,local_b8,&local_61);
    FUN_18006f972(local_220,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_220,&DAT_1803a63b0);
  }
  lVar12 = local_90 + 0xa0;
  uVar7 = FUN_180078646(lVar1);
  FUN_18009dfc8(lVar12,uVar7,&local_88);
  lVar12 = *(longlong *)(lVar11 + 0xa0);
  lVar11 = *(longlong *)(lVar11 + 0xa8);
  if (lVar12 != lVar11) {
    do {
      FUN_18008b8a0(param_2,&local_88);
      FUN_180012524(lVar12,&local_88);
      FUN_1800010ec(&local_88);
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != lVar11);
  }
  lVar12 = local_90;
  lVar11 = local_90 + 0xb8;
  uVar7 = FUN_180078646(lVar1);
  FUN_1800780ba(lVar11,uVar7,&local_88);
  puVar3 = *(undefined1 **)(lVar12 + 0xc0);
  lVar11 = local_90;
  for (puVar9 = *(undefined1 **)(lVar12 + 0xb8); local_90 = lVar11, puVar9 != puVar3;
      puVar9 = puVar9 + 1) {
    uVar6 = FUN_180078732(lVar1);
    *puVar9 = uVar6;
    lVar11 = local_90;
  }
  uVar7 = FUN_180078646(lVar1);
  FUN_18009e1f6(lVar11 + 0xd0,uVar7,&local_88);
  plVar4 = *(longlong **)(lVar11 + 0xd8);
  plVar13 = *(longlong **)(lVar11 + 0xd0);
  lVar11 = local_90;
  for (; local_90 = lVar11, plVar13 != plVar4; plVar13 = plVar13 + 3) {
    uVar7 = FUN_180078646(lVar1);
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    FUN_18009e544(&local_88,uVar7);
    if (plVar13 != &local_88) {
      FUN_18006db58(plVar13);
      *plVar13 = local_88;
      plVar13[1] = lStack_80;
      plVar13[2] = local_78;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
    }
    FUN_18006db58(&local_88);
    lVar12 = plVar13[1];
    for (lVar11 = *plVar13; lVar11 != lVar12; lVar11 = lVar11 + 0x20) {
      FUN_18008b8a0(param_2,&local_88);
      FUN_180012524(lVar11,&local_88);
      FUN_1800010ec(&local_88);
    }
    lVar11 = local_90;
  }
  uVar7 = FUN_180078646(lVar1);
  FUN_18009e5e0(lVar11 + 0xe8,uVar7,&local_88);
  plVar4 = *(longlong **)(lVar11 + 0xf0);
  for (plVar13 = *(longlong **)(lVar11 + 0xe8); plVar13 != plVar4; plVar13 = plVar13 + 3) {
    uVar7 = FUN_180078646(lVar1);
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    FUN_18009e92e(&local_88,uVar7);
    if (plVar13 != &local_88) {
      FUN_180004cea(plVar13);
      *plVar13 = local_88;
      plVar13[1] = lStack_80;
      plVar13[2] = local_78;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
    }
    FUN_180004cea(&local_88);
    puVar5 = (undefined4 *)plVar13[1];
    for (puVar10 = (undefined4 *)*plVar13; puVar10 != puVar5; puVar10 = puVar10 + 1) {
      uVar7 = FUN_180078646(lVar1);
      *puVar10 = uVar7;
    }
  }
  local_b8[0] = 0x1d;
  FUN_18007750c(param_2,&local_88);
  lVar11 = local_90;
  if ((longlong *)(local_90 + 0x100) != &local_88) {
    FUN_180004cea();
    *(longlong *)(lVar11 + 0x100) = local_88;
    *(longlong *)(lVar11 + 0x108) = lStack_80;
    *(longlong *)(lVar11 + 0x110) = local_78;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
  }
  FUN_180004cea(&local_88);
  lVar11 = 0x118;
  do {
    FUN_18008b8a0(param_2,&local_88);
    FUN_180012524(local_90 + lVar11,&local_88);
    FUN_1800010ec(&local_88);
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0xd98);
  local_61 = FUN_180078732(lVar1);
  if (local_61 != 0x91) {
    local_e0 = 0x5e00000107;
    local_d8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_180072a20(local_b8);
    local_110 = "{}CommonEvent data indicator not 0x91 (got {:#02x})";
    local_108 = 0x33;
    FUN_1800984d1(&local_88,&local_110,local_b8,&local_61);
    FUN_18006f972(local_1e8,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_1e8,&DAT_1803a63b0);
  }
  FUN_18008b8a0(param_2,&local_88);
  FUN_180012524(local_90 + 0xd98,&local_88);
  FUN_1800010ec(&local_88);
  local_61 = FUN_180078732(lVar1);
  lVar11 = local_90;
  if (local_61 != 0x91) {
    if (local_61 != 0x92) {
      local_e0 = 0x6600000110;
      local_d8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_180072a20(local_b8);
      local_100 = "{}CommonEvent data indicator not 0x92 or 0x91 (got {:#02x})";
      local_f8 = 0x3b;
      FUN_1800984d1(&local_88,&local_100,local_b8,&local_61);
      FUN_18006f972(local_1b0,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_1b0,&DAT_1803a63b0);
    }
    *(undefined1 *)(local_90 + 0xddc) = 1;
    FUN_18008b8a0(param_2,&local_88);
    FUN_180012524(lVar11 + 0xdb8,&local_88);
    FUN_1800010ec(&local_88);
    uVar7 = FUN_180078646(lVar1);
    *(undefined4 *)(lVar11 + 0xdd8) = uVar7;
    local_61 = FUN_180078732(lVar1);
    if (local_61 != 0x92) {
      local_e0 = 0x5e00000119;
      local_d8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_d0 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_180072a20(local_b8);
      local_f0 = "{}CommonEvent data indicator not 0x92 (got {:#02x})";
      local_e8 = 0x33;
      FUN_1800984d1(&local_88,&local_f0,local_b8,&local_61);
      FUN_18006f972(local_178,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_178,&DAT_1803a63b0);
    }
  }
  return 1;
}

