/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140009794 */

undefined1 *
FUN_140009794(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             ushort param_5,char *param_6,ulonglong param_7)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ushort ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  byte ****ppppbVar17;
  byte ***local_d8;
  longlong *local_d0;
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined3 uStack_ac;
  undefined4 local_a8;
  undefined3 uStack_a4;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  ushort ***local_98;
  longlong *plStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_70;
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
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (local_50 + 2 <= param_7)) &&
      (param_6[local_50] == '0')) && ((byte)(param_6[local_50 + 1] | 0x20U) == 0x78)) {
    local_50 = local_50 + 2;
  }
  plStack_90 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_b8 = param_2;
  local_70 = param_4;
  local_58 = param_3;
  (**(code **)(*plStack_90 + 8))();
  plVar8 = FUN_140004e03((longlong)&local_98);
  if ((plStack_90 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*plStack_90 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (ushort ***)0x0;
  plStack_90 = (longlong *)0x0;
  FUN_140007d40((longlong *)&local_98,0,param_7);
  ppppuVar11 = &local_98;
  if (7 < uStack_80) {
    ppppuVar11 = (ushort ****)local_98;
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,param_6,param_6 + param_7,ppppuVar11);
  local_d0 = *(longlong **)(*(longlong *)(local_70 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar8 = FUN_140009dcb((longlong)&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d8);
  ppppbVar17 = &local_d8;
  if (0xf < local_c0) {
    ppppbVar17 = (byte ****)local_d8;
  }
  if ((byte)(*(byte *)ppppbVar17 - 1) < 0x7e) {
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    while ((bVar2 = *(byte *)ppppbVar17, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < param_7 - local_50))) {
      param_7 = param_7 - bVar2;
      FUN_140007e56(&local_98,param_7,1,uVar6);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar17 + 1)) {
        ppppbVar17 = (byte ****)((longlong)ppppbVar17 + 1);
      }
    }
  }
  uVar5 = local_88;
  uVar16 = *(ulonglong *)(local_70 + 0x28);
  lVar13 = uVar16 - local_88;
  lVar12 = 0;
  if (local_88 <= uVar16 && lVar13 != 0) {
    lVar12 = lVar13;
  }
  if ((longlong)uVar16 < 1) {
    lVar12 = 0;
  }
  uVar7 = *(uint *)(local_70 + 0x18) & 0x1c0;
  if (uVar7 == 0x40) {
    uVar15 = *local_58;
    uStack_ac = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_b0 = *(undefined4 *)(local_58 + 1);
    plVar8 = *(longlong **)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar11 = &local_98;
      uVar16 = local_50;
      if (7 < uStack_80) {
        ppppuVar11 = (ushort ****)local_98;
      }
      do {
        if ((plVar8 == (longlong *)0x0) ||
           (uVar10 = FUN_140004f14(plVar8,(uint)*(ushort *)ppppuVar11), (short)uVar10 == -1)) {
          uVar15 = 1;
        }
        ppppuVar11 = (ushort ****)((longlong)ppppuVar11 + 2);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *local_58 = uVar15;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_ac,uStack_b0._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_b0;
    *(longlong **)(local_58 + 8) = plVar8;
  }
  else if (uVar7 == 0x100) {
    uVar15 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    plVar8 = *(longlong **)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar11 = &local_98;
      uVar16 = local_50;
      if (7 < uStack_80) {
        ppppuVar11 = (ushort ****)local_98;
      }
      do {
        if ((plVar8 == (longlong *)0x0) ||
           (uVar10 = FUN_140004f14(plVar8,(uint)*(ushort *)ppppuVar11), (short)uVar10 == -1)) {
          uVar15 = 1;
        }
        ppppuVar11 = (ushort ****)((longlong)ppppuVar11 + 2);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    puVar4 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar15;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong **)(local_58 + 8) = plVar8;
    uVar3 = uStack_60;
    while (uStack_60 = uVar3, lVar12 != 0) {
      if ((plVar8 == (longlong *)0x0) ||
         (uVar16 = FUN_140004f14(plVar8,(uint)param_5), (short)uVar16 == -1)) {
        uVar15 = 1;
      }
      lVar13 = lVar13 + -1;
      uVar3 = uStack_60;
      lVar12 = lVar13;
    }
    *local_58 = uVar15;
    uStack_60._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar3;
    *(longlong **)(local_58 + 8) = plVar8;
    lVar12 = 0;
  }
  else {
    uVar15 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    plVar8 = *(longlong **)(local_58 + 8);
    uVar3 = uStack_68;
    puVar4 = local_58;
    uVar16 = local_50;
    while (uStack_68 = uVar3, local_58 = puVar4, local_50 = uVar16, lVar12 != 0) {
      if ((plVar8 == (longlong *)0x0) ||
         (uVar16 = FUN_140004f14(plVar8,(uint)param_5), (short)uVar16 == -1)) {
        uVar15 = 1;
      }
      lVar13 = lVar13 + -1;
      uVar3 = uStack_68;
      puVar4 = local_58;
      uVar16 = local_50;
      lVar12 = lVar13;
    }
    *puVar4 = uVar15;
    uStack_68._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar4 + 1) = uVar3;
    *(longlong **)(puVar4 + 8) = plVar8;
    if (uVar16 != 0) {
      ppppuVar11 = (ushort ****)local_98;
      if (uStack_80 < 8) {
        ppppuVar11 = &local_98;
      }
      do {
        if ((plVar8 == (longlong *)0x0) ||
           (uVar10 = FUN_140004f14(plVar8,(uint)*(ushort *)ppppuVar11), (short)uVar10 == -1)) {
          uVar15 = 1;
        }
        uVar16 = uVar16 - 1;
        ppppuVar11 = (ushort ****)((longlong)ppppuVar11 + 2);
      } while (uVar16 != 0);
    }
    *local_58 = uVar15;
    *(uint *)(puVar4 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar4 + 1) = uStack_68;
    *(longlong **)(local_58 + 8) = plVar8;
    lVar12 = 0;
  }
  lVar13 = uVar5 - local_50;
  local_a8._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a8._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar13 != 0) {
    ppppuVar11 = &local_98;
    if (7 < uStack_80) {
      ppppuVar11 = (ushort ****)local_98;
    }
    puVar14 = (ushort *)((longlong)ppppuVar11 + local_50 * 2);
    do {
      if ((plVar8 == (longlong *)0x0) ||
         (uVar16 = FUN_140004f14(plVar8,(uint)*puVar14), (short)uVar16 == -1)) {
        uVar15 = 1;
      }
      puVar14 = puVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *local_58 = uVar15;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,local_a8._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a8;
  *(longlong **)(local_58 + 8) = plVar8;
  *(undefined8 *)(local_70 + 0x28) = 0;
  uVar15 = *local_58;
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  plVar8 = *(longlong **)(local_58 + 8);
  uVar3 = *(undefined4 *)(local_58 + 1);
  for (; uStack_a0 = uVar3, lVar12 != 0; lVar12 = lVar12 + -1) {
    if ((plVar8 == (longlong *)0x0) ||
       (uVar16 = FUN_140004f14(plVar8,(uint)param_5), (short)uVar16 == -1)) {
      uVar15 = 1;
    }
    uVar3 = uStack_a0;
  }
  *local_b8 = uVar15;
  uStack_a0._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
  *(undefined4 *)(local_b8 + 1) = uVar3;
  *(uint *)(local_b8 + 4) = CONCAT31(uStack_9c,uStack_a0._3_1_);
  *(longlong **)(local_b8 + 8) = plVar8;
  FUN_1400021ea((longlong *)&local_d8);
  FUN_140002174((longlong *)&local_98);
  return local_b8;
}

