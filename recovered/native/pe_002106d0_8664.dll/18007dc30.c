/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007dc30 */

undefined1 *
FUN_18007dc30(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             undefined1 param_5,char *param_6,ulonglong param_7,char param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  undefined1 *puVar14;
  byte ****ppppbVar15;
  longlong lVar16;
  longlong lVar17;
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
    puVar11 = &DAT_18036c3fe;
    if (((local_50 + 2 <= param_7) && (param_6[local_50] == '0')) &&
       ((byte)(param_6[local_50 + 1] | 0x20U) == 0x78)) {
      local_50 = local_50 + 2;
    }
  }
  else {
    puVar11 = &DAT_18036c990;
  }
  local_b8 = param_2;
  local_90 = param_4;
  local_58 = param_3;
  uVar7 = FUN_18028ace0(param_6,puVar11);
  local_aa = 0x2e;
  puVar8 = (undefined8 *)FUN_180287560();
  local_aa = CONCAT11(local_aa._1_1_,*(undefined1 *)*puVar8);
  uVar9 = FUN_18028ace0(param_6,&local_aa);
  plStack_80 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*plStack_80 + 8))();
  plVar10 = (longlong *)FUN_18001c0ec(&local_88);
  if ((plStack_80 != (longlong *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(*plStack_80 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)(puVar8,1);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 ****)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_180061c48(&local_88,0,param_7);
  ppppuVar12 = &local_88;
  if (0xf < uStack_70) {
    ppppuVar12 = (undefined8 ****)local_88;
  }
  (**(code **)(*plVar10 + 0x38))(plVar10,param_6,param_6 + param_7,ppppuVar12);
  local_d0 = *(longlong **)(*(longlong *)(local_90 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar10 = (longlong *)FUN_18000b3c1(&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)(puVar8,1);
  }
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8);
  uVar4 = (**(code **)(*plVar10 + 0x20))();
  if (uVar9 != param_7) {
    uVar3 = (**(code **)(*plVar10 + 0x18))(plVar10);
    ppppuVar12 = (undefined8 ****)local_88;
    if (uStack_70 < 0x10) {
      ppppuVar12 = &local_88;
    }
    *(undefined1 *)((longlong)ppppuVar12 + uVar9) = uVar3;
  }
  if (param_8 != '\0') {
    if (uVar9 != param_7) {
      uVar7 = uVar9;
    }
    ppppbVar15 = &local_d8;
    if (0xf < local_c0) {
      ppppbVar15 = (byte ****)local_d8;
    }
    while ((bVar2 = *(byte *)ppppbVar15, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < uVar7 - local_50))) {
      uVar7 = uVar7 - bVar2;
      FUN_18007d9c0(&local_88,uVar7,1,uVar4);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar15 + 1)) {
        ppppbVar15 = (byte ****)((longlong)ppppbVar15 + 1);
      }
    }
  }
  uVar9 = local_78;
  uVar7 = *(ulonglong *)(local_90 + 0x28);
  lVar13 = uVar7 - local_78;
  lVar16 = 0;
  if (local_78 <= uVar7 && lVar13 != 0) {
    lVar16 = lVar13;
  }
  if ((longlong)uVar7 < 1) {
    lVar16 = 0;
  }
  uVar5 = *(uint *)(local_90 + 0x18) & 0x1c0;
  if (uVar5 == 0x40) {
    uVar3 = *local_58;
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_a8 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar12 = &local_88;
      uVar7 = local_50;
      if (0xf < uStack_70) {
        ppppuVar12 = (undefined8 ****)local_88;
      }
      do {
        if (lVar17 == 0) {
LAB_18007dfc7:
          uVar3 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar17,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007dfc7;
        }
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *local_58 = uVar3;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,uStack_a8._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_a8;
    *(longlong *)(local_58 + 8) = lVar17;
  }
  else if (uVar5 == 0x100) {
    uVar3 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar12 = &local_88;
      uVar7 = local_50;
      if (0xf < uStack_70) {
        ppppuVar12 = (undefined8 ****)local_88;
      }
      do {
        if (lVar17 == 0) {
LAB_18007df12:
          uVar3 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar17,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007df12;
        }
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar14 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar3;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong *)(local_58 + 8) = lVar17;
    uVar4 = uStack_60;
    while (uStack_60 = uVar4, lVar16 != 0) {
      if (lVar17 == 0) {
LAB_18007df54:
        uVar3 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar17,param_5);
        if (iVar6 == -1) goto LAB_18007df54;
      }
      lVar13 = lVar13 + -1;
      uVar4 = uStack_60;
      lVar16 = lVar13;
    }
    *local_58 = uVar3;
    uStack_60._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
    *(uint *)(puVar14 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar4;
    *(longlong *)(local_58 + 8) = lVar17;
    lVar16 = 0;
  }
  else {
    uVar3 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    lVar17 = *(longlong *)(local_58 + 8);
    uVar4 = uStack_68;
    puVar14 = local_58;
    uVar7 = local_50;
    while (uStack_68 = uVar4, local_58 = puVar14, local_50 = uVar7, lVar16 != 0) {
      if (lVar17 == 0) {
LAB_18007e026:
        uVar3 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar17,param_5);
        if (iVar6 == -1) goto LAB_18007e026;
      }
      lVar13 = lVar13 + -1;
      uVar4 = uStack_68;
      puVar14 = local_58;
      uVar7 = local_50;
      lVar16 = lVar13;
    }
    *puVar14 = uVar3;
    uStack_68._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
    *(uint *)(puVar14 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(longlong *)(puVar14 + 8) = lVar17;
    if (uVar7 != 0) {
      ppppuVar12 = (undefined8 ****)local_88;
      if (uStack_70 < 0x10) {
        ppppuVar12 = &local_88;
      }
      do {
        if (lVar17 == 0) {
LAB_18007e081:
          uVar3 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar17,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007e081;
        }
        uVar7 = uVar7 - 1;
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
      } while (uVar7 != 0);
    }
    *local_58 = uVar3;
    *(uint *)(puVar14 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar14 + 1) = uStack_68;
    *(longlong *)(local_58 + 8) = lVar17;
    lVar16 = 0;
  }
  lVar13 = uVar9 - local_50;
  local_a0._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a0._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar13 != 0) {
    ppppuVar12 = &local_88;
    if (0xf < uStack_70) {
      ppppuVar12 = (undefined8 ****)local_88;
    }
    puVar14 = (undefined1 *)((longlong)ppppuVar12 + local_50);
    do {
      if (lVar17 == 0) {
LAB_18007e0f1:
        uVar3 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar17,*puVar14);
        if (iVar6 == -1) goto LAB_18007e0f1;
      }
      puVar14 = puVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *local_58 = uVar3;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_9c,local_a0._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a0;
  *(longlong *)(local_58 + 8) = lVar17;
  *(undefined8 *)(local_90 + 0x28) = 0;
  uVar3 = *local_58;
  uStack_94 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  lVar13 = *(longlong *)(local_58 + 8);
  uVar4 = *(undefined4 *)(local_58 + 1);
  do {
    uStack_98 = uVar4;
    if (lVar16 == 0) {
      *local_b8 = uVar3;
      uStack_98._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
      *(undefined4 *)(local_b8 + 1) = uVar4;
      *(uint *)(local_b8 + 4) = CONCAT31(uStack_94,uStack_98._3_1_);
      *(longlong *)(local_b8 + 8) = lVar13;
      FUN_180001ef2(&local_d8);
      FUN_180001ef2(&local_88);
      return local_b8;
    }
    if (lVar13 == 0) {
LAB_18007e152:
      uVar3 = 1;
    }
    else {
      iVar6 = FUN_18007b160(lVar13,param_5);
      if (iVar6 == -1) goto LAB_18007e152;
    }
    lVar16 = lVar16 + -1;
    uVar4 = uStack_98;
  } while( true );
}

