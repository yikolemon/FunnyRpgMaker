/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005005d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14005005d(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined6 extraout_var;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_908 [32];
  uint *local_8e8;
  undefined8 local_8e0;
  code *local_8d8;
  code *local_8d0;
  byte local_8c5;
  uint local_8c4;
  longlong local_8c0;
  undefined4 local_8b8;
  int local_8b4;
  int local_8b0;
  undefined4 local_8ac;
  undefined8 *local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  uint local_88c;
  undefined8 local_888;
  undefined8 uStack_880;
  ushort local_870 [496];
  uint local_490;
  short local_48c;
  short local_48a;
  ushort local_488;
  short local_486;
  short local_484;
  ushort local_482;
  undefined4 local_458;
  undefined8 local_450;
  undefined1 local_436;
  longlong local_430;
  code *local_418;
  uint local_128;
  undefined1 local_11f;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_908;
  lVar17 = *(longlong *)(param_1 + 8);
  lVar16 = *(longlong *)(lVar17 + 0x2f8);
  lVar4 = *(longlong *)(lVar17 + 0x3e0);
  puVar19 = *(undefined8 **)(lVar16 + 0x50);
  local_8c4 = param_4;
  if ((*(int *)(lVar4 + 0x660) == 0xffff) || (*(longlong *)(lVar4 + 0x4e0) == 0)) {
    uVar20 = 6;
    if (*(uint *)(lVar4 + 0x20) <= param_3) goto LAB_1400503ca;
  }
  else if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar8 = FUN_140050b1a(lVar4 + 0x4d0,param_3);
    param_3 = (uint)CONCAT62(extraout_var,uVar8);
    if (param_3 == 0) {
      uVar20 = 6;
      goto LAB_1400503ca;
    }
  }
  if ((((char)((local_8c4 & 8) >> 3) == '\0' && (int)param_2[8] != -1) &&
      (lVar5 = *param_2, (*(ushort *)(lVar5 + 6) & 0x7fff) == 0)) &&
     ((*(byte *)(lVar5 + 9) & 0x80) == 0)) {
    local_8e8 = *(uint **)(lVar5 + 0xa0);
    local_8e0 = param_1 + 0x68;
    local_8d8 = (code *)&local_490;
    iVar9 = (**(code **)(*(longlong *)(lVar5 + 0x2d0) + 0x98))
                      (lVar17,(int)param_2[8],param_3,local_8c4);
    if (iVar9 != 0) goto LAB_14005017b;
    *(ulonglong *)(param_1 + 0x30) = CONCAT44((local_490 & 0xffff) << 6,(local_490 >> 0x10) << 6);
    *(int *)(param_1 + 0x38) = (int)local_48c << 6;
    *(int *)(param_1 + 0x3c) = (int)local_48a << 6;
    *(uint *)(param_1 + 0x40) = (uint)local_488 << 6;
    *(int *)(param_1 + 0x44) = (int)local_486 << 6;
    *(int *)(param_1 + 0x48) = (int)local_484 << 6;
    *(uint *)(param_1 + 0x4c) = (uint)local_482 << 6;
    iVar9 = (int)local_484;
    iVar3 = (int)local_486;
    if ((local_8c4 & 0x10) == 0) {
      iVar9 = (int)local_48a;
      iVar3 = (int)local_48c;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
    *(int *)(param_1 + 0x90) = iVar3;
    *(int *)(param_1 + 0x94) = iVar9;
    local_8e8 = (uint *)local_870;
    (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,0,param_3,&local_888);
    *(uint *)(param_1 + 0x50) = (uint)local_870[0];
    if ((*(char *)(lVar17 + 400) == '\0') || (*(short *)(lVar17 + 0x1ba) == 0)) {
      if (*(short *)(lVar17 + 0x208) == -1) {
        sVar1 = *(short *)(lVar17 + 0x13c);
        sVar2 = *(short *)(lVar17 + 0x13e);
      }
      else {
        sVar1 = *(short *)(lVar17 + 0x24e);
        sVar2 = *(short *)(lVar17 + 0x250);
      }
      uVar11 = (int)sVar1 - (int)sVar2;
    }
    else {
      local_8e8 = (uint *)local_870;
      (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,param_3,&local_888);
      uVar11 = (uint)local_870[0];
    }
    *(uint *)(param_1 + 0x54) = uVar11;
  }
  else {
LAB_14005017b:
    uVar20 = 6;
    if ((local_8c4 >> 0xe & 1) != 0) goto LAB_1400503ca;
    if (((local_8c4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar17 + 0x4e8) != 0)) {
      uVar20 = 0x24;
      if (((short)param_2[3] == 0) || (*(short *)((longlong)param_2 + 0x1a) == 0))
      goto LAB_1400503ca;
      lVar5 = *(longlong *)(lVar17 + 0x2d0);
      iVar9 = (**(code **)(lVar5 + 0x178))(param_1,param_3);
      if (iVar9 == 0) {
        iVar9 = *(int *)((longlong)param_2 + 0x1c);
        lVar16 = param_2[4];
        *(undefined4 *)(param_1 + 0x60) = 0x53564720;
        local_8e8 = (uint *)local_870;
        uVar20 = 0;
        (**(code **)(lVar5 + 0x150))(lVar17,0,param_3,&local_490);
        local_8e8 = (uint *)&local_888;
        (**(code **)(lVar5 + 0x150))(lVar17,1,param_3,&local_490);
        *(uint *)(param_1 + 0x50) = (uint)local_870[0];
        *(uint *)(param_1 + 0x54) = (uint)(ushort)local_888;
        lVar17 = (longlong)iVar9 * (ulonglong)local_870[0];
        *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        lVar17 = (longlong)(int)lVar16 * (local_888 & 0xffff);
        *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        goto LAB_1400503ca;
      }
    }
    local_8c5 = (byte)local_8c4 & 1;
    bVar21 = (local_8c4 & 2) == 0;
    *(bool *)(param_1 + 0xf8) = bVar21;
    local_8ac = CONCAT31((int3)(local_8c4 >> 8),bVar21);
    *(byte *)(param_1 + 0xf9) = local_8c5 ^ 1;
    if ((local_8c4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar10 = (undefined4)param_2[4];
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      uVar10 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x100) = uVar10;
    local_8c0 = param_1;
    if (*(int *)(lVar4 + 0x8a8) == 0) {
      local_888 = *(ulonglong *)(lVar4 + 0x60c);
      uStack_880 = *(undefined8 *)(lVar4 + 0x614);
      local_8b4 = *(int *)(lVar4 + 0x624);
      local_8b0 = *(int *)(lVar4 + 0x628);
      local_8b8 = 0;
    }
    else {
      local_8a8 = puVar19;
      uVar13 = FUN_14004ebdd((char *)(lVar4 + 0x10b0),param_3);
      param_1 = local_8c0;
      uVar20 = (ulonglong)(*(uint *)(lVar4 + 0x8a8) - 1) & 0xff;
      if ((uint)(uVar13 & 0xff) < *(uint *)(lVar4 + 0x8a8)) {
        uVar20 = uVar13 & 0xff;
      }
      uVar11 = *(uint *)(lVar4 + 0x620);
      lVar5 = *(longlong *)(lVar4 + 0x8b0 + uVar20 * 8);
      uVar18 = *(uint *)(lVar5 + 0x40);
      local_888 = *(ulonglong *)(lVar5 + 0x2c);
      uStack_880 = *(undefined8 *)(lVar5 + 0x34);
      local_8b4 = *(int *)(lVar5 + 0x44);
      local_8b0 = *(int *)(lVar5 + 0x48);
      if (uVar11 == uVar18) {
        local_8b8 = 0;
        puVar19 = local_8a8;
      }
      else {
        iVar9 = FUN_14001de7c(*(uint *)(local_8c0 + 0xfc),uVar11,uVar18);
        *(int *)(param_1 + 0xfc) = iVar9;
        iVar9 = FUN_14001de7c(*(uint *)(param_1 + 0x100),uVar11,uVar18);
        *(int *)(param_1 + 0x100) = iVar9;
        local_8b8 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1);
        puVar19 = local_8a8;
      }
    }
    uVar11 = local_8c4;
    local_8d0 = FUN_140050b2c;
    local_8d8 = FUN_140050bbc;
    local_8e0 = CONCAT44(local_8e0._4_4_,local_8c4 >> 0x10) & 0xffffffff0000000f;
    local_8e8 = (uint *)CONCAT71(local_8e8._1_7_,(char)local_8ac);
    (*(code *)*puVar19)(&local_490,lVar17,param_2,param_1);
    if ((uVar11 >> 8 & 1) != 0) {
      local_11f = 1;
    }
    uVar18 = local_8c4 & 0x400;
    local_436 = (undefined1)(uVar18 >> 10);
    uVar11 = (*(code *)puVar19[1])(&local_490,param_2,param_3);
    if ((uVar11 != 0) ||
       (uVar11 = FUN_140050bbc(lVar17,(ulonglong)param_3,&local_8a0,&local_88c), uVar11 != 0)) {
      uVar20 = (ulonglong)uVar11;
      goto LAB_1400503ca;
    }
    (**(code **)(lVar16 + 0x30))(local_870,&local_490,0);
    uVar11 = local_88c;
    uVar12 = (*(code *)puVar19[2])
                       (local_870,
                        CONCAT44(local_8a0._4_4_,CONCAT22(local_8a0._2_2_,(short)local_8a0)),
                        local_88c);
    uVar20 = (ulonglong)uVar12;
    if ((char)uVar12 == -0x5c) {
      *(undefined1 *)(local_8c0 + 0xf8) = 0;
      uVar13 = (*(code *)puVar19[2])
                         (local_870,
                          CONCAT44(local_8a0._4_4_,CONCAT22(local_8a0._2_2_,(short)local_8a0)),
                          uVar11);
      uVar20 = uVar13 & 0xffffffff;
      local_8b8 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
      local_8ac = 0;
    }
    FUN_140050b2c(lVar17,&local_8a0,uVar11);
    if ((int)uVar20 != 0) goto LAB_1400503ca;
    if (*(longlong *)(*(longlong *)(lVar17 + 0xd0) + 0x50) == 0) {
      if (*(longlong *)(lVar4 + 0x510) != 0) {
        lVar16 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x510) + (ulonglong)param_3 * 4) +
                 *(longlong *)(lVar4 + 0x518) + -1;
        goto LAB_1400506dc;
      }
    }
    else {
      lVar16 = 0;
      uVar11 = 0;
LAB_1400506dc:
      *(longlong *)(local_8c0 + 0xd0) = lVar16;
      *(uint *)(local_8c0 + 0xd8) = uVar11;
    }
    (*local_418)();
    plVar6 = *(longlong **)(*(longlong *)(lVar17 + 0xd0) + 0x50);
    if ((plVar6 != (longlong *)0x0) && (*(code **)(*plVar6 + 0x10) != (code *)0x0)) {
      local_8a0._0_2_ = (short)local_458;
      local_8a0._2_2_ = (undefined2)((uint)local_458 >> 0x10);
      local_8a0._4_4_ = 0;
      local_898 = local_450;
      uVar11 = (**(code **)(*plVar6 + 0x10))(plVar6[1],param_3,0,&local_8a0);
      uVar20 = (ulonglong)uVar11;
      local_458 = CONCAT22(local_8a0._2_2_,(short)local_8a0);
      local_450 = local_898;
      if (uVar11 != 0) goto LAB_1400503ca;
    }
    iVar3 = local_8b0;
    iVar9 = local_8b4;
    if (uVar18 == 0) {
      *(undefined4 *)(local_8c0 + 0x60) = 0x6f75746c;
      *(undefined4 *)(local_8c0 + 0xb8) = 4;
      *(uint *)(local_8c0 + 0xb8) = (uint)(*(ushort *)((longlong)param_2 + 0x1a) < 0x18) << 8 | 4;
      if (*(short *)(lVar17 + 0x15a) != 0) {
        local_8a0._0_2_ = 0;
        local_88c = local_88c & 0xffff0000;
        local_8e8 = &local_88c;
        (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,0,param_3,&local_8a0);
        local_128 = local_88c & 0xffff;
        *(int *)(local_8c0 + 0x38) = (int)(short)local_8a0;
      }
      *(uint *)(local_8c0 + 0x40) = local_128;
      *(uint *)(local_8c0 + 0x50) = local_128;
      *(undefined1 *)(*(longlong *)(local_8c0 + 0xf0) + 0xc) = 0;
      if ((*(char *)(lVar17 + 400) == '\0') || (*(short *)(lVar17 + 0x1ba) == 0)) {
        if (*(short *)(lVar17 + 0x208) == -1) {
          sVar1 = *(short *)(lVar17 + 0x13c);
          sVar2 = *(short *)(lVar17 + 0x13e);
        }
        else {
          sVar1 = *(short *)(lVar17 + 0x24e);
          sVar2 = *(short *)(lVar17 + 0x250);
        }
        iVar15 = (int)sVar2;
        uVar11 = sVar1 - iVar15;
        *(uint *)(local_8c0 + 0x4c) = uVar11;
        bVar21 = true;
      }
      else {
        bVar21 = false;
        local_8a0._0_2_ = 0;
        local_88c = local_88c & 0xffff0000;
        local_8e8 = &local_88c;
        (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,param_3,&local_8a0);
        iVar15 = (int)lVar17;
        *(int *)(local_8c0 + 0x48) = (int)(short)local_8a0;
        uVar11 = local_88c & 0xffff;
        *(uint *)(local_8c0 + 0x4c) = local_88c & 0xffff;
      }
      bVar7 = local_8c5;
      lVar17 = local_8c0 + 0x98;
      *(uint *)(local_8c0 + 0x54) = uVar11;
      auVar22._0_4_ = -(uint)((uint)local_888 == _DAT_1400e6830);
      auVar22._4_4_ = -(uint)(local_888._4_4_ == _UNK_1400e6834);
      auVar22._8_4_ = -(uint)((int)uStack_880 == _UNK_1400e6838);
      auVar22._12_4_ = -(uint)(uStack_880._4_4_ == _UNK_1400e683c);
      iVar15 = movmskps(iVar15,auVar22);
      if (iVar15 != 0xf) {
        FUN_14001df2d(lVar17,(int *)&local_888);
        lVar16 = (longlong)*(int *)(local_8c0 + 0x40) * (longlong)(int)(uint)local_888;
        *(int *)(local_8c0 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        lVar16 = (longlong)*(int *)(local_8c0 + 0x4c) * (longlong)uStack_880._4_4_;
        uVar11 = (uint)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        *(uint *)(local_8c0 + 0x4c) = uVar11;
      }
      if (iVar9 != 0 || iVar3 != 0) {
        FUN_14001df78(lVar17,iVar9,iVar3);
        *(int *)(local_8c0 + 0x40) = *(int *)(local_8c0 + 0x40) + iVar9;
        uVar11 = iVar3 + *(int *)(local_8c0 + 0x4c);
        *(uint *)(local_8c0 + 0x4c) = uVar11;
      }
      if ((bVar7 & (char)local_8b8 == '\0') == 0) {
        iVar9 = *(int *)(local_8c0 + 0xfc);
        iVar3 = *(int *)(local_8c0 + 0x100);
        if ((((byte)local_8ac & local_430 != 0) == 0) && (*(ushort *)(local_8c0 + 0x9a) != 0)) {
          piVar14 = *(int **)(local_8c0 + 0xa0);
          uVar11 = *(ushort *)(local_8c0 + 0x9a) + 1;
          do {
            lVar16 = (longlong)*piVar14 * (longlong)iVar9;
            *piVar14 = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar16 = (longlong)piVar14[1] * (longlong)iVar3;
            piVar14[1] = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            piVar14 = piVar14 + 2;
            uVar11 = uVar11 - 1;
          } while (1 < uVar11);
          uVar11 = *(uint *)(local_8c0 + 0x4c);
        }
        lVar16 = (longlong)*(int *)(local_8c0 + 0x40) * (longlong)iVar9;
        *(int *)(local_8c0 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        lVar16 = (longlong)(int)uVar11 * (longlong)iVar3;
        *(int *)(local_8c0 + 0x4c) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      }
      FUN_14001d45b(lVar17,(int *)&local_8a0);
      *(ulonglong *)(local_8c0 + 0x30) =
           CONCAT44(local_898._4_4_ - local_8a0._4_4_,
                    (int)local_898 - CONCAT22(local_8a0._2_2_,(short)local_8a0));
      *(int *)(local_8c0 + 0x38) = CONCAT22(local_8a0._2_2_,(short)local_8a0);
      *(int *)(local_8c0 + 0x3c) = local_898._4_4_;
      if (bVar21) {
        if ((local_8c4 & 0x10) != 0) {
          FUN_14001ebdb(local_8c0 + 0x30,*(int *)(local_8c0 + 0x4c));
        }
      }
      else {
        *(int *)(local_8c0 + 0x44) =
             CONCAT22(local_8a0._2_2_,(short)local_8a0) - *(int *)(local_8c0 + 0x40) / 2;
        lVar17 = (longlong)*(int *)(local_8c0 + 0x48) * (longlong)*(int *)(local_8c0 + 0x100);
        *(int *)(local_8c0 + 0x48) = (int)((ulonglong)((lVar17 >> 0x3f) + lVar17 + 0x8000) >> 0x10);
      }
    }
    else {
      lVar17 = *(longlong *)(local_8c0 + 0xf0);
      *(undefined4 *)(local_8c0 + 0x38) = local_458;
      *(uint *)(local_8c0 + 0x40) = local_128;
      *(ulonglong *)(lVar17 + 0x10) = local_888;
      *(undefined8 *)(lVar17 + 0x18) = uStack_880;
      *(int *)(lVar17 + 0x20) = local_8b4;
      *(int *)(lVar17 + 0x24) = local_8b0;
      *(undefined1 *)(lVar17 + 0xc) = 1;
    }
  }
  uVar20 = 0;
LAB_1400503ca:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_908)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_908);
}

