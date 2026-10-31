/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007033f */

uint FUN_14007033f(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [12];
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined2 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ushort uVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auStackY_b8 [32];
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  uint local_4c;
  ulonglong local_48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined2 uVar33;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  bVar28 = true;
  if ((int)param_4 < 1) {
    bVar8 = false;
    bVar6 = true;
    bVar7 = false;
  }
  else {
    lVar22 = 0;
    bVar7 = false;
    bVar8 = false;
    bVar6 = false;
    do {
      iVar11 = *(int *)(param_5 + lVar22);
      if (iVar11 == 0x69677066) {
        bVar7 = true;
      }
      else if (iVar11 == 0x69736278) {
        bVar6 = true;
      }
      else if (iVar11 == 0x69677073) {
        bVar8 = true;
      }
      lVar22 = lVar22 + 0x10;
    } while ((ulonglong)param_4 << 4 != lVar22);
    bVar6 = !bVar6;
  }
  lVar22 = *(longlong *)(param_2 + 0x2d0);
  if (((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
      (piVar17 = FUN_14007487a(param_2,0x676c7966), piVar17 == (int *)0x0)) &&
     (piVar17 = FUN_14007487a(param_2,0x43464620), piVar17 == (int *)0x0)) {
    piVar17 = FUN_14007487a(param_2,0x43464632);
    bVar28 = piVar17 != (int *)0x0;
  }
  iVar11 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424c43,param_1,0);
  iVar12 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424454,param_1,0);
  iVar13 = (**(code **)(param_2 + 0x2a0))(param_2,0x45424c43,param_1,0);
  iVar14 = (**(code **)(param_2 + 0x2a0))(param_2,0x626c6f63,param_1,0);
  iVar15 = (**(code **)(param_2 + 0x2a0))(param_2,0x73626978,param_1,0);
  bVar6 = (bool)(bVar6 & iVar15 == 0);
  bVar29 = true;
  if ((bVar28) || (*(code **)(lVar22 + 0x90) == (code *)0x0)) {
LAB_1400704a4:
    local_4c = (**(code **)(lVar22 + 0x30))(param_2,param_1);
    if (local_4c != 0) goto LAB_140070d1d;
  }
  else {
    iVar15 = (**(code **)(lVar22 + 0x90))(param_2,param_1);
    bVar29 = iVar15 != 0;
    if (bVar29 || bVar6) goto LAB_1400704a4;
    bVar29 = false;
  }
  if (iVar12 == 0) {
    bVar28 = false;
  }
  if (iVar11 == 0) {
    bVar28 = false;
  }
  if ((ushort)(*(short *)(param_2 + 0x112) + 0xbfffU) < 0xc00f) {
    local_4c = 8;
    goto LAB_140070d1d;
  }
  (**(code **)(lVar22 + 0x48))(param_2,param_1);
  (**(code **)(lVar22 + 0x40))(param_2,param_1);
  (**(code **)(lVar22 + 0x60))(param_2,param_1);
  iVar12 = (**(code **)(lVar22 + 0x58))(param_2,param_1);
  if (bVar29) {
    local_4c = (**(code **)(lVar22 + 0x38))(param_2,param_1,0);
    if (local_4c == 0) {
      local_4c = (**(code **)(lVar22 + 200))(param_2,param_1,0);
      if ((char)local_4c == -0x72) {
        local_4c = 0x93;
LAB_140070772:
        plVar4 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if ((plVar4 == (longlong *)0x0) || (*(longlong *)(*plVar4 + 0x10) == 0)) goto LAB_140070d1d;
        *(undefined2 *)(param_2 + 0x15a) = 0;
      }
      else if (local_4c != 0) goto LAB_140070d1d;
    }
    else {
      if ((char)local_4c != -0x72) goto LAB_140070d1d;
      if (*(int *)(param_2 + 0xf0) != 0x74727565) {
        local_4c = 0x8f;
        goto LAB_140070772;
      }
      bVar28 = false;
    }
    local_4c = (**(code **)(lVar22 + 0x38))(param_2,param_1,1);
    if ((local_4c == 0) &&
       (local_4c = (**(code **)(lVar22 + 200))(param_2,param_1,1), local_4c == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_4c != -0x72) goto LAB_140070d1d;
    local_4c = (**(code **)(lVar22 + 0x50))(param_2,param_1);
    if (local_4c != 0) {
      *(undefined2 *)(param_2 + 0x208) = 0xffff;
    }
  }
  if ((*(code **)(lVar22 + 0xd0) != (code *)0x0) &&
     (((iVar11 == 0 || iVar13 == 0) || iVar14 == 0) || bVar6)) {
    (**(code **)(lVar22 + 0xd0))(param_2,param_1);
  }
  if (*(code **)(lVar22 + 0xf0) != (code *)0x0) {
    (**(code **)(lVar22 + 0xf0))(param_2,param_1);
    (**(code **)(lVar22 + 0xf8))(param_2,param_1);
  }
  if (*(code **)(lVar22 + 0x168) != (code *)0x0) {
    (**(code **)(lVar22 + 0x168))(param_2,param_1);
  }
  (**(code **)(lVar22 + 0x88))(param_2,param_1);
  (**(code **)(lVar22 + 0x80))(param_2,param_1);
  (**(code **)(lVar22 + 0x70))(param_2,param_1);
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  puVar1 = (ulonglong *)(param_2 + 0x18);
  puVar2 = (ulonglong *)(param_2 + 0x20);
  *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x249) & 1) == 0)) {
    local_4c = FUN_14007419b(param_2,0x15,puVar1);
    if (local_4c != 0) goto LAB_140070d1d;
    uVar18 = *puVar1;
    if (!bVar7 && uVar18 == 0) {
      local_4c = FUN_14007419b(param_2,0x10,puVar1);
      if (local_4c != 0) goto LAB_140070d1d;
      uVar18 = *puVar1;
    }
    local_4c = 0;
    if (((uVar18 == 0) && (local_4c = FUN_14007419b(param_2,1,puVar1), local_4c != 0)) ||
       (local_4c = FUN_14007419b(param_2,0x16,puVar2), local_4c != 0)) goto LAB_140070d1d;
    uVar18 = *puVar2;
    if (!bVar8 && uVar18 == 0) {
      local_4c = FUN_14007419b(param_2,0x11,puVar2);
      if (local_4c != 0) goto LAB_140070d1d;
      uVar18 = *puVar2;
    }
  }
  else {
    uVar16 = local_4c;
    if (bVar7) {
LAB_14007071e:
      local_4c = uVar16;
      local_4c = FUN_14007419b(param_2,1,puVar1);
      if (local_4c != 0) goto LAB_140070d1d;
    }
    else {
      local_4c = FUN_14007419b(param_2,0x10,puVar1);
      if (local_4c != 0) goto LAB_140070d1d;
      uVar16 = 0;
      if (*puVar1 == 0) goto LAB_14007071e;
    }
    if ((!bVar8) && (local_4c = FUN_14007419b(param_2,0x11,puVar2), local_4c != 0))
    goto LAB_140070d1d;
    uVar18 = *puVar2;
  }
  if ((uVar18 == 0) && (local_4c = FUN_14007419b(param_2,2,puVar2), local_4c != 0))
  goto LAB_140070d1d;
  uVar19 = FUN_140021e43(*(longlong *)(param_2 + 0x98),*(char **)(param_2 + 0x20),(int *)&local_4c);
  *(undefined8 *)(param_2 + 0x428) = uVar19;
  if (local_4c != 0) goto LAB_140070d1d;
  uVar16 = *(uint *)(param_2 + 8);
  if ((((*(uint *)(param_2 + 0x474) & 0xfffffffe) == 2) || (*(longlong *)(param_2 + 0x4e0) != 0)) ||
     (*(longlong *)(param_2 + 0x4e8) != 0)) {
    uVar16 = uVar16 | 0x4000;
  }
  if (bVar28) {
    if (bVar6) {
      uVar16 = uVar16 | 0x20000;
    }
    else {
      uVar16 = uVar16 | 1;
    }
  }
  uVar25 = uVar16 | 0x18;
  if ((iVar12 == 0) && (*(int *)(param_2 + 0x270) != 0x30000)) {
    uVar25 = uVar16 | 0x218;
  }
  uVar16 = uVar25 | 4;
  if (*(int *)(param_2 + 0x27c) == 0) {
    uVar16 = uVar25;
  }
  uVar25 = uVar16 | 0x20;
  if (*(char *)(param_2 + 400) == '\0') {
    uVar25 = uVar16;
  }
  uVar16 = uVar25 | 0x40;
  if (*(int *)(param_2 + 0x498) == 0) {
    uVar16 = uVar25;
  }
  *(uint *)(param_2 + 8) = (*(uint *)(param_2 + 0x410) & 1) << 8 | uVar16;
  if ((bVar28) && (*(short *)(param_2 + 0x208) != -1)) {
    uVar16 = (uint)((*(ushort *)(param_2 + 0x248) & 0x201) != 0) |
             *(ushort *)(param_2 + 0x248) >> 4 & 2;
  }
  else {
    uVar16 = (uint)(byte)((*(byte *)(param_2 + 300) & 2) >> 1 |
                         *(byte *)(param_2 + 300) * '\x02' & 3);
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar16;
  FUN_1400751bb(param_2);
  if (*(int *)(param_2 + 0x38) < 1) {
LAB_140070a09:
    if ((*(byte *)(param_2 + 9) & 2) != 0) {
      local_60 = 0x10003756e6963;
      local_68 = param_2;
      local_4c = FUN_14001f301((uint *)&DAT_140109ba0,0,&local_68,(undefined8 *)0x0);
      if (((local_4c != 0) && ((char)local_4c != -0x5d)) && ((local_4c & 0xff) != 7))
      goto LAB_140070d1d;
      local_4c = 0;
    }
  }
  else {
    bVar28 = true;
    lVar27 = 0;
    do {
      while( true ) {
        lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x40) + lVar27 * 8);
        iVar11 = FUN_14007540c((uint)*(ushort *)(lVar20 + 0xc),(uint)*(ushort *)(lVar20 + 0xe));
        *(int *)(lVar20 + 8) = iVar11;
        lVar27 = lVar27 + 1;
        if ((iVar11 == 0x73796d62) || (iVar11 == 0x756e6963)) break;
        if (*(int *)(param_2 + 0x38) <= lVar27) {
          if (bVar28) goto LAB_140070a09;
          goto LAB_140070a56;
        }
      }
      bVar28 = false;
    } while (lVar27 < *(int *)(param_2 + 0x38));
  }
