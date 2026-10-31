/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801149d6 */

void FUN_1801149d6(longlong param_1,undefined8 *param_2,byte param_3,char param_4,uint param_5,
                  longlong param_6,float param_7)

{
  byte *pbVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_168 [32];
  float local_148;
  float local_140;
  char local_12d;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11a;
  byte local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  lVar6 = DAT_180419160;
  local_f0 = DAT_180402640 ^ (ulonglong)auStack_168;
  uVar5 = *(uint *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar26 = *(float *)(param_1 + 0x9c);
  if (*(char *)(param_1 + 0x10c) == '\x01') {
    uVar10 = *(undefined4 *)(lVar6 + 0xe00);
    *(float *)(lVar6 + 0xe00) = fVar26;
    iVar16 = 0xc;
    if (param_3 != 0) {
      iVar16 = 0xc - (uint)*(byte *)(lVar6 + 0x21f4);
    }
    uVar9 = FUN_18010129b(iVar16);
    local_148 = fVar2;
    FUN_1801027d9(*param_2,param_2[1],uVar9,1);
    *(undefined4 *)(lVar6 + 0xe00) = uVar10;
    goto LAB_180115254;
  }
  local_12d = param_4;
  if (-1 < (char)uVar5) {
    if ((((*(char *)(lVar6 + 0x2428) == '\x01') &&
         (*(int *)(lVar6 + 4) - *(int *)(lVar6 + 0x24b4) < 2)) &&
        (*(char *)(lVar6 + 0x84) == '\x01')) &&
       ((*(int *)(lVar6 + 0x244c) != -1 &&
        (iVar16 = strcmp("_IMWINDOW",(char *)(lVar6 + 0x2450)), iVar16 == 0)))) {
      bVar21 = **(longlong **)(lVar6 + 0x2438) == param_1;
    }
    else {
      bVar21 = false;
    }
    uVar10 = FUN_18012c7ee(param_1);
    fVar12 = DAT_1802ac570;
    uVar11 = FUN_18010129b(uVar10);
    if ((*(byte *)(lVar6 + 0x2030) & 0x40) == 0) {
      fVar13 = DAT_1802dbb2c;
      if (bVar21) goto LAB_180114b8c;
    }
    else {
      fVar13 = *(float *)(lVar6 + 0x2098);
      if (bVar21) {
        fVar13 = *(float *)(lVar6 + 0x2098) * DAT_1802dbb2c;
      }
LAB_180114b8c:
      if (fVar13 <= fVar12) {
        fVar12 = fVar13;
      }
      uVar11 = uVar11 & 0xffffff |
               (int)(float)(-(uint)(fVar13 < 0.0) & (uint)DAT_1802dbb2c |
                           ~-(uint)(fVar13 < 0.0) & (uint)(fVar12 * DAT_1802dc270 + DAT_1802dbb2c))
               << 0x18;
    }
    if ((*(byte *)(param_1 + 0x495) & 1) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x4c0) + 100) = uVar11;
    }
    uVar20 = 0;
    if ((uVar5 >> 0x17 & 1) == 0) {
      uVar20 = uVar11;
    }
    if (0xffffff < uVar20) {
      fVar12 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar13 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      local_108 = CONCAT44(*(float *)(param_1 + 0xa0) + fVar13,fVar12 + 0.0);
      uStack_100 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fVar13,
                            (float)*(undefined8 *)(param_1 + 0x68) + fVar12);
      bVar7 = *(byte *)(param_1 + 0x495);
      if ((bVar7 & 1) == 0) {
        local_140 = 3.36312e-43;
        if ((uVar5 & 1) == 0) {
          local_140 = 2.69049e-43;
        }
      }
      else {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x90);
        local_118 = *(undefined8 *)(lVar15 + 0x60);
        uVar3 = *(undefined8 *)(lVar15 + 0x68);
        uStack_110 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                              (float)((ulonglong)local_118 >> 0x20),(float)uVar3 + (float)local_118)
        ;
        local_140 = (float)FUN_18019c9e3(&local_108);
        bVar7 = *(byte *)(param_1 + 0x495);
      }
      if ((bVar7 & 1) == 0) {
        lVar15 = *(longlong *)(param_1 + 800);
      }
      else {
        lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x90) + 800);
        FUN_180195542(lVar15 + 0x88,lVar15,0);
      }
      local_148 = fVar2;
      FUN_180192d20(lVar15,&local_108,&uStack_100,uVar20);
      param_4 = local_12d;
      if ((*(byte *)(param_1 + 0x495) & 1) != 0) {
        FUN_180195542(lVar15 + 0x88,lVar15,1);
        param_4 = local_12d;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x495) & 1) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x4c0) + 0xd4);
    *pbVar1 = *pbVar1 | 4;
  }
  if (((uVar5 & 1) == 0) && ((*(byte *)(param_1 + 0x495) & 1) == 0)) {
    uVar10 = FUN_18010129b(param_3 | 10);
    local_140 = 6.72623e-44;
    local_148 = fVar2;
    FUN_180192d20(*(undefined8 *)(param_1 + 800),param_2,param_2 + 1,uVar10);
  }
  if ((uVar5 >> 10 & 1) != 0) {
    fVar12 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar13 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    fVar22 = *(float *)(param_1 + 0xa0) + fVar13;
    auVar24._0_4_ = *(float *)(param_1 + 0x70) + fVar12;
    auVar24._4_4_ = *(float *)(param_1 + 0xa4) + fVar22;
    auVar24._8_8_ = 0;
    auVar25._0_4_ = (float)*(undefined8 *)(param_1 + 0x68) + fVar12;
    auVar25._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fVar13;
    auVar25._8_8_ = 0;
    auVar25 = minps(auVar24,auVar25);
    local_108 = CONCAT44(~-(uint)(fVar13 <= fVar22) & (uint)fVar13 |
                         (uint)fVar22 & -(uint)(fVar13 <= fVar22),fVar12);
    uStack_100 = auVar25._0_8_;
    uVar3 = *(undefined8 *)(param_1 + 800);
    fVar12 = 0.0;
    if ((uVar5 & 1) != 0) {
      fVar12 = fVar2;
    }
    uVar10 = FUN_18010129b(0xd);
    local_140 = 6.72623e-44;
    local_148 = fVar12;
    FUN_180192d20(uVar3,&local_108,&uStack_100,uVar10);
    fVar12 = *(float *)(lVar6 + 0xe00);
    if ((0.0 < fVar12) &&
       (uStack_100._4_4_ < *(float *)(param_1 + 100) + *(float *)(param_1 + 0x6c))) {
      uVar3 = *(undefined8 *)(param_1 + 800);
      local_148 = (float)FUN_18010129b(5);
      local_140 = fVar12;
      FUN_1801928fe(uVar3,DAT_1802dbb2c * fVar26 + (float)local_108,
                    (float)uStack_100 - DAT_1802dbb2c * fVar26,uStack_100._4_4_);
    }
  }
  if (((*(byte *)(param_1 + 0x495) & 1) != 0) &&
     (lVar15 = *(longlong *)(param_1 + 0x4c0), (*(uint *)(lVar15 + 0x10) & 0x3000) == 0x2000)) {
    fVar23 = (float)(int)(DAT_1802dc414 * *(float *)(lVar6 + 0x1320));
    fVar22 = (float)(int)(*(float *)(lVar6 + 0x1320) * DAT_1802de844);
    local_118 = *(undefined8 *)(lVar15 + 0x48);
    fVar12 = (float)local_118;
    fVar13 = (float)((ulonglong)local_118 >> 0x20);
    uStack_100 = CONCAT44(fVar13 + fVar22,fVar22 + fVar12);
    local_108 = local_118;
    uVar10 = FUN_180106d4e(param_1,"#UNHIDE",0);
    FUN_1801088af(uVar10);
    local_148 = 2.86986e-42;
    cVar8 = FUN_18013386b(&local_108,uVar10,&local_119,&local_11a);
    if (cVar8 == '\0') {
      if ((local_11a == 1) && (cVar8 = FUN_1801083e1(0), cVar8 != '\0')) {
        FUN_1801082f9(param_1,lVar15,1);
      }
    }
    else {
      *(byte *)(lVar15 + 0xd5) = *(byte *)(lVar15 + 0xd5) | 4;
    }
    cVar8 = '\x18';
    if ((local_11a & local_119) == 0) {
      cVar8 = '\x17';
      if ((local_119 & 1) == 0) {
        cVar8 = (*(byte *)(lVar15 + 0xd4) & 2) + 0x16;
      }
    }
    local_148 = (float)FUN_18010129b(cVar8);
    local_120 = fVar13 + fVar23;
    local_124 = fVar12 + 0.0;
    local_128 = fVar13 + 0.0;
    local_12c = fVar12 + fVar23;
    FUN_180193394(*(undefined8 *)(param_1 + 800),&local_118);
  }
  if (*(char *)(param_1 + 0x104) == '\x01') {
    FUN_180134d32(0);
  }
  if (*(char *)(param_1 + 0x105) == '\x01') {
    FUN_180134d32(1);
  }
  if (param_5 != 0 && (param_4 == '\x01' && (char)((uVar5 & 2) >> 1) == '\0')) {
    fVar26 = (float)(int)(fVar26 * DAT_1802dbb2c + DAT_1802dbb2c);
    pfVar18 = (float *)&DAT_1802de034;
    uVar19 = 0;
    do {
      uVar5 = *(uint *)(param_6 + uVar19 * 4);
      if (0xffffff < uVar5) {
        fVar13 = param_7;
        fVar12 = fVar26;
        if (uVar19 != 0) {
          fVar13 = fVar26;
          fVar12 = param_7;
        }
        lVar6 = *(longlong *)(param_1 + 800);
        fVar22 = (float)*(undefined8 *)(param_1 + 0x60);
        fVar23 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        uVar4 = *(undefined8 *)(pfVar18 + -5);
        fVar27 = (float)*(undefined8 *)(pfVar18 + -3);
        fVar28 = (float)((ulonglong)*(undefined8 *)(pfVar18 + -3) >> 0x20);
        iVar16 = *(int *)(lVar6 + 0x50);
        if (iVar16 == *(int *)(lVar6 + 0x54)) {
          if (iVar16 == 0) {
            iVar14 = 8;
          }
          else {
            iVar14 = iVar16 / 2 + iVar16;
          }
          iVar17 = iVar16 + 1;
          if (iVar16 + 1 < iVar14) {
            iVar17 = iVar14;
          }
          lVar15 = FUN_1800fe7f8((longlong)iVar17 << 3);
          if (*(longlong *)(lVar6 + 0x58) != 0) {
            FUN_1802a82f0(lVar15,*(longlong *)(lVar6 + 0x58),(longlong)*(int *)(lVar6 + 0x50) << 3);
            FUN_1800fe8d4(*(undefined8 *)(lVar6 + 0x58));
          }
          *(longlong *)(lVar6 + 0x58) = lVar15;
          *(int *)(lVar6 + 0x54) = iVar17;
          iVar16 = *(int *)(lVar6 + 0x50);
        }
        else {
          lVar15 = *(longlong *)(lVar6 + 0x58);
        }
        fVar22 = (((float)uVar3 + fVar22) - fVar22) * (float)uVar4 + fVar22;
        fVar23 = (((float)((ulonglong)uVar3 >> 0x20) + fVar23) - fVar23) *
                 (float)((ulonglong)uVar4 >> 0x20) + fVar23;
        *(ulonglong *)(lVar15 + (longlong)iVar16 * 8) =
             CONCAT44(fVar12 * fVar28 + fVar23,fVar13 * fVar27 + fVar22);
        *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
        lVar6 = *(longlong *)(param_1 + 800);
        iVar16 = *(int *)(lVar6 + 0x50);
        if (iVar16 == *(int *)(lVar6 + 0x54)) {
          if (iVar16 == 0) {
            iVar14 = 8;
          }
          else {
            iVar14 = iVar16 / 2 + iVar16;
          }
          iVar17 = iVar16 + 1;
          if (iVar16 + 1 < iVar14) {
            iVar17 = iVar14;
          }
          lVar15 = FUN_1800fe7f8((longlong)iVar17 << 3);
          if (*(longlong *)(lVar6 + 0x58) != 0) {
            FUN_1802a82f0(lVar15,*(longlong *)(lVar6 + 0x58),(longlong)*(int *)(lVar6 + 0x50) << 3);
            FUN_1800fe8d4(*(undefined8 *)(lVar6 + 0x58));
          }
          *(longlong *)(lVar6 + 0x58) = lVar15;
          *(int *)(lVar6 + 0x54) = iVar17;
          iVar16 = *(int *)(lVar6 + 0x50);
        }
        else {
          lVar15 = *(longlong *)(lVar6 + 0x58);
        }
        *(ulonglong *)(lVar15 + (longlong)iVar16 * 8) =
             CONCAT44(fVar13 * fVar28 + fVar23,fVar12 * fVar27 + fVar22);
        *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
        local_148 = *pfVar18;
        local_108 = CONCAT44(fVar28 * (fVar26 + fVar2) + fVar23,fVar27 * (fVar26 + fVar2) + fVar22);
        FUN_1801910be(*(undefined8 *)(param_1 + 800),&local_108);
        lVar6 = *(longlong *)(param_1 + 800);
        FUN_1801907e0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar5);
        *(undefined4 *)(lVar6 + 0x50) = 0;
      }
      uVar19 = uVar19 + 1;
      pfVar18 = pfVar18 + 6;
    } while (param_5 != uVar19);
  }
  if ((local_12d != '\0') && (*(longlong *)(param_1 + 0x4c8) == 0)) {
    FUN_18012c819(param_1);
  }
LAB_180115254:
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (DAT_180402640 != (local_f0 ^ (ulonglong)auStack_168)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_f0 ^ (ulonglong)auStack_168);
  }
  return;
}

