/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400db1c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400db1c8(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,float param_5,
                  uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined8 *puVar15;
  short sVar16;
  ulonglong uVar17;
  short sVar18;
  int iVar19;
  uint uVar20;
  short sVar21;
  uint uVar22;
  longlong lVar23;
  short sVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar27 = DAT_1401c86c8;
  if (0xffffff < param_4 && 1 < (int)param_3) {
    uVar22 = param_3 - 1;
    uVar11 = param_3;
    if ((param_6 >> 9 & 1) == 0) {
      uVar11 = uVar22;
    }
    if ((param_6 & 0x8000000f) != 0) {
      FUN_14007a954("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
      return;
    }
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      FUN_1400dae70(param_1,uVar11 * 6);
      param_5 = param_5 * DAT_1401c86a0;
      uVar12 = 1;
      do {
        uVar5 = uVar12 & 0xffffffff;
        if (param_3 == uVar12) {
          uVar5 = 0;
        }
        fVar26 = (float)param_2[uVar12 - 1];
        fVar27 = (float)param_2[uVar5] - fVar26;
        fVar28 = (float)((ulonglong)param_2[uVar5] >> 0x20) -
                 (float)((ulonglong)param_2[uVar12 - 1] >> 0x20);
        auVar30._0_4_ = fVar27 * fVar27 + fVar28 * fVar28;
        auVar30._4_4_ = fVar28;
        auVar30._8_8_ = 0;
        if (0.0 < auVar30._0_4_) {
          auVar30 = rsqrtss(auVar30,auVar30);
          fVar27 = fVar27 * auVar30._0_4_;
          fVar28 = fVar28 * auVar30._0_4_;
        }
        fVar27 = param_5 * fVar27;
        fVar28 = fVar28 * param_5;
        **(float **)(param_1 + 0x40) = fVar26 + fVar28;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) =
             *(float *)((longlong)param_2 + uVar12 * 8 + -4) - fVar27;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = *(float *)(param_2 + uVar5) + fVar28;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
             *(float *)((longlong)param_2 + uVar5 * 8 + 4) - fVar27;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x28) = *(float *)(param_2 + uVar5) - fVar28;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x2c) =
             *(float *)((longlong)param_2 + uVar5 * 8 + 4) + fVar27;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x3c) =
             *(float *)(param_2 + (uVar12 - 1)) - fVar28;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x40) =
             fVar27 + *(float *)((longlong)param_2 + uVar12 * 8 + -4);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x44) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
        **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)*(undefined4 *)(param_1 + 0x34) + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)*(undefined4 *)(param_1 + 0x34) + 2;
        *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 6) = *(undefined2 *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = (short)*(undefined4 *)(param_1 + 0x34) + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = (short)*(undefined4 *)(param_1 + 0x34) + 3;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
        bVar25 = uVar12 != uVar11;
        uVar12 = uVar12 + 1;
      } while (bVar25);
    }
    else {
      fVar28 = *(float *)(param_1 + 0xd0);
      fVar26 = (float)FUN_14007b71f(param_5,DAT_1401c86c8);
      iVar6 = (int)fVar26;
      bVar14 = fVar28 == fVar27 & iVar6 < 0x20 & *(byte *)(param_1 + 0x30) >> 1 &
               fVar26 - (float)iVar6 <= DAT_1402114ec;
      iVar19 = 0x12;
      if (param_5 <= fVar28) {
        iVar19 = 0xc;
      }
      iVar9 = 6;
      if (bVar14 == 0) {
        iVar9 = iVar19;
      }
      if (bVar14 == 1) {
        uVar2 = param_3 * 2;
        iVar19 = 3;
      }
      else {
        uVar2 = param_3 * 3;
        if (fVar28 < param_5) {
          uVar2 = param_3 * 4;
        }
        iVar19 = (uint)(fVar28 < param_5) * 2 + 3;
      }
      FUN_1400dae70(param_1,iVar9 * uVar11);
      lVar23 = *(longlong *)(param_1 + 0x38);
      uVar20 = iVar19 * param_3;
      if (*(int *)(lVar23 + 0x4c) < (int)uVar20) {
        if (*(longlong *)(lVar23 + 0x50) != 0) {
          FUN_140077b90();
        }
        uVar4 = FUN_140077ab4((ulonglong)uVar20 << 3);
        *(undefined8 *)(lVar23 + 0x50) = uVar4;
        *(uint *)(lVar23 + 0x4c) = uVar20;
        lVar23 = *(longlong *)(param_1 + 0x38);
      }
      uVar20 = _DAT_1401c8590;
      uVar3 = param_4 & 0xffffff;
      puVar8 = *(undefined8 **)(lVar23 + 0x50);
      uVar5 = (ulonglong)param_3;
      puVar15 = puVar8 + uVar5;
      uVar7 = (ulonglong)uVar11;
      uVar12 = 1;
      do {
        uVar17 = uVar12 & 0xffffffff;
        if (uVar5 == uVar12) {
          uVar17 = 0;
        }
        fVar29 = (float)param_2[uVar17] - (float)param_2[uVar12 - 1];
        fVar31 = (float)((ulonglong)param_2[uVar17] >> 0x20) -
                 (float)((ulonglong)param_2[uVar12 - 1] >> 0x20);
        auVar34._0_4_ = fVar29 * fVar29 + fVar31 * fVar31;
        auVar34._4_4_ = fVar31;
        auVar34._8_8_ = 0;
        if (0.0 < auVar34._0_4_) {
          auVar30 = rsqrtss(auVar34,auVar34);
          fVar29 = fVar29 * auVar30._0_4_;
          fVar31 = fVar31 * auVar30._0_4_;
        }
        *(float *)(puVar8 + (uVar12 - 1)) = fVar31;
        *(uint *)((longlong)puVar8 + uVar12 * 8 + -4) = (uint)fVar29 ^ uVar20;
        bVar25 = uVar12 != uVar7;
        uVar12 = uVar12 + 1;
      } while (bVar25);
      if ((param_6 >> 9 & 1) == 0) {
        puVar8[uVar22] = puVar15[-2];
        if (param_5 <= fVar28 || bVar14 != 0) {
          if (bVar14 != 0) {
            fVar28 = fVar26 * DAT_1401c86a0 + DAT_1401c86c8;
          }
          *puVar15 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                              (float)((ulonglong)*puVar8 >> 0x20) * fVar28,
                              (float)*param_2 + (float)*puVar8 * fVar28);
          puVar15[1] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                                (float)((ulonglong)*puVar8 >> 0x20) * fVar28,
                                (float)*param_2 - (float)*puVar8 * fVar28);
          puVar15[uVar22 * 2] =
               CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) +
                        (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar28,
                        (float)param_2[uVar22] + (float)puVar8[uVar22] * fVar28);
          puVar15[(ulonglong)(uVar22 * 2) + 1] =
               CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) -
                        (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar28,
                        (float)param_2[uVar22] - (float)puVar8[uVar22] * fVar28);
