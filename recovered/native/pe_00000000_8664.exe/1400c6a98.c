/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6a98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c6a98(float *param_1,longlong param_2,int param_3,uint param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_150;
  float local_14c;
  
  lVar7 = DAT_140f2a910;
  FUN_140081bc7(param_3);
  if (*(int *)(lVar7 + 0x25b0) == param_3) {
    uVar8 = 0;
    *(undefined1 *)(lVar7 + 0x25e0) = 0;
    *(undefined1 *)(lVar7 + 0x25b8) = 0;
    if (*(char *)(lVar7 + 0x25b5) == '\x01') {
      uVar8 = FUN_1400920f5(0);
      if ((char)uVar8 == '\0') {
        if (*(char *)(lVar7 + 0x25b5) == '\0') goto LAB_1400c6b72;
        goto LAB_1400c6b7c;
      }
      uVar8 = FUN_1400c70dc(lVar7 + 0x25b0,param_2);
    }
    else {
LAB_1400c6b72:
      if (*(char *)(lVar7 + 0x25b4) == '\x01') {
LAB_1400c6b7c:
        if (*(char *)(lVar7 + 0x120) == '\0') {
          uVar8 = FUN_1400c7136(lVar7 + 0x25b0);
        }
      }
    }
    if (*(char *)(lVar7 + 0x25b4) == '\x01') {
      fVar18 = (float)*(undefined8 *)(param_2 + 0x168);
      fVar20 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x168) >> 0x20);
      fVar15 = (float)*(undefined8 *)(lVar7 + 0x25c0) + fVar18;
      fVar17 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x25c0) >> 0x20) + fVar20;
      fVar18 = (float)*(undefined8 *)(lVar7 + 0x25c8) + fVar18;
      fVar20 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x25c8) >> 0x20) + fVar20;
      fVar21 = (float)*(undefined8 *)(lVar7 + 0x118);
      fVar24 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x118) >> 0x20);
      fVar22 = fVar21;
      fVar14 = fVar24;
      if ((param_4 >> 0xb & 1) != 0) {
        fVar14 = param_1[1];
        if ((param_1[1] <= fVar24) && (fVar14 = param_1[3], fVar24 <= param_1[3])) {
          fVar14 = fVar24;
        }
        fVar22 = *param_1;
        if ((*param_1 <= fVar21) && (fVar22 = param_1[2], fVar21 <= param_1[2])) {
          fVar22 = fVar21;
        }
      }
      auVar26._0_4_ = ~-(uint)(fVar15 < fVar18) & (uint)fVar18;
      auVar26._4_4_ = ~-(uint)(fVar17 < fVar20) & (uint)fVar20;
      auVar26._8_4_ = ~-(uint)(fVar18 <= fVar15) & (uint)fVar18;
      auVar26._12_4_ = ~-(uint)(fVar20 <= fVar17) & (uint)fVar20;
      auVar2._4_4_ = (uint)fVar17 & -(uint)(fVar17 < fVar20);
      auVar2._0_4_ = (uint)fVar15 & -(uint)(fVar15 < fVar18);
      auVar2._8_4_ = (uint)fVar15 & -(uint)(fVar18 <= fVar15);
      auVar2._12_4_ = (uint)fVar17 & -(uint)(fVar20 <= fVar17);
      auVar26 = auVar26 | auVar2;
      *(undefined1 (*) [16])(lVar7 + 0x2614) = auVar26;
      fVar18 = (float)(~-(uint)(fVar15 < fVar22) & (uint)fVar22 |
                      (uint)fVar15 & -(uint)(fVar15 < fVar22));
      fVar20 = (float)(~-(uint)(fVar17 < fVar14) & (uint)fVar14 |
                      (uint)fVar17 & -(uint)(fVar17 < fVar14));
      fVar22 = (float)(~-(uint)(fVar22 <= fVar15) & (uint)fVar22 |
                      (uint)fVar15 & -(uint)(fVar22 <= fVar15));
      fVar14 = (float)(~-(uint)(fVar14 <= fVar17) & (uint)fVar14 |
                      (uint)fVar17 & -(uint)(fVar14 <= fVar17));
      *(float *)(lVar7 + 0x2624) = fVar18;
      *(float *)(lVar7 + 0x2628) = fVar20;
      *(float *)(lVar7 + 0x262c) = fVar22;
      *(float *)(lVar7 + 0x2630) = fVar14;
      uVar6 = _UNK_1402114a8;
      uVar11 = (undefined7)((ulonglong)param_2 >> 8);
      if ((param_4 & 0xc0) == 0) {
        uVar10 = CONCAT71(uVar11,1);
        goto LAB_1400c7011;
      }
      *(undefined8 *)(lVar7 + 0x2604) = _DAT_1402114a0;
      *(undefined8 *)(lVar7 + 0x260c) = uVar6;
      *(undefined8 *)(lVar7 + 0x25f4) = *(undefined8 *)(lVar7 + 0x2604);
      *(undefined8 *)(lVar7 + 0x25fc) = *(undefined8 *)(lVar7 + 0x260c);
      fVar15 = auVar26._0_4_;
      fVar17 = auVar26._4_4_;
      fVar21 = auVar26._8_4_;
      fVar24 = auVar26._12_4_;
      auVar3._4_4_ = -(uint)(fVar20 < fVar17);
      auVar3._0_4_ = -(uint)(fVar18 < fVar15);
      auVar3._8_4_ = -(uint)(fVar22 < fVar21);
      auVar3._12_4_ = -(uint)(fVar14 < fVar24);
      uVar9 = movmskps(uVar8,auVar3);
      local_14c = fVar14;
      if ((uVar9 & 8) == 0) {
        local_14c = fVar24;
      }
      local_150 = fVar22;
      if ((uVar9 & 4) == 0) {
        local_150 = fVar21;
      }
      fVar27 = fVar20;
      if ((uVar9 & 2) == 0) {
        fVar27 = fVar17;
      }
      fVar12 = fVar18;
      if ((uVar9 & 1) == 0) {
        fVar12 = fVar15;
      }
      pfVar1 = (float *)(lVar7 + 0x25f4);
      fVar13 = DAT_1402112e4;
      fVar23 = DAT_1402112e0;
      fVar19 = DAT_1402112e0;
      bVar4 = true;
      do {
        bVar5 = bVar4;
        fVar29 = fVar27;
        fVar30 = fVar12;
        fVar31 = (float)(~-(uint)(fVar15 <= fVar18) & (uint)fVar15 |
                        (uint)fVar18 & -(uint)(fVar15 <= fVar18));
        fVar25 = (float)(~-(uint)(fVar17 <= fVar20) & (uint)fVar17 |
                        (uint)fVar20 & -(uint)(fVar17 <= fVar20));
        if (!bVar5) {
          fVar29 = local_14c;
          fVar30 = local_150;
          fVar31 = (float)(~-(uint)(fVar21 <= fVar22) & (uint)fVar21 |
                          (uint)fVar22 & -(uint)(fVar21 <= fVar22));
          fVar25 = (float)(~-(uint)(fVar24 <= fVar14) & (uint)fVar24 |
                          (uint)fVar14 & -(uint)(fVar24 <= fVar14));
        }
        if ((fVar30 != fVar31) || (NAN(fVar30) || NAN(fVar31))) {
          fVar16 = *pfVar1;
          if (fVar30 < *pfVar1) {
            *pfVar1 = fVar30;
            fVar16 = fVar30;
          }
          fVar28 = *(float *)(lVar7 + 0x25fc);
          if (*(float *)(lVar7 + 0x25fc) < fVar30) {
            *(float *)(lVar7 + 0x25fc) = fVar30;
            fVar28 = fVar30;
          }
          if (fVar31 < fVar16) {
            *pfVar1 = fVar31;
          }
          if (fVar28 < fVar31) {
            *(float *)(lVar7 + 0x25fc) = fVar31;
          }
        }
        if ((fVar29 != fVar25) || (NAN(fVar29) || NAN(fVar25))) {
          if (fVar29 < fVar13) {
            *(float *)(lVar7 + 0x2608) = fVar29;
            fVar13 = fVar29;
          }
          bVar4 = fVar19 < fVar29;
          fVar19 = fVar23;
          if (bVar4) {
            *(float *)(lVar7 + 0x2610) = fVar29;
            fVar19 = fVar29;
          }
          if (fVar25 < fVar13) {
            *(float *)(lVar7 + 0x2608) = fVar25;
            fVar13 = fVar25;
          }
          fVar23 = fVar19;
          if (fVar19 < fVar25) {
            *(float *)(lVar7 + 0x2610) = fVar25;
            fVar19 = fVar25;
            fVar23 = fVar25;
          }
        }
        bVar4 = false;
      } while (bVar5);
      if ((char)param_4 < '\0') {
        if ((fVar15 == fVar18) && (!NAN(fVar15) && !NAN(fVar18))) {
          if ((fVar21 == fVar22) && (!NAN(fVar21) && !NAN(fVar22))) goto LAB_1400c6f2a;
        }
        fVar27 = fVar20;
        if (fVar17 <= fVar20) {
          fVar27 = fVar17;
        }
        fVar12 = *(float *)(lVar7 + 0x25f8);
        if (fVar27 < *(float *)(lVar7 + 0x25f8)) {
          *(float *)(lVar7 + 0x25f8) = fVar27;
          fVar12 = fVar27;
        }
        fVar13 = fVar14;
        if (fVar14 <= fVar24) {
          fVar13 = fVar24;
        }
        fVar19 = *(float *)(lVar7 + 0x2600);
        if (*(float *)(lVar7 + 0x2600) < fVar27) {
          *(float *)(lVar7 + 0x2600) = fVar27;
          fVar19 = fVar27;
        }
        if (fVar13 < fVar12) {
          *(float *)(lVar7 + 0x25f8) = fVar13;
        }
        if (fVar19 < fVar13) {
          *(float *)(lVar7 + 0x2600) = fVar13;
        }
      }
