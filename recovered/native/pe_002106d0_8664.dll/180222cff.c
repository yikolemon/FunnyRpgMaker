/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180222cff */

uint FUN_180222cff(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ushort uVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_b8 [32];
  longlong local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  uint local_4c;
  ulonglong local_48;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined2 uVar27;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  bVar22 = true;
  if ((int)param_4 < 1) {
    bVar5 = false;
    bVar23 = true;
    bVar4 = false;
  }
  else {
    lVar17 = 0;
    bVar4 = false;
    bVar5 = false;
    bVar23 = false;
    do {
      iVar8 = *(int *)(param_5 + lVar17);
      if (iVar8 == 0x69677066) {
        bVar4 = true;
      }
      else if (iVar8 == 0x69736278) {
        bVar23 = true;
      }
      else if (iVar8 == 0x69677073) {
        bVar5 = true;
      }
      lVar17 = lVar17 + 0x10;
    } while ((ulonglong)param_4 << 4 != lVar17);
    bVar23 = !bVar23;
  }
  local_80 = *(longlong *)(param_2 + 0x2d0);
  if (((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
      (lVar17 = FUN_18022723a(param_2,0x676c7966), lVar17 == 0)) &&
     (lVar17 = FUN_18022723a(param_2,0x43464620), lVar17 == 0)) {
    lVar17 = FUN_18022723a(param_2,0x43464632);
    bVar22 = lVar17 != 0;
  }
  iVar8 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424c43,param_1,0);
  iVar9 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424454,param_1,0);
  local_84 = (**(code **)(param_2 + 0x2a0))(param_2,0x45424c43,param_1,0);
  uVar10 = (**(code **)(param_2 + 0x2a0))(param_2,0x626c6f63,param_1,0);
  local_78 = CONCAT44(local_78._4_4_,uVar10);
  iVar11 = (**(code **)(param_2 + 0x2a0))(param_2,0x73626978,param_1,0);
  local_88 = CONCAT31(local_88._1_3_,bVar23 & iVar11 == 0);
  bVar23 = true;
  if ((bVar22) || (*(code **)(local_80 + 0x90) == (code *)0x0)) {
LAB_180222e64:
    local_4c = (**(code **)(local_80 + 0x30))(param_2,param_1);
    if (local_4c != 0) goto LAB_1802236dd;
  }
  else {
    iVar11 = (**(code **)(local_80 + 0x90))(param_2,param_1);
    bVar23 = iVar11 != 0;
    if (bVar23 || (local_88 & 1) != 0) goto LAB_180222e64;
    bVar23 = false;
  }
  lVar17 = local_80;
  if (iVar9 == 0) {
    bVar22 = false;
  }
  if (iVar8 == 0) {
    bVar22 = false;
  }
  if ((ushort)(*(short *)(param_2 + 0x112) + 0xbfffU) < 0xc00f) {
    local_4c = 8;
    goto LAB_1802236dd;
  }
  (**(code **)(local_80 + 0x48))(param_2,param_1);
  (**(code **)(lVar17 + 0x40))(param_2,param_1);
  (**(code **)(lVar17 + 0x60))(param_2,param_1);
  iVar9 = (**(code **)(lVar17 + 0x58))(param_2,param_1);
  if (bVar23) {
    local_4c = (**(code **)(lVar17 + 0x38))(param_2,param_1,0);
    if (local_4c == 0) {
      local_4c = (**(code **)(lVar17 + 200))(param_2,param_1,0);
      if ((char)local_4c == -0x72) {
        local_4c = 0x93;
LAB_180223132:
        plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if ((plVar1 == (longlong *)0x0) || (*(longlong *)(*plVar1 + 0x10) == 0)) goto LAB_1802236dd;
        *(undefined2 *)(param_2 + 0x15a) = 0;
      }
      else if (local_4c != 0) goto LAB_1802236dd;
    }
    else {
      if ((char)local_4c != -0x72) goto LAB_1802236dd;
      if (*(int *)(param_2 + 0xf0) != 0x74727565) {
        local_4c = 0x8f;
        goto LAB_180223132;
      }
      bVar22 = false;
    }
    lVar17 = local_80;
    local_4c = (**(code **)(local_80 + 0x38))(param_2,param_1,1);
    if ((local_4c == 0) &&
       (local_4c = (**(code **)(lVar17 + 200))(param_2,param_1,1), local_4c == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_4c != -0x72) goto LAB_1802236dd;
    lVar17 = local_80;
    local_4c = (**(code **)(local_80 + 0x50))(param_2,param_1);
    if (local_4c != 0) {
      *(undefined2 *)(param_2 + 0x208) = 0xffff;
    }
  }
  if ((*(code **)(lVar17 + 0xd0) != (code *)0x0) &&
     (((iVar8 == 0 || local_84 == 0) || (int)local_78 == 0) || (local_88 & 1) != 0)) {
    (**(code **)(lVar17 + 0xd0))(param_2,param_1);
  }
  if (*(code **)(lVar17 + 0xf0) != (code *)0x0) {
    (**(code **)(lVar17 + 0xf0))(param_2,param_1);
    (**(code **)(lVar17 + 0xf8))(param_2,param_1);
  }
  if (*(code **)(lVar17 + 0x168) != (code *)0x0) {
    (**(code **)(lVar17 + 0x168))(param_2,param_1);
  }
  (**(code **)(lVar17 + 0x88))(param_2,param_1);
  (**(code **)(lVar17 + 0x80))(param_2,param_1);
  (**(code **)(lVar17 + 0x70))(param_2,param_1);
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  plVar1 = (longlong *)(param_2 + 0x18);
  plVar2 = (longlong *)(param_2 + 0x20);
  *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x249) & 1) == 0)) {
    local_4c = FUN_180226b5b(param_2,0x15,plVar1);
    if (local_4c != 0) goto LAB_1802236dd;
    lVar17 = *plVar1;
    if (!bVar4 && lVar17 == 0) {
      local_4c = FUN_180226b5b(param_2,0x10,plVar1);
      if (local_4c != 0) goto LAB_1802236dd;
      lVar17 = *plVar1;
    }
    local_4c = 0;
    if (((lVar17 == 0) && (local_4c = FUN_180226b5b(param_2,1,plVar1), local_4c != 0)) ||
       (local_4c = FUN_180226b5b(param_2,0x16,plVar2), local_4c != 0)) goto LAB_1802236dd;
    lVar17 = *plVar2;
    if (!bVar5 && lVar17 == 0) {
      local_4c = FUN_180226b5b(param_2,0x11,plVar2);
      if (local_4c != 0) goto LAB_1802236dd;
      lVar17 = *plVar2;
    }
  }
  else {
    uVar12 = local_4c;
    if (bVar4) {
LAB_1802230de:
      local_4c = uVar12;
      local_4c = FUN_180226b5b(param_2,1,plVar1);
      if (local_4c != 0) goto LAB_1802236dd;
    }
    else {
      local_4c = FUN_180226b5b(param_2,0x10,plVar1);
      if (local_4c != 0) goto LAB_1802236dd;
      uVar12 = 0;
      if (*plVar1 == 0) goto LAB_1802230de;
    }
    if ((!bVar5) && (local_4c = FUN_180226b5b(param_2,0x11,plVar2), local_4c != 0))
    goto LAB_1802236dd;
    lVar17 = *plVar2;
  }
  if ((lVar17 == 0) && (local_4c = FUN_180226b5b(param_2,2,plVar2), local_4c != 0))
  goto LAB_1802236dd;
  uVar13 = FUN_1801cfa40(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x20),&local_4c);
  *(undefined8 *)(param_2 + 0x428) = uVar13;
  if (local_4c != 0) goto LAB_1802236dd;
  uVar12 = *(uint *)(param_2 + 8);
  if ((((*(uint *)(param_2 + 0x474) & 0xfffffffe) == 2) || (*(longlong *)(param_2 + 0x4e0) != 0)) ||
     (*(longlong *)(param_2 + 0x4e8) != 0)) {
    uVar12 = uVar12 | 0x4000;
  }
  if (bVar22) {
    if ((char)local_88 == '\0') {
      uVar12 = uVar12 | 1;
    }
    else {
      uVar12 = uVar12 | 0x20000;
    }
  }
  uVar16 = uVar12 | 0x18;
  if ((iVar9 == 0) && (*(int *)(param_2 + 0x270) != 0x30000)) {
    uVar16 = uVar12 | 0x218;
  }
  uVar12 = uVar16 | 4;
  if (*(int *)(param_2 + 0x27c) == 0) {
    uVar12 = uVar16;
  }
  uVar16 = uVar12 | 0x20;
  if (*(char *)(param_2 + 400) == '\0') {
    uVar16 = uVar12;
  }
  uVar12 = uVar16 | 0x40;
  if (*(int *)(param_2 + 0x498) == 0) {
    uVar12 = uVar16;
  }
  *(uint *)(param_2 + 8) = (*(uint *)(param_2 + 0x410) & 1) << 8 | uVar12;
  if ((bVar22) && (*(short *)(param_2 + 0x208) != -1)) {
    uVar12 = (uint)((*(ushort *)(param_2 + 0x248) & 0x201) != 0) |
             *(ushort *)(param_2 + 0x248) >> 4 & 2;
  }
  else {
    uVar12 = (uint)(byte)((*(byte *)(param_2 + 300) & 2) >> 1 |
                         *(byte *)(param_2 + 300) * '\x02' & 3);
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar12;
  FUN_180227b7b(param_2);
  if (*(int *)(param_2 + 0x38) < 1) {
LAB_1802233c9:
    if ((*(byte *)(param_2 + 9) & 2) != 0) {
      local_60 = 0x10003756e6963;
      local_68 = param_2;
      local_4c = FUN_1801cc9a6(&DAT_18034ca70,0,&local_68,0);
      if (((local_4c != 0) && ((char)local_4c != -0x5d)) && ((local_4c & 0xff) != 7))
      goto LAB_1802236dd;
      local_4c = 0;
    }
  }
  else {
    bVar22 = true;
    lVar17 = 0;
    do {
      while( true ) {
        lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x40) + lVar17 * 8);
        iVar8 = FUN_180227dcc(*(undefined2 *)(lVar20 + 0xc),*(undefined2 *)(lVar20 + 0xe));
        *(int *)(lVar20 + 8) = iVar8;
        lVar17 = lVar17 + 1;
        if ((iVar8 == 0x73796d62) || (iVar8 == 0x756e6963)) break;
        if (*(int *)(param_2 + 0x38) <= lVar17) {
          if (bVar22) goto LAB_1802233c9;
          goto LAB_180223416;
        }
      }
      bVar22 = false;
    } while (lVar17 < *(int *)(param_2 + 0x38));
  }