LAB_1400db724:
          fVar32 = DAT_140211de0;
          fVar31 = DAT_1402114b0;
          fVar29 = DAT_1401c8640._4_4_;
          fVar26 = (float)DAT_1401c8640;
          uVar12 = 1;
          iVar19 = *(int *)(param_1 + 0x34);
LAB_1400db74c:
          uVar17 = uVar12 & 0xffffffff;
          if (uVar5 == uVar12) {
            uVar17 = 0;
          }
          iVar9 = iVar19 + (bVar14 ^ 3);
          if (uVar5 == uVar12) {
            iVar9 = *(int *)(param_1 + 0x34);
          }
          fVar33 = ((float)puVar8[uVar17] + (float)puVar8[uVar12 - 1]) * fVar26;
          fVar35 = ((float)((ulonglong)puVar8[uVar17] >> 0x20) +
                   (float)((ulonglong)puVar8[uVar12 - 1] >> 0x20)) * fVar29;
          fVar36 = fVar33 * fVar33 + fVar35 * fVar35;
          if (fVar32 < fVar36) {
            fVar36 = fVar27 / fVar36;
            fVar37 = fVar31;
            if (fVar36 <= fVar31) {
              fVar37 = fVar36;
            }
            fVar33 = fVar33 * fVar37;
            fVar35 = fVar35 * fVar37;
          }
          uVar13 = (ulonglong)(uint)((int)uVar17 * 2);
          *(float *)(puVar15 + uVar13) = *(float *)(param_2 + uVar17) + fVar28 * fVar33;
          *(float *)((longlong)puVar15 + uVar13 * 8 + 4) =
               *(float *)((longlong)param_2 + uVar17 * 8 + 4) + fVar35 * fVar28;
          *(float *)(puVar15 + uVar13 + 1) = *(float *)(param_2 + uVar17) - fVar28 * fVar33;
          *(float *)((longlong)puVar15 + uVar13 * 8 + 0xc) =
               *(float *)((longlong)param_2 + uVar17 * 8 + 4) - fVar35 * fVar28;
          sVar18 = (short)iVar9;
          **(short **)(param_1 + 0x48) = sVar18;
          sVar24 = (short)iVar19;
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar24;
          if (bVar14 == 0) {
            *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar24 + 2;
            *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar24 + 2;
            *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar18 + 2;
            *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar18;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar18 + 1;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar24 + 1;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar24;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar24;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar18;
            *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar18 + 1;
            *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x18;
            if (uVar7 != uVar12) goto LAB_1400db8cf;
            puVar15 = *(undefined8 **)(param_1 + 0x40);
            puVar8 = puVar8 + uVar5 + 1;
            uVar12 = 0;
            do {
              *puVar15 = param_2[uVar12];
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar1;
              *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = puVar8[-1];
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar1;
              *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar3;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *puVar8;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = uVar1;
              *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = uVar3;
              puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3c);
              *(undefined8 **)(param_1 + 0x40) = puVar15;
              uVar12 = uVar12 + 1;
              puVar8 = puVar8 + 2;
            } while (uVar5 != uVar12);
          }
          else {
            *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar24 + 1;
            *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar18 + 1;
            *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar24 + 1;
            *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar18;
            *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
            if (uVar7 != uVar12) goto LAB_1400db8cf;
            puVar15 = *(undefined8 **)(param_1 + 0x40);
            lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
            uVar1 = *(undefined8 *)(lVar23 + (longlong)iVar6 * 0x10);
            uVar4 = *(undefined8 *)(lVar23 + 8 + (longlong)iVar6 * 0x10);
            puVar8 = puVar8 + uVar5 + 1;
            do {
              *puVar15 = puVar8[-1];
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar1;
              *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = *puVar8;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar4;
              *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
              puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28);
              *(undefined8 **)(param_1 + 0x40) = puVar15;
              puVar8 = puVar8 + 2;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          goto LAB_1400dbd47;
        }
        fVar26 = (fVar26 - fVar28) * DAT_1401c86a0;
        fVar29 = fVar28 + fVar26;
        *puVar15 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                            (float)((ulonglong)*puVar8 >> 0x20) * fVar29,
                            (float)*param_2 + (float)*puVar8 * fVar29);
        fVar31 = (float)*puVar8;
        fVar33 = fVar26 * fVar31;
        fVar32 = (float)((ulonglong)*puVar8 >> 0x20);
        fVar35 = fVar26 * fVar32;
        puVar15[1] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + fVar35,(float)*param_2 + fVar33
                             );
        puVar15[2] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) - fVar35,(float)*param_2 - fVar33
                             );
        puVar15[3] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) - fVar32 * fVar29,
                              (float)*param_2 - fVar31 * fVar29);
        uVar12 = (ulonglong)(uVar22 * 4);
        puVar15[uVar12] =
             CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) +
                      (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar29,
                      (float)param_2[uVar22] + (float)puVar8[uVar22] * fVar29);
        puVar15[uVar12 + 1] =
             CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) +
                      (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar26,
                      (float)param_2[uVar22] + (float)puVar8[uVar22] * fVar26);
        puVar15[uVar12 + 2] =
             CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) -
                      (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar26,
                      (float)param_2[uVar22] - (float)puVar8[uVar22] * fVar26);
        puVar15[uVar12 + 3] =
             CONCAT44((float)((ulonglong)param_2[uVar22] >> 0x20) -
                      (float)((ulonglong)puVar8[uVar22] >> 0x20) * fVar29,
                      (float)param_2[uVar22] - (float)puVar8[uVar22] * fVar29);
      }
      else {
        if (param_5 <= fVar28 || bVar14 != 0) {
          if (bVar14 != 0) {
            fVar28 = fVar26 * DAT_1401c86a0 + DAT_1401c86c8;
          }
          goto LAB_1400db724;
        }
        fVar26 = (fVar26 - fVar28) * DAT_1401c86a0;
      }
      fVar33 = DAT_140211de0;
      fVar32 = DAT_1402114b0;
      fVar31 = DAT_1401c8640._4_4_;
      fVar29 = (float)DAT_1401c8640;
      uVar12 = 1;
      iVar19 = *(int *)(param_1 + 0x34);
      do {
        uVar17 = uVar12 & 0xffffffff;
        if (uVar5 == uVar12) {
          uVar17 = 0;
        }
        iVar6 = iVar19 + 4;
        if (uVar5 == uVar12) {
          iVar6 = *(int *)(param_1 + 0x34);
        }
        fVar35 = ((float)puVar8[uVar17] + (float)puVar8[uVar12 - 1]) * fVar29;
        fVar36 = ((float)((ulonglong)puVar8[uVar17] >> 0x20) +
                 (float)((ulonglong)puVar8[uVar12 - 1] >> 0x20)) * fVar31;
        fVar37 = fVar35 * fVar35 + fVar36 * fVar36;
        if (fVar33 < fVar37) {
          fVar37 = fVar27 / fVar37;
          fVar38 = fVar32;
          if (fVar37 <= fVar32) {
            fVar38 = fVar37;
          }
          fVar35 = fVar35 * fVar38;
          fVar36 = fVar36 * fVar38;
        }
        fVar37 = (fVar28 + fVar26) * fVar35;
        fVar38 = (fVar28 + fVar26) * fVar36;
        uVar13 = (ulonglong)(uint)((int)uVar17 * 4);
        *(float *)(puVar15 + uVar13) = *(float *)(param_2 + uVar17) + fVar37;
        *(float *)((longlong)puVar15 + uVar13 * 8 + 4) =
             *(float *)((longlong)param_2 + uVar17 * 8 + 4) + fVar38;
        *(float *)(puVar15 + uVar13 + 1) = *(float *)(param_2 + uVar17) + fVar26 * fVar35;
        *(float *)((longlong)puVar15 + uVar13 * 8 + 0xc) =
             *(float *)((longlong)param_2 + uVar17 * 8 + 4) + fVar36 * fVar26;
        *(float *)(puVar15 + uVar13 + 2) = *(float *)(param_2 + uVar17) - fVar26 * fVar35;
        *(float *)((longlong)puVar15 + uVar13 * 8 + 0x14) =
             *(float *)((longlong)param_2 + uVar17 * 8 + 4) - fVar36 * fVar26;
        *(float *)(puVar15 + uVar13 + 3) = *(float *)(param_2 + uVar17) - fVar37;
        *(float *)((longlong)puVar15 + uVar13 * 8 + 0x1c) =
             *(float *)((longlong)param_2 + uVar17 * 8 + 4) - fVar38;
        sVar18 = (short)iVar6;
        sVar10 = sVar18 + 1;
        **(short **)(param_1 + 0x48) = sVar10;
        sVar24 = (short)iVar19;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar24 + 1;
        sVar16 = sVar24 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar16;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar16;
        sVar21 = sVar18 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar10;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar10;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar24 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar24;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar24;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar18;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar10;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x18) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1a) = sVar16;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1c) = sVar24 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1e) = sVar24 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x20) = sVar18 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x22) = sVar21;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x24;
        bVar25 = uVar12 != uVar7;
        uVar12 = uVar12 + 1;
        iVar19 = iVar6;
      } while (bVar25);
      puVar15 = *(undefined8 **)(param_1 + 0x40);
      puVar8 = puVar8 + uVar5 + 3;
      do {
        *puVar15 = puVar8[-3];
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar3;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = puVar8[-2];
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = puVar8[-1];
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3c) = *puVar8;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x44) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = uVar3;
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x50);
        *(undefined8 **)(param_1 + 0x40) = puVar15;
        puVar8 = puVar8 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
LAB_1400dbd47:
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (uVar2 & 0xffff);
    }
  }
  return;
LAB_1400db8cf:
  uVar12 = uVar12 + 1;
  iVar19 = iVar9;
  goto LAB_1400db74c;
}

