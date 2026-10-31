/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007d3a4 */

undefined1 *
FUN_18007d3a4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             undefined1 param_5,char *param_6,ulonglong param_7)

{
  undefined4 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  byte ****ppppbVar15;
  longlong lVar16;
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
  plVar7 = (longlong *)FUN_18001c0ec(&local_98);
  if ((plStack_90 != (longlong *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(*plStack_90 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)(puVar8,1);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (undefined8 ****)0x0;
  plStack_90 = (longlong *)0x0;
  FUN_180061c48(&local_98,0,param_7);
  ppppuVar12 = &local_98;
  if (0xf < uStack_80) {
    ppppuVar12 = (undefined8 ****)local_98;
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_6,param_6 + param_7,ppppuVar12);
  local_d0 = *(longlong **)(*(longlong *)(local_70 + 0x40) + 8);
  (**(code **)(*local_d0 + 8))();
  plVar7 = (longlong *)FUN_18000b3c1(&local_d8);
  if ((local_d0 != (longlong *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)(puVar8,1);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_d8);
  ppppbVar15 = &local_d8;
  if (0xf < local_c0) {
    ppppbVar15 = (byte ****)local_d8;
  }
  if ((byte)(*(byte *)ppppbVar15 - 1) < 0x7e) {
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
    while ((bVar2 = *(byte *)ppppbVar15, (byte)(bVar2 - 1) < 0x7e &&
           ((ulonglong)bVar2 < param_7 - local_50))) {
      param_7 = param_7 - bVar2;
      FUN_18007d9c0(&local_98,param_7,1,uVar4);
      if ('\0' < (char)*(byte *)((longlong)ppppbVar15 + 1)) {
        ppppbVar15 = (byte ****)((longlong)ppppbVar15 + 1);
      }
    }
  }
  uVar3 = local_88;
  uVar14 = *(ulonglong *)(local_70 + 0x28);
  lVar10 = uVar14 - local_88;
  lVar9 = 0;
  if (local_88 <= uVar14 && lVar10 != 0) {
    lVar9 = lVar10;
  }
  if ((longlong)uVar14 < 1) {
    lVar9 = 0;
  }
  uVar5 = *(uint *)(local_70 + 0x18) & 0x1c0;
  if (uVar5 == 0x40) {
    uVar13 = *local_58;
    uStack_ac = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_b0 = *(undefined4 *)(local_58 + 1);
    lVar16 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar12 = &local_98;
      uVar14 = local_50;
      if (0xf < uStack_80) {
        ppppuVar12 = (undefined8 ****)local_98;
      }
      do {
        if (lVar16 == 0) {
LAB_18007d6d9:
          uVar13 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar16,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007d6d9;
        }
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *local_58 = uVar13;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_ac,uStack_b0._3_1_);
    *(undefined4 *)(local_58 + 1) = uStack_b0;
    *(longlong *)(local_58 + 8) = lVar16;
  }
  else if (uVar5 == 0x100) {
    uVar13 = *local_58;
    uStack_5c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_60 = *(undefined4 *)(local_58 + 1);
    lVar16 = *(longlong *)(local_58 + 8);
    if (local_50 != 0) {
      ppppuVar12 = &local_98;
      uVar14 = local_50;
      if (0xf < uStack_80) {
        ppppuVar12 = (undefined8 ****)local_98;
      }
      do {
        if (lVar16 == 0) {
LAB_18007d622:
          uVar13 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar16,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007d622;
        }
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar11 = local_58;
    puVar1 = (undefined4 *)(local_58 + 1);
    *local_58 = uVar13;
    *(uint *)(local_58 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uStack_60;
    *(longlong *)(local_58 + 8) = lVar16;
    uVar4 = uStack_60;
    while (uStack_60 = uVar4, lVar9 != 0) {
      if (lVar16 == 0) {
LAB_18007d666:
        uVar13 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar16,param_5);
        if (iVar6 == -1) goto LAB_18007d666;
      }
      lVar10 = lVar10 + -1;
      uVar4 = uStack_60;
      lVar9 = lVar10;
    }
    *local_58 = uVar13;
    uStack_60._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
    *(uint *)(puVar11 + 4) = CONCAT31(uStack_5c,uStack_60._3_1_);
    *puVar1 = uVar4;
    *(longlong *)(local_58 + 8) = lVar16;
    lVar9 = 0;
  }
  else {
    uVar13 = *local_58;
    uStack_64 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
    uStack_68 = *(undefined4 *)(local_58 + 1);
    lVar16 = *(longlong *)(local_58 + 8);
    uVar4 = uStack_68;
    puVar11 = local_58;
    uVar14 = local_50;
    while (uStack_68 = uVar4, local_58 = puVar11, local_50 = uVar14, lVar9 != 0) {
      if (lVar16 == 0) {
LAB_18007d73a:
        uVar13 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar16,param_5);
        if (iVar6 == -1) goto LAB_18007d73a;
      }
      lVar10 = lVar10 + -1;
      uVar4 = uStack_68;
      puVar11 = local_58;
      uVar14 = local_50;
      lVar9 = lVar10;
    }
    *puVar11 = uVar13;
    uStack_68._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
    *(uint *)(puVar11 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar11 + 1) = uVar4;
    *(longlong *)(puVar11 + 8) = lVar16;
    if (uVar14 != 0) {
      ppppuVar12 = (undefined8 ****)local_98;
      if (uStack_80 < 0x10) {
        ppppuVar12 = &local_98;
      }
      do {
        if (lVar16 == 0) {
LAB_18007d791:
          uVar13 = 1;
        }
        else {
          iVar6 = FUN_18007b160(lVar16,*(undefined1 *)ppppuVar12);
          if (iVar6 == -1) goto LAB_18007d791;
        }
        uVar14 = uVar14 - 1;
        ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + 1);
      } while (uVar14 != 0);
    }
    *local_58 = uVar13;
    *(uint *)(puVar11 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(undefined4 *)(puVar11 + 1) = uStack_68;
    *(longlong *)(local_58 + 8) = lVar16;
    lVar9 = 0;
  }
  lVar10 = uVar3 - local_50;
  local_a8._0_3_ = (undefined3)*(undefined4 *)(local_58 + 1);
  local_a8._3_1_ = (undefined1)*(undefined4 *)(local_58 + 4);
  uStack_a4 = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  if (lVar10 != 0) {
    ppppuVar12 = &local_98;
    if (0xf < uStack_80) {
      ppppuVar12 = (undefined8 ****)local_98;
    }
    puVar11 = (undefined1 *)((longlong)ppppuVar12 + local_50);
    do {
      if (lVar16 == 0) {
LAB_18007d7fb:
        uVar13 = 1;
      }
      else {
        iVar6 = FUN_18007b160(lVar16,*puVar11);
        if (iVar6 == -1) goto LAB_18007d7fb;
      }
      puVar11 = puVar11 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *local_58 = uVar13;
  *(uint *)(local_58 + 4) = CONCAT31(uStack_a4,local_a8._3_1_);
  *(undefined4 *)(local_58 + 1) = local_a8;
  *(longlong *)(local_58 + 8) = lVar16;
  *(undefined8 *)(local_70 + 0x28) = 0;
  uVar13 = *local_58;
  uStack_9c = (undefined3)((uint)*(undefined4 *)(local_58 + 4) >> 8);
  lVar10 = *(longlong *)(local_58 + 8);
  uVar4 = *(undefined4 *)(local_58 + 1);
  do {
    uStack_a0 = uVar4;
    if (lVar9 == 0) {
      *local_b8 = uVar13;
      uStack_a0._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
      *(undefined4 *)(local_b8 + 1) = uVar4;
      *(uint *)(local_b8 + 4) = CONCAT31(uStack_9c,uStack_a0._3_1_);
      *(longlong *)(local_b8 + 8) = lVar10;
      FUN_180001ef2(&local_d8);
      FUN_180001ef2(&local_98);
      return local_b8;
    }
    if (lVar10 == 0) {
LAB_18007d85d:
      uVar13 = 1;
    }
    else {
      iVar6 = FUN_18007b160(lVar10,param_5);
      if (iVar6 == -1) goto LAB_18007d85d;
    }
    lVar9 = lVar9 + -1;
    uVar4 = uStack_a0;
  } while( true );
}

