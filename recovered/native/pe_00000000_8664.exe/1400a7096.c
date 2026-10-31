/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7096 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a7096(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  lVar3 = DAT_140f2a910;
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x2200);
  uVar18 = *(uint *)(DAT_140f2a910 + 0x30);
  if ((uVar18 & 2) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(DAT_140f2a910 + 0x34) & 1;
  }
  if ((lVar1 != 0 & *(byte *)(DAT_140f2a910 + 0x22a2)) == 1) {
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x10) != 0) {
      FUN_1400772a6("[nav] NavMoveRequestForward %d\n",*(undefined4 *)(DAT_140f2a910 + 0x22b0));
    }
LAB_1400a72e2:
    iVar9 = *(int *)(lVar3 + 0x22b0);
    fVar11 = 0.0;
    if (iVar9 == -1 && (uVar18 & 1) != 0) {
      fVar11 = (float)FUN_1400a7a50();
      iVar9 = *(int *)(lVar3 + 0x22b0);
    }
    *(undefined1 *)(lVar3 + 0x22a2) = 0;
    if (iVar9 != -1) {
      FUN_140090435(iVar9,*(undefined4 *)(lVar3 + 0x22b8),*(undefined4 *)(lVar3 + 0x22a4),
                    *(undefined4 *)(lVar3 + 0x22a8));
    }
  }
  else {
    *(undefined4 *)(DAT_140f2a910 + 0x22b0) = 0xffffffff;
    *(undefined8 *)(lVar3 + 0x22a4) = 0;
    if (lVar1 != 0) {
      uVar7 = 0xffffffff;
      if ((*(longlong *)(lVar3 + 0x23e8) == 0) && ((*(byte *)(lVar1 + 0x16) & 1) == 0)) {
        uVar19 = *(uint *)(lVar3 + 0x1f90);
        uVar7 = 0xffffffff;
        if ((uVar19 & 1) == 0) {
          if (bVar8 == 0) {
LAB_1400a71a6:
            if ((uVar18 & 1) != 0) {
              uVar7 = 0xffffffff;
              cVar4 = FUN_140091ea2(0x201,5,0xffffffff);
              if (cVar4 != '\0') goto LAB_1400a71ca;
            }
          }
          else {
            cVar4 = FUN_140091ea2(0x27e,5,0xffffffff);
            if (cVar4 == '\0') goto LAB_1400a71a6;
LAB_1400a71ca:
            *(undefined4 *)(lVar3 + 0x22b0) = 0;
            uVar7 = 0;
          }
        }
        if ((uVar19 & 2) == 0) {
          if (bVar8 == 0) {
LAB_1400a71fa:
            if ((uVar18 & 1) != 0) {
              cVar4 = FUN_140091ea2(0x202,5,0xffffffff);
              if (cVar4 != '\0') goto LAB_1400a7219;
            }
          }
          else {
            cVar4 = FUN_140091ea2(0x27f,5,0xffffffff);
            if (cVar4 == '\0') goto LAB_1400a71fa;
LAB_1400a7219:
            *(undefined4 *)(lVar3 + 0x22b0) = 1;
            uVar7 = 1;
          }
        }
        if ((uVar19 & 4) == 0) {
          if (bVar8 == 0) {
LAB_1400a724c:
            if ((uVar18 & 1) != 0) {
              cVar4 = FUN_140091ea2(0x203,5,0xffffffff);
              if (cVar4 != '\0') goto LAB_1400a726b;
            }
          }
          else {
            cVar4 = FUN_140091ea2(0x280,5,0xffffffff);
            if (cVar4 == '\0') goto LAB_1400a724c;
LAB_1400a726b:
            *(undefined4 *)(lVar3 + 0x22b0) = 2;
            uVar7 = 2;
          }
        }
        if ((uVar19 & 8) == 0) {
          if (bVar8 == 0) {
LAB_1400a729e:
            if ((uVar18 & 1) != 0) {
              cVar4 = FUN_140091ea2(0x204,5,0xffffffff);
              if (cVar4 != '\0') goto LAB_1400a72bd;
            }
          }
          else {
            cVar4 = FUN_140091ea2(0x281,5,0xffffffff);
            if (cVar4 == '\0') goto LAB_1400a729e;
LAB_1400a72bd:
            *(undefined4 *)(lVar3 + 0x22b0) = 3;
            uVar7 = 3;
          }
        }
      }
      *(undefined4 *)(lVar3 + 0x22b8) = uVar7;
      uVar16 = _UNK_1402114a8;
      *(undefined8 *)(lVar3 + 0x22cc) = _DAT_1402114a0;
      *(undefined8 *)(lVar3 + 0x22d4) = uVar16;
      goto LAB_1400a72e2;
    }
    *(undefined4 *)(lVar3 + 0x22b8) = 0xffffffff;
    uVar16 = _UNK_1402114a8;
    *(undefined8 *)(lVar3 + 0x22cc) = _DAT_1402114a0;
    *(undefined8 *)(lVar3 + 0x22d4) = uVar16;
    *(undefined1 *)(lVar3 + 0x22a2) = 0;
    fVar11 = 0.0;
  }
  if ((*(char *)(lVar3 + 0x22a0) == '\x01') && (*(int *)(lVar3 + 0x21f8) == 0)) {
    if ((*(byte *)(lVar3 + 0x2acc) & 0x10) != 0) {
      if (lVar1 == 0) {
        pcVar6 = "<NULL>";
      }
      else {
        pcVar6 = *(char **)(lVar1 + 8);
      }
      FUN_1400772a6("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n",pcVar6,
                    *(undefined4 *)(lVar3 + 0x220c));
    }
    *(undefined2 *)(lVar3 + 0x2262) = 0x101;
    *(undefined4 *)(lVar3 + 0x2270) = 0;
    if (*(char *)(lVar3 + 0x7e) == '\x01') {
      *(undefined1 *)(lVar3 + 0x21f4) = 1;
    }
  }
  if (((*(char *)(lVar3 + 0x22a0) == '\x01') && (*(int *)(lVar3 + 0x2250) == 3)) &&
     (*(int *)(lVar3 + 0x220c) == 0 && lVar1 != 0)) {
    uVar7 = *(undefined4 *)(lVar3 + 0x22a4);
    auVar14._4_4_ = uVar7;
    auVar14._0_4_ = uVar7;
    auVar14._8_4_ = uVar7;
    auVar14._12_4_ = uVar7;
    uVar18 = -(uint)(SUB164(auVar14 & _DAT_140211870,0) == 0);
    uVar19 = -(uint)(SUB164(auVar14 & _DAT_140211870,4) == 0);
    fVar21 = *(float *)(lVar1 + 0x278);
    fVar23 = *(float *)(lVar1 + 0x27c);
    fVar12 = *(float *)(lVar1 + 0x280);
    fVar13 = *(float *)(lVar1 + 0x284);
    fVar15 = (float)*(undefined8 *)(lVar1 + 0x168);
    fVar17 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x168) >> 0x20);
    FUN_14008db73(local_c8,lVar1);
    if (((uVar19 | uVar18) & 1) != 0) {
      fVar20 = local_c8._0_4_ - (float)*(undefined8 *)(lVar1 + 0xd4);
      fVar22 = local_c8._4_4_ - (float)((ulonglong)*(undefined8 *)(lVar1 + 0xd4) >> 0x20);
      fVar21 = fVar20 + ((fVar21 + _DAT_1402112a0) - fVar15);
      fVar23 = fVar22 + ((fVar23 + _UNK_1402112a4) - fVar17);
      fVar20 = fVar20 + ((fVar12 + _UNK_1402112a8) - fVar15);
      fVar22 = fVar22 + ((fVar13 + _UNK_1402112ac) - fVar17);
      lVar5 = (longlong)*(int *)(lVar3 + 0x220c) * 0x10;
      if (((*(float *)(lVar1 + 0x458 + lVar5) < fVar21) ||
          (lVar5 = lVar5 + lVar1, *(float *)(lVar5 + 0x45c) < fVar23)) ||
         ((fVar20 < *(float *)(lVar5 + 0x460) || (fVar22 < *(float *)(lVar5 + 0x464))))) {
        if ((*(byte *)(lVar3 + 0x2acc) & 0x10) != 0) {
          FUN_1400772a6("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n");
        }
        fVar12 = (float)FUN_14004863e();
        fVar13 = (float)FUN_14004863e();
        local_c8._4_4_ = ~uVar19 & _UNK_1402114f4 | (uint)(fVar13 + fVar23) & uVar19;
        local_c8._0_4_ = ~uVar18 & _DAT_1402114f0 | (uint)(fVar12 + fVar21) & uVar18;
        uStack_c0._0_4_ = ~uVar18 & _UNK_1402114f8 | (uint)(fVar20 - fVar12) & uVar18;
        uStack_c0._4_4_ = ~uVar19 & _UNK_1402114fc | (uint)(fVar22 - fVar13) & uVar19;
        FUN_14008db02(lVar1 + 0x458 + (longlong)*(int *)(lVar3 + 0x220c) * 0x10);
        *(undefined4 *)(lVar3 + 0x21f8) = 0;
      }
    }
  }
  else {
    _local_c8 = (undefined1  [16])0x0;
    if (lVar1 == 0) goto LAB_1400a76cd;
  }
  lVar5 = (longlong)*(int *)(lVar3 + 0x220c) * 0x10;
  auVar14 = *(undefined1 (*) [16])(lVar1 + 0x458 + lVar5);
  iVar9 = -(uint)(auVar14._8_4_ < auVar14._0_4_);
  iVar10 = -(uint)(auVar14._12_4_ < auVar14._4_4_);
  auVar2._4_4_ = iVar9;
  auVar2._0_4_ = iVar9;
  auVar2._8_4_ = iVar10;
  auVar2._12_4_ = iVar10;
  iVar9 = movmskpd((int)lVar5,auVar2);
  uVar16 = 0;
  fVar21 = 0.0;
  fVar23 = 0.0;
  if (iVar9 == 0) {
    uVar16 = auVar14._0_8_;
    fVar21 = auVar14._8_4_;
    fVar23 = auVar14._12_4_;
  }
  fVar13 = (float)*(undefined8 *)(lVar1 + 0x168);
  fVar12 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x168) >> 0x20);
  fVar15 = fVar13 + (float)uVar16;
  local_c8._4_4_ = fVar12 + (float)((ulonglong)uVar16 >> 0x20);
  fVar13 = fVar13 + fVar21;
  fVar12 = fVar12 + fVar23;
  local_c8._0_4_ = fVar15;
  uStack_c0._0_4_ = fVar13;
  uStack_c0._4_4_ = fVar12;
  if ((*(uint *)(lVar3 + 0x22a4) >> 0xb & 1) != 0) {
    if (((*(float *)(lVar1 + 0x278) <= fVar15) &&
        (*(float *)(lVar1 + 0x27c) <= (float)local_c8._4_4_)) &&
       ((fVar13 <= *(float *)(lVar1 + 0x280) && (fVar12 <= *(float *)(lVar1 + 0x284))))) {
      *(uint *)(lVar3 + 0x22a4) = *(uint *)(lVar3 + 0x22a4) | 0x20;
    }
    *(undefined1 (*) [8])(lVar3 + 0x22cc) = local_c8;
    *(undefined8 *)(lVar3 + 0x22d4) = uStack_c0;
    fVar21 = (float)local_c8._4_4_ + fVar11;
    local_c8._4_4_ = fVar21;
    fVar12 = fVar12 + fVar11;
    uStack_c0._4_4_ = fVar12;
    if (fVar15 < *(float *)(lVar3 + 0x22cc)) {
      *(float *)(lVar3 + 0x22cc) = fVar15;
    }
    if (fVar21 < *(float *)(lVar3 + 0x22d0)) {
      *(float *)(lVar3 + 0x22d0) = fVar21;
    }
    if (*(float *)(lVar3 + 0x22d4) <= fVar13 && fVar13 != *(float *)(lVar3 + 0x22d4)) {
      *(float *)(lVar3 + 0x22d4) = fVar13;
    }
    if (*(float *)(lVar3 + 0x22d8) <= fVar12 && fVar12 != *(float *)(lVar3 + 0x22d8)) {
      *(float *)(lVar3 + 0x22d8) = fVar12;
    }
  }
  if (*(char *)(lVar3 + 0x22a0) == '\x01') {
    FUN_1400a7ce5(local_c8,*(longlong *)(lVar1 + 0x438) + (longlong)*(int *)(lVar3 + 0x220c) * 8 +
                           0x478,*(undefined4 *)(lVar3 + 0x22b0));
  }
LAB_1400a76cd:
  *(undefined1 (*) [8])(lVar3 + 0x22bc) = local_c8;
  *(undefined8 *)(lVar3 + 0x22c4) = uStack_c0;
  if (DAT_140f17b40 == (local_b0 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_b0 ^ (ulonglong)auStack_e8);
}

