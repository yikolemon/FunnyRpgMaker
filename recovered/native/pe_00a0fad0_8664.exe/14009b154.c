/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009b154 */

longlong * FUN_14009b154(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 local_168 [56];
  undefined8 local_130;
  char *local_128;
  char *local_120;
  undefined1 local_118 [32];
  ulonglong local_f8 [4];
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
  longlong *local_50;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2 + 0x10;
  local_50 = param_1;
  cVar5 = FUN_14008ab9c(lVar1);
  local_48 = FUN_14008aab0(lVar1);
  local_98 = 0;
  puStack_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  for (bVar7 = 0; bVar7 < (byte)(cVar5 - 1U); bVar7 = bVar7 + 1) {
    uVar6 = FUN_14008aab0(lVar1);
    local_78 = CONCAT44(local_78._4_4_,uVar6);
    if (puStack_90 == local_88) {
      FUN_14009c238(&local_98,puStack_90,&local_78);
    }
    else {
      *puStack_90 = uVar6;
      puStack_90 = puStack_90 + 1;
    }
  }
  local_41 = FUN_14008ab9c(lVar1);
  bVar7 = FUN_14008ab9c(lVar1);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  for (bVar8 = 0; bVar8 < bVar7; bVar8 = bVar8 + 1) {
    FUN_14009aeee(param_2,&local_78);
    FUN_1400436a6(&local_b8,&local_78);
    FUN_140005242(&local_78);
  }
  cVar5 = FUN_14008ab9c(lVar1);
  if (cVar5 != '\0') {
    if (cVar5 != '\x01') {
      FUN_14002577f(&local_d8);
      local_130 = 0x1a000002d3;
      local_128 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Command.hpp"
      ;
      local_120 = "static CommandShPtr::Command __cdecl Command::Command::Init(FileCoder &)";
      FUN_140087f79(local_118);
      FUN_14000ed8c(local_f8,local_118,"Unexpected command terminator: ");
      FUN_140018470(&local_78);
      FUN_1400886d4(local_168,&local_78);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_168,&DAT_1401a5720);
    }
    FUN_14009bc41(&local_78,&local_48,&local_98,&local_b8,&local_41,param_2);
    FUN_14004291e(local_50,&local_78);
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
    goto code_r0x00014009b308;
  }
  if (local_48 < 0x96) {
    if (local_48 == 0x79) {
      FUN_14009c03e(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_14004291e(local_50,&local_78);
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
      goto code_r0x00014009b308;
    }
    if (local_48 == 0x7a) {
      FUN_14009bf41(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_14004291e(local_50,&local_78);
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
      goto code_r0x00014009b308;
    }
  }
  else {
    if (local_48 == 1000) {
      FUN_14009be44(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_14004291e(local_50,&local_78);
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
      goto code_r0x00014009b308;
    }
    if (local_48 == 0xc9) {
      FUN_14009bc41(&local_78,&local_48,&local_98,&local_b8,&local_41,param_2);
      FUN_14004291e(local_50,&local_78);
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
      goto code_r0x00014009b308;
    }
    if (local_48 == 0x96) {
      FUN_14009bd47(&local_78,&local_48,&local_98,&local_b8,&local_41);
      FUN_14004291e(local_50,&local_78);
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
      goto code_r0x00014009b308;
    }
  }
  FUN_14009c13b(&local_78,&local_48,&local_98,&local_b8,&local_41);
  FUN_14004291e(local_50,&local_78);
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
code_r0x00014009b308:
  if (DAT_1401cc8c4 == '\x01') {
    bVar7 = FUN_14008ab9c(lVar1);
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    if (bVar7 != 0) {
      local_f8[0] = (ulonglong)bVar7;
      FUN_140089bf6(param_2,&local_d8);
      FUN_140016e5c(&local_78);
      local_78 = local_d8;
      plStack_70 = plStack_d0;
      local_68 = local_c8;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      local_c8 = 0;
      FUN_140016e5c(&local_d8);
    }
    if ((longlong *)(*local_50 + 0x48) != &local_78) {
      FUN_1400587f4((longlong *)(*local_50 + 0x48),local_78,(longlong)plStack_70 - local_78);
    }
    FUN_140016e5c(&local_78);
  }
  FUN_140041304(&local_b8);
  FUN_140016e5c(&local_98);
  return local_50;
}

