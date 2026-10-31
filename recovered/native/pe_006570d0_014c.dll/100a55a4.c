/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a55a4 */

undefined4 __thiscall FUN_100a55a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 local_10c [36];
  undefined1 local_e8 [36];
  undefined1 local_c4 [36];
  char *local_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined4 uStack_94;
  char *local_90;
  undefined4 uStack_8c;
  int local_88;
  int *local_84;
  char *local_80;
  char *local_7c;
  undefined4 local_78 [6];
  undefined4 *local_60;
  int local_5c;
  uint local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint local_38;
  uint local_34 [2];
  char *local_2c;
  char *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_10c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4220;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_3;
  local_5c = param_2 + 0x10;
  uVar6 = FUN_10077b66();
  param_1[1] = uVar6;
  FUN_1008a8f0(&local_50);
  local_14 = 0;
  FUN_100128b2(&local_50);
  local_14 = 0xffffffff;
  FUN_10001134();
  uVar4 = FUN_10077c4c();
  *(undefined1 *)(param_1 + 8) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)param_1 + 0x21) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)param_1 + 0x22) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)param_1 + 0x23) = uVar4;
  local_78[0] = 0x25;
  local_24 = param_1;
  FUN_10076b48(&local_50,local_78);
  puVar3 = local_24;
  local_14 = 1;
  if (local_24 + 9 != &local_50) {
    FUN_10004eae();
    *(ulonglong *)(puVar3 + 9) = CONCAT44(uStack_4c,local_50);
    puVar3[0xb] = local_48;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  local_78[0] = 4;
  FUN_10076b48(&local_50,local_78);
  puVar3 = local_24;
  local_14 = 2;
  if (local_24 + 0xc != &local_50) {
    FUN_10004eae();
    *(ulonglong *)(puVar3 + 0xc) = CONCAT44(uStack_4c,local_50);
    puVar3[0xe] = local_48;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  uVar4 = FUN_10077c4c();
  puVar3 = local_24;
  *(undefined1 *)(local_24 + 0xf) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)puVar3 + 0x3d) = uVar4;
  local_54 = (undefined4 *)FUN_10077b66();
  local_60 = puVar3 + 0x10;
  local_58 = 0;
  while( true ) {
    local_38 = local_58;
    if (local_54 <= local_58) break;
    local_34[0] = local_34[0] & 0xffffff00;
    local_34[1] = 0;
    local_2c = (char *)0x0;
    local_28 = (char *)0x0;
    local_14 = 5;
    cVar5 = FUN_100985b4(param_2);
    if (cVar5 == '\0') {
      local_88 = 0x43;
      local_84 = (int *)0x5c;
      local_80 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_7c = "bool __thiscall Page::Init(FileCoder &, uint32_t)";
      FUN_10072232(local_78,&local_88);
      local_14 = 6;
      local_a0 = "{}RouteCommand initialization failed at index {}";
      uStack_9c = 0x30;
      FUN_1008abf0(&local_50,0x301032f75e,local_78,&local_38);
      local_14 = 7;
      FUN_1006f6d8(&local_50);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_10c,&DAT_10367ca8);
    }
    FUN_1009958e(local_34);
    local_14 = 0xffffffff;
    FUN_10004eae();
    local_58 = local_58 + 1;
  }
  local_58 = FUN_10077b66();
  local_54 = local_24 + 0x13;
  local_38 = 0;
  while( true ) {
    if (local_58 <= local_38) break;
    FUN_10097486(&local_88,param_2);
    local_14 = 8;
    if (*(int *)(local_88 + 0x10) == -1) {
      local_34[0] = 0x4d;
      local_34[1] = 0x57;
      local_2c = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
      ;
      local_28 = "bool __thiscall Page::Init(FileCoder &, uint32_t)";
      FUN_10072232(local_78,local_34);
      local_14 = 9;
      local_98 = "{}Command initialization failed at index {}";
      uStack_94 = 0x2b;
      FUN_1008abf0(&local_50,0x2b1032f732,local_78,&local_38);
      local_14 = 10;
      FUN_1006f6d8(&local_50);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_e8,&DAT_10367ca8);
    }
    FUN_1009af4c(&local_88);
    piVar2 = local_84;
    local_14 = 0xffffffff;
    if (local_84 != (int *)0x0) {
      LOCK();
      piVar1 = local_84 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_84)();
        LOCK();
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
    local_38 = local_38 + 1;
  }
  uVar6 = FUN_10077b66();
  puVar3 = local_24;
  local_24[0x16] = uVar6;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)(puVar3 + 0x17) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)puVar3 + 0x5d) = uVar4;
  uVar4 = FUN_10077c4c();
  *(undefined1 *)((int)puVar3 + 0x5e) = uVar4;
  if (3 < (uint)puVar3[0x16]) {
    uVar4 = FUN_10077c4c();
    *(undefined1 *)((int)puVar3 + 0x5f) = uVar4;
  }
  cVar5 = FUN_10077c4c();
  local_88 = CONCAT31(local_88._1_3_,cVar5);
  if (cVar5 == 'z') {
    ExceptionList = local_1c;
    return 1;
  }
  local_34[0] = 0x5d;
  local_34[1] = 0x56;
  local_2c = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_28 = "bool __thiscall Page::Init(FileCoder &, uint32_t)";
  FUN_10072232(local_78,local_34);
  local_14 = 0xb;
  local_90 = "{}Page terminator not 0x7A (found: {:#02x})";
  uStack_8c = 0x2b;
  FUN_100963a5(&local_50,0x2b10347573,local_78,&local_88);
  local_14 = 0xc;
  FUN_1006f6d8(&local_50);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_c4,&DAT_10367ca8);
}

