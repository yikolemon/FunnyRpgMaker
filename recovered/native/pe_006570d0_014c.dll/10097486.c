/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10097486 */

int * FUN_10097486(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 local_b8 [36];
  uint local_94 [2];
  char *local_8c;
  char *local_88;
  char *local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined8 local_44;
  undefined4 local_3c;
  char local_29;
  int local_28;
  byte local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_b8;
  local_18 = &LAB_100c3ae0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = 0;
  local_48 = param_2 + 0x10;
  local_22 = FUN_10077c4c();
  local_28 = FUN_10077b66();
  local_54 = 0;
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_14 = 1;
  local_22 = local_22 - 1;
  for (local_64 = 0; (byte)local_64 < local_22;
      local_64 = CONCAT31((int3)((uint)local_64 >> 8),(char)local_64 + '\x01')) {
    uVar4 = FUN_10077b66();
    local_44 = CONCAT44(local_44._4_4_,uVar4);
    if (local_50 == local_4c) {
      FUN_10051662(local_50,&local_44);
    }
    else {
      *local_50 = uVar4;
      local_50 = local_50 + 1;
    }
  }
  local_21 = FUN_10077c4c();
  local_22 = FUN_10077c4c();
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_64._1_3_ = 0;
  for (local_64._0_1_ = 0; local_14 = 2, (byte)local_64 < local_22;
      local_64._0_1_ = (byte)local_64 + 1) {
    FUN_1008a8f0(&local_44);
    local_14 = 5;
    FUN_1008b09c(&local_44);
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  local_29 = FUN_10077c4c();
  if (local_29 != '\0') {
    if (local_29 != '\x01') {
      local_94[0] = 0x2d8;
      local_94[1] = 0x6d;
      local_8c = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
      ;
      local_88 = "static CommandShPtr::Command __cdecl Command::Command::Init(FileCoder &)";
      FUN_10072232(&local_7c,local_94);
      local_14 = 3;
      local_84 = "{}Unexpected command terminator: {:#02x} (expected {:#02x} or 0x01)";
      uStack_80 = 0x43;
      FUN_10097c90(&local_44,0x431034968c,&local_7c,&local_29,&DAT_10295cfc);
      local_14 = 4;
      FUN_1006f6d8(&local_44);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_b8,&DAT_10367ca8);
    }
    FUN_10097b9e(&local_44,&local_28,&local_54,&local_60,&local_21,param_2);
    local_14 = 6;
    FUN_1002265a(&local_44);
    local_14 = 0xffffffff;
    piVar2 = local_44._4_4_;
    if (local_44._4_4_ != (int *)0x0) {
      LOCK();
      piVar1 = local_44._4_4_ + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_44._4_4_)();
        LOCK();
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
    goto code_r0x10097629;
  }
  if (local_28 < 0x96) {
    if (local_28 == 0x79) {
      FUN_10097fc3(&local_44,&local_28,&local_54,&local_60,&local_21);
      local_14 = 0xb;
      FUN_1002265a(&local_44);
      local_14 = 0xffffffff;
      piVar2 = local_44._4_4_;
      if (local_44._4_4_ != (int *)0x0) {
        LOCK();
        piVar1 = local_44._4_4_ + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_44._4_4_)();
          LOCK();
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      goto code_r0x10097629;
    }
    if (local_28 == 0x7a) {
      FUN_10097ed4(&local_44,&local_28,&local_54,&local_60,&local_21);
      local_14 = 10;
      FUN_1002265a(&local_44);
      local_14 = 0xffffffff;
      piVar2 = local_44._4_4_;
      if (local_44._4_4_ != (int *)0x0) {
        LOCK();
        piVar1 = local_44._4_4_ + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_44._4_4_)();
          LOCK();
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      goto code_r0x10097629;
    }
  }
  else {
    if (local_28 == 1000) {
      FUN_10097de5(&local_44,&local_28,&local_54,&local_60,&local_21);
      local_14 = 9;
      FUN_1002265a(&local_44);
      local_14 = 0xffffffff;
      piVar2 = local_44._4_4_;
      if (local_44._4_4_ != (int *)0x0) {
        LOCK();
        piVar1 = local_44._4_4_ + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_44._4_4_)();
          LOCK();
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      goto code_r0x10097629;
    }
    if (local_28 == 0xc9) {
      FUN_10097b9e(&local_44,&local_28,&local_54,&local_60,&local_21,param_2);
      local_14 = 8;
      FUN_1002265a(&local_44);
      local_14 = 0xffffffff;
      piVar2 = local_44._4_4_;
      if (local_44._4_4_ != (int *)0x0) {
        LOCK();
        piVar1 = local_44._4_4_ + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_44._4_4_)();
          LOCK();
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      goto code_r0x10097629;
    }
    if (local_28 == 0x96) {
      FUN_10097cf6(&local_44,&local_28,&local_54,&local_60,&local_21);
      local_14 = 7;
      FUN_1002265a(&local_44);
      local_14 = 0xffffffff;
      piVar2 = local_44._4_4_;
      if (local_44._4_4_ != (int *)0x0) {
        LOCK();
        piVar1 = local_44._4_4_ + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_44._4_4_)();
          LOCK();
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      goto code_r0x10097629;
    }
  }
  FUN_100980b2(&local_44,&local_28,&local_54,&local_60,&local_21);
  local_14 = 0xc;
  FUN_1002265a(&local_44);
  local_14 = 0xffffffff;
  piVar2 = local_44._4_4_;
  if (local_44._4_4_ != (int *)0x0) {
    LOCK();
    piVar1 = local_44._4_4_ + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_44._4_4_)();
      LOCK();
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
code_r0x10097629:
  if (DAT_1039cbb8 == '\x01') {
    local_14 = 2;
    bVar3 = FUN_10077c4c();
    local_44 = 0;
    local_3c = 0;
    local_14 = 0xd;
    if (bVar3 != 0) {
      local_94[0] = (uint)bVar3;
      FUN_10076b48(&local_7c,local_94);
      local_14 = 0xe;
      FUN_10004eae();
      local_44 = CONCAT44(uStack_78,local_7c);
      local_3c = local_74;
      local_7c = 0;
      uStack_78 = 0;
      local_74 = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    if ((undefined8 *)(*param_1 + 0x24) != &local_44) {
      local_14 = 0xd;
      FUN_1007798c((int)local_44,(int)local_44._4_4_ - (int)local_44);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  FUN_1006dc58();
  FUN_10004eae();
  ExceptionList = local_1c;
  return param_1;
}

