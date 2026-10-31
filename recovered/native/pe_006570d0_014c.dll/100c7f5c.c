/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c7f5c */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100c7f5c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 ***pppuVar6;
  int *piVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int *local_98;
  undefined1 *local_94;
  int local_90;
  int *local_8c;
  undefined4 *local_78;
  undefined4 **local_74;
  int *local_70;
  undefined4 local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  undefined1 *local_54;
  int local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  undefined1 local_38 [8];
  int local_30;
  int *local_2c;
  int *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 *puVar8;
  
  local_20 = (undefined1 *)&local_98;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc250;
  local_1c = ExceptionList;
  local_a0 = CONCAT44(0x100c7f95,(undefined4)local_a0);
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  local_a0 = CONCAT44(&local_50,0x100c7fa5);
  FUN_1002248c();
  local_14 = 1;
  local_a0 = CONCAT44(local_50 + 4,0x100c7fbd);
  puVar2 = (undefined4 *)FUN_10018d26();
  *puVar2 = 5;
  local_20 = (undefined1 *)local_b8;
  local_28 = local_b8;
  local_78 = &local_b0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_54 = (undefined1 *)&local_98;
  FUN_10002eb6();
  local_14 = 2;
  local_22 = 1;
  FUN_10001f66("Game/FunnyGamePlayer.log");
  piVar7 = local_28;
  local_14 = 3;
  *local_28 = (int)&local_74;
  piVar7[1] = (int)&local_90;
  local_21 = 0;
  FUN_100c8745();
  piVar7 = (int *)local_54;
  local_20 = local_54;
  local_14 = 4;
  pppuVar6 = &local_74;
  if (7 < local_60) {
    pppuVar6 = (undefined4 ***)local_74;
  }
  *(int **)(local_54 + -4) = &local_30;
  *(undefined4 *)((int)piVar7 + -8) = local_64;
  *(undefined4 ****)((int)piVar7 + -0xc) = pppuVar6;
  *(int **)((int)piVar7 + -0x10) = &local_48;
  *(undefined4 *)((int)piVar7 + -0x14) = 0x100c8060;
  FUN_10005a0c();
  local_14 = 5;
  *(int **)((int)piVar7 + -4) = &local_48;
  *(int **)((int)piVar7 + -8) = &local_30;
  *(undefined4 *)((int)piVar7 + -0xc) = 0x100c8078;
  FUN_100c865a();
  local_14 = 0xffffffff;
  *(undefined4 *)((int)piVar7 + -4) = 0x100c808b;
  FUN_10001fee();
  *(undefined4 *)((int)piVar7 + -4) = 0x100c8093;
  FUN_10001f04();
  local_21 = 0;
  *(undefined4 *)((int)piVar7 + -4) = 0x100c80a2;
  FUN_10001fee();
  local_22 = 0;
  local_14 = 6;
  *(int *)((int)piVar7 + -4) = local_30 + 4;
  *(undefined4 *)((int)piVar7 + -8) = 0x100c80bb;
  puVar2 = (undefined4 *)FUN_10018d26();
  *puVar2 = 4;
  *(char **)((int)piVar7 + -4) = "FunnyGamePlayer";
  *(undefined4 *)((int)piVar7 + -8) = 0x100c80d1;
  FUN_10001f66();
  local_14 = 0x11;
  *(int **)((int)piVar7 + -4) = &local_48;
  *(undefined4 ****)((int)piVar7 + -8) = &local_74;
  *(undefined4 *)((int)piVar7 + -0xc) = 0x100c80e6;
  FUN_100c892a();
  local_14 = 0xffffffff;
  *(undefined4 *)((int)piVar7 + -4) = 0x100c80fb;
  FUN_10001fee();
  if ((undefined4 ***)local_74 == (undefined4 ***)0x0) {
    local_44 = (int *)0x0;
    if (local_4c != (int *)0x0) {
      LOCK();
      local_4c[1] = local_4c[1] + 1;
      UNLOCK();
      local_44 = local_4c;
    }
    local_48 = local_50;
    local_3c = (int *)0x0;
    if (local_2c != (int *)0x0) {
      LOCK();
      local_2c[1] = local_2c[1] + 1;
      UNLOCK();
      local_3c = local_2c;
    }
    local_40 = local_30;
    local_5c = &local_40;
    local_14 = 10;
    local_98 = &local_48;
    local_94 = local_38;
    *(int ***)((int)piVar7 + -4) = &local_98;
    *(char **)((int)piVar7 + -8) = "FunnyGamePlayer";
    *(int **)((int)piVar7 + -0xc) = &local_90;
    *(undefined4 *)((int)piVar7 + -0x10) = 0x100c8260;
    FUN_100c8a82();
    iVar4 = 0;
    do {
      local_14 = 9;
      local_28 = (int *)iVar4;
      *(undefined4 *)((int)piVar7 + -4) = 0x100c8285;
      FUN_100431d4();
      iVar4 = (int)local_28 + -8;
    } while (iVar4 != -0x10);
    local_14 = 0xb;
    *(int *)((int)piVar7 + -4) = local_90 + 0x2c;
    *(undefined4 *)((int)piVar7 + -8) = 0x100c82af;
    puVar2 = (undefined4 *)FUN_10018d26();
    local_28 = piVar7;
    LOCK();
    *puVar2 = 4;
    UNLOCK();
    local_20 = (undefined1 *)((int)piVar7 + -8);
    local_54 = (undefined1 *)((int)piVar7 + -8);
    *(undefined4 *)((int)piVar7 + -8) = 0;
    *(undefined4 *)((int)piVar7 + -4) = 0;
    piVar5 = (int *)0x0;
    if (local_8c != (int *)0x0) {
      LOCK();
      local_8c[1] = local_8c[1] + 1;
      UNLOCK();
      piVar5 = local_8c;
    }
    *(int *)((int)piVar7 + -8) = local_90;
    *(int **)((int)piVar7 + -4) = piVar5;
    local_14 = 0xb;
    *(undefined4 *)((int)piVar7 + -0xc) = 0x100c830b;
    FUN_100c8b71();
    piVar7 = local_28;
    local_20 = (undefined1 *)local_28;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) {
      *(int **)((int)local_28 + -4) = &DAT_1039c928;
      *(undefined4 *)((int)piVar7 + -8) = 0x100c8411;
      FUN_1022c0d0();
      if (DAT_1039c928 == -1) {
        local_14 = 0xc;
        *(undefined4 *)((int)piVar7 + -4) = 0x100c8433;
        FUN_10021a06();
        *(undefined1 **)((int)piVar7 + -4) = &LAB_1002210b;
        *(undefined4 *)((int)piVar7 + -8) = 0x100c843e;
        FUN_1022c3a0();
        local_14 = 0xffffffff;
        *(int **)((int)piVar7 + -4) = &DAT_1039c928;
        *(undefined4 *)((int)piVar7 + -8) = 0x100c8453;
        FUN_1022c180();
      }
    }
    local_14 = 0xb;
    *(undefined4 *)((int)piVar7 + -4) = 0;
    *(undefined4 *)((int)piVar7 + -8) = 1;
    *(undefined4 *)((int)piVar7 + -0xc) = 0x100c834c;
    FUN_100cb32e();
    local_14 = 0xffffffff;
    if (local_8c != (int *)0x0) {
      LOCK();
      piVar5 = local_8c + 1;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        pcVar1 = *(code **)*local_8c;
        puVar8 = (undefined4 *)((int)piVar7 + -4);
        piVar7 = (int *)((int)piVar7 + -4);
        *puVar8 = 0x100c836d;
        (*pcVar1)();
        LOCK();
        piVar5 = local_8c + 2;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          pcVar1 = *(code **)(*local_8c + 4);
          puVar9 = (undefined4 *)((int)piVar7 + -4);
          piVar7 = (int *)((int)piVar7 + -4);
          *puVar9 = 0x100c837b;
          (*pcVar1)();
        }
      }
    }
  }
  else {
    local_44 = (int *)0x0;
    if (local_4c != (int *)0x0) {
      LOCK();
      local_4c[1] = local_4c[1] + 1;
      UNLOCK();
      local_44 = local_4c;
    }
    local_48 = local_50;
    local_3c = (int *)0x0;
    if (local_2c != (int *)0x0) {
      LOCK();
      local_2c[1] = local_2c[1] + 1;
      UNLOCK();
      local_3c = local_2c;
    }
    local_40 = local_30;
    local_58 = &local_40;
    local_14 = 0x10;
    *(undefined4 *)((int)piVar7 + -4) = 2;
    *(int **)((int)piVar7 + -8) = &local_48;
    *(undefined4 *)((int)piVar7 + -0xc) = 0x100c8186;
    FUN_100c8dce();
    puVar3 = (undefined1 *)0x0;
    do {
      local_14 = 0xf;
      local_28 = (int *)puVar3;
      *(undefined4 *)((int)piVar7 + -4) = 0x100c81a8;
      FUN_100431d4();
      local_14 = 0xffffffff;
      puVar3 = (undefined1 *)((int)local_28 + -8);
    } while (puVar3 != (undefined1 *)0xfffffff0);
    *(undefined4 ***)((int)piVar7 + -4) = local_74 + 0xb;
    *(undefined4 *)((int)piVar7 + -8) = 0x100c81c7;
    puVar2 = (undefined4 *)FUN_10018d26();
    LOCK();
    *puVar2 = 4;
    UNLOCK();
  }
  if (local_70 != (int *)0x0) {
    LOCK();
    piVar5 = local_70 + 1;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      pcVar1 = *(code **)*local_70;
      puVar10 = (undefined4 *)((int)piVar7 + -4);
      piVar7 = (int *)((int)piVar7 + -4);
      *puVar10 = 0x100c8391;
      (*pcVar1)();
      LOCK();
      piVar5 = local_70 + 2;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        pcVar1 = *(code **)(*local_70 + 4);
        puVar11 = (undefined4 *)((int)piVar7 + -4);
        piVar7 = (int *)((int)piVar7 + -4);
        *puVar11 = 0x100c839f;
        (*pcVar1)();
      }
    }
  }
  if (local_2c != (int *)0x0) {
    LOCK();
    piVar5 = local_2c + 1;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      pcVar1 = *(code **)*local_2c;
      puVar12 = (undefined4 *)((int)piVar7 + -4);
      piVar7 = (int *)((int)piVar7 + -4);
      *puVar12 = 0x100c83b5;
      (*pcVar1)();
      LOCK();
      piVar5 = local_2c + 2;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        pcVar1 = *(code **)(*local_2c + 4);
        puVar13 = (undefined4 *)((int)piVar7 + -4);
        piVar7 = (int *)((int)piVar7 + -4);
        *puVar13 = 0x100c83c3;
        (*pcVar1)();
      }
    }
  }
  if (local_4c != (int *)0x0) {
    LOCK();
    piVar5 = local_4c + 1;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      pcVar1 = *(code **)*local_4c;
      puVar14 = (undefined4 *)((int)piVar7 + -4);
      piVar7 = (int *)((int)piVar7 + -4);
      *puVar14 = 0x100c83d9;
      (*pcVar1)();
      LOCK();
      piVar5 = local_4c + 2;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        pcVar1 = *(code **)(*local_4c + 4);
        puVar15 = (undefined4 *)((int)piVar7 + -4);
        piVar7 = (int *)((int)piVar7 + -4);
        *puVar15 = 0x100c83e7;
        (*pcVar1)();
      }
    }
  }
  *(undefined **)((int)piVar7 + -4) = &DAT_10388a3c;
  *(undefined4 *)((int)piVar7 + -8) = 0x100c83f2;
  FUN_1022c200();
  ExceptionList = local_1c;
  return;
}

