/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009693c */

undefined4 __thiscall FUN_1009693c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 local_188 [36];
  undefined1 local_164 [36];
  undefined1 local_140 [36];
  undefined1 local_11c [36];
  undefined1 local_f8 [36];
  undefined1 local_d4 [36];
  undefined4 local_b0;
  undefined4 local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined4 uStack_94;
  char *local_90;
  undefined4 uStack_8c;
  char *local_88;
  undefined4 uStack_84;
  char *local_80;
  undefined4 uStack_7c;
  char *local_78;
  undefined4 uStack_74;
  int local_70;
  int local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60 [6];
  int *local_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_188;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3ad0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_21 = FUN_10077c4c();
  if (local_21 != -0x72) {
    local_b0 = 0xcf;
    local_ac = 0x60;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
    FUN_10072232(local_60,&local_b0);
    local_14 = 0;
    local_a0 = "{}CommonEvent header indicator not 0x8E (got {:#02x})";
    uStack_9c = 0x35;
    FUN_100963a5(&local_40,"{}CommonEvent header indicator not 0x8E (got {:#02x})",0x35,local_60,
                 &local_21);
    local_14 = 1;
    FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_188,&DAT_10367ca8);
  }
  uVar7 = FUN_10077b66();
  *(undefined4 *)(param_1 + 8) = uVar7;
  local_70 = param_2 + 0x10;
  uVar7 = FUN_10077b66();
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  local_60[0] = 7;
  local_28 = param_1;
  FUN_10076b48(&local_40,local_60);
  iVar8 = local_28;
  local_14 = 2;
  if ((int *)(local_28 + 0x10) != &local_40) {
    FUN_10004eae();
    *(ulonglong *)(iVar8 + 0x10) = CONCAT44(iStack_3c,local_40);
    *(int *)(iVar8 + 0x18) = local_38;
    local_40 = 0;
    iStack_3c = 0;
    local_38 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_1008a8f0(&local_40);
  iVar8 = local_28;
  local_14 = 3;
  FUN_100128b2(&local_40);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_48 = (int *)FUN_10077b66();
  local_44 = (int *)(iVar8 + 0x34);
  for (local_64 = (int *)0x0; local_64 < local_48; local_64 = (int *)((int)local_64 + 1)) {
    FUN_10097486(&local_6c,param_2);
    local_14 = 4;
    if (*(int *)(local_6c + 0x10) == -1) {
      local_b0 = 0xdd;
      local_ac = 0x65;
      local_a8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
      FUN_10072232(local_60,&local_b0);
      local_14 = 5;
      local_98 = "{}Initialization of Command #{} in CommonEvent #{} failed";
      uStack_94 = 0x39;
      FUN_1007d8ca(&local_40,"{}Initialization of Command #{} in CommonEvent #{} failed",0x39,
                   local_60,&local_64,local_28 + 4);
      local_14 = 6;
      FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_164,&DAT_10367ca8);
    }
    FUN_1009af4c(&local_6c);
    piVar10 = local_68;
    local_14 = 0xffffffff;
    if (local_68 != (int *)0x0) {
      LOCK();
      piVar1 = local_68 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_68)();
        LOCK();
        piVar1 = piVar10 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*piVar10 + 4))();
        }
      }
    }
  }
  FUN_1008a8f0(&local_40);
  local_14 = 7;
  FUN_100128b2(&local_40);
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_1008a8f0(&local_40);
  local_14 = 8;
  FUN_100128b2(&local_40);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_21 = FUN_10077c4c();
  iVar8 = local_28;
  if (local_21 != -0x71) {
    local_b0 = 0xe7;
    local_ac = 0x5e;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
    FUN_10072232(local_60,&local_b0);
    local_14 = 9;
    local_90 = "{}CommonEvent data indicator not 0x8F (got {:#02x})";
    uStack_8c = 0x33;
    FUN_100963a5(&local_40,"{}CommonEvent data indicator not 0x8F (got {:#02x})",0x33,local_60,
                 &local_21);
    local_14 = 10;
    FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_140,&DAT_10367ca8);
  }
  uVar7 = FUN_10077b66();
  FUN_1009b266(uVar7,&local_40);
  iVar2 = *(int *)(iVar8 + 0x74);
  iVar5 = local_28;
  for (iVar8 = *(int *)(iVar8 + 0x70); local_28 = iVar5, iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
    FUN_1008a8f0(&local_40);
    local_14 = 0xb;
    FUN_100128b2(&local_40);
    local_14 = 0xffffffff;
    FUN_10001134();
    iVar5 = local_28;
  }
  uVar7 = FUN_10077b66();
  FUN_10077646(uVar7,&local_40);
  puVar3 = *(undefined1 **)(iVar5 + 0x80);
  iVar8 = local_28;
  for (puVar9 = *(undefined1 **)(iVar5 + 0x7c); local_28 = iVar8, puVar9 != puVar3;
      puVar9 = puVar9 + 1) {
    uVar6 = FUN_10077c4c();
    *puVar9 = uVar6;
    iVar8 = local_28;
  }
  uVar7 = FUN_10077b66();
  FUN_1009b484(uVar7,&local_40);
  piVar10 = *(int **)(iVar8 + 0x88);
  local_44 = *(int **)(iVar8 + 0x8c);
  if (piVar10 != local_44) {
    do {
      uVar7 = FUN_10077b66();
      local_40 = 0;
      iStack_3c = 0;
      local_38 = 0;
      FUN_1009b73a(uVar7);
      local_14 = 0xc;
      if (piVar10 != &local_40) {
        FUN_1006dc58();
        *piVar10 = local_40;
        piVar10[1] = iStack_3c;
        piVar10[2] = local_38;
        local_40 = 0;
        iStack_3c = 0;
        local_38 = 0;
      }
      local_14 = 0xffffffff;
      FUN_1006dc58();
      iVar2 = piVar10[1];
      local_48 = piVar10;
      for (iVar8 = *piVar10; iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
        FUN_1008a8f0(&local_40);
        local_14 = 0xd;
        FUN_100128b2(&local_40);
        local_14 = 0xffffffff;
        FUN_10001134();
      }
      piVar10 = local_48 + 3;
    } while (piVar10 != local_44);
  }
  iVar8 = local_28;
  uVar7 = FUN_10077b66();
  FUN_1009b7f0(uVar7,&local_40);
  piVar10 = *(int **)(iVar8 + 0x94);
  local_44 = *(int **)(iVar8 + 0x98);
  if (piVar10 != local_44) {
    do {
      uVar7 = FUN_10077b66();
      local_40 = 0;
      iStack_3c = 0;
      local_38 = 0;
      FUN_1009baa6(uVar7);
      local_14 = 0xe;
      if (piVar10 != &local_40) {
        FUN_10004eae();
        *piVar10 = local_40;
        piVar10[1] = iStack_3c;
        piVar10[2] = local_38;
        local_40 = 0;
        iStack_3c = 0;
        local_38 = 0;
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
      puVar4 = (undefined4 *)piVar10[1];
      local_48 = piVar10;
      for (puVar11 = (undefined4 *)*piVar10; puVar11 != puVar4; puVar11 = puVar11 + 1) {
        uVar7 = FUN_10077b66();
        *puVar11 = uVar7;
      }
      piVar10 = local_48 + 3;
    } while (piVar10 != local_44);
  }
  local_60[0] = 0x1d;
  FUN_10076b48(&local_40,local_60);
  iVar8 = local_28;
  local_14 = 0xf;
  if ((int *)(local_28 + 0xa0) != &local_40) {
    FUN_10004eae();
    *(ulonglong *)(iVar8 + 0xa0) = CONCAT44(iStack_3c,local_40);
    *(int *)(iVar8 + 0xa8) = local_38;
    local_40 = 0;
    iStack_3c = 0;
    local_38 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  iVar8 = 0xac;
  do {
    FUN_1008a8f0(&local_40);
    local_14 = 0x10;
    FUN_100128b2(&local_40);
    local_14 = 0xffffffff;
    FUN_10001134();
    iVar8 = iVar8 + 0x18;
  } while (iVar8 != 0xa0c);
  local_21 = FUN_10077c4c();
  if (local_21 != -0x6f) {
    local_b0 = 0x107;
    local_ac = 0x5e;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
    FUN_10072232(local_60,&local_b0);
    local_14 = 0x11;
    local_88 = "{}CommonEvent data indicator not 0x91 (got {:#02x})";
    uStack_84 = 0x33;
    FUN_100963a5(&local_40,"{}CommonEvent data indicator not 0x91 (got {:#02x})",0x33,local_60,
                 &local_21);
    local_14 = 0x12;
    FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_11c,&DAT_10367ca8);
  }
  FUN_1008a8f0(&local_40);
  local_14 = 0x13;
  FUN_100128b2(&local_40);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_21 = FUN_10077c4c();
  iVar8 = local_28;
  if (local_21 != -0x6f) {
    if (local_21 != -0x6e) {
      local_b0 = 0x110;
      local_ac = 0x66;
      local_a8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
      FUN_10072232(local_60,&local_b0);
      local_14 = 0x14;
      local_80 = "{}CommonEvent data indicator not 0x92 or 0x91 (got {:#02x})";
      uStack_7c = 0x3b;
      FUN_100963a5(&local_40,"{}CommonEvent data indicator not 0x92 or 0x91 (got {:#02x})",0x3b,
                   local_60,&local_21);
      local_14 = 0x15;
      FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_f8,&DAT_10367ca8);
    }
    *(undefined1 *)(local_28 + 0xa40) = 1;
    FUN_1008a8f0(&local_40);
    local_14 = 0x16;
    FUN_100128b2(&local_40);
    local_14 = 0xffffffff;
    FUN_10001134();
    uVar7 = FUN_10077b66();
    *(undefined4 *)(iVar8 + 0xa3c) = uVar7;
    local_21 = FUN_10077c4c();
    if (local_21 != -0x6e) {
      local_b0 = 0x119;
      local_ac = 0x5e;
      local_a8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_a4 = "bool __thiscall CommonEvent::init(FileCoder &)";
      FUN_10072232(local_60,&local_b0);
      local_14 = 0x17;
      local_78 = "{}CommonEvent data indicator not 0x92 (got {:#02x})";
      uStack_74 = 0x33;
      FUN_100963a5(&local_40,"{}CommonEvent data indicator not 0x92 (got {:#02x})",0x33,local_60,
                   &local_21);
      local_14 = 0x18;
      FUN_1006f6d8(&local_40);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_d4,&DAT_10367ca8);
    }
  }
  ExceptionList = local_1c;
  return 1;
}

