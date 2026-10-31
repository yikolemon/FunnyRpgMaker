/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a619a */

undefined1 *
FUN_1800a619a(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             undefined2 param_5,char *param_6,ulonglong param_7,char param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined8 ****ppppuVar14;
  undefined2 *puVar15;
  longlong lVar16;
  byte ****ppppbVar17;
  longlong lVar18;
  longlong lVar19;
  byte ***local_d8;
  longlong *local_d0;
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined2 local_aa;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  undefined4 local_a0;
  undefined3 uStack_9c;
  undefined4 uStack_98;
  undefined3 uStack_94;
  longlong local_90;
  undefined8 ***local_88;
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  undefined4 uStack_60;
  undefined3 uStack_5c;
  undefined1 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_7 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = 1;
    if (*param_6 != '+') {
      local_50 = (ulonglong)(*param_6 == '-');
    }
  }
  if ((~*(uint *)(param_4 + 0x18) & 0x3000) == 0) {
    puVar12 = &DAT_18036c3fe;
    if (((local_50 + 2 <= param_7) && (param_6[local_50] == '0')) &&
       ((byte)(param_6[local_50 + 1] | 0x20U) == 0x78)) {
      local_50 = local_50 + 2;
    }
  }
  else {
    puVar12 = &DAT_18036c990;
  }
  local_b8 = param_2;
  local_90 = param_4;
  local_58 = param_3;
  uVar8 = FUN_18028ace0(param_6,puVar12);
  local_aa = 0x2e;
  puVar9 = (undefined8 *)FUN_180287560();
  local_aa = CONCAT11(local_aa._1_1_,*(undefined1 *)*puVar9);
  uVar10 = FUN_18028ace0(param_6,&local_aa);
  plStack_80 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*plStack_80 + 8))();
  plVar11 = (longlong *)FUN_180093388(&local_88);
  if ((plStack_80 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*plStack_80 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 ****)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_180005764(&local_88,0,param_7);
  ppppuVar14 = &local_88;
  if (7 < uStack_70) {
    ppppuVar14 = (undefined8 ****)local_88;
  }
  (**(code **)(*plVar11 + 0x58))(plVar11,param_6,param_6 + param_7,ppppuVar14);
  local_d0 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar11 = (longlong *)FUN_180047447(&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*plVar11 + 0x28))(plVar11,&local_d8);
  uVar6 = (**(code **)(*plVar11 + 0x20))();
  if (uVar10 != param_7) {
    uVar4 = (**(code **)(*plVar11 + 0x18))(plVar11);
    ppppuVar14 = (undefined8 ****)local_88;
    if (uStack_70 < 8) {
      ppppuVar14 = &local_88;
    }
    *(undefined2 *)((longlong)ppppuVar14 + uVar10 * 2) = uVar4;
  }
  if (param_8 != '\0') {
    if (uVar10 != param_7) {
      uVar8 = uVar10;
    }
    ppppbVar17 = &local_d8;
    if (0xf < local_c0) {
      ppppbVar17 = (byte ****)local_d8;
    }
    while ((bVar2 = *(byte *)ppppbVar17, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < uVar8 - local_50))) {
      uVar8 = uVar8 - bVar2;
      FUN_1800a5f72(&local_88,uVar8,1,uVar6);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar17 + 1)) {
        ppppbVar17 = (byte ****)((longlong)ppppbVar17 + 1);
      }
    }
  }
  uVar10 = local_78;
  uVar8 = *(ulonglong *)(local_90 + 0x28);
  lVar16 = uVar8 - local_78;
  lVar18 = 0;
  if (local_78 <= uVar8 && lVar16 != 0) {
    lVar18 = lVar16;
  }
  if ((longlong)uVar8 < 1) {
    lVar18 = 0;
  }
  uVar7 = *(uint *)(local_90 + 0x18) & 0x1c0;
  if (uVar7 == 0x40) {
    uVar13 = *local_58;
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_a8 = *(undefined4 *)(local_58 + 1);
    lVar19 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar14 = &local_88;
      uVar8 = local_50;
      if (7 < uStack_70) {
        ppppuVar14 = (undefined8 ****)local_88;
      }
      do {
        if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,*(undefined2 *)ppppuVar14), sVar5 == -1))
        {
          uVar13 = 1;
        }
        ppppuVar14 = (undefined8 ****)((longlong)ppppuVar14 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *local_58 = uVar13;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,uStack_a8._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_a8;
    *(longlong *)(local_58 + 8) = lVar19;
  }
  else if (uVar7 == 0x100) {
    uVar13 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    lVar19 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar14 = &local_88;
      uVar8 = local_50;
      if (7 < uStack_70) {
        ppppuVar14 = (undefined8 ****)local_88;
      }
      do {
        if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,*(undefined2 *)ppppuVar14), sVar5 == -1))
        {
          uVar13 = 1;
        }
        ppppuVar14 = (undefined8 ****)((longlong)ppppuVar14 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar3 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar13;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong *)(local_58 + 8) = lVar19;
    uVar6 = uStack_60;
    while (uStack_60 = uVar6, lVar18 != 0) {
      if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,param_5), sVar5 == -1)) {
        uVar13 = 1;
      }
      lVar16 = lVar16 + -1;
      uVar6 = uStack_60;
      lVar18 = lVar16;
    }
    *local_58 = uVar13;
    uStack_60._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar6;
    *(longlong *)(local_58 + 8) = lVar19;
    lVar18 = 0;
  }
  else {
    uVar13 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    lVar19 = *(longlong *)(local_58 + 8);
    uVar6 = uStack_68;
    puVar3 = local_58;
    uVar8 = local_50;
    while (uStack_68 = uVar6, local_58 = puVar3, local_50 = uVar8, lVar18 != 0) {
      if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,param_5), sVar5 == -1)) {
        uVar13 = 1;
      }
      lVar16 = lVar16 + -1;
      uVar6 = uStack_68;
      puVar3 = local_58;
      uVar8 = local_50;
      lVar18 = lVar16;
    }
    *puVar3 = uVar13;
    uStack_68._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar3 + 1) = uVar6;
    *(longlong *)(puVar3 + 8) = lVar19;
    if (uVar8 != 0) {
      ppppuVar14 = (undefined8 ****)local_88;
      if (uStack_70 < 8) {
        ppppuVar14 = &local_88;
      }
      do {
        if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,*(undefined2 *)ppppuVar14), sVar5 == -1))
        {
          uVar13 = 1;
        }
        uVar8 = uVar8 - 1;
        ppppuVar14 = (undefined8 ****)((longlong)ppppuVar14 + 2);
      } while (uVar8 != 0);
    }
    *local_58 = uVar13;
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar3 + 1) = uStack_68;
    *(longlong *)(local_58 + 8) = lVar19;
    lVar18 = 0;
  }
  lVar16 = uVar10 - local_50;
  local_a0._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a0._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar16 != 0) {
    ppppuVar14 = &local_88;
    if (7 < uStack_70) {
      ppppuVar14 = (undefined8 ****)local_88;
    }
    puVar15 = (undefined2 *)((longlong)ppppuVar14 + local_50 * 2);
    do {
      if ((lVar19 == 0) || (sVar5 = FUN_1800a4a96(lVar19,*puVar15), sVar5 == -1)) {
        uVar13 = 1;
      }
      puVar15 = puVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *local_58 = uVar13;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_9c,local_a0._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a0;
  *(longlong *)(local_58 + 8) = lVar19;
  *(undefined8 *)(local_90 + 0x28) = 0;
  uVar13 = *local_58;
  uStack_94 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  lVar16 = *(longlong *)(local_58 + 8);
  uVar6 = *(undefined4 *)(local_58 + 1);
  for (; uStack_98 = uVar6, lVar18 != 0; lVar18 = lVar18 + -1) {
    if ((lVar16 == 0) || (sVar5 = FUN_1800a4a96(lVar16,param_5), sVar5 == -1)) {
      uVar13 = 1;
    }
    uVar6 = uStack_98;
  }
  *local_b8 = uVar13;
  uStack_98._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
  *(undefined4 *)(local_b8 + 1) = uVar6;
  *(uint *)(local_b8 + 4) = CONCAT31(uStack_94,uStack_98._3_1_);
  *(longlong *)(local_b8 + 8) = lVar16;
  FUN_180001ef2(&local_d8);
  FUN_1800010ec(&local_88);
  return local_b8;
}

