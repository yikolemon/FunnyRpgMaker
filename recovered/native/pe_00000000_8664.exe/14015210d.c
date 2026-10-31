/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015210d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14015210d(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
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
  short local_8a0;
  undefined2 uStack_89e;
  int iStack_89c;
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_908;
  lVar17 = *(longlong *)(param_1 + 8);
  lVar16 = *(longlong *)(lVar17 + 0x2f8);
  lVar4 = *(longlong *)(lVar17 + 0x3e0);
  puVar19 = *(undefined8 **)(lVar16 + 0x50);
  local_8c4 = param_4;
  if ((*(int *)(lVar4 + 0x660) == 0xffff) || (*(longlong *)(lVar4 + 0x4e0) == 0)) {
    uVar20 = 6;
    if (*(uint *)(lVar4 + 0x20) <= param_3) goto LAB_14015247a;
  }
  else if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_140152bca(lVar4 + 0x4d0,param_3);
    if (param_3 == 0) {
      uVar20 = 6;
      goto LAB_14015247a;
    }
  }
  if ((((char)((local_8c4 & 8) >> 3) == '\0' && (int)param_2[8] != -1) &&
      (lVar5 = *param_2, (*(ushort *)(lVar5 + 6) & 0x7fff) == 0)) &&
     ((*(byte *)(lVar5 + 9) & 0x80) == 0)) {
    local_8e8 = *(uint **)(lVar5 + 0xa0);
    local_8e0 = param_1 + 0x68;
    local_8d8 = (code *)&local_490;
    iVar8 = (**(code **)(*(longlong *)(lVar5 + 0x2d0) + 0x98))
                      (lVar17,(int)param_2[8],param_3,local_8c4);
    if (iVar8 != 0) goto LAB_14015222b;
    *(ulonglong *)(param_1 + 0x30) = CONCAT44((local_490 & 0xffff) << 6,(local_490 >> 0x10) << 6);
    *(int *)(param_1 + 0x38) = (int)local_48c << 6;
    *(int *)(param_1 + 0x3c) = (int)local_48a << 6;
    *(uint *)(param_1 + 0x40) = (uint)local_488 << 6;
    *(int *)(param_1 + 0x44) = (int)local_486 << 6;
    *(int *)(param_1 + 0x48) = (int)local_484 << 6;
    *(uint *)(param_1 + 0x4c) = (uint)local_482 << 6;
    iVar8 = (int)local_484;
    iVar3 = (int)local_486;
    if ((local_8c4 & 0x10) == 0) {
      iVar8 = (int)local_48a;
      iVar3 = (int)local_48c;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
    *(int *)(param_1 + 0x90) = iVar3;
    *(int *)(param_1 + 0x94) = iVar8;
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
      uVar10 = (int)sVar1 - (int)sVar2;
    }
    else {
      local_8e8 = (uint *)local_870;
      (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,param_3,&local_888);
      uVar10 = (uint)local_870[0];
    }
    *(uint *)(param_1 + 0x54) = uVar10;
  }
  else {
LAB_14015222b:
    uVar20 = 6;
    if ((local_8c4 >> 0xe & 1) != 0) goto LAB_14015247a;
    if (((local_8c4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar17 + 0x4e8) != 0)) {
      uVar20 = 0x24;
      if (((short)param_2[3] == 0) || (*(short *)((longlong)param_2 + 0x1a) == 0))
      goto LAB_14015247a;
      lVar5 = *(longlong *)(lVar17 + 0x2d0);
      iVar8 = (**(code **)(lVar5 + 0x178))(param_1,param_3);
      if (iVar8 == 0) {
        iVar8 = *(int *)((longlong)param_2 + 0x1c);
        lVar16 = param_2[4];
        *(undefined4 *)(param_1 + 0x60) = 0x53564720;
        local_8e8 = (uint *)local_870;
        uVar20 = 0;
        (**(code **)(lVar5 + 0x150))(lVar17,0,param_3,&local_490);
        local_8e8 = (uint *)&local_888;
        (**(code **)(lVar5 + 0x150))(lVar17,1,param_3,&local_490);
        *(uint *)(param_1 + 0x50) = (uint)local_870[0];
        *(uint *)(param_1 + 0x54) = (uint)(ushort)local_888;
        lVar17 = (longlong)iVar8 * (ulonglong)local_870[0];
        *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        lVar17 = (longlong)(int)lVar16 * (local_888 & 0xffff);
        *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        goto LAB_14015247a;
      }
    }
    local_8c5 = (byte)local_8c4 & 1;
    bVar21 = (local_8c4 & 2) == 0;
    *(bool *)(param_1 + 0xf8) = bVar21;
    local_8ac = CONCAT31((int3)(local_8c4 >> 8),bVar21);
    *(byte *)(param_1 + 0xf9) = local_8c5 ^ 1;
    if ((local_8c4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar9 = (undefined4)param_2[4];
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      uVar9 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x100) = uVar9;
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
      bVar7 = FUN_140150c8d(lVar4 + 0x10b0,param_3);
      param_1 = local_8c0;
      uVar20 = (ulonglong)(*(uint *)(lVar4 + 0x8a8) - 1) & 0xff;
      if ((uint)bVar7 < *(uint *)(lVar4 + 0x8a8)) {
        uVar20 = (ulonglong)bVar7;
      }
      iVar8 = *(int *)(lVar4 + 0x620);
      lVar5 = *(longlong *)(lVar4 + 0x8b0 + uVar20 * 8);
      iVar3 = *(int *)(lVar5 + 0x40);
      local_888 = *(ulonglong *)(lVar5 + 0x2c);
      uStack_880 = *(undefined8 *)(lVar5 + 0x34);
      local_8b4 = *(int *)(lVar5 + 0x44);
      local_8b0 = *(int *)(lVar5 + 0x48);
      if (iVar8 == iVar3) {
        local_8b8 = 0;
        puVar19 = local_8a8;
      }
      else {
        uVar9 = FUN_14012a478(*(undefined4 *)(local_8c0 + 0xfc),iVar8,iVar3);
        *(undefined4 *)(param_1 + 0xfc) = uVar9;
        uVar12 = FUN_14012a478(*(undefined4 *)(param_1 + 0x100),iVar8,iVar3);
        *(int *)(param_1 + 0x100) = (int)uVar12;
        local_8b8 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        puVar19 = local_8a8;
      }
    }
    uVar10 = local_8c4;
    local_8d0 = FUN_140152bdc;
    local_8d8 = FUN_140152c6c;
    local_8e0 = CONCAT44(local_8e0._4_4_,local_8c4 >> 0x10) & 0xffffffff0000000f;
    local_8e8 = (uint *)CONCAT71(local_8e8._1_7_,(char)local_8ac);
    (*(code *)*puVar19)(&local_490,lVar17,param_2,param_1);
    if ((uVar10 >> 8 & 1) != 0) {
      local_11f = 1;
    }
    uVar18 = local_8c4 & 0x400;
    local_436 = (undefined1)(uVar18 >> 10);
    uVar10 = (*(code *)puVar19[1])(&local_490,param_2,param_3);
    if ((uVar10 != 0) || (uVar10 = FUN_140152c6c(lVar17,param_3,&local_8a0,&local_88c), uVar10 != 0)
       ) {
      uVar20 = (ulonglong)uVar10;
      goto LAB_14015247a;
    }
    (**(code **)(lVar16 + 0x30))(local_870,&local_490,0);
    uVar10 = local_88c;
    uVar11 = (*(code *)puVar19[2])
                       (local_870,CONCAT44(iStack_89c,CONCAT22(uStack_89e,local_8a0)),local_88c);
    uVar20 = (ulonglong)uVar11;
    if ((char)uVar11 == -0x5c) {
      *(undefined1 *)(local_8c0 + 0xf8) = 0;
      uVar13 = (*(code *)puVar19[2])
                         (local_870,CONCAT44(iStack_89c,CONCAT22(uStack_89e,local_8a0)),uVar10);
      uVar20 = uVar13 & 0xffffffff;
      local_8b8 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
      local_8ac = 0;
    }
    FUN_140152bdc(lVar17,&local_8a0,uVar10);
    if ((int)uVar20 != 0) goto LAB_14015247a;
    if (*(longlong *)(*(longlong *)(lVar17 + 0xd0) + 0x50) == 0) {
      if (*(longlong *)(lVar4 + 0x510) != 0) {
        lVar16 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x510) + (ulonglong)param_3 * 4) +
                 *(longlong *)(lVar4 + 0x518) + -1;
        goto LAB_14015278c;
      }
    }
    else {
      lVar16 = 0;
      uVar10 = 0;
LAB_14015278c:
      *(longlong *)(local_8c0 + 0xd0) = lVar16;
      *(uint *)(local_8c0 + 0xd8) = uVar10;
    }
    (*local_418)();
    plVar6 = *(longlong **)(*(longlong *)(lVar17 + 0xd0) + 0x50);
    if ((plVar6 != (longlong *)0x0) && (*(code **)(*plVar6 + 0x10) != (code *)0x0)) {
      local_8a0 = (short)local_458;
      uStack_89e = (undefined2)((uint)local_458 >> 0x10);
      iStack_89c = 0;
      local_898 = local_450;
      uVar10 = (**(code **)(*plVar6 + 0x10))(plVar6[1],param_3,0,&local_8a0);
      uVar20 = (ulonglong)uVar10;
      local_458 = CONCAT22(uStack_89e,local_8a0);
      local_450 = local_898;
      if (uVar10 != 0) goto LAB_14015247a;
    }
    iVar3 = local_8b0;
    iVar8 = local_8b4;
    if (uVar18 == 0) {
      *(undefined4 *)(local_8c0 + 0x60) = 0x6f75746c;
      *(undefined4 *)(local_8c0 + 0xb8) = 4;
      *(uint *)(local_8c0 + 0xb8) = (uint)(*(ushort *)((longlong)param_2 + 0x1a) < 0x18) << 8 | 4;
      if (*(short *)(lVar17 + 0x15a) != 0) {
        local_8a0 = 0;
        local_88c = local_88c & 0xffff0000;
        local_8e8 = &local_88c;
        (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,0,param_3,&local_8a0);
        local_128 = local_88c & 0xffff;
        *(int *)(local_8c0 + 0x38) = (int)local_8a0;
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
        uVar10 = sVar1 - iVar15;
        *(uint *)(local_8c0 + 0x4c) = uVar10;
        bVar21 = true;
      }
      else {
        bVar21 = false;
        local_8a0 = 0;
        local_88c = local_88c & 0xffff0000;
        local_8e8 = &local_88c;
        (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,param_3,&local_8a0);
        iVar15 = (int)lVar17;
        *(int *)(local_8c0 + 0x48) = (int)local_8a0;
        uVar10 = local_88c & 0xffff;
        *(uint *)(local_8c0 + 0x4c) = local_88c & 0xffff;
      }
      bVar7 = local_8c5;
      lVar17 = local_8c0 + 0x98;
      *(uint *)(local_8c0 + 0x54) = uVar10;
      auVar22._0_4_ = -(uint)((uint)local_888 == _DAT_140e94ee0);
      auVar22._4_4_ = -(uint)(local_888._4_4_ == _UNK_140e94ee4);
      auVar22._8_4_ = -(uint)((int)uStack_880 == _UNK_140e94ee8);
      auVar22._12_4_ = -(uint)(uStack_880._4_4_ == _UNK_140e94eec);
      iVar15 = movmskps(iVar15,auVar22);
      if (iVar15 != 0xf) {
        FUN_14012a529(lVar17,&local_888);
        lVar16 = (longlong)*(int *)(local_8c0 + 0x40) * (longlong)(int)(uint)local_888;
        *(int *)(local_8c0 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        lVar16 = (longlong)*(int *)(local_8c0 + 0x4c) * (longlong)uStack_880._4_4_;
        uVar10 = (uint)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        *(uint *)(local_8c0 + 0x4c) = uVar10;
      }
      if (iVar8 != 0 || iVar3 != 0) {
        FUN_14012a574(lVar17,iVar8,iVar3);
        *(int *)(local_8c0 + 0x40) = *(int *)(local_8c0 + 0x40) + iVar8;
        uVar10 = iVar3 + *(int *)(local_8c0 + 0x4c);
        *(uint *)(local_8c0 + 0x4c) = uVar10;
      }
      if ((bVar7 & (char)local_8b8 == '\0') == 0) {
        iVar8 = *(int *)(local_8c0 + 0xfc);
        iVar3 = *(int *)(local_8c0 + 0x100);
        if ((((byte)local_8ac & local_430 != 0) == 0) && (*(ushort *)(local_8c0 + 0x9a) != 0)) {
          piVar14 = *(int **)(local_8c0 + 0xa0);
          uVar10 = *(ushort *)(local_8c0 + 0x9a) + 1;
          do {
            lVar16 = (longlong)*piVar14 * (longlong)iVar8;
            *piVar14 = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar16 = (longlong)piVar14[1] * (longlong)iVar3;
            piVar14[1] = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            piVar14 = piVar14 + 2;
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
          uVar10 = *(uint *)(local_8c0 + 0x4c);
        }
        lVar16 = (longlong)*(int *)(local_8c0 + 0x40) * (longlong)iVar8;
        *(int *)(local_8c0 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
        lVar16 = (longlong)(int)uVar10 * (longlong)iVar3;
        *(int *)(local_8c0 + 0x4c) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      }
      FUN_140129a57(lVar17,&local_8a0);
      *(ulonglong *)(local_8c0 + 0x30) =
           CONCAT44(local_898._4_4_ - iStack_89c,(int)local_898 - CONCAT22(uStack_89e,local_8a0));
      *(int *)(local_8c0 + 0x38) = CONCAT22(uStack_89e,local_8a0);
      *(int *)(local_8c0 + 0x3c) = local_898._4_4_;
      if (bVar21) {
        if ((local_8c4 & 0x10) != 0) {
          FUN_14012b254(local_8c0 + 0x30,*(undefined4 *)(local_8c0 + 0x4c));
        }
      }
      else {
        *(int *)(local_8c0 + 0x44) = CONCAT22(uStack_89e,local_8a0) - *(int *)(local_8c0 + 0x40) / 2
        ;
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
LAB_14015247a:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_908)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_908);
}

