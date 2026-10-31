/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e46e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e46e4(undefined4 param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint *puVar15;
  short *psVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  char *pcVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  float *pfVar27;
  undefined1 *puVar28;
  uint uVar29;
  char *pcVar30;
  short sVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  puVar22 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 200);
  *(undefined4 *)(puVar22 + 0x28) = param_1;
  uVar29 = *(uint *)(puVar22 + 0xec);
  uVar17 = (ulonglong)*(uint *)(puVar22 + 0xe4);
  pcVar10 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffc4);
  *pcVar10 = *pcVar10 + (char)pcVar10;
  fVar36 = *(float *)(uVar17 + 8);
  fVar33 = *(float *)(uVar17 + 0xc);
  fVar42 = *(float *)(uVar17 + 0x10);
  fVar32 = (float)(int)*(float *)(uVar17 + 4);
  *(float *)(puVar22 + 0xc) = fVar32;
  *(float *)(puVar22 + 0x10) = (float)(int)fVar36;
  *(float *)(puVar22 + 0x14) = (float)(int)fVar33;
  *(float *)(puVar22 + 0x18) = (float)(int)fVar42;
  puVar28 = puVar22;
  if (fVar32 < *(float *)((ulonglong)uVar29 + 0xc) || fVar32 == *(float *)((ulonglong)uVar29 + 0xc))
  {
    *(uint *)(puVar22 + 0x3c) = *(uint *)(puVar22 + 0xe8) | 0xffffff;
    pcVar10 = (char *)(ulonglong)*(uint *)(puVar22 + 0xf4);
    do {
      *(undefined1 (*) [16])(puVar22 + 0x60) =
           ZEXT416(*(uint *)(ulonglong)*(uint *)(puVar22 + 0xe4));
      if ((int)pcVar10 == 0) {
        uVar29 = *(uint *)(puVar22 + 0xf0);
        *(ulonglong *)(puVar22 + -8) = (ulonglong)uVar29;
        *(undefined8 *)(puVar22 + -0x10) = 0x1407e4763;
        iVar6 = FUN_1408c85c0();
        puVar22 = (undefined1 *)(ulonglong)((int)(puVar22 + -8) + 4);
        pcVar10 = (char *)(ulonglong)(iVar6 + uVar29);
      }
      puVar23 = (undefined4 *)(ulonglong)((int)puVar22 - 8);
      *puVar23 = puVar23[0x3a];
      puVar23[1] = 0xbf800000;
      *(undefined8 *)(puVar23 + -2) = 0x1407e478c;
      lVar11 = FUN_1407e80f8(puVar23[0xc]);
      puVar23[0x11] = (int)lVar11;
      *(undefined1 (*) [16])(puVar23 + 0x28) =
           ZEXT416((uint)((float)puVar23[0x38] / *(float *)(lVar11 + 0x10)));
      fVar42 = (float)puVar23[3];
      uVar37 = puVar23[4];
      uVar38 = puVar23[5];
      uVar39 = puVar23[6];
      fVar33 = (float)puVar23[0x38] + fVar42;
      uVar17 = (ulonglong)(uint)puVar23[0x3b];
      fVar36 = *(float *)(uVar17 + 4);
      uVar29 = (uint)pcVar10;
      if (fVar36 <= fVar33) {
        pcVar30 = (char *)(ulonglong)(uint)puVar23[0x3c];
      }
      else {
        pcVar30 = (char *)(ulonglong)(uint)puVar23[0x3c];
        if ((uint)puVar23[0x3c] < uVar29) {
          pcVar30 = (char *)(ulonglong)(uint)puVar23[0x3c];
          do {
            *(float *)((longlong)puVar23 + 0x2c) = fVar36;
            *(undefined1 (*) [16])((longlong)puVar23 + 0xc) = ZEXT416((uint)fVar33);
            *(ulonglong *)((longlong)puVar23 + -8) = (ulonglong)(uVar29 - (int)pcVar30);
            *(undefined8 *)((longlong)puVar23 + -0x10) = 10;
            *(char **)((longlong)puVar23 + -0x18) = pcVar30;
            *(undefined8 *)((longlong)puVar23 + -0x20) = 0x1407e47f7;
            uVar12 = FUN_1408b1400();
            iVar21 = (int)(undefined1 *)((longlong)puVar23 + -0x18);
            puVar23 = (undefined4 *)(ulonglong)(iVar21 + 0xc);
            fVar36 = *(float *)((longlong)puVar23 + 0xf8);
            iVar6 = (int)uVar12;
            if (fVar36 <= 0.0) {
              pcVar30 = (char *)(ulonglong)(iVar6 + 1);
              if (iVar6 == 0) {
                pcVar30 = pcVar10;
              }
              fVar33 = *(float *)((longlong)puVar23 + 0xe0);
              fVar36 = *(float *)((longlong)puVar23 + 0x2c);
            }
            else {
              pcVar13 = (char *)(uVar12 & 0xffffffff);
              if (iVar6 == 0) {
                pcVar13 = pcVar10;
              }
              puVar24 = (undefined4 *)(ulonglong)(iVar21 - 0xc);
              uVar7 = puVar24[0x45];
              puVar24[5] = uVar7;
              puVar24[4] = fVar36;
              puVar24[2] = (int)pcVar30;
              puVar24[1] = puVar24[0x3e];
              *puVar24 = puVar24[0x10];
              puVar24[3] = (int)pcVar13;
              *(undefined8 *)(puVar24 + -2) = 0x1407e4847;
              uVar14 = FUN_1407eb1a6();
              uVar25 = (ulonglong)(iVar21 + 0xc);
              *(ulonglong *)(uVar25 - 8) = (ulonglong)uVar7;
              *(char **)(uVar25 - 0x10) = pcVar10;
              *(undefined8 *)(uVar25 - 0x18) = uVar14;
              *(undefined8 *)(uVar25 - 0x20) = 0x1407e4852;
              uVar7 = FUN_1407eb06d();
              fVar33 = *(float *)(uVar25 + 0xd4);
              puVar23 = (undefined4 *)(ulonglong)((int)(uVar25 - 0x18) + 0xc);
              pcVar30 = (char *)(ulonglong)uVar7;
              fVar36 = *(float *)(uVar17 + 4);
            }
            fVar42 = *(float *)((longlong)puVar23 + 0xc);
            uVar37 = *(undefined4 *)((longlong)puVar23 + 0x10);
            uVar38 = *(undefined4 *)((longlong)puVar23 + 0x14);
            uVar39 = *(undefined4 *)((longlong)puVar23 + 0x18);
            fVar33 = fVar33 + fVar42;
          } while ((fVar33 < fVar36) && ((uint)pcVar30 < uVar29));
        }
      }
      *(float *)((longlong)puVar23 + 0xc) = fVar42;
      *(undefined4 *)((longlong)puVar23 + 0x10) = uVar37;
      *(undefined4 *)((longlong)puVar23 + 0x14) = uVar38;
      *(undefined4 *)((longlong)puVar23 + 0x18) = uVar39;
      uVar7 = (uint)pcVar30;
      pcVar13 = pcVar10;
      if ((*(float *)((longlong)puVar23 + 0xf8) <= 0.0) && (10000 < (int)(uVar29 - uVar7))) {
        fVar36 = *(float *)(uVar17 + 0xc);
        *(float *)((longlong)puVar23 + 0x70) = fVar36;
        pcVar13 = pcVar30;
        if ((*(float *)((longlong)puVar23 + 0xc) <= fVar36 &&
             fVar36 != *(float *)((longlong)puVar23 + 0xc)) && (uVar7 < uVar29)) {
          fVar36 = *(float *)((longlong)puVar23 + 0xc);
          do {
            *(float *)((longlong)puVar23 + 0x2c) = fVar36;
            *(ulonglong *)((longlong)puVar23 + -8) = (ulonglong)(uVar29 - (int)pcVar13);
            *(undefined8 *)((longlong)puVar23 + -0x10) = 10;
            *(char **)((longlong)puVar23 + -0x18) = pcVar13;
            *(undefined8 *)((longlong)puVar23 + -0x20) = 0x1407e48f2;
            iVar6 = FUN_1408b1400();
            pfVar27 = (float *)((longlong)puVar23 + 0x20);
            puVar23 = (undefined4 *)
                      (ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x18) + 0xc);
            pcVar13 = (char *)(ulonglong)(iVar6 + 1);
            if (iVar6 == 0) {
              pcVar13 = pcVar10;
            }
            fVar36 = *pfVar27 + *(float *)((longlong)puVar23 + 0xe0);
          } while ((fVar36 < *(float *)((longlong)puVar23 + 0x70)) && ((uint)pcVar13 < uVar29));
        }
      }
      uVar29 = (uint)pcVar13;
      puVar28 = (undefined1 *)puVar23;
      if (uVar7 == uVar29) break;
      uVar8 = (uVar29 - uVar7) * 4;
      uVar17 = (ulonglong)((uVar29 - uVar7) * 6);
      puVar19 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar23 + 0xdc);
      *(uint *)((longlong)puVar23 + 0x40) = *(uint *)((longlong)puVar19 + 0xc);
      *(uint *)((longlong)puVar23 + 0x48) = uVar8;
      *(ulonglong *)((longlong)puVar23 + -8) = (ulonglong)uVar8;
      pfVar27 = (float *)((longlong)puVar23 + -0x10);
      *(ulonglong *)((longlong)puVar23 + -0x10) = uVar17;
      *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407e4952;
      FUN_1407e03e6(puVar19);
      *(uint *)((longlong)puVar23 + 0x10) = (uint)puVar19[6];
      *(uint *)((longlong)puVar23 + 0x14) = *(uint *)((longlong)puVar19 + 0x34);
      *(uint *)((longlong)puVar23 + 0x3c) = (uint)*puVar19;
      *(uint *)((longlong)puVar23 + 0xc) = (uint)puVar19[5];
      if (uVar7 < uVar29) {
        fVar33 = (float)(int)*(float *)((longlong)puVar23 + 0x50);
        fVar42 = (float)(int)*(float *)((longlong)puVar23 + 0x54);
        fVar32 = (float)(int)*(float *)((longlong)puVar23 + 0x58);
        fVar43 = (float)(int)*(float *)((longlong)puVar23 + 0x5c);
        uVar37 = *(undefined4 *)((longlong)puVar23 + 0x90);
        *(undefined4 *)((longlong)puVar23 + 0xa0) = uVar37;
        *(undefined4 *)((longlong)puVar23 + 0xa4) = uVar37;
        *(undefined4 *)((longlong)puVar23 + 0xa8) = uVar37;
        *(undefined4 *)((longlong)puVar23 + 0xac) = uVar37;
        uVar7 = 0;
        *(float *)((longlong)puVar23 + 0x60) = fVar33;
        *(float *)((longlong)puVar23 + 100) = fVar42;
        *(float *)((longlong)puVar23 + 0x68) = fVar32;
        *(float *)((longlong)puVar23 + 0x6c) = fVar43;
        fVar36 = *(float *)((longlong)puVar23 + 0xe8);
        pfVar27 = (float *)((longlong)puVar23 + -0x10);
        do {
          uVar8 = (uint)pfVar27[3];
          uVar9 = (uint)pfVar27[4];
          pfVar27[0xb] = (float)uVar8;
          pfVar27[0xc] = (float)uVar9;
          pfVar27[0xd] = pfVar27[5];
          pfVar27[0xe] = pfVar27[6];
          pfVar27[3] = fVar33;
          pfVar27[4] = (float)uVar8;
          pfVar27[5] = fVar42;
          pfVar27[6] = (float)uVar9;
          *pfVar27 = (float)uVar7;
          pcVar10 = pcVar30;
LAB_1407e49bf:
          pcVar20 = pcVar30;
          if (0.0 < fVar36) {
            if (uVar7 == 0) {
              fVar40 = *(float *)((longlong)pfVar27 + 0x70);
              puVar26 = (undefined4 *)(ulonglong)((int)pfVar27 - 0x18);
              puVar26[5] = puVar26[0x45];
              puVar26[3] = uVar29;
              puVar26[2] = (uint)pcVar10;
              puVar26[1] = puVar26[0x3e];
              *puVar26 = puVar26[0x10];
              puVar26[4] = (fVar40 - fVar33) + fVar36;
              puVar26[0x1e] = fVar33;
              puVar26[0x1f] = fVar42;
              puVar26[0x20] = fVar32;
              puVar26[0x21] = fVar43;
              *(undefined8 *)(puVar26 + -2) = 0x1407e4a18;
              uVar7 = FUN_1407eb1a6();
              fVar33 = (float)puVar26[0x1e];
              fVar42 = (float)puVar26[0x1f];
              fVar36 = (float)puVar26[0x44];
              pfVar27 = (float *)((ulonglong)pfVar27 & 0xffffffff);
            }
            if (uVar7 <= (uint)pcVar10) {
              fVar36 = pfVar27[0xb] + pfVar27[0x38];
              if (fVar36 < *(float *)((ulonglong)(uint)pfVar27[0x3b] + 0xc) ||
                  fVar36 == *(float *)((ulonglong)(uint)pfVar27[0x3b] + 0xc))
              goto code_r0x0001407e4a4c;
              goto LAB_1407e4e68;
            }
            *pfVar27 = (float)uVar7;
            pfVar27[3] = fVar33;
            pfVar27[4] = pfVar27[0xb];
            pfVar27[5] = fVar42;
            pfVar27[6] = pfVar27[0xc];
            pcVar20 = pcVar10;
          }
          cVar3 = *pcVar20;
          uVar7 = (uint)cVar3;
          *(uint *)((longlong)pfVar27 + 0xc0) = uVar7;
          if (cVar3 < '\0') {
            *(char **)((longlong)pfVar27 + -8) = pcVar13;
            *(char **)((longlong)pfVar27 + -0x10) = pcVar20;
            *(ulonglong *)((longlong)pfVar27 + -0x18) =
                 (ulonglong)((longlong)pfVar27 + 0xb8) & 0xffffffff;
            *(undefined8 *)((longlong)pfVar27 + -0x20) = 0x1407e4ab7;
            iVar6 = FUN_140750fa5();
            fVar36 = *(float *)((longlong)pfVar27 + 0xec);
            pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -0x18) + 0xc);
            pcVar30 = (char *)(ulonglong)(uint)(iVar6 + (int)pcVar20);
            uVar7 = *(uint *)((longlong)pfVar27 + 0xc0);
          }
          puVar19 = (ulonglong *)(ulonglong)(uint)pfVar27[0x37];
          if (uVar7 < 0x20) {
            fVar40 = pfVar27[4];
            if (uVar7 == 0xd) {
              fVar33 = pfVar27[3];
              fVar42 = pfVar27[4];
              fVar32 = pfVar27[5];
              fVar43 = pfVar27[6];
              goto LAB_1407e4b9a;
            }
            if (uVar7 != 10) goto LAB_1407e4b1e;
            fVar40 = pfVar27[0x38] + fVar40;
            *(undefined1 (*) [16])(pfVar27 + 3) = ZEXT416((uint)fVar40);
            if (*(float *)((ulonglong)(uint)pfVar27[0x3b] + 0xc) <= fVar40 &&
                fVar40 != *(float *)((ulonglong)(uint)pfVar27[0x3b] + 0xc)) break;
            fVar33 = pfVar27[0x1c];
            fVar42 = pfVar27[0x1d];
            fVar32 = pfVar27[0x1e];
            fVar43 = pfVar27[0x1f];
LAB_1407e4b9f:
            uVar7 = (uint)*pfVar27;
          }
          else {
LAB_1407e4b1e:
            *(ulonglong *)(pfVar27 + -2) = (ulonglong)(uVar7 & 0xffff);
            pfVar27[-4] = 3.973338;
            pfVar27[-3] = 1.4013e-45;
            puVar15 = (uint *)FUN_1407e81ac(pfVar27[0x11]);
            fVar42 = 0.0;
            fVar32 = 0.0;
            fVar43 = 0.0;
            fVar33 = (float)puVar15[1] * pfVar27[0x26];
            uVar8 = *puVar15;
            if ((uVar8 & 2) == 0) {
LAB_1407e4b7d:
              fVar36 = pfVar27[0x3c];
LAB_1407e4b86:
              fVar40 = pfVar27[2];
              fVar33 = fVar33 + pfVar27[1];
              pfVar27 = pfVar27 + -2;
LAB_1407e4b9a:
              *(float *)((longlong)pfVar27 + 0xc) = fVar40;
              *(float *)((longlong)pfVar27 + 0x10) = fVar40;
              *(float *)((longlong)pfVar27 + 0x14) = fVar40;
              *(float *)((longlong)pfVar27 + 0x18) = fVar40;
              goto LAB_1407e4b9f;
            }
            fVar44 = (float)*(undefined8 *)(puVar15 + 2) * pfVar27[0x2a] + pfVar27[1];
            fVar40 = (float)((ulonglong)*(undefined8 *)(puVar15 + 2) >> 0x20) * pfVar27[0x2b] +
                     pfVar27[2];
            fVar36 = ((float *)(ulonglong)(uint)pfVar27[0x39])[2];
            if (fVar36 < fVar44) goto LAB_1407e4b7d;
            fVar34 = (float)*(undefined8 *)(puVar15 + 4) * pfVar27[0x2a] + pfVar27[1];
            fVar35 = (float)((ulonglong)*(undefined8 *)(puVar15 + 4) >> 0x20) * pfVar27[0x2b] +
                     pfVar27[2];
            fVar45 = *(float *)(ulonglong)(uint)pfVar27[0x39];
            if (fVar34 < fVar45) goto LAB_1407e4b7d;
            pfVar27[9] = fVar35;
            pfVar27[10] = fVar35;
            pfVar27[0xb] = fVar35;
            pfVar27[0xc] = fVar35;
            *pfVar27 = (float)puVar15[6];
            pfVar27[-1] = (float)puVar15[7];
            uVar14 = *(undefined8 *)(puVar15 + 8);
            fVar41 = (float)uVar14;
            *(undefined1 (*) [16])(pfVar27 + 0x22) = ZEXT416(puVar15[9]);
            *(undefined8 *)(pfVar27 + 0x1e) = uVar14;
            pfVar27[0x20] = 0.0;
            pfVar27[0x21] = 0.0;
            if (((uint)pfVar27[0x3d] & 1) == 0) {
              pfVar27[0x12] = (float)uVar17;
              fVar45 = (float)((ulonglong)uVar14 >> 0x20);
              fVar36 = pfVar27[0x3c];
LAB_1407e4d84:
              fVar5 = pfVar27[0xd];
              if ((uVar8 & 1) == 0) {
                fVar5 = pfVar27[0x38];
              }
              fVar4 = pfVar27[6];
              puVar18 = (undefined8 *)(ulonglong)(uint)fVar4;
              *puVar18 = CONCAT44(fVar40,fVar44);
              *(float *)(puVar18 + 2) = fVar5;
              uVar37 = *pfVar27;
              *(undefined4 *)(puVar18 + 1) = uVar37;
              fVar2 = pfVar27[-1];
              *(float *)((longlong)puVar18 + 0xc) = fVar2;
              *(float *)((longlong)puVar18 + 0x14) = fVar34;
              *(float *)(puVar18 + 3) = fVar40;
              *(float *)((longlong)puVar18 + 0x24) = fVar5;
              *(float *)((longlong)puVar18 + 0x1c) = pfVar27[0x1e];
              *(float *)(puVar18 + 4) = fVar2;
              *(float *)(puVar18 + 7) = fVar5;
              *(float *)(puVar18 + 5) = fVar34;
              *(float *)((longlong)puVar18 + 0x2c) = fVar35;
              *(float *)(puVar18 + 6) = fVar41;
              *(float *)((longlong)puVar18 + 0x34) = fVar45;
              *(float *)((longlong)puVar18 + 0x3c) = fVar44;
              *(float *)(puVar18 + 8) = pfVar27[9];
              *(float *)((longlong)puVar18 + 0x4c) = fVar5;
              *(undefined4 *)((longlong)puVar18 + 0x44) = uVar37;
              *(float *)(puVar18 + 9) = pfVar27[0x22];
              fVar40 = pfVar27[7];
              psVar16 = (short *)(ulonglong)(uint)fVar40;
              fVar44 = pfVar27[5];
              sVar31 = SUB42(fVar44,0);
              *psVar16 = sVar31;
              psVar16[1] = sVar31 + 1;
              psVar16[2] = sVar31 + 2;
              psVar16[3] = sVar31;
              psVar16[4] = sVar31 + 2;
              psVar16[5] = sVar31 + 3;
              pfVar27[6] = (float)((int)fVar4 + 0x50);
              pfVar27[5] = (float)((int)fVar44 + 4);
              pfVar27[7] = (float)((int)fVar40 + 0xc);
              uVar17 = (ulonglong)(uint)pfVar27[0x12];
              goto LAB_1407e4b86;
            }
            *(undefined1 (*) [16])(pfVar27 + 0x16) = ZEXT416((uint)fVar33);
            if (fVar44 < fVar45) {
              *pfVar27 = *pfVar27 +
                         (fVar41 - *pfVar27) *
                         (_DAT_150a7006c - (fVar34 - fVar45) / (fVar34 - fVar44));
              fVar44 = fVar45;
            }
            fVar33 = *(float *)((ulonglong)(uint)pfVar27[0x39] + 4);
            fVar45 = pfVar27[0x22];
            if (fVar33 <= fVar40) {
              pfVar27[0x12] = fVar40;
              pfVar27[0x13] = fVar40;
              pfVar27[0x14] = fVar40;
              pfVar27[0x15] = fVar40;
            }
            else {
              *(undefined1 (*) [16])(pfVar27 + 0x12) = ZEXT416((uint)fVar33);
              pfVar27[-1] = pfVar27[-1] +
                            (fVar45 - pfVar27[-1]) *
                            (_DAT_150a700ca - (pfVar27[9] - fVar33) / (pfVar27[9] - fVar40));
            }
            fVar41 = pfVar27[0x1e];
            if (fVar36 < fVar34) {
              fVar41 = (fVar41 - *pfVar27) * ((fVar36 - fVar44) / (fVar34 - fVar44)) + *pfVar27;
              fVar34 = fVar36;
            }
            fVar36 = *(float *)((ulonglong)(uint)pfVar27[0x39] + 0xc);
            fVar35 = pfVar27[9];
            fVar33 = pfVar27[10];
            fVar42 = pfVar27[0xb];
            fVar32 = pfVar27[0xc];
            if (fVar35 <= fVar36) {
              uVar7 = (uint)pfVar27[-2];
              fVar40 = pfVar27[0x12];
            }
            else {
              fVar40 = pfVar27[0x12];
              fVar45 = (fVar45 - pfVar27[-1]) * ((fVar36 - fVar40) / (fVar35 - fVar40)) +
                       pfVar27[-1];
              uVar7 = (uint)pfVar27[-2];
              fVar35 = fVar36;
              fVar33 = 0.0;
              fVar42 = 0.0;
              fVar32 = 0.0;
            }
            if (fVar40 < fVar35) {
              pfVar27[0x12] = (float)uVar17;
              pfVar27[0x22] = fVar45;
              pfVar27[0x23] = pfVar27[0x23];
              pfVar27[0x24] = pfVar27[0x24];
              pfVar27[0x25] = pfVar27[0x25];
              pfVar27[9] = fVar35;
              pfVar27[10] = fVar33;
              pfVar27[0xb] = fVar42;
              pfVar27[0xc] = fVar32;
              fVar36 = pfVar27[0x3c];
              fVar33 = pfVar27[0x16];
              fVar42 = pfVar27[0x17];
              fVar32 = pfVar27[0x18];
              fVar43 = pfVar27[0x19];
              pfVar27[0x1e] = fVar41;
              pfVar27[0x1f] = pfVar27[0x1f];
              pfVar27[0x20] = pfVar27[0x20];
              pfVar27[0x21] = pfVar27[0x21];
              goto LAB_1407e4d84;
            }
            fVar36 = pfVar27[2];
            fVar42 = pfVar27[0x17];
            fVar32 = pfVar27[0x18];
            fVar43 = pfVar27[0x19];
            fVar33 = pfVar27[0x16] + pfVar27[1];
            pfVar27[1] = fVar36;
            pfVar27[2] = fVar36;
            pfVar27[3] = fVar36;
            pfVar27[4] = fVar36;
            fVar36 = pfVar27[0x3c];
            pfVar27 = pfVar27 + -2;
          }
        } while ((uint)pcVar30 < uVar29);
      }