LAB_1400c6f2a:
      if ((fVar17 != fVar20) || (NAN(fVar17) || NAN(fVar20))) {
LAB_1400c6f39:
        if (fVar15 <= fVar18) {
          fVar18 = fVar15;
        }
        fVar14 = DAT_1402112e4;
        if (fVar18 < DAT_1402112e4) {
          *(float *)(lVar7 + 0x2604) = fVar18;
          fVar14 = fVar18;
        }
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
        }
        fVar20 = DAT_1402112e0;
        if (DAT_1402112e0 < fVar18) {
          *(float *)(lVar7 + 0x260c) = fVar18;
          fVar20 = fVar18;
        }
        if (fVar22 < fVar14) {
          *(float *)(lVar7 + 0x2604) = fVar22;
        }
        if (fVar20 < fVar22) {
          *(float *)(lVar7 + 0x260c) = fVar22;
        }
      }
      else if ((fVar24 != fVar14) || (NAN(fVar24) || NAN(fVar14))) goto LAB_1400c6f39;
      *(float *)(lVar7 + 0x25e4) = *pfVar1;
      *(undefined4 *)(lVar7 + 0x25e8) = *(undefined4 *)(lVar7 + 0x25f8);
      *(undefined4 *)(lVar7 + 0x25ec) = *(undefined4 *)(lVar7 + 0x25fc);
      *(undefined4 *)(lVar7 + 0x25f0) = *(undefined4 *)(lVar7 + 0x2600);
      FUN_1400c717c(lVar7 + 0x25e4);
      fVar14 = *(float *)(lVar7 + 0x25e4);
      fVar22 = *(float *)(lVar7 + 0x25ec);
      if (fVar14 <= fVar22) {
        fVar18 = *(float *)(lVar7 + 0x25e8);
        fVar20 = *(float *)(lVar7 + 0x25f0);
        if ((fVar18 <= fVar20) &&
           (((((fVar14 < *(float *)(param_2 + 0x2b8) || (fVar18 < *(float *)(param_2 + 700))) ||
              (*(float *)(param_2 + 0x2c0) <= fVar14)) ||
             ((*(float *)(param_2 + 0x2c4) <= fVar18 || (fVar22 < *(float *)(param_2 + 0x2b8))))) ||
            ((fVar20 < *(float *)(param_2 + 700) ||
             ((*(float *)(param_2 + 0x2c0) <= fVar22 || (*(float *)(param_2 + 0x2c4) <= fVar20))))))
           )) {
          *(undefined1 *)(lVar7 + 0x25e0) = 1;
        }
      }
      uVar10 = CONCAT71(uVar11,1);
      if ((*(char *)(lVar7 + 0x25e0) == '\x01') && (*(longlong *)(lVar7 + 0x24f8) != 0)) {
        FUN_140110336(*(longlong *)(lVar7 + 0x24f8),lVar7 + 0x25e4);
      }
      goto LAB_1400c7011;
    }
  }
  uVar10 = 0;
LAB_1400c7011:
  return uVar10 & 0xffffffff;
}

