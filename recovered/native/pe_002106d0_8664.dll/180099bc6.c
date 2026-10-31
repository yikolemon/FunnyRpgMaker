/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180099bc6 */

longlong * FUN_180099bc6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 local_138 [56];
  char *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  char *local_e8;
  char *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 *puStack_90;
  undefined4 *local_88;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_58;
  char local_49;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2 + 0x10;
  local_58 = param_1;
  cVar5 = FUN_180078732(lVar1);
  local_48 = FUN_180078646(lVar1);
  local_98 = 0;
  puStack_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  for (bVar7 = 0; bVar7 < (byte)(cVar5 - 1U); bVar7 = bVar7 + 1) {
    uVar6 = FUN_180078646(lVar1);
    local_78 = CONCAT44(local_78._4_4_,uVar6);
    if (puStack_90 == local_88) {
      FUN_18009ab08(&local_98,puStack_90,&local_78);
    }
    else {
      *puStack_90 = uVar6;
      puStack_90 = puStack_90 + 1;
    }
  }
  local_41 = FUN_180078732(lVar1);
  bVar7 = FUN_180078732(lVar1);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  for (bVar8 = 0; bVar8 < bVar7; bVar8 = bVar8 + 1) {
    FUN_18008b8a0(param_2,&local_78);
    FUN_18008c110(&local_b8,&local_78);
    FUN_1800010ec(&local_78);
  }
  local_49 = FUN_180078732(lVar1);
  if (local_49 != '\0') {
    if (local_49 != '\x01') {
      local_f0 = 0x6d000002d8;
      local_e8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
      ;
      local_e0 = "static CommandShPtr::Command __cdecl Command::Command::Init(FileCoder &)";
      FUN_180072a20(&local_d8);
      local_100 = "{}Unexpected command terminator: {:#02x} (expected {:#02x} or 0x01)";
      local_f8 = 0x43;
      FUN_18009a587(&local_78,&local_100,&local_d8,&local_49,&DAT_1802b989c);
      FUN_18006f972(local_138,&local_78);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_138,&DAT_1803a63b0);
    }
    FUN_18009a481(&local_78,&local_48,&local_98,&local_b8,&local_41,param_2);
    FUN_180022ada(local_58,&local_78);
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    goto code_r0x000180099d5a;
  }
  if (local_48 < 0x96) {
    if (local_48 == 0x79) {
      FUN_18009a90e(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_180022ada(local_58,&local_78);
      plVar4 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto code_r0x000180099d5a;
    }
    if (local_48 == 0x7a) {
      FUN_18009a811(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_180022ada(local_58,&local_78);
      plVar4 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto code_r0x000180099d5a;
    }
  }
  else {
    if (local_48 == 1000) {
      FUN_18009a714(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_180022ada(local_58,&local_78);
      plVar4 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto code_r0x000180099d5a;
    }
    if (local_48 == 0xc9) {
      FUN_18009a481(&local_78,&local_48,&local_98,&local_b8,&local_41,param_2);
      FUN_180022ada(local_58,&local_78);
      plVar4 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto code_r0x000180099d5a;
    }
    if (local_48 == 0x96) {
      FUN_18009a617(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_180022ada(local_58,&local_78);
      plVar4 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto code_r0x000180099d5a;
    }
  }
  FUN_18009aa0b(&local_78,&local_48,&local_98,&local_b8,&local_41);
  FUN_180022ada(local_58,&local_78);
  plVar4 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
code_r0x000180099d5a:
  if (DAT_180417ca0 == '\x01') {
    bVar7 = FUN_180078732(lVar1);
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    if (bVar7 != 0) {
      local_f0 = (ulonglong)bVar7;
      FUN_18007750c(param_2,&local_d8);
      FUN_180004cea(&local_78);
      local_78 = local_d8;
      plStack_70 = plStack_d0;
      local_68 = local_c8;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      local_c8 = 0;
      FUN_180004cea(&local_d8);
    }
    if ((longlong *)(*local_58 + 0x48) != &local_78) {
      FUN_180078422((longlong *)(*local_58 + 0x48),local_78,(longlong)plStack_70 - local_78);
    }
    FUN_180004cea(&local_78);
  }
  FUN_18006db58(&local_b8);
  FUN_180004cea(&local_98);
  return local_58;
}