LAB_1407e4e6f:
      uVar29 = *(uint *)((longlong)pfVar27 + 0x4c);
      if (uVar29 == (uint)*puVar19) {
        uVar7 = *(uint *)((longlong)pfVar27 + 0x20);
        *(int *)(puVar19 + 3) = ((int)(uVar7 - (uint)puVar19[4]) >> 2) * -0x33333333;
        iVar6 = *(int *)((longlong)pfVar27 + 0x40);
        uVar8 = *(uint *)((longlong)pfVar27 + 0x24);
        uVar9 = (int)(uVar8 - *(uint *)((longlong)puVar19 + 0x14)) >> 1;
        *(uint *)((longlong)puVar19 + 0xc) = uVar9;
        piVar1 = (int *)(((ulonglong)(uint)puVar19[1] - 0x18) + (ulonglong)(uVar29 << 6));
        *piVar1 = *piVar1 + (uVar9 - (iVar6 + (int)uVar17));
        *(uint *)(puVar19 + 6) = uVar7;
        *(uint *)((longlong)puVar19 + 0x34) = uVar8;
        *(uint *)(puVar19 + 5) = *(uint *)((longlong)pfVar27 + 0x1c);
        puVar28 = (undefined1 *)pfVar27;
        break;
      }
      *puVar19 = (ulonglong)(uint)*puVar19;
      *(undefined8 *)((longlong)pfVar27 + -8) = *(undefined8 *)((longlong)pfVar27 + 0x48);
      puVar28 = (undefined1 *)((longlong)pfVar27 + -0x10);
      puVar22 = (undefined1 *)((longlong)pfVar27 + -0x10);
      *(ulonglong *)((longlong)pfVar27 + -0x10) = uVar17;
      *(undefined8 *)((longlong)pfVar27 + -0x18) = 0x1407e4e88;
      FUN_1407e0522(puVar19);
      *(undefined8 *)((longlong)pfVar27 + -0x18) = 0x1407e4e8f;
      FUN_1407dfc44(puVar19);
      fVar36 = (float)(int)*(float *)((ulonglong)*(uint *)((longlong)pfVar27 + 0xd4) + 4);
      *(undefined1 (*) [16])((longlong)pfVar27 + -4) = ZEXT416((uint)fVar36);
      pcVar10 = pcVar13;
    } while (fVar36 < *(float *)((ulonglong)*(uint *)((longlong)pfVar27 + 0xdc) + 0xc) ||
             fVar36 == *(float *)((ulonglong)*(uint *)((longlong)pfVar27 + 0xdc) + 0xc));
  }
  if (_DAT_150b6dc0d != (*(uint *)(puVar28 + 0xc4) ^ (uint)puVar28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar28 + -8) = &UNK_1407e4f2c;
    FUN_1408802b0(*(uint *)(puVar28 + 0xc4) ^ (uint)puVar28);
  }
  return;
