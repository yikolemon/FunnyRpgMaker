/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005b3fc */

undefined1 *
FUN_14005b3fc(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             undefined2 param_5,char *param_6,ulonglong param_7)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined8 ****ppppuVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  byte ****ppppbVar16;
  longlong lVar17;
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
  undefined8 ***local_98;
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
  plVar8 = (longlong *)FUN_140059c2a(&local_98);
  if ((plStack_90 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*plStack_90 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (undefined8 ****)0x0;
  plStack_90 = (longlong *)0x0;
  FUN_140047692(&local_98,0,param_7);
  ppppuVar13 = &local_98;
  if (7 < uStack_80) {
    ppppuVar13 = (undefined8 ****)local_98;
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,param_6,param_6 + param_7,ppppuVar13);
  local_d0 = *(longlong **)(*(longlong *)(local_70 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar8 = (longlong *)FUN_14005ba2b(&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_d8);
  ppppbVar16 = &local_d8;
  if (0xf < local_c0) {
    ppppbVar16 = (byte ****)local_d8;
  }
  if ((byte)(*(byte *)ppppbVar16 - 1) < 0x7e) {
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    while ((bVar2 = *(byte *)ppppbVar16, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < param_7 - local_50))) {
      param_7 = param_7 - bVar2;
      FUN_1400480a2(&local_98,param_7,1,uVar6);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar16 + 1)) {
        ppppbVar16 = (byte ****)((longlong)ppppbVar16 + 1);
      }
    }
  }
  uVar4 = local_88;
  uVar15 = *(ulonglong *)(local_70 + 0x28);
  lVar11 = uVar15 - local_88;
  lVar10 = 0;
  if (local_88 <= uVar15 && lVar11 != 0) {
    lVar10 = lVar11;
  }
  if ((longlong)uVar15 < 1) {
    lVar10 = 0;
  }
  uVar7 = *(uint *)(local_70 + 0x18) & 0x1c0;
  if (uVar7 == 0x40) {
    uVar14 = *local_58;
    uStack_ac = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_b0 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar13 = &local_98;
      uVar15 = local_50;
      if (7 < uStack_80) {
        ppppuVar13 = (undefined8 ****)local_98;
      }
      do {
        if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,*(undefined2 *)ppppuVar13), sVar5 == -1))
        {
          uVar14 = 1;
        }
        ppppuVar13 = (undefined8 ****)((longlong)ppppuVar13 + 2);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    *local_58 = uVar14;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_ac,uStack_b0._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_b0;
    *(longlong *)(local_58 + 8) = lVar17;
  }
  else if (uVar7 == 0x100) {
    uVar14 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar13 = &local_98;
      uVar15 = local_50;
      if (7 < uStack_80) {
        ppppuVar13 = (undefined8 ****)local_98;
      }
      do {
        if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,*(undefined2 *)ppppuVar13), sVar5 == -1))
        {
          uVar14 = 1;
        }
        ppppuVar13 = (undefined8 ****)((longlong)ppppuVar13 + 2);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar3 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar14;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong *)(local_58 + 8) = lVar17;
    uVar6 = uStack_60;
    while (uStack_60 = uVar6, lVar10 != 0) {
      if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,param_5), sVar5 == -1)) {
        uVar14 = 1;
      }
      lVar11 = lVar11 + -1;
      uVar6 = uStack_60;
      lVar10 = lVar11;
    }
    *local_58 = uVar14;
    uStack_60._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar6;
    *(longlong *)(local_58 + 8) = lVar17;
    lVar10 = 0;
  }
  else {
    uVar14 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    uVar6 = uStack_68;
    puVar3 = local_58;
    uVar15 = local_50;
    while (uStack_68 = uVar6, local_58 = puVar3, local_50 = uVar15, lVar10 != 0) {
      if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,param_5), sVar5 == -1)) {
        uVar14 = 1;
      }
      lVar11 = lVar11 + -1;
      uVar6 = uStack_68;
      puVar3 = local_58;
      uVar15 = local_50;
      lVar10 = lVar11;
    }
    *puVar3 = uVar14;
    uStack_68._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar3 + 1) = uVar6;
    *(longlong *)(puVar3 + 8) = lVar17;
    if (uVar15 != 0) {
      ppppuVar13 = (undefined8 ****)local_98;
      if (uStack_80 < 8) {
        ppppuVar13 = &local_98;
      }
      do {
        if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,*(undefined2 *)ppppuVar13), sVar5 == -1))
        {
          uVar14 = 1;
        }
        uVar15 = uVar15 - 1;
        ppppuVar13 = (undefined8 ****)((longlong)ppppuVar13 + 2);
      } while (uVar15 != 0);
    }
    *local_58 = uVar14;
    *(uint *)(puVar3 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar3 + 1) = uStack_68;
    *(longlong *)(local_58 + 8) = lVar17;
    lVar10 = 0;
  }
  lVar11 = uVar4 - local_50;
  local_a8._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a8._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar11 != 0) {
    ppppuVar13 = &local_98;
    if (7 < uStack_80) {
      ppppuVar13 = (undefined8 ****)local_98;
    }
    puVar12 = (undefined2 *)((longlong)ppppuVar13 + local_50 * 2);
    do {
      if ((lVar17 == 0) || (sVar5 = FUN_14005a4c0(lVar17,*puVar12), sVar5 == -1)) {
        uVar14 = 1;
      }
      puVar12 = puVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *local_58 = uVar14;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,local_a8._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a8;
  *(longlong *)(local_58 + 8) = lVar17;
  *(undefined8 *)(local_70 + 0x28) = 0;
  uVar14 = *local_58;
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  lVar11 = *(longlong *)(local_58 + 8);
  uVar6 = *(undefined4 *)(local_58 + 1);
  for (; uStack_a0 = uVar6, lVar10 != 0; lVar10 = lVar10 + -1) {
    if ((lVar11 == 0) || (sVar5 = FUN_14005a4c0(lVar11,param_5), sVar5 == -1)) {
      uVar14 = 1;
    }
    uVar6 = uStack_a0;
  }
  *local_b8 = uVar14;
  uStack_a0._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
  *(undefined4 *)(local_b8 + 1) = uVar6;
  *(uint *)(local_b8 + 4) = CONCAT31(uStack_9c,uStack_a0._3_1_);
  *(longlong *)(local_b8 + 8) = lVar11;
  FUN_14000109c(&local_d8);
  FUN_140001e90(&local_98);
  return local_b8;
}

