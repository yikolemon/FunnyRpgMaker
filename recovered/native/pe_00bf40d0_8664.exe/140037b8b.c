/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140037b8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140037b8b(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_d8 [44];
  uint local_ac;
  longlong local_a8;
  undefined *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  longlong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  local_98 = *(longlong *)(param_3 + 0x78);
  lVar5 = *(longlong *)(param_3 + 0x80);
  lVar23 = *(longlong *)(lVar5 + 0x38);
  plVar6 = *(longlong **)(local_98 + 0xf0);
  lVar7 = *plVar6;
  local_a8 = param_1[2];
  iStack_60 = *(int *)(lVar23 + 0x10);
  uStack_50 = param_5 >> 0x10 & 0xf;
  if ((iStack_60 == 0) || (*(uint *)(lVar23 + 8) != uStack_50)) {
    *(uint *)(lVar23 + 8) = uStack_50;
    uVar14 = *(undefined8 *)(lVar5 + 0x18);
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar10 = *(undefined8 *)(lVar5 + 0x2c);
    *(undefined8 *)(lVar23 + 0x18) = *(undefined8 *)(lVar5 + 0x24);
    *(undefined8 *)(lVar23 + 0x20) = uVar10;
    *(undefined8 *)(lVar23 + 0xc) = uVar14;
    *(undefined8 *)(lVar23 + 0x14) = uVar9;
    iStack_60 = *(int *)(lVar23 + 0x10);
  }
  local_58 = 0;
  uStack_5c = *(undefined4 *)(lVar23 + 0x14);
  uStack_54 = 0;
  uStack_4c = 0;
  local_68 = param_3;
  iVar12 = FUN_14003812d(param_1,param_2,param_3);
  if ((iVar12 != 0) ||
     (iVar12 = FUN_140038185((longlong *)param_1[1],param_4,(longlong *)&local_70), iVar12 != 0))
  goto LAB_140037c78;
  puVar8 = (&PTR_DAT_1400f0d20)[*(int *)(*local_70 + 4)];
  param_1[3] = (longlong)local_70;
  local_ac = param_4;
  if (*(code **)(puVar8 + 0x18) == (code *)0x0) {
    local_70[3] = CONCAT44(uStack_54,local_58);
    local_70[4] = CONCAT44(uStack_4c,uStack_50);
    local_70[1] = local_68;
    local_70[2] = CONCAT44(uStack_5c,iStack_60);
  }
  else {
    (**(code **)(puVar8 + 0x18))(local_70,&local_68);
  }
  local_a0 = puVar8;
  if (((*(code **)(puVar8 + 0x30) != (code *)0x0) &&
      (iVar12 = (**(code **)(puVar8 + 0x30))(local_a8,local_70), iVar12 != 0)) ||
     (iVar12 = FUN_14001d8c9(param_3,local_ac,param_5 & 0xffffd7fa | 0x2801), iVar12 != 0))
  goto LAB_140037c78;
  if ((uStack_50 == 1) &&
     ((cVar2 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x58), cVar2 == '\0' ||
      ((cVar2 < '\0' && (*(char *)(param_2 + 0x20) == '\0')))))) {
    FUN_1400382dc((longlong)param_1,param_3,local_70);
  }
  lVar5 = local_98;
  cVar2 = *(char *)((longlong)plVar6 + 0xc);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 != '\0') {
    local_88 = plVar6[2];
    uStack_80 = plVar6[3];
    *(longlong *)((longlong)param_1 + 0x24) = local_88;
    *(longlong *)((longlong)param_1 + 0x2c) = uStack_80;
    *(longlong *)((longlong)param_1 + 0x34) = plVar6[4];
    uVar14 = FUN_140021a31((uint *)&local_88);
    if ((int)uVar14 == 0) {
      FUN_14001df9f((int *)((longlong)param_1 + 0x34),(int *)&local_88);
    }
  }
  iVar12 = 7;
  if (*(int *)(lVar5 + 0x60) == 0x6f75746c) {
    if ((char)param_1[4] != '\0') {
      FUN_14001df78(lVar5 + 0x98,*(int *)((longlong)param_1 + 0x34),(int)param_1[7]);
    }
    lVar23 = local_a8;
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(local_a8 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(local_a8 + 0x14);
    lVar17 = (longlong)*(int *)(lVar5 + 0x40) * (longlong)*(int *)(local_a8 + 8);
    *(int *)((longlong)param_1 + 0x44) =
         (int)((ulonglong)((lVar17 >> 0x3f) + lVar17 + 0x8000) >> 0x10) + *(int *)(local_a8 + 0xc);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(local_a8 + 0x14);
    iVar12 = 0;
    if (*(short *)(lVar5 + 0x9a) != 0) {
      if ((*(code **)(local_a0 + 0x38) != (code *)0x0) &&
         (iVar12 = (**(code **)(local_a0 + 0x38))(local_ac,local_a8,lVar7 + 0x18,local_70),
         iVar12 != 0)) goto LAB_140037c78;
      if (uStack_50 == 1) {
        iVar16 = *(int *)((longlong)param_1 + 0x3c);
        iVar12 = *(int *)((longlong)param_1 + 0x44);
        uVar15 = iVar16 + 0x20U & 0xffffffc0;
        *(uint *)((longlong)param_1 + 0x3c) = uVar15;
        *(uint *)((longlong)param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        iVar16 = uVar15 - iVar16;
      }
      else {
        if ((ulonglong)*(uint *)(lVar23 + 0x58) < 2) {
          iVar12 = *(int *)((longlong)param_1 + 0x44);
        }
        else {
          iVar12 = *(int *)((longlong)param_1 + 0x44);
          if ((*(byte *)(lVar23 + 0x1178) & 4) == 0) {
            lVar17 = *(longlong *)(lVar23 + 0x60);
            lVar23 = lVar17 + (ulonglong)*(uint *)(lVar23 + 0x58) * 0x48;
            iVar13 = iVar12 - *(int *)(lVar23 + -0x44);
            iVar3 = *(int *)(lVar17 + 4);
            iVar4 = *(int *)(lVar17 + 8);
            iVar12 = iVar4 - iVar3;
            iVar16 = iVar12 + -8;
            if (0x17 < iVar3) {
              iVar16 = iVar12;
            }
            iVar12 = *(int *)(lVar23 + -0x40) + 8;
            if (0x17 < iVar13) {
              iVar12 = *(int *)(lVar23 + -0x40);
            }
            iVar12 = iVar12 + iVar13;
            uVar15 = iVar16 + 0x20U & 0xffffffc0;
            *(uint *)((longlong)param_1 + 0x3c) = uVar15;
            uVar18 = iVar12 + 0x20U & 0xffffffc0;
            *(uint *)((longlong)param_1 + 0x44) = uVar18;
            if ((0 < iVar3) && (iVar4 <= (int)uVar15)) {
              uVar15 = uVar15 - 0x40;
              *(uint *)((longlong)param_1 + 0x3c) = uVar15;
            }
            if (0 < iVar13 && (int)uVar18 <= *(int *)(lVar23 + -0x40)) {
              *(uint *)((longlong)param_1 + 0x44) = uVar18 + 0x40;
            }
            iVar16 = uVar15 - iVar16;
            goto LAB_140037f37;
          }
        }
        iVar16 = *(int *)((longlong)param_1 + 0x3c);
        uVar15 = iVar16 + 0x20U & 0xffffffc0;
        *(uint *)((longlong)param_1 + 0x3c) = uVar15;
        *(uint *)((longlong)param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        iVar16 = uVar15 - iVar16;
      }
LAB_140037f37:
      *(int *)(lVar5 + 0xdc) = iVar16;
      *(int *)(lVar5 + 0xe0) = *(int *)((longlong)param_1 + 0x44) - iVar12;
      iVar12 = 0;
    }
  }
  auVar19._0_4_ = (int)*(undefined8 *)(lVar5 + 0x44) - (int)*(undefined8 *)(lVar5 + 0x38);
  auVar19._4_4_ =
       (int)((ulonglong)*(undefined8 *)(lVar5 + 0x44) >> 0x20) -
       (int)((ulonglong)*(undefined8 *)(lVar5 + 0x38) >> 0x20);
  uVar1 = local_70[2];
  auVar26._0_4_ = -(uint)((int)auVar19._0_4_ < 0);
  auVar26._4_4_ = -(uint)(auVar19._4_4_ < 0);
  auVar26._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar19._8_4_ = auVar19._4_4_;
  auVar19._12_4_ = auVar26._4_4_;
  auVar25._0_4_ = -(uint)((int)uVar1 < 0);
  auVar25._4_4_ = -(uint)((longlong)uVar1 < 0);
  auVar25._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar24._8_4_ = (int)(uVar1 >> 0x20);
  auVar24._0_8_ = uVar1;
  auVar24._12_4_ = auVar25._4_4_;
  auVar25._8_4_ = auVar25._4_4_;
  auVar26._8_4_ = auVar26._4_4_;
  lVar23 = (uVar1 & 0xffffffff) * (ulonglong)auVar19._0_4_ +
           ((ulonglong)auVar26._0_4_ * (uVar1 & 0xffffffff) +
            (ulonglong)auVar25._0_4_ * (ulonglong)auVar19._0_4_ << 0x20);
  lVar17 = (auVar24._8_8_ & 0xffffffff) * (auVar19._8_8_ & 0xffffffff) +
           ((auVar26._8_8_ & 0xffffffff) * (auVar24._8_8_ & 0xffffffff) +
            (auVar25._8_8_ & 0xffffffff) * (auVar19._8_8_ & 0xffffffff) << 0x20);
  iVar16 = (int)(lVar23 >> 0x3f);
  auVar20._0_8_ = CONCAT44(iVar16,iVar16);
  auVar20._8_4_ = (int)(lVar17 >> 0x3f);
  auVar20._12_4_ = auVar20._8_4_;
  local_90 = CONCAT44((int)((ulonglong)(auVar20._8_8_ + lVar17 + _UNK_1400f43b8) >> 0x10),
                      (int)((ulonglong)(auVar20._0_8_ + lVar23 + _DAT_1400f43b0) >> 0x10));
  if ((char)param_1[4] != '\0') {
    FUN_14001df2d(lVar7 + 0x18,(int *)((longlong)param_1 + 0x24));
    FUN_14001df9f((int *)&local_90,(int *)((longlong)param_1 + 0x24));
  }
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_14001df78(lVar7 + 0x18,-*(int *)((longlong)param_1 + 0x3c),0);
  }
  FUN_14001d45b(lVar7 + 0x18,(int *)&local_88);
  uVar15 = (uint)local_88 + _DAT_1400e6870 & _DAT_1400f43c0;
  uVar18 = local_88._4_4_ + _UNK_1400e6874 & _UNK_1400f43c4;
  uVar21 = (int)uStack_80 + _UNK_1400e6878 & _UNK_1400f43c8;
  uVar22 = uStack_80._4_4_ + _UNK_1400e687c & _UNK_1400f43cc;
  local_88 = CONCAT44(uVar18,uVar15);
  uStack_80 = CONCAT44(uVar22,uVar21);
  *(ulonglong *)(lVar5 + 0x30) = CONCAT44(uVar22 - uVar18,uVar21 - uVar15);
  *(ulonglong *)(lVar5 + 0x38) = CONCAT44(uVar22,uVar15);
  *(ulonglong *)(lVar5 + 0x44) =
       CONCAT44((int)((ulonglong)local_90 >> 0x20) + uVar22,(int)local_90 + uVar15) &
       (ulonglong)DAT_1400e6850;
  if ((uStack_50 == 1) ||
     (((*(byte *)(*(longlong *)(lVar5 + 8) + 8) & 4) == 0 &&
      ((uVar11 = FUN_1400384e9(param_1[1],local_ac), (char)uVar11 == '\0' ||
       ((char)local_70[5] == '\0')))))) {
    if (*(int *)(lVar5 + 0x40) == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)((longlong)param_1 + 0x44) - *(int *)((longlong)param_1 + 0x3c);
      *(int *)(lVar5 + 0x40) = iVar16;
    }
  }
  else {
    lVar23 = (longlong)*(int *)(lVar5 + 0x40) * (longlong)(int)local_70[2];
    iVar16 = (int)((ulonglong)((lVar23 >> 0x3f) + lVar23 + 0x8000) >> 0x10);
    *(int *)(lVar5 + 0x40) = iVar16;
    *(undefined8 *)(lVar5 + 0xdc) = 0;
  }
  lVar23 = (longlong)*(int *)(lVar5 + 0x4c) * (longlong)*(int *)((longlong)local_70 + 0x14);
  *(uint *)(lVar5 + 0x40) = iVar16 + 0x20U & 0xffffffc0;
  *(uint *)(lVar5 + 0x4c) =
       (int)((ulonglong)((lVar23 >> 0x3f) + lVar23 + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  *(undefined4 *)(lVar5 + 0x60) = 0x6f75746c;
LAB_140037c78:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
  }
  return iVar12;
}

