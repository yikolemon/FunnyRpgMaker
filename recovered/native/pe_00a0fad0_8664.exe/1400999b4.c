/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400999b4 */

undefined8 FUN_1400999b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 local_278 [56];
  undefined1 local_240 [56];
  undefined1 local_208 [56];
  undefined1 local_1d0 [56];
  undefined1 local_198 [56];
  undefined1 local_160 [56];
  undefined8 local_128;
  char *local_120;
  char *local_118;
  undefined1 local_110 [32];
  undefined8 local_f0;
  char *local_e8;
  char *local_e0;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_b0 [4];
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  uVar7 = FUN_14008ab9c(lVar1);
  if ((char)uVar7 != -0x72) {
    FUN_1400992c3(&local_f0,uVar7);
    local_128 = 0x1b000000ca;
    local_120 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_118 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_140087f79(local_110);
    FUN_14000ed8c(&local_d0,local_110,"CommonEvent header indicator not 0x8E (got ");
    FUN_140018470(local_b0);
    FUN_14000ed8c(&local_88,local_b0,")");
    FUN_1400886d4(local_278,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_278,&DAT_1401a5720);
  }
  uVar7 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar7 = FUN_14008aab0(lVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  local_b0[0] = 7;
  local_90 = param_1;
  FUN_140089bf6(param_2,&local_88);
  lVar12 = local_90;
  if ((longlong *)(local_90 + 0x10) != &local_88) {
    FUN_140016e5c();
    *(longlong *)(lVar12 + 0x10) = local_88;
    *(longlong *)(lVar12 + 0x18) = lStack_80;
    *(longlong *)(lVar12 + 0x20) = local_78;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
  }
  FUN_140016e5c(&local_88);
  FUN_14009aeee(param_2,&local_88);
  lVar12 = local_90;
  FUN_14000ff1e(local_90 + 0x28,&local_88);
  FUN_140005242(&local_88);
  uVar8 = FUN_14008aab0(lVar1);
  for (uVar9 = 0; uVar9 < uVar8; uVar9 = uVar9 + 1) {
    FUN_14009b154(&local_d0,param_2);
    if (*(int *)(local_d0 + 0x20) == -1) {
      local_f0 = 0x1c000000d8;
      local_e8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
      ;
      local_e0 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_140087f79(local_b0);
      FUN_14000ed8c(&local_88,local_b0,"Command initialization failed");
      FUN_1400886d4(local_240,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_240,&DAT_1401a5720);
    }
    FUN_14009f514(lVar12 + 0x48,&local_d0);
    plVar14 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
  }
  FUN_14009aeee(param_2,&local_88);
  FUN_14000ff1e(local_90 + 0x60,&local_88);
  FUN_140005242(&local_88);
  FUN_14009aeee(param_2,&local_88);
  FUN_14000ff1e(local_90 + 0x80,&local_88);
  FUN_140005242(&local_88);
  uVar7 = FUN_14008ab9c(lVar1);
  lVar12 = local_90;
  if ((char)uVar7 != -0x71) {
    FUN_1400992c3(&local_f0,uVar7);
    local_128 = 0x1b000000e2;
    local_120 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_118 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_140087f79(local_110);
    FUN_14000ed8c(&local_d0,local_110,"CommonEvent data indicator not 0x8F (got ");
    FUN_140018470(local_b0);
    FUN_14000ed8c(&local_88,local_b0,")");
    FUN_1400886d4(local_208,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_208,&DAT_1401a5720);
  }
  lVar13 = local_90 + 0xa0;
  uVar7 = FUN_14008aab0(lVar1);
  FUN_14009f852(lVar13,uVar7,&local_88);
  lVar13 = *(longlong *)(lVar12 + 0xa0);
  lVar12 = *(longlong *)(lVar12 + 0xa8);
  if (lVar13 != lVar12) {
    do {
      FUN_14009aeee(param_2,&local_88);
      FUN_14000ff1e(lVar13,&local_88);
      FUN_140005242(&local_88);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar12);
  }
  lVar13 = local_90;
  lVar12 = local_90 + 0xb8;
  uVar7 = FUN_14008aab0(lVar1);
  FUN_14008a668(lVar12,uVar7,&local_88);
  puVar3 = *(undefined1 **)(lVar13 + 0xc0);
  lVar12 = local_90;
  for (puVar10 = *(undefined1 **)(lVar13 + 0xb8); local_90 = lVar12, puVar10 != puVar3;
      puVar10 = puVar10 + 1) {
    uVar6 = FUN_14008ab9c(lVar1);
    *puVar10 = uVar6;
    lVar12 = local_90;
  }
  uVar7 = FUN_14008aab0(lVar1);
  FUN_14009fa80(lVar12 + 0xd0,uVar7,&local_88);
  plVar4 = *(longlong **)(lVar12 + 0xd8);
  plVar14 = *(longlong **)(lVar12 + 0xd0);
  lVar12 = local_90;
  for (; local_90 = lVar12, plVar14 != plVar4; plVar14 = plVar14 + 3) {
    uVar7 = FUN_14008aab0(lVar1);
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    FUN_14009fdce(&local_88,uVar7);
    if (plVar14 != &local_88) {
      FUN_140041304(plVar14);
      *plVar14 = local_88;
      plVar14[1] = lStack_80;
      plVar14[2] = local_78;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
    }
    FUN_140041304(&local_88);
    lVar13 = plVar14[1];
    for (lVar12 = *plVar14; lVar12 != lVar13; lVar12 = lVar12 + 0x20) {
      FUN_14009aeee(param_2,&local_88);
      FUN_14000ff1e(lVar12,&local_88);
      FUN_140005242(&local_88);
    }
    lVar12 = local_90;
  }
  uVar7 = FUN_14008aab0(lVar1);
  FUN_14009fe6a(lVar12 + 0xe8,uVar7,&local_88);
  plVar4 = *(longlong **)(lVar12 + 0xf0);
  for (plVar14 = *(longlong **)(lVar12 + 0xe8); plVar14 != plVar4; plVar14 = plVar14 + 3) {
    uVar7 = FUN_14008aab0(lVar1);
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    FUN_1400a01b8(&local_88,uVar7);
    if (plVar14 != &local_88) {
      FUN_140016e5c(plVar14);
      *plVar14 = local_88;
      plVar14[1] = lStack_80;
      plVar14[2] = local_78;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
    }
    FUN_140016e5c(&local_88);
    puVar5 = (undefined4 *)plVar14[1];
    for (puVar11 = (undefined4 *)*plVar14; puVar11 != puVar5; puVar11 = puVar11 + 1) {
      uVar7 = FUN_14008aab0(lVar1);
      *puVar11 = uVar7;
    }
  }
  local_b0[0] = 0x1d;
  FUN_140089bf6(param_2,&local_88);
  lVar12 = local_90;
  if ((longlong *)(local_90 + 0x100) != &local_88) {
    FUN_140016e5c();
    *(longlong *)(lVar12 + 0x100) = local_88;
    *(longlong *)(lVar12 + 0x108) = lStack_80;
    *(longlong *)(lVar12 + 0x110) = local_78;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
  }
  FUN_140016e5c(&local_88);
  lVar12 = 0x118;
  do {
    FUN_14009aeee(param_2,&local_88);
    FUN_14000ff1e(local_90 + lVar12,&local_88);
    FUN_140005242(&local_88);
    lVar12 = lVar12 + 0x20;
  } while (lVar12 != 0xd98);
  uVar7 = FUN_14008ab9c(lVar1);
  if ((char)uVar7 != -0x6f) {
    FUN_1400992c3(&local_f0,uVar7);
    local_128 = 0x1b00000102;
    local_120 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_118 = "bool __cdecl CommonEvent::init(FileCoder &)";
    FUN_140087f79(local_110);
    FUN_14000ed8c(&local_d0,local_110,"CommonEvent data indicator not 0x91 (got ");
    FUN_140018470(local_b0);
    FUN_14000ed8c(&local_88,local_b0,")");
    FUN_1400886d4(local_1d0,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_1d0,&DAT_1401a5720);
  }
  FUN_14009aeee(param_2,&local_88);
  FUN_14000ff1e(local_90 + 0xd98,&local_88);
  FUN_140005242(&local_88);
  uVar8 = FUN_14008ab9c(lVar1);
  lVar12 = local_90;
  if ((char)uVar8 != -0x6f) {
    if ((uVar8 & 0xff) != 0x92) {
      FUN_1400992c3(&local_f0,uVar8);
      local_128 = 0x1b0000010b;
      local_120 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
      ;
      local_118 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_140087f79(local_110);
      FUN_14000ed8c(&local_d0,local_110,"CommonEvent data indicator not 0x92 or 0x91 (got ");
      FUN_140018470(local_b0);
      FUN_14000ed8c(&local_88,local_b0,")");
      FUN_1400886d4(local_198,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_198,&DAT_1401a5720);
    }
    *(undefined1 *)(local_90 + 0xddc) = 1;
    FUN_14009aeee(param_2,&local_88);
    FUN_14000ff1e(lVar12 + 0xdb8,&local_88);
    FUN_140005242(&local_88);
    uVar7 = FUN_14008aab0(lVar1);
    *(undefined4 *)(lVar12 + 0xdd8) = uVar7;
    uVar7 = FUN_14008ab9c(lVar1);
    if ((char)uVar7 != -0x6e) {
      FUN_1400992c3(&local_f0,uVar7);
      local_128 = 0x1b00000114;
      local_120 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
      ;
      local_118 = "bool __cdecl CommonEvent::init(FileCoder &)";
      FUN_140087f79(local_110);
      FUN_14000ed8c(&local_d0,local_110,"CommonEvent data indicator not 0x92 (got ");
      FUN_140018470(local_b0);
      FUN_14000ed8c(&local_88,local_b0,")");
      FUN_1400886d4(local_160,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_160,&DAT_1401a5720);
    }
  }
  return 1;
}