code_r0x0001407e4a4c:
  pfVar27[0xb] = fVar36;
  pfVar27[0xc] = pfVar27[0xc];
  pfVar27[0xd] = pfVar27[0xd];
  pfVar27[0xe] = pfVar27[0xe];
  *(undefined8 *)(pfVar27 + -2) = *(undefined8 *)(pfVar27 + 0x3f);
  *(char **)(pfVar27 + -4) = pcVar13;
  *(char **)(pfVar27 + -6) = pcVar10;
  pfVar27[-8] = 3.9732893;
  pfVar27[-7] = 1.4013e-45;
  uVar8 = FUN_1407eb06d();
  fVar36 = pfVar27[0x3b];
  pfVar27 = (float *)(ulonglong)((int)(pfVar27 + -6) + 0xc);
  pcVar10 = (char *)(ulonglong)uVar8;
  uVar7 = 0;
  fVar33 = *(float *)((longlong)pfVar27 + 0x70);
  fVar42 = *(float *)((longlong)pfVar27 + 0x74);
  fVar32 = *(float *)((longlong)pfVar27 + 0x78);
  fVar43 = *(float *)((longlong)pfVar27 + 0x7c);
  if (uVar29 <= uVar8) {
LAB_1407e4e68:
    puVar19 = (ulonglong *)(ulonglong)*(uint *)((longlong)pfVar27 + 0xdc);
    goto LAB_1407e4e6f;
  }
  goto LAB_1407e49bf;
}