LAB_180223416:
  iVar8 = *(int *)(param_2 + 0x478);
  if (iVar8 != 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x98);
    uVar21 = *(ushort *)(param_2 + 0x112);
    if ((uVar21 == 0) || (*(short *)(param_2 + 0x208) == -1)) {
      uVar21 = 1;
      sVar7 = 1;
    }
    else {
      sVar7 = *(short *)(param_2 + 0x20a);
    }
    local_98 = 0;
    local_90 = &local_4c;
    uVar14 = FUN_1801c9c3f(uVar13,0x10,0,iVar8);
    *(undefined8 *)(param_2 + 0x30) = uVar14;
    if (local_4c != 0) goto LAB_1802236dd;
    local_98 = 0;
    local_90 = &local_4c;
    lVar17 = FUN_1801cc8d6(uVar13,4,0,iVar8);
    if (local_4c != 0) goto LAB_1802236dd;
    local_88 = (uint)sVar7;
    local_84 = (uint)uVar21;
    iVar9 = 0;
    uVar18 = 0;
    local_78 = lVar17;
    local_70 = uVar13;
    do {
      lVar17 = *(longlong *)(param_2 + 0x30);
      local_4c = (**(code **)(local_80 + 0xe8))(param_2,iVar9,&local_68);
      uVar19 = uVar18;
      if (local_4c == 0) {
        lVar20 = uVar18 * 0x10;
        *(short *)(lVar17 + lVar20) = (short)(local_54 >> 6);
        *(short *)(lVar17 + 2 + lVar20) =
             (short)((int)((ushort)local_68 * local_88 + (uint)(uVar21 >> 1)) / (int)local_84);
        *(uint *)(lVar17 + 8 + lVar20) = (uint)(ushort)local_68 << 6;
        *(uint *)(lVar17 + 0xc + lVar20) = (uint)local_68._2_2_ << 6;
        *(uint *)(lVar17 + 4 + lVar20) = (uint)local_68._2_2_ << 6;
        if (((ushort)local_68 != 0) && (local_68._2_2_ != 0)) {
          uVar19 = (ulonglong)((int)uVar18 + 1);
          *(int *)(local_78 + uVar18 * 4) = iVar9;
        }
      }
      iVar9 = iVar9 + 1;
      uVar18 = uVar19;
    } while (iVar8 != iVar9);
    local_98 = local_78;
    local_90 = &local_4c;
    uVar13 = FUN_1801cc8d6(local_70,4,iVar8,uVar19);
    if ((int)uVar19 != 0) {
      *(undefined8 *)(param_2 + 0x480) = uVar13;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
      *(int *)(param_2 + 0x28) = (int)uVar19;
    }
  }
  uVar12 = *(uint *)(param_2 + 8);
  if ((uVar12 & 3) == 0) {
    uVar12 = uVar12 | 1;
    *(uint *)(param_2 + 8) = uVar12;
  }
  if ((uVar12 & 0x20001) == 0) goto LAB_1802236dd;
  uVar18 = *(ulonglong *)(param_2 + 0x124);
  uVar27 = (undefined2)(uVar18 >> 0x30);
  auVar26._8_4_ = 0;
  auVar26._0_8_ = uVar18;
  auVar26._12_2_ = uVar27;
  auVar26._14_2_ = uVar27;
  uVar27 = (undefined2)(uVar18 >> 0x20);
  auVar25._12_4_ = auVar26._12_4_;
  auVar25._8_2_ = 0;
  auVar25._0_8_ = uVar18;
  auVar25._10_2_ = uVar27;
  auVar24._10_6_ = auVar25._10_6_;
  auVar24._8_2_ = uVar27;
  auVar24._0_8_ = uVar18;
  uVar27 = (undefined2)(uVar18 >> 0x10);
  auVar6._4_8_ = auVar24._8_8_;
  auVar6._2_2_ = uVar27;
  auVar6._0_2_ = uVar27;
  *(int *)(param_2 + 0x58) = (int)(short)uVar18;
  *(int *)(param_2 + 0x5c) = auVar6._0_4_ >> 0x10;
  *(int *)(param_2 + 0x60) = auVar24._8_4_ >> 0x10;
  *(int *)(param_2 + 100) = auVar25._12_4_ >> 0x10;
  *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x248) & 0x80) == 0)) {
    sVar7 = *(short *)(param_2 + 0x13e);
    sVar3 = (short)*(undefined4 *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar3;
    *(short *)(param_2 + 0x6c) = sVar7;
    *(short *)(param_2 + 0x6e) = (sVar3 - sVar7) + *(short *)(param_2 + 0x140);
    if ((*(short *)(param_2 + 0x208) != -1) && ((sVar3 == 0 && (sVar7 == 0)))) {
      sVar3 = *(short *)(param_2 + 0x24e);
      sVar7 = *(short *)(param_2 + 0x250);
      if (sVar3 != 0 || sVar7 != 0) {
        *(short *)(param_2 + 0x6a) = sVar3;
        goto LAB_180223681;
      }
      sVar7 = (short)*(undefined4 *)(param_2 + 0x254);
      *(short *)(param_2 + 0x6a) = sVar7;
      *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x256);
      *(short *)(param_2 + 0x6e) = *(short *)(param_2 + 0x256) + sVar7;
    }
  }
  else {
    sVar3 = *(short *)(param_2 + 0x24e);
    *(short *)(param_2 + 0x6a) = sVar3;
    sVar7 = (short)*(undefined4 *)(param_2 + 0x250);
LAB_180223681:
    *(short *)(param_2 + 0x6c) = sVar7;
    *(short *)(param_2 + 0x6e) = (sVar3 - sVar7) + *(short *)(param_2 + 0x252);
  }
  *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
  puVar15 = (undefined2 *)(param_2 + 0x1a2);
  if (*(char *)(param_2 + 400) == '\0') {
    puVar15 = (undefined2 *)(param_2 + 0x6e);
  }
  *(undefined2 *)(param_2 + 0x72) = *puVar15;
  *(short *)(param_2 + 0x74) =
       (short)*(undefined4 *)(param_2 + 0x278) - *(short *)(param_2 + 0x27a) / 2;
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x27a);
LAB_1802236dd:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
  }
  return local_4c;
}

