/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a492 */

undefined1 *
FUN_14000a492(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             ushort param_5,byte *param_6,ulonglong param_7,char param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ushort ****ppppuVar13;
  byte *pbVar14;
  undefined1 uVar15;
  ushort *puVar16;
  longlong lVar17;
  byte ****ppppbVar18;
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
  ushort ***local_88;
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
    if (*param_6 != 0x2b) {
      local_50 = (ulonglong)(*param_6 == 0x2d);
    }
  }
  if ((~*(uint *)(param_4 + 0x18) & 0x3000) == 0) {
    pbVar14 = &DAT_14011b992;
    if (((local_50 + 2 <= param_7) && (param_6[local_50] == 0x30)) &&
       ((param_6[local_50 + 1] | 0x20) == 0x78)) {
      local_50 = local_50 + 2;
    }
  }
  else {
    pbVar14 = &DAT_14011baca;
  }
  local_b8 = param_2;
  local_90 = param_4;
  local_58 = param_3;
  uVar8 = FUN_14009bac0(param_6,pbVar14);
  local_aa = 0x2e;
  puVar9 = (undefined8 *)FUN_140099d38();
  local_aa = CONCAT11(local_aa._1_1_,*(undefined1 *)*puVar9);
  uVar10 = FUN_14009bac0(param_6,(byte *)&local_aa);
  plStack_80 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*plStack_80 + 8))();
  plVar11 = FUN_140004e03((longlong)&local_88);
  if ((plStack_80 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*plStack_80 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (ushort ***)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_140007d40((longlong *)&local_88,0,param_7);
  ppppuVar13 = &local_88;
  if (7 < uStack_70) {
    ppppuVar13 = (ushort ****)local_88;
  }
  (**(code **)(*plVar11 + 0x58))(plVar11,param_6,param_6 + param_7,ppppuVar13);
  local_d0 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar11 = FUN_140009dcb((longlong)&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*plVar11 + 0x28))(plVar11,&local_d8);
  uVar5 = (**(code **)(*plVar11 + 0x20))();
  if (uVar10 != param_7) {
    uVar6 = (**(code **)(*plVar11 + 0x18))(plVar11);
    ppppuVar13 = (ushort ****)local_88;
    if (uStack_70 < 8) {
      ppppuVar13 = &local_88;
    }
    *(ushort *)((longlong)ppppuVar13 + uVar10 * 2) = uVar6;
  }
  if (param_8 != '\0') {
    if (uVar10 != param_7) {
      uVar8 = uVar10;
    }
    ppppbVar18 = &local_d8;
    if (0xf < local_c0) {
      ppppbVar18 = (byte ****)local_d8;
    }
    while ((bVar2 = *(byte *)ppppbVar18, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < uVar8 - local_50))) {
      uVar8 = uVar8 - bVar2;
      FUN_140007e56(&local_88,uVar8,1,uVar5);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar18 + 1)) {
        ppppbVar18 = (byte ****)((longlong)ppppbVar18 + 1);
      }
    }
  }
  uVar10 = local_78;
  uVar8 = *(ulonglong *)(local_90 + 0x28);
  lVar17 = uVar8 - local_78;
  lVar19 = 0;
  if (local_78 <= uVar8 && lVar17 != 0) {
    lVar19 = lVar17;
  }
  if ((longlong)uVar8 < 1) {
    lVar19 = 0;
  }
  uVar7 = *(uint *)(local_90 + 0x18) & 0x1c0;
  if (uVar7 == 0x40) {
    uVar15 = *local_58;
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_a8 = *(undefined4 *)(local_58 + 1);
    plVar11 = *(longlong **)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar13 = &local_88;
      uVar8 = local_50;
      if (7 < uStack_70) {
        ppppuVar13 = (ushort ****)local_88;
      }
      do {
        if ((plVar11 == (longlong *)0x0) ||
           (uVar12 = FUN_140004f14(plVar11,(uint)*(ushort *)ppppuVar13), (short)uVar12 == -1)) {
          uVar15 = 1;
        }
        ppppuVar13 = (ushort ****)((longlong)ppppuVar13 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *local_58 = uVar15;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,uStack_a8._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_a8;
    *(longlong **)(local_58 + 8) = plVar11;
  }
  else if (uVar7 == 0x100) {
    uVar15 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    plVar11 = *(longlong **)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar13 = &local_88;
      uVar8 = local_50;
      if (7 < uStack_70) {
        ppppuVar13 = (ushort ****)local_88;
      }
      do {
        if ((plVar11 == (longlong *)0x0) ||
           (uVar12 = FUN_140004f14(plVar11,(uint)*(ushort *)ppppuVar13), (short)uVar12 == -1)) {
          uVar15 = 1;
        }
        ppppuVar13 = (ushort ****)((longlong)ppppuVar13 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar4 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar15;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong **)(local_58 + 8) = plVar11;
    uVar3 = uStack_60;
    while (uStack_60 = uVar3, lVar19 != 0) {
      if ((plVar11 == (longlong *)0x0) ||
         (uVar8 = FUN_140004f14(plVar11,(uint)param_5), (short)uVar8 == -1)) {
        uVar15 = 1;
      }
      lVar17 = lVar17 + -1;
      uVar3 = uStack_60;
      lVar19 = lVar17;
    }
    *local_58 = uVar15;
    uStack_60._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar3;
    *(longlong **)(local_58 + 8) = plVar11;
    lVar19 = 0;
  }
  else {
    uVar15 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    plVar11 = *(longlong **)(local_58 + 8);
    uVar3 = uStack_68;
    puVar4 = local_58;
    uVar8 = local_50;
    while (uStack_68 = uVar3, local_58 = puVar4, local_50 = uVar8, lVar19 != 0) {
      if ((plVar11 == (longlong *)0x0) ||
         (uVar8 = FUN_140004f14(plVar11,(uint)param_5), (short)uVar8 == -1)) {
        uVar15 = 1;
      }
      lVar17 = lVar17 + -1;
      uVar3 = uStack_68;
      puVar4 = local_58;
      uVar8 = local_50;
      lVar19 = lVar17;
    }
    *puVar4 = uVar15;
    uStack_68._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar4 + 1) = uVar3;
    *(longlong **)(puVar4 + 8) = plVar11;
    if (uVar8 != 0) {
      ppppuVar13 = (ushort ****)local_88;
      if (uStack_70 < 8) {
        ppppuVar13 = &local_88;
      }
      do {
        if ((plVar11 == (longlong *)0x0) ||
           (uVar12 = FUN_140004f14(plVar11,(uint)*(ushort *)ppppuVar13), (short)uVar12 == -1)) {
          uVar15 = 1;
        }
        uVar8 = uVar8 - 1;
        ppppuVar13 = (ushort ****)((longlong)ppppuVar13 + 2);
      } while (uVar8 != 0);
    }
    *local_58 = uVar15;
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar4 + 1) = uStack_68;
    *(longlong **)(local_58 + 8) = plVar11;
    lVar19 = 0;
  }
  lVar17 = uVar10 - local_50;
  local_a0._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a0._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar17 != 0) {
    ppppuVar13 = &local_88;
    if (7 < uStack_70) {
      ppppuVar13 = (ushort ****)local_88;
    }
    puVar16 = (ushort *)((longlong)ppppuVar13 + local_50 * 2);
    do {
      if ((plVar11 == (longlong *)0x0) ||
         (uVar8 = FUN_140004f14(plVar11,(uint)*puVar16), (short)uVar8 == -1)) {
        uVar15 = 1;
      }
      puVar16 = puVar16 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *local_58 = uVar15;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_9c,local_a0._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a0;
  *(longlong **)(local_58 + 8) = plVar11;
  *(undefined8 *)(local_90 + 0x28) = 0;
  uVar15 = *local_58;
  uStack_94 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  plVar11 = *(longlong **)(local_58 + 8);
  uVar3 = *(undefined4 *)(local_58 + 1);
  for (; uStack_98 = uVar3, lVar19 != 0; lVar19 = lVar19 + -1) {
    if ((plVar11 == (longlong *)0x0) ||
       (uVar8 = FUN_140004f14(plVar11,(uint)param_5), (short)uVar8 == -1)) {
      uVar15 = 1;
    }
    uVar3 = uStack_98;
  }
  *local_b8 = uVar15;
  uStack_98._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
  *(undefined4 *)(local_b8 + 1) = uVar3;
  *(uint *)(local_b8 + 4) = CONCAT31(uStack_94,uStack_98._3_1_);
  *(longlong **)(local_b8 + 8) = plVar11;
  FUN_1400021ea((longlong *)&local_d8);
  FUN_140002174((longlong *)&local_88);
  return local_b8;
}

