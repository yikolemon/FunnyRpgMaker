/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cbb38 */

void FUN_1800cbb38(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong **local_a8;
  longlong **local_a0;
  undefined8 **local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 **local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 **local_48;
  longlong *plStack_40;
  longlong local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804022d8);
  FUN_180022937(&local_78);
  puVar4 = (undefined4 *)FUN_1800188ac(local_78 + 8);
  *puVar4 = 5;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_180002d74();
  local_2a = 1;
  FUN_180001e92(&local_c8,"Game/FunnyGamePlayer.log");
  local_29 = 0;
  FUN_1800cc381(&local_98,&local_c8,&local_108);
  local_68 = &local_98;
  if (7 < local_80) {
    local_68 = local_98;
  }
  local_60 = local_88;
  FUN_18000560c(&local_58,&local_68,&local_e8);
  FUN_1800cc2b3(&local_68,&local_58);
  FUN_180001ef2(&local_58);
  FUN_180001e4c(&local_98);
  local_29 = 0;
  FUN_180001ef2(&local_c8);
  local_2a = 0;
  puVar4 = (undefined4 *)FUN_1800188ac(local_68 + 1);
  *puVar4 = 4;
  FUN_180001e92(&local_58,"FunnyGamePlayer");
  FUN_1800cc575(&local_98,&local_58);
  FUN_180001ef2(&local_58);
  plStack_40 = local_60;
  plStack_50 = local_70;
  if ((undefined8 ***)local_98 == (undefined8 ***)0x0) {
    if (local_70 == (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_58 = local_78;
    if (local_60 == (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_48 = local_68;
    local_e8 = &local_58;
    local_e0 = &local_38;
    local_a8 = (longlong **)&local_48;
    FUN_1800cc6b6(&local_c8,"FunnyGamePlayer");
    lVar5 = 0;
    do {
      local_38 = lVar5;
      FUN_18004363a((longlong)&local_48 + lVar5);
      lVar5 = local_38 + -0x10;
    } while (lVar5 != -0x20);
    puVar4 = (undefined4 *)FUN_1800188ac(local_c8 + 0x40);
    LOCK();
    *puVar4 = 4;
    UNLOCK();
    if (local_c0 == (longlong *)0x0) {
      plStack_d0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
      plStack_d0 = local_c0;
    }
    local_d8 = local_c8;
    FUN_1800cc797(&local_d8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417808) {
      FUN_18023d500(&DAT_180417808);
      if (DAT_180417808 == -1) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
    }
    FUN_1800cef3c(&DAT_180417610,1);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 8))(local_c0);
        }
      }
    }
  }
  else {
    if (local_70 == (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_58 = local_78;
    if (local_60 == (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_48 = local_68;
    local_a0 = (longlong **)&local_48;
    FUN_1800cc96c(local_98 + 5,&local_58,2);
    lVar5 = 0;
    do {
      local_38 = lVar5;
      FUN_18004363a((longlong)&local_48 + lVar5);
      lVar5 = local_38 + -0x10;
    } while (lVar5 != -0x20);
    puVar4 = (undefined4 *)FUN_1800188ac(local_98 + 8);
    LOCK();
    *puVar4 = 4;
    UNLOCK();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 8))(local_90);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 8))(local_70);
      }
    }
  }
  FUN_18023d6e0(&DAT_1804022d8);
  return;
}

