/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c7da8 */

undefined8 FUN_1400c7da8(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
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
  char *local_c0;
  longlong local_b0;
  undefined8 local_a8 [4];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = param_3;
  local_b0 = param_2 + 0x10;
  uVar7 = FUN_14008aab0();
  param_1[1] = uVar7;
  FUN_14009aeee(param_2,&local_88);
  FUN_14000ff1e(param_1 + 2,&local_88);
  FUN_140005242(&local_88);
  lVar1 = param_2 + 0x10;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)(param_1 + 10) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x2a) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x2b) = uVar5;
  local_a8[0] = 0x25;
  FUN_140089bf6(param_2,&local_88);
  if ((ulonglong *)(param_1 + 0xc) != &local_88) {
    FUN_140016e5c();
    *(ulonglong *)(param_1 + 0xc) = local_88;
    *(undefined8 *)(param_1 + 0xe) = uStack_80;
    *(undefined8 *)(param_1 + 0x10) = local_78;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_140016e5c(&local_88);
  local_a8[0] = 4;
  FUN_140089bf6(param_2,&local_88);
  if ((ulonglong *)(param_1 + 0x12) != &local_88) {
    FUN_140016e5c();
    *(ulonglong *)(param_1 + 0x12) = local_88;
    *(undefined8 *)(param_1 + 0x14) = uStack_80;
    *(undefined8 *)(param_1 + 0x16) = local_78;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_140016e5c(&local_88);
  lVar1 = param_2 + 0x10;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x61) = uVar5;
  uVar8 = FUN_14008aab0(lVar1);
  for (uVar9 = 0; uVar9 < uVar8; uVar9 = uVar9 + 1) {
    local_88 = local_88 & 0xffffffffffffff00;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    cVar6 = FUN_14009c88e(&local_88,param_2);
    if (cVar6 == '\0') {
      local_d0 = 0x1c00000043;
      local_c8 = (longlong *)0x14016f434;
      local_c0 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
      FUN_140087f79(&local_f0);
      FUN_14000ed8c(local_a8,&local_f0,"RouteCommand initialization failed");
      FUN_1400886d4(local_1d0,local_a8);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_1d0,&DAT_1401a5720);
    }
    FUN_14009dc82(param_1 + 0x1a,&local_88);
    FUN_140016e5c(&uStack_80);
  }
  uVar8 = FUN_14008aab0(param_2 + 0x10);
  for (uVar9 = 0; lVar1 = local_b0, uVar9 < uVar8; uVar9 = uVar9 + 1) {
    FUN_14009b154(&local_d0,param_2);
    if (*(int *)(local_d0 + 0x20) == -1) {
      local_f0 = 0x1c0000004d;
      local_e8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
      ;
      local_e0 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
      FUN_140087f79(local_a8);
      FUN_14000ed8c(&local_88,local_a8,"Command initialization failed");
      FUN_1400886d4(local_198,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_198,&DAT_1401a5720);
    }
    FUN_14009f514(param_1 + 0x20,&local_d0);
    plVar4 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  uVar7 = FUN_14008aab0(local_b0);
  param_1[0x26] = uVar7;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)(param_1 + 0x27) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x9d) = uVar5;
  uVar5 = FUN_14008ab9c(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x9e) = uVar5;
  if (3 < (uint)param_1[0x26]) {
    uVar5 = FUN_14008ab9c(lVar1);
    *(undefined1 *)((longlong)param_1 + 0x9f) = uVar5;
  }
  uVar7 = FUN_14008ab9c(lVar1);
  if ((char)uVar7 == 'z') {
    return 1;
  }
  FUN_1400992c3(&local_f0,uVar7);
  local_128 = 0x1b0000005d;
  local_120 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
  ;
  local_118 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
  FUN_140087f79(local_110);
  FUN_14000ed8c(&local_d0,local_110,"Page terminator not 0x7A (found: ");
  FUN_140018470(local_a8);
  FUN_14000ed8c(&local_88,local_a8,")");
  FUN_1400886d4(local_160,&local_88);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_160,&DAT_1401a5720);
}

