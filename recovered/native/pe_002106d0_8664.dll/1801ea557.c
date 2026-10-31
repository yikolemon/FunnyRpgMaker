/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ea557 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1801ea557(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5
                 )

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_98 = *(longlong *)(param_3 + 0x78);
  lVar4 = *(longlong *)(param_3 + 0x80);
  lVar22 = *(longlong *)(lVar4 + 0x38);
  plVar5 = *(longlong **)(local_98 + 0xf0);
  lVar6 = *plVar5;
  local_a8 = *(longlong *)(param_1 + 0x10);
  iStack_60 = *(int *)(lVar22 + 0x10);
  uStack_50 = param_5 >> 0x10 & 0xf;
  if ((iStack_60 == 0) || (*(uint *)(lVar22 + 8) != uStack_50)) {
    *(uint *)(lVar22 + 8) = uStack_50;
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x2c);
    *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar4 + 0x24);
    *(undefined8 *)(lVar22 + 0x20) = uVar10;
    *(undefined8 *)(lVar22 + 0xc) = uVar8;
    *(undefined8 *)(lVar22 + 0x14) = uVar9;
    iStack_60 = *(int *)(lVar22 + 0x10);
  }
  local_58 = 0;
  uStack_5c = *(undefined4 *)(lVar22 + 0x14);
  uStack_54 = 0;
  uStack_4c = 0;
  local_68 = param_3;
  iVar12 = FUN_1801eaaf9(param_1,param_2,param_3);
  if ((iVar12 != 0) ||
     (iVar12 = FUN_1801eab51(*(undefined8 *)(param_1 + 8),param_4,&local_70), iVar12 != 0))
  goto LAB_1801ea644;
  puVar7 = (&PTR_DAT_180333c00)[*(int *)(*local_70 + 4)];
  *(longlong **)(param_1 + 0x18) = local_70;
  local_ac = param_4;
  if (*(code **)(puVar7 + 0x18) == (code *)0x0) {
    local_70[3] = CONCAT44(uStack_54,local_58);
    local_70[4] = CONCAT44(uStack_4c,uStack_50);
    local_70[1] = local_68;
    local_70[2] = CONCAT44(uStack_5c,iStack_60);
  }
  else {
    (**(code **)(puVar7 + 0x18))(local_70,&local_68);
  }
  local_a0 = puVar7;
  if (((*(code **)(puVar7 + 0x30) != (code *)0x0) &&
      (iVar12 = (**(code **)(puVar7 + 0x30))(local_a8,local_70), iVar12 != 0)) ||
     (iVar12 = FUN_1801caef1(param_3,local_ac,param_5 & 0xffffd7fa | 0x2801), iVar12 != 0))
  goto LAB_1801ea644;
  if ((uStack_50 == 1) &&
     ((cVar11 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x58), cVar11 == '\0' ||
      ((cVar11 < '\0' && (*(char *)(param_2 + 0x20) == '\0')))))) {
    FUN_1801eaca8(param_1,param_3,local_70);
  }
  lVar4 = local_98;
  cVar11 = *(char *)((longlong)plVar5 + 0xc);
  *(char *)(param_1 + 0x20) = cVar11;
  if (cVar11 != '\0') {
    local_88 = plVar5[2];
    uStack_80 = plVar5[3];
    *(longlong *)(param_1 + 0x24) = local_88;
    *(longlong *)(param_1 + 0x2c) = uStack_80;
    *(longlong *)(param_1 + 0x34) = plVar5[4];
    iVar12 = FUN_1801cf62e();
    if (iVar12 == 0) {
      FUN_1801cb5c7(param_1 + 0x34,&local_88);
    }
  }
  iVar12 = 7;
  if (*(int *)(lVar4 + 0x60) == 0x6f75746c) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      FUN_1801cb5a0(lVar4 + 0x98,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    }
    lVar22 = local_a8;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(local_a8 + 0xc);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(local_a8 + 0x14);
    lVar16 = (longlong)*(int *)(lVar4 + 0x40) * (longlong)*(int *)(local_a8 + 8);
    *(int *)(param_1 + 0x44) =
         (int)((ulonglong)((lVar16 >> 0x3f) + lVar16 + 0x8000) >> 0x10) + *(int *)(local_a8 + 0xc);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(local_a8 + 0x14);
    iVar12 = 0;
    if (*(short *)(lVar4 + 0x9a) != 0) {
      if ((*(code **)(local_a0 + 0x38) != (code *)0x0) &&
         (iVar12 = (**(code **)(local_a0 + 0x38))(local_ac,local_a8,lVar6 + 0x18,local_70),
         iVar12 != 0)) goto LAB_1801ea644;
      if (uStack_50 == 1) {
        iVar15 = *(int *)(param_1 + 0x3c);
        iVar12 = *(int *)(param_1 + 0x44);
        uVar14 = iVar15 + 0x20U & 0xffffffc0;
        *(uint *)(param_1 + 0x3c) = uVar14;
        *(uint *)(param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        iVar15 = uVar14 - iVar15;
      }
      else {
        if ((ulonglong)*(uint *)(lVar22 + 0x58) < 2) {
          iVar12 = *(int *)(param_1 + 0x44);
        }
        else {
          iVar12 = *(int *)(param_1 + 0x44);
          if ((*(byte *)(lVar22 + 0x1178) & 4) == 0) {
            lVar16 = *(longlong *)(lVar22 + 0x60);
            lVar22 = lVar16 + (ulonglong)*(uint *)(lVar22 + 0x58) * 0x48;
            iVar13 = iVar12 - *(int *)(lVar22 + -0x44);
            iVar2 = *(int *)(lVar16 + 4);
            iVar3 = *(int *)(lVar16 + 8);
            iVar12 = iVar3 - iVar2;
            iVar15 = iVar12 + -8;
            if (0x17 < iVar2) {
              iVar15 = iVar12;
            }
            iVar12 = *(int *)(lVar22 + -0x40) + 8;
            if (0x17 < iVar13) {
              iVar12 = *(int *)(lVar22 + -0x40);
            }
            iVar12 = iVar12 + iVar13;
            uVar14 = iVar15 + 0x20U & 0xffffffc0;
            *(uint *)(param_1 + 0x3c) = uVar14;
            uVar17 = iVar12 + 0x20U & 0xffffffc0;
            *(uint *)(param_1 + 0x44) = uVar17;
            if ((0 < iVar2) && (iVar3 <= (int)uVar14)) {
              uVar14 = uVar14 - 0x40;
              *(uint *)(param_1 + 0x3c) = uVar14;
            }
            if (0 < iVar13 && (int)uVar17 <= *(int *)(lVar22 + -0x40)) {
              *(uint *)(param_1 + 0x44) = uVar17 + 0x40;
            }
            iVar15 = uVar14 - iVar15;
            goto LAB_1801ea903;
          }
        }
        iVar15 = *(int *)(param_1 + 0x3c);
        uVar14 = iVar15 + 0x20U & 0xffffffc0;
        *(uint *)(param_1 + 0x3c) = uVar14;
        *(uint *)(param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        iVar15 = uVar14 - iVar15;
      }
LAB_1801ea903:
      *(int *)(lVar4 + 0xdc) = iVar15;
      *(int *)(lVar4 + 0xe0) = *(int *)(param_1 + 0x44) - iVar12;
      iVar12 = 0;
    }
  }
  auVar18._0_4_ = (int)*(undefined8 *)(lVar4 + 0x44) - (int)*(undefined8 *)(lVar4 + 0x38);
  auVar18._4_4_ =
       (int)((ulonglong)*(undefined8 *)(lVar4 + 0x44) >> 0x20) -
       (int)((ulonglong)*(undefined8 *)(lVar4 + 0x38) >> 0x20);
  uVar1 = local_70[2];
  auVar25._0_4_ = -(uint)((int)auVar18._0_4_ < 0);
  auVar25._4_4_ = -(uint)(auVar18._4_4_ < 0);
  auVar25._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar18._8_4_ = auVar18._4_4_;
  auVar18._12_4_ = auVar25._4_4_;
  auVar24._0_4_ = -(uint)((int)uVar1 < 0);
  auVar24._4_4_ = -(uint)((longlong)uVar1 < 0);
  auVar24._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar23._8_4_ = (int)(uVar1 >> 0x20);
  auVar23._0_8_ = uVar1;
  auVar23._12_4_ = auVar24._4_4_;
  auVar24._8_4_ = auVar24._4_4_;
  auVar25._8_4_ = auVar25._4_4_;
  lVar22 = (uVar1 & 0xffffffff) * (ulonglong)auVar18._0_4_ +
           ((ulonglong)auVar25._0_4_ * (uVar1 & 0xffffffff) +
            (ulonglong)auVar24._0_4_ * (ulonglong)auVar18._0_4_ << 0x20);
  lVar16 = (auVar23._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) +
           ((auVar25._8_8_ & 0xffffffff) * (auVar23._8_8_ & 0xffffffff) +
            (auVar24._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) << 0x20);
  iVar15 = (int)(lVar22 >> 0x3f);
  auVar19._0_8_ = CONCAT44(iVar15,iVar15);
  auVar19._8_4_ = (int)(lVar16 >> 0x3f);
  auVar19._12_4_ = auVar19._8_4_;
  local_90 = CONCAT44((int)((ulonglong)(auVar19._8_8_ + lVar16 + _UNK_180337298) >> 0x10),
                      (int)((ulonglong)(auVar19._0_8_ + lVar22 + _DAT_180337290) >> 0x10));
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_1801cb555(lVar6 + 0x18,param_1 + 0x24);
    FUN_1801cb5c7(&local_90,param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1801cb5a0(lVar6 + 0x18,-*(int *)(param_1 + 0x3c),0);
  }
  FUN_1801caa83(lVar6 + 0x18,&local_88);
  uVar14 = (int)local_88 + _DAT_180329720 & _DAT_1803372a0;
  uVar17 = local_88._4_4_ + _UNK_180329724 & _UNK_1803372a4;
  uVar20 = (int)uStack_80 + _UNK_180329728 & _UNK_1803372a8;
  uVar21 = uStack_80._4_4_ + _UNK_18032972c & _UNK_1803372ac;
  local_88 = CONCAT44(uVar17,uVar14);
  uStack_80 = CONCAT44(uVar21,uVar20);
  *(ulonglong *)(lVar4 + 0x30) = CONCAT44(uVar21 - uVar17,uVar20 - uVar14);
  *(ulonglong *)(lVar4 + 0x38) = CONCAT44(uVar21,uVar14);
  *(ulonglong *)(lVar4 + 0x44) =
       CONCAT44((int)((ulonglong)local_90 >> 0x20) + uVar21,(int)local_90 + uVar14) &
       (ulonglong)DAT_180329700;
  if ((uStack_50 == 1) ||
     (((*(byte *)(*(longlong *)(lVar4 + 8) + 8) & 4) == 0 &&
      ((cVar11 = FUN_1801eaeb5(*(undefined8 *)(param_1 + 8),local_ac), cVar11 == '\0' ||
       ((char)local_70[5] == '\0')))))) {
    if (*(int *)(lVar4 + 0x40) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c);
      *(int *)(lVar4 + 0x40) = iVar15;
    }
  }
  else {
    lVar22 = (longlong)*(int *)(lVar4 + 0x40) * (longlong)(int)local_70[2];
    iVar15 = (int)((ulonglong)((lVar22 >> 0x3f) + lVar22 + 0x8000) >> 0x10);
    *(int *)(lVar4 + 0x40) = iVar15;
    *(undefined8 *)(lVar4 + 0xdc) = 0;
  }
  lVar22 = (longlong)*(int *)(lVar4 + 0x4c) * (longlong)*(int *)((longlong)local_70 + 0x14);
  *(uint *)(lVar4 + 0x40) = iVar15 + 0x20U & 0xffffffc0;
  *(uint *)(lVar4 + 0x4c) =
       (int)((ulonglong)((lVar22 >> 0x3f) + lVar22 + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
  *(undefined4 *)(lVar4 + 0x60) = 0x6f75746c;
LAB_1801ea644:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
  }
  return iVar12;
}

