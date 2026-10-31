/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012817e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1012817e(undefined4 param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  float10 fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float local_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_24 [8];
  undefined8 uStack_1c;
  uint local_14;
  undefined1 auVar20 [16];
  
  iVar7 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_80;
  iVar2 = *(int *)(DAT_1039d74c + 0x2048);
  uVar14 = *(uint *)(DAT_1039d74c + 0x30);
  if ((uVar14 & 2) == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(DAT_1039d74c + 0x34)) &
                    0xffffff01);
  }
  if ((iVar2 != 0 & *(byte *)(DAT_1039d74c + 0x20da)) == 1) {
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x10) != 0) {
      FUN_100f99e6("[nav] NavMoveRequestForward %d\n",*(undefined4 *)(DAT_1039d74c + 0x20e8));
    }
LAB_10128383:
    iVar10 = *(int *)(iVar7 + 0x20e8);
    fVar11 = 0.0;
    if (iVar10 == -1 && (uVar14 & 1) != 0) {
      FUN_10128abb();
      iVar10 = *(int *)(iVar7 + 0x20e8);
    }
    *(undefined1 *)(iVar7 + 0x20da) = 0;
    if (iVar10 != -1) {
      local_80 = fVar11;
      FUN_1011240d(iVar10,*(undefined4 *)(iVar7 + 0x20f0),*(undefined4 *)(iVar7 + 0x20dc),
                   *(undefined4 *)(iVar7 + 0x20e0));
      fVar11 = local_80;
    }
  }
  else {
    *(undefined4 *)(DAT_1039d74c + 0x20e8) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x20dc) = 0;
    *(undefined4 *)(iVar7 + 0x20e0) = 0;
    if (iVar2 != 0) {
      uVar13 = 0xffffffff;
      if ((*(int *)(iVar7 + 0x221c) == 0) && ((*(byte *)(iVar2 + 0xe) & 1) == 0)) {
        local_7c = *(uint *)(iVar7 + 0x1e30);
        uVar13 = 0xffffffff;
        local_80 = fVar11;
        if (((local_7c & 1) == 0) &&
           (((SUB41(fVar11,0) != '\0' && (cVar8 = FUN_10113d60(0x27e,5,0xffffffff), cVar8 != '\0'))
            || (((uVar14 & 1) != 0 && (cVar8 = FUN_10113d60(0x201,5,0xffffffff), cVar8 != '\0'))))))
        {
          *(undefined4 *)(iVar7 + 0x20e8) = 0;
          uVar13 = 0;
        }
        cVar8 = SUB41(local_80,0);
        if ((local_7c & 2) == 0) {
          if (cVar8 == '\0') {
LAB_101282a4:
            if ((uVar14 & 1) != 0) {
              cVar9 = FUN_10113d60(0x202,5,0xffffffff);
              cVar8 = SUB41(local_80,0);
              if (cVar9 != '\0') goto LAB_101282c6;
            }
          }
          else {
            cVar9 = FUN_10113d60(0x27f,5,0xffffffff);
            cVar8 = SUB41(local_80,0);
            if (cVar9 == '\0') goto LAB_101282a4;
LAB_101282c6:
            *(undefined4 *)(iVar7 + 0x20e8) = 1;
            uVar13 = 1;
          }
        }
        if ((local_7c & 4) == 0) {
          if (cVar8 == '\0') {
LAB_101282f8:
            if ((uVar14 & 1) != 0) {
              cVar9 = FUN_10113d60(0x203,5,0xffffffff);
              cVar8 = SUB41(local_80,0);
              if (cVar9 != '\0') goto LAB_1012831a;
            }
          }
          else {
            cVar9 = FUN_10113d60(0x280,5,0xffffffff);
            cVar8 = SUB41(local_80,0);
            if (cVar9 == '\0') goto LAB_101282f8;
LAB_1012831a:
            *(undefined4 *)(iVar7 + 0x20e8) = 2;
            uVar13 = 2;
          }
        }
        if (((local_7c & 8) == 0) &&
           (((cVar8 != '\0' && (cVar8 = FUN_10113d60(0x281,5,0xffffffff), cVar8 != '\0')) ||
            (((uVar14 & 1) != 0 && (cVar8 = FUN_10113d60(0x204,5,0xffffffff), cVar8 != '\0')))))) {
          *(undefined4 *)(iVar7 + 0x20e8) = 3;
          uVar13 = 3;
        }
      }
      *(undefined4 *)(iVar7 + 0x20f0) = uVar13;
      uVar6 = _UNK_102b8bfc;
      uVar5 = _UNK_102b8bf8;
      uVar13 = _UNK_102b8bf4;
      *(undefined4 *)(iVar7 + 0x2104) = _DAT_102b8bf0;
      *(undefined4 *)(iVar7 + 0x2108) = uVar13;
      *(undefined4 *)(iVar7 + 0x210c) = uVar5;
      *(undefined4 *)(iVar7 + 0x2110) = uVar6;
      goto LAB_10128383;
    }
    *(undefined4 *)(iVar7 + 0x20f0) = 0xffffffff;
    uVar6 = _UNK_102b8bfc;
    uVar5 = _UNK_102b8bf8;
    uVar13 = _UNK_102b8bf4;
    *(undefined4 *)(iVar7 + 0x2104) = _DAT_102b8bf0;
    *(undefined4 *)(iVar7 + 0x2108) = uVar13;
    *(undefined4 *)(iVar7 + 0x210c) = uVar5;
    *(undefined4 *)(iVar7 + 0x2110) = uVar6;
    *(undefined1 *)(iVar7 + 0x20da) = 0;
    fVar11 = 0.0;
  }
  if ((*(char *)(iVar7 + 0x20d8) == '\x01') && (*(int *)(iVar7 + 0x2044) == 0)) {
    if ((*(byte *)(iVar7 + 0x27b4) & 0x10) != 0) {
      if (iVar2 == 0) {
        pcVar12 = "<NULL>";
      }
      else {
        pcVar12 = *(char **)(iVar2 + 4);
      }
      local_80 = fVar11;
      FUN_100f99e6("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n",pcVar12,
                   *(undefined4 *)(iVar7 + 0x2050));
      fVar11 = local_80;
    }
    *(undefined2 *)(iVar7 + 0x209a) = 0x101;
    *(undefined4 *)(iVar7 + 0x20a4) = 0;
    if (*(char *)(iVar7 + 0x6a) == '\x01') {
      *(undefined1 *)(iVar7 + 0x2040) = 1;
    }
  }
  if (((*(char *)(iVar7 + 0x20d8) == '\x01') && (*(int *)(iVar7 + 0x208c) == 3)) &&
     (*(int *)(iVar7 + 0x2050) == 0 && iVar2 != 0)) {
    uVar14 = *(uint *)(iVar7 + 0x20dc);
    local_7c = -(uint)((uVar14 & _DAT_102b9100) == 0);
    uStack_78 = -(uint)((uVar14 & _UNK_102b9104) == 0);
    uStack_74 = -(uint)((uVar14 & _UNK_102b9108) == 0);
    uStack_70 = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == (uVar14 & _UNK_102b910c));
    local_64 = *(float *)(iVar2 + 0x24c);
    fStack_60 = *(float *)(iVar2 + 0x250);
    fStack_5c = *(float *)(iVar2 + 0x254);
    fStack_58 = *(float *)(iVar2 + 600);
    local_54 = *(float *)(iVar2 + 0x154);
    fStack_50 = *(float *)(iVar2 + 0x158);
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    local_80 = fVar11;
    FUN_1010fae1();
    fVar11 = local_80;
    if (((uStack_78 | local_7c) & 1) != 0) {
      fVar18 = local_24._0_4_ - (float)*(undefined8 *)(iVar2 + 0xc4);
      fVar22 = local_24._4_4_ - (float)((ulonglong)*(undefined8 *)(iVar2 + 0xc4) >> 0x20);
      fVar19 = fVar18 + ((local_64 + _DAT_102b8970) - local_54);
      fVar23 = fVar22 + ((fStack_60 + _UNK_102b8974) - fStack_50);
      fVar18 = fVar18 + ((fStack_5c + _UNK_102b8978) - local_54);
      fVar22 = fVar22 + ((fStack_58 + _UNK_102b897c) - fStack_50);
      iVar10 = *(int *)(iVar7 + 0x2050) * 0x10;
      if (((*(float *)(iVar2 + 0x3cc + iVar10) < fVar19) ||
          (iVar10 = iVar10 + iVar2, *(float *)(iVar10 + 0x3d0) < fVar23)) ||
         ((fVar18 < *(float *)(iVar10 + 0x3d4) || (fVar22 < *(float *)(iVar10 + 0x3d8))))) {
        uStack_74 = local_7c;
        uStack_70 = uStack_78;
        local_64 = fVar19;
        fStack_60 = fVar23;
        fStack_5c = fVar18;
        fStack_58 = fVar22;
        local_54 = fVar22;
        fStack_50 = fVar22;
        fStack_4c = fVar22;
        fStack_48 = fVar22;
        local_34 = fVar23;
        fStack_30 = fVar23;
        fStack_2c = fVar23;
        fStack_28 = fVar23;
        if ((*(byte *)(iVar7 + 0x27b4) & 0x10) != 0) {
          local_44 = fVar18;
          fStack_40 = fVar22;
          fStack_3c = fVar18;
          fStack_38 = fVar22;
          FUN_100f99e6("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n");
          fVar18 = local_44;
        }
        fVar15 = (float10)FUN_100ea38a(fVar18 - local_64,*(float *)(iVar2 + 0x2e0) * DAT_102b70e0);
        local_68 = (float)fVar15;
        fVar15 = (float10)FUN_100ea38a(local_54 - local_34,DAT_102b70e0 * *(float *)(iVar2 + 0x2e0))
        ;
        local_6c = (float)fVar15;
        auVar4._4_4_ = fStack_60;
        auVar4._0_4_ = local_64;
        auVar4._8_4_ = fStack_5c;
        auVar4._12_4_ = fStack_58;
        auVar3._4_8_ = auVar4._8_8_;
        auVar3._0_4_ = fStack_60 - 0.0;
        auVar25._0_8_ = auVar3._0_8_ << 0x20;
        auVar25._8_4_ = fStack_5c - local_68;
        auVar25._12_4_ = fStack_58 - local_6c;
        uStack_1c = ~CONCAT44(uStack_70,uStack_74) & _UNK_102b8c68 |
                    auVar25._8_8_ & CONCAT44(uStack_70,uStack_74);
        local_24 = (undefined1  [8])
                   (~CONCAT44(uStack_78,local_7c) & _DAT_102b8c60 |
                   CONCAT44(local_6c + fStack_60,local_68 + local_64) & CONCAT44(uStack_78,local_7c)
                   );
        FUN_1010fa6a(local_24);
        *(undefined4 *)(iVar7 + 0x2044) = 0;
        fVar11 = local_80;
      }
    }
  }
  else {
    _local_24 = (undefined1  [16])0x0;
    if (iVar2 == 0) goto LAB_101287cf;
  }
  iVar10 = *(int *)(iVar7 + 0x2050) * 0x10;
  pfVar1 = (float *)(iVar2 + 0x3cc + iVar10);
  iVar16 = -(uint)(pfVar1[2] < *pfVar1);
  iVar17 = -(uint)(pfVar1[3] < pfVar1[1]);
  auVar21._4_4_ = iVar17;
  auVar21._0_4_ = iVar16;
  auVar21._8_4_ = iVar17;
  auVar21._12_4_ = iVar17;
  auVar20._8_8_ = auVar21._8_8_;
  auVar20._4_4_ = iVar16;
  auVar20._0_4_ = iVar16;
  iVar10 = movmskpd(iVar10,auVar20);
  fVar18 = 0.0;
  local_24._4_4_ = 0.0;
  fVar19 = 0.0;
  fVar22 = 0.0;
  if (iVar10 == 0) {
    fVar18 = *pfVar1;
    local_24._4_4_ = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar22 = pfVar1[3];
  }
  fVar23 = (float)*(undefined8 *)(iVar2 + 0x154);
  fVar18 = fVar23 + fVar18;
  fVar24 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x154) >> 0x20);
  local_24._4_4_ = fVar24 + (float)local_24._4_4_;
  fVar23 = fVar23 + fVar19;
  fVar24 = fVar24 + fVar22;
  local_24._0_4_ = fVar18;
  uStack_1c._0_4_ = fVar23;
  uStack_1c._4_4_ = fVar24;
  uVar14 = *(uint *)(iVar7 + 0x20dc);
  if ((uVar14 >> 0xb & 1) != 0) {
    if (((*(float *)(iVar2 + 0x24c) <= fVar18) &&
        (*(float *)(iVar2 + 0x250) <= (float)local_24._4_4_)) &&
       ((fVar23 <= *(float *)(iVar2 + 0x254) && (fVar24 <= *(float *)(iVar2 + 600))))) {
      uVar14 = uVar14 | 0x20;
      *(uint *)(iVar7 + 0x20dc) = uVar14;
    }
    *(float *)(iVar7 + 0x2104) = fVar18;
    *(undefined4 *)(iVar7 + 0x2108) = local_24._4_4_;
    *(float *)(iVar7 + 0x210c) = fVar23;
    *(float *)(iVar7 + 0x2110) = fVar24;
    fVar19 = (float)local_24._4_4_ + fVar11;
    local_24._4_4_ = fVar19;
    fVar24 = fVar24 + fVar11;
    uStack_1c._4_4_ = fVar24;
    if (fVar18 < *(float *)(iVar7 + 0x2104)) {
      *(float *)(iVar7 + 0x2104) = fVar18;
    }
    if (fVar19 < *(float *)(iVar7 + 0x2108)) {
      *(float *)(iVar7 + 0x2108) = fVar19;
    }
    if (*(float *)(iVar7 + 0x210c) <= fVar23 && fVar23 != *(float *)(iVar7 + 0x210c)) {
      *(float *)(iVar7 + 0x210c) = fVar23;
    }
    if (*(float *)(iVar7 + 0x2110) <= fVar24 && fVar24 != *(float *)(iVar7 + 0x2110)) {
      *(float *)(iVar7 + 0x2110) = fVar24;
    }
  }
  if (*(char *)(iVar7 + 0x20d8) == '\x01') {
    FUN_10128d5b(*(undefined4 *)(iVar7 + 0x20e8),uVar14);
  }
LAB_101287cf:
  *(undefined4 *)(iVar7 + 0x20f4) = local_24._0_4_;
  *(undefined4 *)(iVar7 + 0x20f8) = local_24._4_4_;
  *(undefined4 *)(iVar7 + 0x20fc) = (undefined4)uStack_1c;
  *(undefined4 *)(iVar7 + 0x2100) = uStack_1c._4_4_;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_80)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