LAB_140070a56:
  uVar16 = *(uint *)(param_2 + 0x478);
  if (uVar16 != 0) {
    lVar27 = *(longlong *)(param_2 + 0x98);
    uVar26 = *(ushort *)(param_2 + 0x112);
    if ((uVar26 == 0) || (*(short *)(param_2 + 0x208) == -1)) {
      uVar26 = 1;
      sVar10 = 1;
    }
    else {
      sVar10 = *(short *)(param_2 + 0x20a);
    }
    lVar20 = FUN_14001c617(lVar27,0x10,0,uVar16,0,(int *)&local_4c);
    *(longlong *)(param_2 + 0x30) = lVar20;
    if (local_4c != 0) goto LAB_140070d1d;
    lVar20 = FUN_14001f231(lVar27,4,0,uVar16,0,(int *)&local_4c);
    if (local_4c != 0) goto LAB_140070d1d;
    uVar25 = 0;
    uVar18 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x30);
      local_4c = (**(code **)(lVar22 + 0xe8))(param_2,uVar25,&local_68);
      uVar23 = uVar18;
      if (local_4c == 0) {
        lVar24 = uVar18 * 0x10;
        *(short *)(lVar5 + lVar24) = (short)(local_54 >> 6);
        *(short *)(lVar5 + 2 + lVar24) =
             (short)((int)((uint)(ushort)local_68 * (int)sVar10 + (uint)(uVar26 >> 1)) /
                    (int)(uint)uVar26);
        *(uint *)(lVar5 + 8 + lVar24) = (uint)(ushort)local_68 << 6;
        *(uint *)(lVar5 + 0xc + lVar24) = (uint)local_68._2_2_ << 6;
        *(uint *)(lVar5 + 4 + lVar24) = (uint)local_68._2_2_ << 6;
        if (((ushort)local_68 != 0) && (local_68._2_2_ != 0)) {
          uVar23 = (ulonglong)((int)uVar18 + 1);
          *(uint *)(lVar20 + uVar18 * 4) = uVar25;
        }
      }
      uVar25 = uVar25 + 1;
      uVar18 = uVar23;
    } while (uVar16 != uVar25);
    uVar25 = (uint)uVar23;
    lVar22 = FUN_14001f231(lVar27,4,uVar16,uVar25,lVar20,(int *)&local_4c);
    if (uVar25 != 0) {
      *(longlong *)(param_2 + 0x480) = lVar22;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
      *(uint *)(param_2 + 0x28) = uVar25;
    }
  }
  uVar16 = *(uint *)(param_2 + 8);
  if ((uVar16 & 3) == 0) {
    uVar16 = uVar16 | 1;
    *(uint *)(param_2 + 8) = uVar16;
  }
  if ((uVar16 & 0x20001) == 0) goto LAB_140070d1d;
  uVar18 = *(ulonglong *)(param_2 + 0x124);
  uVar33 = (undefined2)(uVar18 >> 0x30);
  auVar32._8_4_ = 0;
  auVar32._0_8_ = uVar18;
  auVar32._12_2_ = uVar33;
  auVar32._14_2_ = uVar33;
  uVar33 = (undefined2)(uVar18 >> 0x20);
  auVar31._12_4_ = auVar32._12_4_;
  auVar31._8_2_ = 0;
  auVar31._0_8_ = uVar18;
  auVar31._10_2_ = uVar33;
  auVar30._10_6_ = auVar31._10_6_;
  auVar30._8_2_ = uVar33;
  auVar30._0_8_ = uVar18;
  uVar33 = (undefined2)(uVar18 >> 0x10);
  auVar9._4_8_ = auVar30._8_8_;
  auVar9._2_2_ = uVar33;
  auVar9._0_2_ = uVar33;
  *(int *)(param_2 + 0x58) = (int)(short)uVar18;
  *(int *)(param_2 + 0x5c) = auVar9._0_4_ >> 0x10;
  *(int *)(param_2 + 0x60) = auVar30._8_4_ >> 0x10;
  *(int *)(param_2 + 100) = auVar31._12_4_ >> 0x10;
  *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x248) & 0x80) == 0)) {
    sVar10 = *(short *)(param_2 + 0x13e);
    sVar3 = (short)*(undefined4 *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar3;
    *(short *)(param_2 + 0x6c) = sVar10;
    *(short *)(param_2 + 0x6e) = (sVar3 - sVar10) + *(short *)(param_2 + 0x140);
    if ((*(short *)(param_2 + 0x208) != -1) && ((sVar3 == 0 && (sVar10 == 0)))) {
      sVar3 = *(short *)(param_2 + 0x24e);
      sVar10 = *(short *)(param_2 + 0x250);
      if (sVar3 != 0 || sVar10 != 0) {
        *(short *)(param_2 + 0x6a) = sVar3;
        goto LAB_140070cc1;
      }
      sVar10 = (short)*(undefined4 *)(param_2 + 0x254);
      *(short *)(param_2 + 0x6a) = sVar10;
      *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x256);
      *(short *)(param_2 + 0x6e) = *(short *)(param_2 + 0x256) + sVar10;
    }
  }
  else {
    sVar3 = *(short *)(param_2 + 0x24e);
    *(short *)(param_2 + 0x6a) = sVar3;
    sVar10 = (short)*(undefined4 *)(param_2 + 0x250);
LAB_140070cc1:
    *(short *)(param_2 + 0x6c) = sVar10;
    *(short *)(param_2 + 0x6e) = (sVar3 - sVar10) + *(short *)(param_2 + 0x252);
  }
  *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
  puVar21 = (undefined2 *)(param_2 + 0x1a2);
  if (*(char *)(param_2 + 400) == '\0') {
    puVar21 = (undefined2 *)(param_2 + 0x6e);
  }
  *(undefined2 *)(param_2 + 0x72) = *puVar21;
  *(short *)(param_2 + 0x74) =
       (short)*(undefined4 *)(param_2 + 0x278) - *(short *)(param_2 + 0x27a) / 2;
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x27a);
LAB_140070d1d:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return local_4c;
}

