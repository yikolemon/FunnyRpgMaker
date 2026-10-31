/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754262 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140754262(ulonglong param_1)

{
  float fVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong uVar9;
  
  pfVar15 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  puVar24 = (uint *)(param_1 & 0xffffffff);
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar25 = puVar24[0xb];
  uVar23 = (ulonglong)uVar25;
  *(undefined4 *)((longlong)pfVar15 + 4) = *(undefined4 *)((ulonglong)uVar4 + 0x14cc);
  *(uint *)((longlong)pfVar15 + 0x18) = uVar4;
  uVar4 = *(uint *)((ulonglong)uVar4 + 0x2308);
  uVar9 = (ulonglong)uVar4;
  if ((uVar4 != 0) && (*(char *)(uVar9 + 0x1ee) == '\x01')) {
    *(ulonglong *)((longlong)pfVar15 + -8) = uVar9;
    *(undefined8 *)((longlong)pfVar15 + -0x10) = 0x1407542a3;
    FUN_1407bb89e();
    pfVar15 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar15 + -8) + 4);
  }
  uVar5 = puVar24[3];
  uVar14 = (ulonglong)uVar5;
  if (uVar5 != 0) {
    pfVar15[-2] = 3.8321958;
    pfVar15[-1] = 1.4013e-45;
    cVar3 = FUN_14077db51();
    if (cVar3 == '\0') {
      if (*(int *)(uVar23 + 8) == 0 && uVar4 != 0) {
        uVar26 = (ulonglong)(uint)pfVar15[6];
        if (*(char *)(uVar9 + 0x1f9) == '\0') {
          uVar4 = *(uint *)(uVar23 + 0xc);
          *puVar24 = uVar4;
          *(ulonglong *)(pfVar15 + -2) = uVar14;
          *(ulonglong *)(pfVar15 + -4) = (ulonglong)uVar4;
          pfVar15[-6] = 3.8322146;
          pfVar15[-5] = 1.4013e-45;
          uVar4 = FUN_140752553();
          puVar24[1] = uVar4;
          uVar10 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
          puVar17 = (undefined1 *)(ulonglong)((int)(pfVar15 + -4) + 8);
          if ((int)*puVar24 < (int)uVar4) {
            *(int *)(uVar23 + 0xc) = *(int *)(uVar23 + 0xc) + 1;
          }
          goto LAB_1407542b8;
        }
LAB_14075432f:
        uVar4 = (uint)pfVar15[1];
        uVar9 = (ulonglong)uVar4;
        *(double *)(puVar24 + 6) = (double)*(float *)(uVar9 + 0x148);
        fVar28 = (float)puVar24[4];
        if (fVar28 <= 0.0) {
          uVar7 = *(undefined4 *)(uVar23 + 0xc);
          puVar13 = (undefined4 *)((ulonglong)(pfVar15 + 0xc) & 0xffffffff);
          *puVar13 = uVar7;
          puVar13[1] = uVar7;
          *(undefined2 *)(puVar13 + 2) = 0;
          *(undefined1 *)((longlong)puVar13 + 10) = 0;
          *(undefined4 **)(pfVar15 + -2) = puVar13;
          pfVar15[-4] = 3.832264;
          pfVar15[-3] = 1.4013e-45;
          FUN_14077db76(uVar25 + 0x10);
          uVar25 = *(uint *)(uVar23 + 0x18);
          *(undefined8 *)(pfVar15 + -4) = *(undefined8 *)(uVar23 + 0xc);
          *(undefined8 *)(pfVar15 + -6) = *(undefined8 *)(ulonglong)uVar25;
          pfVar15[-8] = 3.832267;
          pfVar15[-7] = 1.4013e-45;
          uVar25 = FUN_140753b3a();
          uVar16 = (ulonglong)((int)(pfVar15 + -6) + 8);
          *puVar24 = uVar25;
          uVar25 = *(uint *)(uVar23 + 0x18);
          *(undefined8 *)(uVar16 - 8) = *(undefined8 *)(puVar24 + 3);
          *(undefined8 *)(uVar16 - 0x10) = *(undefined8 *)((ulonglong)uVar25 + 4);
          *(undefined8 *)(uVar16 - 0x18) = 0x1407543f0;
          uVar25 = FUN_140752553();
          puVar17 = (undefined1 *)(ulonglong)((int)(uVar16 - 0x10) + 8);
          puVar24[1] = uVar25;
          *(undefined4 *)(uVar23 + 8) = 1;
          uVar10 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
          goto LAB_1407542b8;
        }
LAB_14075434d:
        fVar30 = *(float *)(uVar23 + 4);
        iVar6 = *(int *)(uVar23 + 0xc);
        pfVar15[10] = (float)puVar24[1];
        *(double *)(puVar24 + 8) = (double)fVar30 - (double)fVar28 * (double)iVar6;
        if (*(char *)(uVar26 + 0x2748) == '\x01') {
          uVar4 = puVar24[3];
          iVar6 = *(int *)(uVar23 + 0x10);
          if (iVar6 == *(int *)(uVar23 + 0x14)) {
            pfVar15[6] = (float)uVar4;
            if (iVar6 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar6 / 2 + iVar6;
            }
            iVar27 = iVar6 + 1;
            if (iVar6 + 1 < iVar11) {
              iVar27 = iVar11;
            }
            *(ulonglong *)(pfVar15 + -2) = (ulonglong)(uint)(iVar27 * 0xc);
            pfVar15[-4] = 3.8323886;
            pfVar15[-3] = 1.4013e-45;
            uVar5 = FUN_1407520ca();
            pfVar15 = (float *)(ulonglong)((int)(pfVar15 + -2) + 4);
            uVar14 = (ulonglong)uVar5;
            uVar4 = *(uint *)(uVar23 + 0x18);
            if (uVar4 != 0) {
              *(ulonglong *)((longlong)pfVar15 + -8) =
                   (ulonglong)(uint)(*(int *)(uVar23 + 0x10) * 0xc);
              *(ulonglong *)((longlong)pfVar15 + -0x10) = (ulonglong)uVar4;
              *(ulonglong *)((longlong)pfVar15 + -0x18) = uVar14;
              *(undefined8 *)((longlong)pfVar15 + -0x20) = 0x1407545f8;
              FUN_1408b31a0();
              *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)pfVar15 + -0x18) + 0xc) - 8)
                   = *(undefined8 *)(uVar23 + 0x18);
                    /* WARNING: Subroutine does not return */
              *(undefined **)
               ((ulonglong)((int)(undefined1 *)((longlong)pfVar15 + -0x18) + 0xc) - 0x10) =
                   &UNK_140754603;
              FUN_14075219b();
            }
            *(uint *)(uVar23 + 0x18) = uVar5;
            *(int *)(uVar23 + 0x14) = iVar27;
            iVar6 = *(int *)(uVar23 + 0x10);
            uVar4 = *(uint *)((longlong)pfVar15 + 0x18);
          }
          else {
            uVar14 = (ulonglong)*(uint *)(uVar23 + 0x18);
          }
          uVar9 = (ulonglong)(uint)(iVar6 * 3);
          *(undefined4 *)(uVar14 + uVar9 * 4) = 0;
          *(uint *)(uVar14 + 4 + uVar9 * 4) = uVar4;
          *(undefined2 *)(uVar14 + 8 + uVar9 * 4) = 0;
          *(undefined1 *)(uVar14 + 10 + uVar9 * 4) = 0;
        }
        else {
          uVar7 = 0;
          uVar12 = 0;
          if (*(char *)(uVar26 + 0x20d9) == '\x01') {
            if (*(uint *)(uVar26 + 0x2048) == 0) {
              uVar7 = 0;
              uVar12 = 0;
            }
            else {
              uVar7 = 0;
              if (*(int *)((ulonglong)*(uint *)(uVar26 + 0x2048) + 0x3b8) == *(int *)(uVar9 + 0x3b8)
                 ) {
                iVar6 = *(int *)(uVar26 + 0x20f0);
                pfVar15[2] = (float)CONCAT31((int3)((uint)iVar6 >> 8),iVar6 == 3);
                puVar8 = (undefined8 *)((ulonglong)(pfVar15 + 0xc) & 0xffffffff);
                *puVar8 = CONCAT44((int)*(float *)(uVar26 + 0x2100),(int)*(float *)(uVar26 + 0x20f8)
                                  );
                *(undefined1 *)(puVar8 + 1) = 1;
                *pfVar15 = (float)(uint)(byte)-(iVar6 == 2);
                *(char *)((longlong)puVar8 + 9) = -(iVar6 == 2);
                *(bool *)((longlong)puVar8 + 10) = iVar6 == 3;
                *(undefined8 **)(pfVar15 + -2) = puVar8;
                pfVar15[-4] = 3.8323326;
                pfVar15[-3] = 1.4013e-45;
                FUN_140754018(uVar25 + 0x10);
                puVar18 = (uint *)(pfVar15 + -2);
                if (*(float *)(uVar26 + 0x2104) < *(float *)(uVar26 + 0x210c) ||
                    *(float *)(uVar26 + 0x2104) == *(float *)(uVar26 + 0x210c)) {
                  puVar18 = (uint *)(pfVar15 + -2);
                  if (*(float *)(uVar26 + 0x2108) <= *(float *)(uVar26 + 0x2110)) {
                    *(ulonglong *)(pfVar15 + 10) =
                         CONCAT44((int)*(float *)(uVar26 + 0x2110),(int)*(float *)(uVar26 + 0x2108))
                    ;
                    *(undefined1 *)(pfVar15 + 0xc) = 1;
                    *(char *)((longlong)pfVar15 + 0x31) = SUB41(pfVar15[-2],0);
                    *(char *)((longlong)pfVar15 + 0x32) = SUB41(*pfVar15,0);
                    puVar18 = (uint *)(pfVar15 + -4);
                    *(ulonglong *)(pfVar15 + -4) = (ulonglong)(pfVar15 + 10) & 0xffffffff;
                    pfVar15[-6] = 3.8323524;
                    pfVar15[-5] = 1.4013e-45;
                    FUN_140754018(uVar25 + 0x10);
                  }
                }
                pfVar15 = (float *)puVar18;
                if ((*(byte *)(uVar26 + 0x20dd) & 4) == 0) {
                  uVar7 = puVar18[2];
                  uVar12 = *puVar18;
                }
                else {
                  uVar7 = puVar18[2];
                  uVar12 = *puVar18;
                  if (*(int *)(uVar26 + 0x2118) == -1) {
                    uVar4 = puVar24[3];
                    puVar18[0xc] = uVar4 - 1;
                    puVar18[0xd] = uVar4;
                    *(undefined2 *)(puVar18 + 0xe) = 0;
                    *(undefined1 *)((longlong)puVar18 + 0x3a) = 0;
                    pfVar15 = (float *)(puVar18 + -2);
                    *(ulonglong *)(puVar18 + -2) = (ulonglong)(puVar18 + 0xc) & 0xffffffff;
                    *(undefined8 *)(puVar18 + -4) = 0x14075466f;
                    FUN_140754018(uVar25 + 0x10);
                    uVar12 = puVar18[-2];
                    uVar7 = *puVar18;
                  }
                  uVar26 = (ulonglong)*(uint *)((longlong)pfVar15 + 0x18);
                }
              }
            }
          }
          pfVar19 = pfVar15;
          if ((*(int *)(uVar26 + 0x2044) != 0) &&
             (*(int *)(uVar9 + 0x3c4) == *(int *)(uVar26 + 0x2044))) {
            fVar28 = *(float *)(uVar9 + 0x158);
            fVar30 = *(float *)(uVar9 + 0x3d8);
            fVar31 = *(float *)(uVar9 + 0x3d0);
            pfVar15[2] = (float)uVar7;
            puVar8 = (undefined8 *)((ulonglong)(pfVar15 + 0xc) & 0xffffffff);
            *puVar8 = CONCAT44((int)(fVar30 + fVar28),(int)(fVar31 + fVar28));
            *(undefined2 *)(puVar8 + 1) = 1;
            *(undefined1 *)((longlong)puVar8 + 10) = 0;
            pfVar19 = pfVar15 + -2;
            *(undefined8 **)(pfVar15 + -2) = puVar8;
            pfVar15[-1] = (float)uVar12;
            *(undefined8 *)(pfVar15 + -4) = 0x1407546d5;
            FUN_140754018(uVar25 + 0x10);
            uVar12 = pfVar15[-2];
            uVar7 = *pfVar15;
          }
          fVar28 = *(float *)(uVar9 + 0x290);
          fVar29 = 0.0;
          fVar30 = *(float *)(uVar9 + 0x298);
          fVar31 = 0.0;
          pfVar15 = pfVar19;
          if ((*(char *)(uVar26 + 0x2398) == '\x01') && (*(int *)(uVar26 + 0x23bc) == (int)uVar9)) {
            fVar1 = *(float *)(uVar26 + 0xd20);
            fVar28 = fVar28 - fVar1;
            fVar30 = fVar30 + fVar1;
            if (*(char *)(uVar26 + 0x23c0) == '\x01') {
              *(undefined1 (*) [16])(pfVar19 + 6) = ZEXT416((uint)fVar28);
              fVar28 = *(float *)(uVar26 + 0x23c8);
              *(undefined1 (*) [16])(pfVar19 + 2) = ZEXT416((uint)fVar30);
              puVar8 = (undefined8 *)((ulonglong)(pfVar19 + 0xc) & 0xffffffff);
              *puVar8 = CONCAT44((int)(*(float *)(uVar26 + 0x23d0) + fVar1),(int)(fVar28 - fVar1));
              *(undefined2 *)(puVar8 + 1) = 1;
              *(undefined1 *)((longlong)puVar8 + 10) = 0;
              pfVar15 = pfVar19 + -2;
              *(undefined8 **)(pfVar19 + -2) = puVar8;
              pfVar19[-4] = 3.832481;
              pfVar19[-3] = 1.4013e-45;
              FUN_140754018(uVar25 + 0x10);
              fVar30 = *pfVar19;
              fVar31 = pfVar19[1];
              fVar28 = pfVar19[4];
              fVar29 = pfVar19[5];
            }
          }
          iVar11 = (int)fVar28;
          iVar27 = (int)fVar30;
          iVar6 = *(int *)(uVar23 + 0x10);
          if (iVar6 == *(int *)(uVar23 + 0x14)) {
            pfVar15[2] = (float)uVar7;
            *pfVar15 = (float)uVar12;
            pfVar15[6] = (float)iVar11;
            pfVar15[7] = (float)iVar27;
            pfVar15[8] = (float)(int)fVar29;
            pfVar15[9] = (float)(int)fVar31;
            if (iVar6 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar6 / 2 + iVar6;
            }
            iVar27 = iVar6 + 1;
            if (iVar6 + 1 < iVar11) {
              iVar27 = iVar11;
            }
            *(ulonglong *)(pfVar15 + -2) = (ulonglong)(uint)(iVar27 * 0xc);
            *(undefined8 *)(pfVar15 + -4) = 0x1407547ba;
            uVar5 = FUN_1407520ca();
            pfVar15 = (float *)(ulonglong)((int)(pfVar15 + -2) + 4);
            uVar14 = (ulonglong)uVar5;
            uVar4 = *(uint *)(uVar23 + 0x18);
            if (uVar4 != 0) {
              *(ulonglong *)(pfVar15 + -2) = (ulonglong)(uint)(*(int *)(uVar23 + 0x10) * 0xc);
              *(ulonglong *)(pfVar15 + -4) = (ulonglong)uVar4;
              *(ulonglong *)(pfVar15 + -6) = uVar14;
              *(undefined8 *)(pfVar15 + -8) = 0x1407547d7;
              FUN_1408b31a0();
              *(undefined8 *)((ulonglong)((int)(pfVar15 + -6) + 0xc) - 8) =
                   *(undefined8 *)(uVar23 + 0x18);
                    /* WARNING: Subroutine does not return */
              *(undefined **)((ulonglong)((int)(pfVar15 + -6) + 0xc) - 0x10) = &UNK_1407547e2;
              FUN_14075219b();
            }
            *(uint *)(uVar23 + 0x18) = uVar5;
            *(int *)(uVar23 + 0x14) = iVar27;
            iVar6 = *(int *)(uVar23 + 0x10);
            uVar7 = pfVar15[2];
            uVar12 = *pfVar15;
            iVar11 = (int)pfVar15[6];
            iVar27 = (int)pfVar15[7];
          }
          else {
            uVar14 = (ulonglong)*(uint *)(uVar23 + 0x18);
          }
          uVar9 = (ulonglong)(uint)(iVar6 * 3);
          *(ulonglong *)(uVar14 + uVar9 * 4) = CONCAT44(iVar27,iVar11);
          *(undefined1 *)(uVar14 + 8 + uVar9 * 4) = 1;
          *(char *)(uVar14 + 9 + uVar9 * 4) = (char)uVar12;
          *(char *)(uVar14 + 10 + uVar9 * 4) = (char)uVar7;
        }
        iVar6 = *(int *)(uVar23 + 0x10);
        *(int *)(uVar23 + 0x10) = iVar6;
        *pfVar15 = (float)(uVar25 + 0x10);
        if (iVar6 != 0) {
          uVar14 = (ulonglong)*(uint *)(uVar23 + 0x18);
          uVar4 = iVar6 * 0xc;
          uVar9 = 0;
          pfVar15[0xb] = (float)uVar25;
          pfVar15[2] = (float)uVar4;
          do {
            if (*(char *)(uVar14 + 8 + uVar9) == '\x01') {
              iVar6 = *(int *)(uVar14 + uVar9);
              fVar28 = *(float *)((ulonglong)*(uint *)((longlong)pfVar15 + 4) + 0x148);
              fVar30 = *(float *)(uVar23 + 4);
              fVar31 = (float)puVar24[4];
              *(int *)((longlong)pfVar15 + 0x18) =
                   (int)((((double)*(int *)(uVar14 + 4 + uVar9) - (double)fVar28) - (double)fVar30)
                         / (double)fVar31 + _DAT_150a0d307);
              cVar3 = *(char *)(uVar14 + 9 + uVar9);
              uVar4 = *(uint *)((longlong)pfVar15 + 0x28);
              *(ulonglong *)((longlong)pfVar15 + -8) = (ulonglong)puVar24[3];
              *(ulonglong *)((longlong)pfVar15 + -0x10) = (ulonglong)uVar4;
              *(ulonglong *)((longlong)pfVar15 + -0x18) =
                   (ulonglong)
                   ((int)cVar3 + uVar4 +
                   (int)((((double)iVar6 - (double)fVar28) - (double)fVar30) / (double)fVar31));
              *(undefined8 *)((longlong)pfVar15 + -0x20) = 0x1407548b8;
              uVar10 = FUN_14077dc6a();
              uVar20 = (ulonglong)((int)(undefined1 *)((longlong)pfVar15 + -0x18) + 0xc);
              *(int *)(uVar14 + uVar9) = (int)uVar10;
              cVar3 = *(char *)(uVar14 + 10 + uVar9);
              iVar6 = *(int *)(uVar20 + 0x18);
              uVar23 = (ulonglong)*(uint *)(uVar20 + 0x2c);
              *(undefined8 *)(uVar20 - 8) = *(undefined8 *)(puVar24 + 3);
              *(undefined8 *)(uVar20 - 0x10) = uVar10;
              *(ulonglong *)(uVar20 - 0x18) = (ulonglong)((int)cVar3 + uVar4 + iVar6);
              *(undefined8 *)(uVar20 - 0x20) = 0x1407548d8;
              uVar7 = FUN_14077dc6a();
              pfVar15 = (float *)(ulonglong)((int)(uVar20 - 0x18) + 0xc);
              *(undefined4 *)(uVar14 + 4 + uVar9) = uVar7;
              uVar4 = *(uint *)((longlong)pfVar15 + 8);
              *(undefined1 *)(uVar14 + 8 + uVar9) = 0;
            }
            uVar25 = (int)uVar9 + 0xc;
            uVar9 = (ulonglong)uVar25;
          } while (uVar4 != uVar25);
        }
        uVar7 = *(undefined4 *)(uVar23 + 8);
        *(undefined8 *)(pfVar15 + -2) = 0x1407548fe;
        FUN_14077dc81(*pfVar15,uVar7);
        uVar4 = (uint)pfVar15[10];
      }
      else {
        uVar26 = (ulonglong)(uint)pfVar15[6];
        if (*(int *)(uVar23 + 8) == 0) goto LAB_14075432f;
        if ((float)puVar24[4] <= 0.0) {
          dVar2 = *(double *)(puVar24 + 6);
          uVar9 = (ulonglong)(uint)pfVar15[1];
          if ((_DAT_150a0ce83 <= (float)((uint)(float)dVar2 & _DAT_1509df824)) ||
             (_DAT_150a0cea6 <= (float)(_DAT_1509df844 & (uint)*(float *)(uVar9 + 0x148)))) {
            fVar28 = *(float *)(uVar9 + 0x178) + *(float *)(uVar26 + 0xd20);
            puVar24[4] = (uint)fVar28;
            *(float *)(uVar9 + 0x148) = (float)(dVar2 + (double)fVar28);
            fVar28 = (float)puVar24[4];
          }
          else {
            fVar28 = (float)((double)*(float *)(uVar9 + 0x148) - dVar2) /
                     (float)(int)(puVar24[1] - *puVar24);
            puVar24[4] = (uint)fVar28;
          }
          if (((fVar28 == 0.0) && (!NAN(fVar28))) && (puVar24[3] == 0x7fffffff)) goto LAB_1407542b6;
          if (fVar28 <= 0.0) {
            pfVar15[-2] = 3.5627874e-29;
            pfVar15[-1] = 0.0;
            pfVar15[-4] = 3.8323793;
            pfVar15[-3] = 1.4013e-45;
            FUN_140754dc5();
            pfVar15 = (float *)(ulonglong)((int)(pfVar15 + -2) + 4);
            goto LAB_1407542b6;
          }
          goto LAB_14075434d;
        }
        uVar4 = puVar24[1];
      }
      iVar6 = *(int *)(uVar23 + 8);
      puVar22 = (undefined1 *)pfVar15;
      do {
        if (*(int *)(uVar23 + 0x10) <= iVar6) {
          pfVar15 = (float *)puVar22;
          if (puVar24[3] != 0x7fffffff) {
            pfVar15 = (float *)(puVar22 + -8);
            *(ulonglong *)(puVar22 + -8) = (ulonglong)puVar24[3];
            *(undefined8 *)(puVar22 + -0x10) = 0x140754974;
            FUN_140753f3e(puVar24);
          }
          goto LAB_1407542b6;
        }
        uVar25 = *(uint *)(uVar23 + 0x18);
        *(ulonglong *)(puVar22 + -8) = (ulonglong)uVar4;
        *(undefined8 *)(puVar22 + -0x10) =
             *(undefined8 *)((ulonglong)uVar25 + (ulonglong)(uint)(iVar6 * 3) * 4);
        *(undefined8 *)(puVar22 + -0x18) = 0x140754919;
        uVar25 = FUN_140753b3a();
        uVar21 = (ulonglong)((int)(puVar22 + -0x10) + 8);
        *puVar24 = uVar25;
        iVar6 = *(int *)(uVar23 + 8);
        uVar25 = *(uint *)(uVar23 + 0x18);
        *(undefined8 *)(uVar21 - 8) = *(undefined8 *)(puVar24 + 3);
        *(undefined8 *)(uVar21 - 0x10) =
             *(undefined8 *)((ulonglong)uVar25 + 4 + (ulonglong)(uint)(iVar6 * 3) * 4);
        *(undefined8 *)(uVar21 - 0x18) = 0x140754933;
        uVar25 = FUN_140752553();
        puVar22 = (undefined1 *)(ulonglong)((int)(uVar21 - 0x10) + 8);
        puVar24[1] = uVar25;
        iVar6 = *(int *)(uVar23 + 8);
        *(int *)(uVar23 + 8) = iVar6;
        uVar25 = *puVar24;
      } while ((int)puVar24[1] <= (int)uVar25);
      uVar10 = CONCAT71((int7)(uVar14 >> 8),1);
      puVar17 = puVar22;
      if ((int)uVar4 < (int)uVar25) {
        puVar17 = puVar22 + -8;
        *(ulonglong *)(puVar22 + -8) = (ulonglong)uVar25;
        *(undefined8 *)(puVar22 + -0x10) = 0x140754959;
        FUN_140753f3e(puVar24);
      }
      goto LAB_1407542b8;
    }
  }
LAB_1407542b6:
  uVar10 = 0;
  puVar17 = (undefined1 *)pfVar15;
LAB_1407542b8:
  if (_DAT_150adcfc4 == (*(uint *)(puVar17 + 0x3c) ^ (uint)puVar17)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar17 + -8) = FUN_140754984;
  FUN_1408802b0(*(uint *)(puVar17 + 0x3c) ^ (uint)puVar17);
}

