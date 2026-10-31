/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a91a8 */

undefined8 FUN_1800a91a8(undefined4 *param_1,longlong param_2,undefined4 param_3)

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
  undefined1 local_1b8 [56];
  undefined1 local_180 [56];
  undefined1 local_148 [56];
  char *local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  longlong local_c0;
  longlong *local_b8;
  char *local_b0;
  undefined8 local_a8 [4];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64 [9];
  
  local_64[1] = 0xfffffffe;
  local_64[2] = 0xffffffff;
  *param_1 = param_3;
  lVar1 = param_2 + 0x10;
  uVar7 = FUN_180078646(lVar1);
  param_1[1] = uVar7;
  FUN_18008b8a0(param_2,&local_88);
  FUN_180012524(param_1 + 2,&local_88);
  FUN_1800010ec(&local_88);
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)(param_1 + 10) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x2a) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x2b) = uVar5;
  local_a8[0] = 0x25;
  FUN_18007750c(param_2,&local_88);
  if ((ulonglong *)(param_1 + 0xc) != &local_88) {
    FUN_180004cea();
    *(ulonglong *)(param_1 + 0xc) = local_88;
    *(undefined8 *)(param_1 + 0xe) = uStack_80;
    *(undefined8 *)(param_1 + 0x10) = local_78;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_180004cea(&local_88);
  local_a8[0] = 4;
  FUN_18007750c(param_2,&local_88);
  if ((ulonglong *)(param_1 + 0x12) != &local_88) {
    FUN_180004cea();
    *(ulonglong *)(param_1 + 0x12) = local_88;
    *(undefined8 *)(param_1 + 0x14) = uStack_80;
    *(undefined8 *)(param_1 + 0x16) = local_78;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_180004cea(&local_88);
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x61) = uVar5;
  uVar8 = FUN_180078646(lVar1);
  for (uVar9 = 0; local_64[0] = uVar9, uVar9 < uVar8; uVar9 = uVar9 + 1) {
    local_88 = local_88 & 0xffffffffffffff00;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    cVar6 = FUN_18009b19a(&local_88,param_2);
    if (cVar6 == '\0') {
      local_c0 = 0x5c00000043;
      local_b8 = (longlong *)0x18036538e;
      local_b0 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
      FUN_180072a20(&local_e0);
      local_110 = "{}RouteCommand initialization failed at index {}";
      local_108 = 0x30;
      FUN_18008bbb3(local_a8,&local_110,&local_e0,local_64);
      FUN_18006f972(local_1b8,local_a8);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_1b8,&DAT_1803a63b0);
    }
    FUN_18009c45e(param_1 + 0x1a,&local_88);
    FUN_180004cea(&uStack_80);
  }
  uVar8 = FUN_180078646(lVar1);
  for (local_64[0] = 0; local_64[0] < uVar8; local_64[0] = local_64[0] + 1) {
    FUN_180099bc6(&local_c0,param_2);
    if (*(int *)(local_c0 + 0x20) == -1) {
      local_e0 = 0x570000004d;
      local_d8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_d0 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
      FUN_180072a20(local_a8);
      local_100 = "{}Command initialization failed at index {}";
      local_f8 = 0x2b;
      FUN_18008bbb3(&local_88,&local_100,local_a8,local_64);
      FUN_18006f972(local_180,&local_88);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_180,&DAT_1803a63b0);
    }
    FUN_18009dc8a(param_1 + 0x20,&local_c0);
    plVar4 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
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
  uVar7 = FUN_180078646(lVar1);
  param_1[0x26] = uVar7;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)(param_1 + 0x27) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x9d) = uVar5;
  uVar5 = FUN_180078732(lVar1);
  *(undefined1 *)((longlong)param_1 + 0x9e) = uVar5;
  if (3 < (uint)param_1[0x26]) {
    uVar5 = FUN_180078732(lVar1);
    *(undefined1 *)((longlong)param_1 + 0x9f) = uVar5;
  }
  cVar6 = FUN_180078732(lVar1);
  local_c0 = CONCAT71(local_c0._1_7_,cVar6);
  if (cVar6 == 'z') {
    return 1;
  }
  local_e0 = 0x560000005d;
  local_d8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_d0 = "bool __cdecl Page::Init(FileCoder &, uint32_t)";
  FUN_180072a20(local_a8);
  local_f0 = "{}Page terminator not 0x7A (found: {:#02x})";
  local_e8 = 0x2b;
  FUN_1800984d1(&local_88,&local_f0,local_a8,&local_c0);
  FUN_18006f972(local_148,&local_88);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_148,&DAT_1803a63b0);
}

