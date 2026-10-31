/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140772a6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140772a6c(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  uint *puVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  uint *puVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  uVar8 = _DAT_150b101d2;
  pfVar17 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x44);
  puVar36 = (undefined8 *)(param_1 & 0xffffffff);
  uVar34 = (ulonglong)_DAT_150b101d2;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(uVar34 + 4);
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xfb;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772ab0;
    FUN_1407820ba(puVar36);
  }
  if ((*(int *)(puVar36 + 6) != 0) && ((*(byte *)((longlong)puVar36 + 0x11) & 0x10) != 0)) {
    *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772ac3;
    FUN_14078209e(puVar36);
  }
  uVar35 = *(uint *)(puVar36 + 2);
  *(uint *)((longlong)pfVar17 + 8) = uVar35;
  bVar39 = (uVar35 & 0x400) != 0;
  if (bVar39 || *(int *)(puVar36 + 3) != 0) {
LAB_140772b0f:
    bVar5 = *(byte *)((longlong)puVar36 + 0xac);
    if ((((bVar5 & 1) == 0) ||
        ((bVar39 || *(int *)(puVar36 + 3) != 0) || *(int *)(puVar36 + 0xf) != 0)) ||
       (*(int *)((longlong)puVar36 + 0x1c) != 0)) {
LAB_140772b2f:
      iVar12 = *(int *)((longlong)puVar36 + 0x24);
      uVar35 = *(uint *)((longlong)puVar36 + 0x2c);
      *(byte *)((longlong)puVar36 + 0xac) =
           bVar5 & 0xe7 | ((*(uint *)((longlong)pfVar17 + 8) >> 0xe & 1) == 0 && 0 < iVar12) << 4;
      if (iVar12 != 0) {
        uVar37 = 0;
        do {
          uVar20 = (ulonglong)*(uint *)(uVar35 + uVar37);
          *(byte *)((longlong)puVar36 + 0xac) =
               *(byte *)((longlong)puVar36 + 0xac) | *(char *)(uVar20 + 0x104) << 3;
          uVar13 = (ulonglong)
                   CONCAT11(*(undefined1 *)(uVar20 + 0x409),1 < *(int *)((longlong)puVar36 + 0x24))
                   & 0xfffffffffffffeff;
          *(byte *)(uVar20 + 0x409) = (byte)(uVar13 >> 8) | (byte)uVar13;
          uVar18 = (int)uVar37 + 4;
          uVar37 = (ulonglong)uVar18;
        } while (iVar12 << 2 != uVar18);
      }
      if ((*(short *)((longlong)pfVar17 + 8) < 0) || (*(char *)(uVar34 + 0xde8) == '\0')) {
        *(byte *)((longlong)puVar36 + 0xac) = *(byte *)((longlong)puVar36 + 0xac) & 0xf7;
      }
      uVar35 = (uint)param_1;
      if ((*(byte *)((longlong)puVar36 + 0x11) & 4) == 0) {
        if (*(uint *)(puVar36 + 3) == 0) {
          uVar18 = 0;
          uVar37 = 0;
          if ((*(byte *)((longlong)puVar36 + 0xac) & 1) != 0) {
            if (*(int *)((longlong)puVar36 + 0x24) < 1) {
              puVar38 = (uint *)(ulonglong)(uVar35 + 0xa8);
              iVar11 = *(int *)(puVar36 + 0x15) << 0x1d;
              bVar39 = false;
              iVar12 = 0;
LAB_140772dae:
              *(int *)((longlong)pfVar17 + 4) = iVar12;
              if (iVar11 == 0x20000000) {
                *(undefined8 *)((ulonglong)((longlong)pfVar17 + 0x2c) & 0xffffffff) = 0;
                *(undefined8 **)((longlong)pfVar17 + -8) =
                     (undefined8 *)((ulonglong)((longlong)pfVar17 + 0x2c) & 0xffffffff);
                *(undefined8 *)((longlong)pfVar17 + -0x10) = 0;
                *(ulonglong *)((longlong)pfVar17 + -0x18) = (ulonglong)(uVar35 + 0x34);
                *(undefined8 *)((longlong)pfVar17 + -0x20) = 0x140772dd0;
                FUN_140769c26();
                pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x18) + 0xc)
                ;
              }
            }
            else {
              iVar12 = *(int *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c);
              puVar38 = (uint *)(ulonglong)(uVar35 + 0xa8);
              iVar11 = *(int *)(puVar36 + 0x15) << 0x1d;
              bVar39 = iVar12 != 0;
              if (iVar11 != 0x40000000 || !bVar39) goto LAB_140772dae;
              *(undefined8 *)((ulonglong)((longlong)pfVar17 + 0x2c) & 0xffffffff) = 0;
              *(int *)((longlong)pfVar17 + 4) = iVar12;
              *(undefined8 **)((longlong)pfVar17 + -8) =
                   (undefined8 *)((ulonglong)((longlong)pfVar17 + 0x2c) & 0xffffffff);
              *(undefined8 *)((longlong)pfVar17 + -0x10) = 0;
              *(ulonglong *)((longlong)pfVar17 + -0x18) = (ulonglong)(iVar12 + 0x50);
              *(undefined8 *)((longlong)pfVar17 + -0x20) = 0x140772d58;
              FUN_140769c26();
              pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x18) + 0xc);
              bVar39 = true;
            }
            iVar12 = (int)(*puVar38 << 0x1a) >> 0x1d;
            if ((iVar12 == 2) && (bVar39)) {
              uVar18 = *(int *)((longlong)pfVar17 + 4) + 0x60;
LAB_140772df5:
              *(undefined8 *)((longlong)pfVar17 + -8) = 0;
              *(ulonglong *)((longlong)pfVar17 + -0x10) = (ulonglong)uVar18;
              *(undefined8 *)((longlong)pfVar17 + -0x18) = 0x140772dfd;
              FUN_14075fbc6();
              pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x10) + 8);
            }
            else if (iVar12 == 1) {
              uVar18 = uVar35 + 0x3c;
              goto LAB_140772df5;
            }
            uVar18 = *puVar38;
            if ((bool)((uVar18 & 0x38) == 0x10 & bVar39)) {
              bVar5 = *(byte *)((ulonglong)*(uint *)((longlong)pfVar17 + 4) + 0xfc);
              *(undefined8 *)((longlong)pfVar17 + -8) = 0;
              *(ulonglong *)((longlong)pfVar17 + -0x10) = (ulonglong)bVar5;
              *(undefined8 *)((longlong)pfVar17 + -0x18) = 0x140772e27;
              FUN_140769d0a();
              pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x10) + 8);
              uVar18 = *puVar38;
            }
            *pfVar17 = (float)(int)puVar38;
            if ((bool)((uVar18 & 0x1c0) == 0x80 & bVar39)) {
              uVar18 = *(uint *)((ulonglong)(uint)pfVar17[1] + 0x40);
LAB_140772e5d:
              *(ulonglong *)(pfVar17 + -2) = (ulonglong)uVar18;
              *(undefined8 *)(pfVar17 + -4) = 0x140772e63;
              FUN_140769d4d();
              pfVar17 = (float *)(ulonglong)((int)(pfVar17 + -2) + 4);
            }
            else if (((uVar18 & 0x1c0) == 0x80) &&
                    (uVar18 = *(uint *)((longlong)puVar36 + 0xa4), uVar18 != 0)) goto LAB_140772e5d;
            *(ulonglong *)((longlong)pfVar17 + -8) = (ulonglong)(uVar35 + 0x54);
            *(undefined8 *)((longlong)pfVar17 + -0x10) = 0x140772e6f;
            FUN_140769d93();
            uVar23 = (ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -8) + 4);
            *(undefined8 *)(uVar23 - 8) = 0x140772e7f;
            FUN_14078172e(puVar36,uVar23 + 0x2c & 0xffffffff);
            *(undefined8 *)(uVar23 - 8) = 0;
            *(undefined8 *)(uVar23 - 0x10) = 0x140772e87;
            FUN_140769d32();
            uVar24 = (ulonglong)((int)(uVar23 - 8) + 4);
            *(undefined8 *)(uVar24 + 0x1c & 0xffffffff) = 0;
            *(undefined8 **)(uVar24 - 8) = (undefined8 *)(uVar24 + 0x1c & 0xffffffff);
            *(undefined8 *)(uVar24 - 0x10) = 2;
            *(undefined8 *)(uVar24 - 0x18) = 0x140772e9d;
            FUN_14075528c();
            uVar25 = (ulonglong)((int)(uVar24 - 0x10) + 8);
            *(undefined8 *)(uVar25 - 8) = 0x821139;
            *(undefined8 *)(uVar25 - 0x10) = 0;
            *(ulonglong *)(uVar25 - 0x18) = uVar23 + 0x2c & 0xffffffff;
            *(undefined8 *)(uVar25 - 0x20) = 0x140772eac;
            FUN_14075fbfb();
            uVar26 = (ulonglong)((int)(uVar25 - 0x18) + 0xc);
            *(undefined8 *)(uVar26 - 8) = 1;
            *(undefined8 *)(uVar26 - 0x10) = 0x140772eb6;
            FUN_140755394();
            pfVar17 = (float *)(ulonglong)((int)(uVar26 - 8) + 4);
            uVar37 = (ulonglong)*(uint *)(uVar34 + 0x14cc);
            *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772ec8;
            FUN_140774566(param_1 & 0xffffffff,uVar37);
            uVar19 = *(undefined4 *)(uVar37 + 0x54);
            *(undefined4 *)(uVar37 + 0x148) = uVar19;
            *(undefined4 *)(uVar37 + 0x144) = *(undefined4 *)(uVar37 + 0x50);
            *(undefined4 *)((longlong)puVar36 + 0x34) = *(undefined4 *)(uVar37 + 0x50);
            *(undefined4 *)(puVar36 + 7) = uVar19;
            *(undefined8 *)((longlong)puVar36 + 0x3c) = *(undefined8 *)(uVar37 + 0x58);
            if (*(char *)((ulonglong)*(uint *)(puVar36 + 0xf) + 0x100) == '\x01') {
              *(ulonglong *)((longlong)pfVar17 + -8) = (ulonglong)*(uint *)(puVar36 + 0xf);
              *(undefined8 *)((longlong)pfVar17 + -0x10) = 0x140772efc;
              FUN_14076c9aa();
              pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -8) + 4);
            }
            *(uint *)(ulonglong)(uint)*pfVar17 = *(uint *)(ulonglong)(uint)*pfVar17 & 0xfffffe00;
            uVar18 = 1;
          }
        }
        else {
          uVar18 = *(uint *)((ulonglong)*(uint *)(puVar36 + 3) + 0x78);
          uVar37 = (ulonglong)uVar18;
          *(uint *)(puVar36 + 0xf) = uVar18;
          *(uint *)(puVar36 + 0x15) = *(uint *)(puVar36 + 0x15) & 0xfffffe00;
          uVar18 = 0;
        }
        if (((*(byte *)((longlong)puVar36 + 0xad) & 1) != 0) && (*(int *)(puVar36 + 0xf) != 0)) {
          *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772f21;
          FUN_1407821f4(param_1 & 0xffffffff);
        }
      }
      else {
        uVar37 = (ulonglong)*(uint *)(puVar36 + 0xf);
        uVar18 = 0;
      }
      *(undefined4 *)((longlong)puVar36 + 0xa4) = 0;
      iVar12 = *(int *)(puVar36 + 3);
      pfVar17[1] = (float)uVar18;
      iVar11 = (int)uVar37;
      if (iVar12 == 0) {
        uVar18 = *(uint *)(uVar34 + 0x2048);
        while( true ) {
          if ((uVar18 == 0) || (*(uint *)((ulonglong)uVar18 + 0x3a8) == 0)) goto LAB_140772f84;
          uVar18 = *(uint *)((ulonglong)*(uint *)((ulonglong)uVar18 + 0x3a8) + 0x430);
          uVar7 = uVar18;
          if (uVar18 == 0) goto LAB_140772f84;
          do {
            uVar6 = uVar7;
            uVar7 = *(uint *)((ulonglong)uVar6 + 0x18);
          } while (uVar7 != 0);
          if (uVar6 == uVar35) break;
          uVar18 = *(uint *)((ulonglong)uVar6 + 0x78);
        }
        *(undefined4 *)(puVar36 + 0x13) = *(undefined4 *)(ulonglong)uVar18;
LAB_140772f84:
        if (iVar11 == 0) {
          bVar39 = false;
          goto LAB_140773284;
        }
        uVar18 = *(uint *)(puVar36 + 0x10);
        *pfVar17 = (float)uVar18;
        if ((uVar18 != 0 & SUB41(pfVar17[2],0) >> 3) == 1) {
          bVar39 = false;
          if ((*(int *)((ulonglong)uVar18 + 0x1c) != 0) ||
             (bVar39 = false, *(int *)((ulonglong)uVar18 + 0x24) != 0)) goto LAB_140773091;
          pfVar17[-2] = 3.862291;
          pfVar17[-1] = 1.4013e-45;
          uVar13 = FUN_14077018b();
          if (((int)uVar13 != 0) && (*(int *)(uVar13 + 0x10) != -1)) {
            *(ulonglong *)(pfVar17 + -2) = (ulonglong)((int)uVar13 + 0x14);
            pfVar17[-4] = 3.5449046e-29;
            pfVar17[-3] = 0.0;
            pfVar17[-6] = 3.8622978;
            pfVar17[-5] = 1.4013e-45;
            iVar12 = FUN_1408c84e0();
            pfVar17 = (float *)(ulonglong)((int)(pfVar17 + -4) + 8);
            if (iVar12 == 0) {
              uVar19 = *(undefined4 *)(ulonglong)*(uint *)(uVar13 & 0xffffffff);
              *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772ff5;
              cVar10 = FUN_140774c44(uVar37,uVar19);
              bVar39 = true;
              if (cVar10 != '\0') goto LAB_140773091;
            }
          }
          uVar20 = (ulonglong)(uint)*pfVar17;
          uVar13 = uVar20;
          do {
            uVar16 = uVar13;
            uVar13 = (ulonglong)*(uint *)(uVar16 + 0x18);
          } while (*(uint *)(uVar16 + 0x18) != 0);
          fVar43 = *(float *)(uVar16 + 0x34);
          fVar1 = *(float *)(uVar16 + 0x38);
          fVar2 = *(float *)(uVar16 + 0x40);
          fVar3 = *(float *)(uVar16 + 0x3c);
          fVar41 = *(float *)(uVar20 + 0x34);
          uVar14 = *(undefined8 *)(uVar20 + 0x34);
          fVar40 = *(float *)(uVar20 + 0x38);
          pfVar17[0xc] = *(float *)(uVar20 + 0x38);
          pfVar17[0xb] = fVar41;
          fVar42 = (float)*(undefined8 *)(uVar20 + 0x3c) + (float)uVar14;
          fVar44 = (float)((ulonglong)*(undefined8 *)(uVar20 + 0x3c) >> 0x20) +
                   (float)((ulonglong)uVar14 >> 0x20);
          *(ulonglong *)(pfVar17 + 0xd) = CONCAT44(fVar44,fVar42);
          if (fVar43 < fVar41) {
            fVar41 = fVar41 + *(float *)(uVar34 + 0x14c4);
            pfVar17[0xb] = fVar41;
          }
          if (fVar42 < fVar3 + fVar43) {
            fVar42 = fVar42 - *(float *)(uVar34 + 0x14c4);
            pfVar17[0xd] = fVar42;
          }
          if (fVar1 < fVar40) {
            fVar40 = fVar40 + *(float *)(uVar34 + 0x14c4);
            pfVar17[0xc] = fVar40;
          }
          fVar43 = fVar44;
          if (fVar44 < fVar2 + fVar1) {
            fVar43 = fVar44 - *(float *)(uVar34 + 0x14c4);
            pfVar17[0xe] = fVar43;
          }
          if ((fVar41 <= fVar42) && (fVar40 <= fVar43)) {
            pfVar17[3] = fVar42;
            pfVar17[4] = fVar43;
            pfVar17[5] = fVar44;
            pfVar17[6] = fVar44;
            puVar22 = (undefined8 *)((ulonglong)(pfVar17 + 7) & 0xffffffff);
            *puVar22 = CONCAT44(fVar43 - fVar40,fVar42 - fVar41);
            *(undefined8 **)(pfVar17 + -2) = puVar22;
            *(ulonglong *)(pfVar17 + -4) = (ulonglong)(pfVar17 + 0xb) & 0xffffffff;
            *(ulonglong *)(pfVar17 + -6) = uVar37;
            pfVar17[-8] = 3.862529;
            pfVar17[-7] = 1.4013e-45;
            FUN_140769ba7();
            fVar43 = *pfVar17;
            pfVar21 = pfVar17 + 1;
            pfVar17 = (float *)(ulonglong)((int)(pfVar17 + -6) + 0xc);
            uVar18 = *(uint *)(uVar37 + 0x3a0);
            if (uVar18 != 0) {
              *(ulonglong *)((longlong)pfVar17 + 0x1c) =
                   CONCAT44(*pfVar21 -
                            (float)((ulonglong)*(undefined8 *)((longlong)pfVar17 + 0x2c) >> 0x20),
                            fVar43 - (float)*(undefined8 *)((longlong)pfVar17 + 0x2c));
              *(undefined8 **)((longlong)pfVar17 + -8) = puVar22;
              *(ulonglong *)((longlong)pfVar17 + -0x10) =
                   (ulonglong)((longlong)pfVar17 + 0x28) & 0xffffffff;
              *(ulonglong *)((longlong)pfVar17 + -0x18) = (ulonglong)uVar18;
              *(undefined8 *)((longlong)pfVar17 + -0x20) = 0x1407733d9;
              FUN_140769ba7();
              pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x18) + 0xc);
            }
          }
          bVar9 = true;
          bVar39 = true;
          if (*(int *)(puVar36 + 3) == 0) goto LAB_140773091;
        }
        else {
          bVar39 = false;
LAB_140773091:
          bVar9 = bVar39;
          uVar19 = *(undefined4 *)(uVar37 + 0x58);
          uVar4 = *(undefined4 *)(uVar37 + 0x50);
          *(undefined4 *)(ulonglong)((int)pfVar17 - 4) = *(undefined4 *)(uVar37 + 0x5c);
          *(undefined8 *)((undefined4 *)(ulonglong)((int)pfVar17 - 4) + -2) = 0x1407730b6;
          FUN_140781c1e(uVar4,0,uVar19);
          *(ulonglong *)((longlong)pfVar17 + -8) = (ulonglong)(uVar8 + 0xe50);
          *(undefined8 *)((longlong)pfVar17 + -0x10) = 0x1c;
          *(undefined8 *)((longlong)pfVar17 + -0x18) = 0x1407730c7;
          FUN_140754c50();
          uVar27 = (ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x10) + 8);
          *(ulonglong *)(uVar27 - 8) = (ulonglong)(uVar8 + 0x1010);
          *(undefined8 *)(uVar27 - 0x10) = 0x1e;
          *(undefined8 *)(uVar27 - 0x18) = 0x1407730d8;
          FUN_140754c50();
          uVar28 = (ulonglong)((int)(uVar27 - 0x10) + 8);
          *(ulonglong *)(uVar28 - 8) = (ulonglong)(uVar8 + 0x1000);
          *(undefined8 *)(uVar28 - 0x10) = 0x1d;
          *(undefined8 *)(uVar28 - 0x18) = 0x1407730e9;
          FUN_140754c50();
          uVar29 = (ulonglong)((int)(uVar28 - 0x10) + 8);
          *(undefined8 *)(uVar29 - 8) = 0x1407730f3;
          FUN_140782257(puVar36);
          *(undefined8 *)(uVar29 - 8) = 3;
          *(undefined8 *)(uVar29 - 0x10) = 0x1407730fa;
          FUN_140754d5e();
          pfVar17 = (float *)(ulonglong)((int)(uVar29 - 8) + 4);
        }
        uVar19 = *pfVar17;
LAB_140773100:
        puVar32 = pfVar17;
        if (((*(int *)((longlong)puVar36 + 0x1c) == 0) && (*(int *)((longlong)puVar36 + 0x24) == 0))
           && ((*(byte *)((longlong)puVar36 + 0xac) & 1) != 0)) {
          *pfVar17 = (float)uVar19;
          uVar8 = *(uint *)(uVar37 + 0x2e8);
          *(undefined8 *)(pfVar17 + -2) = 0;
          puVar32 = pfVar17 + -4;
          *(ulonglong *)(pfVar17 + -4) = (ulonglong)uVar8;
          *(undefined8 *)(pfVar17 + -6) = 0x14077312d;
          FUN_1407e5d3c(uVar8 + 0x70);
          if ((*(byte *)(pfVar17 + -2) & 8) == 0) {
            *(undefined8 *)(pfVar17 + -6) = 0x3f800000;
            *(undefined8 *)(pfVar17 + -8) = 0x2b;
            *(undefined8 *)(pfVar17 + -10) = 0x140773140;
            uVar14 = FUN_140754a09();
            puVar30 = (undefined1 *)(ulonglong)((int)(pfVar17 + -8) + 8);
            *(int *)(puVar36 + 10) = (int)uVar14;
            puVar32 = (undefined4 *)puVar30;
            if ((int)uVar14 != 0) {
              uVar19 = *(undefined4 *)(uVar37 + 0x2e8);
              *(ulonglong *)((ulonglong)(puVar30 + 0x2c) & 0xffffffff) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)puVar36 + 0x3c) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)((longlong)puVar36 + 0x34) >> 0x20),
                            (float)*(undefined8 *)((longlong)puVar36 + 0x3c) +
                            (float)*(undefined8 *)((longlong)puVar36 + 0x34));
              *(undefined8 *)(puVar30 + -8) = 0;
              *(undefined8 *)(puVar30 + -0x10) = 0;
              *(undefined8 *)(puVar30 + -0x18) = uVar14;
              *(ulonglong *)(puVar30 + -0x20) = (ulonglong)(puVar30 + 0x20) & 0xffffffff;
              puVar32 = (undefined4 *)(puVar30 + -0x28);
              *(ulonglong *)(puVar30 + -0x28) = (ulonglong)(uVar35 + 0x34);
              *(undefined8 *)(puVar30 + -0x30) = 0x140773177;
              FUN_1407e372a(uVar19);
            }
          }
          else {
            *(undefined4 *)(puVar36 + 10) = 0;
          }
          *(byte *)((longlong)puVar36 + 0xac) = *(byte *)((longlong)puVar36 + 0xac) | 4;
          uVar19 = *puVar32;
        }
        if ((((byte)((puVar32[2] & 8) >> 3) & *(int *)(puVar36 + 3) == 0) == 1) &&
           ((*(byte *)((longlong)puVar36 + 0xac) & 1) != 0)) {
          *puVar32 = uVar19;
          uVar8 = *(uint *)(uVar37 + 0x2e8);
          *(undefined8 *)(puVar32 + -2) = 0;
          *(ulonglong *)(puVar32 + -4) = (ulonglong)uVar8;
          *(undefined8 *)(puVar32 + -6) = 0x1407731c7;
          FUN_1407e5d3c(uVar8 + 0x70);
          if (bVar9) {
            *(undefined8 *)(puVar32 + -6) = 0x3f800000;
            *(undefined8 *)(puVar32 + -8) = 2;
            *(undefined8 *)(puVar32 + -10) = 0x1407731d7;
            uVar15 = FUN_140754a09();
            puVar31 = (uint *)(ulonglong)((int)(puVar32 + -8) + 8);
            uVar13 = (ulonglong)*puVar31;
            fVar43 = *(float *)(uVar13 + 0x34);
            fVar1 = *(float *)(uVar13 + 0x38);
            uVar14 = *(undefined8 *)(uVar13 + 0x3c);
            pfVar17 = (float *)((ulonglong)(puVar31 + 0xb) & 0xffffffff);
            *pfVar17 = fVar43;
            pfVar17[1] = fVar1;
            pfVar17[2] = (float)uVar14 + fVar43;
            pfVar17[3] = (float)((ulonglong)uVar14 >> 0x20) + fVar1;
            fVar43 = *(float *)((longlong)puVar36 + 0x34);
            fVar1 = *(float *)(puVar36 + 7);
            uVar14 = *(undefined8 *)((longlong)puVar36 + 0x3c);
            pfVar21 = (float *)((ulonglong)(puVar31 + 7) & 0xffffffff);
            *pfVar21 = fVar43;
            pfVar21[1] = fVar1;
            pfVar21[2] = (float)uVar14 + fVar43;
            pfVar21[3] = (float)((ulonglong)uVar14 >> 0x20) + fVar1;
            puVar31[-2] = 0;
            puVar31[-1] = 0;
            *(undefined8 *)(puVar31 + -4) = uVar15;
            *(float **)(puVar31 + -6) = pfVar17;
            *(float **)(puVar31 + -8) = pfVar21;
            *(undefined8 *)(puVar31 + -10) = *(undefined8 *)(uVar37 + 0x2e8);
            puVar31[-0xc] = 0x4077321b;
            puVar31[-0xb] = 1;
            FUN_1407ec996();
            puVar32 = (undefined4 *)(ulonglong)((int)(puVar31 + -10) + 0x14);
          }
          else {
            uVar19 = *(undefined4 *)(uVar37 + 0x2e8);
            *(undefined8 *)(puVar32 + -6) = 0x3f800000;
            *(undefined8 *)(puVar32 + -8) = 2;
            *(undefined8 *)(puVar32 + -10) = 0x140773232;
            uVar14 = FUN_140754a09();
            uVar33 = (ulonglong)((int)(puVar32 + -8) + 8);
            *(ulonglong *)(uVar33 + 0x2c & 0xffffffff) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)puVar36 + 0x3c) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)((longlong)puVar36 + 0x34) >> 0x20),
                          (float)*(undefined8 *)((longlong)puVar36 + 0x3c) +
                          (float)*(undefined8 *)((longlong)puVar36 + 0x34));
            *(undefined8 *)(uVar33 - 8) = 0;
            *(undefined8 *)(uVar33 - 0x10) = 0;
            *(undefined8 *)(uVar33 - 0x18) = uVar14;
            *(ulonglong *)(uVar33 - 0x20) = uVar33 + 0x20 & 0xffffffff;
            puVar32 = (undefined4 *)(uVar33 - 0x28);
            *(ulonglong *)(uVar33 - 0x28) = (ulonglong)(uVar35 + 0x34);
            *(undefined8 *)(uVar33 - 0x30) = 0x14077325e;
            FUN_1407e372a(uVar19);
          }
        }
        uVar8 = *(uint *)(uVar37 + 0x2e8);
        *(undefined8 *)((longlong)puVar32 + -8) = 1;
        pfVar17 = (float *)((longlong)puVar32 + -0x10);
        *(ulonglong *)((longlong)puVar32 + -0x10) = (ulonglong)uVar8;
        *(undefined8 *)((longlong)puVar32 + -0x18) = 0x14077326f;
        FUN_1407e5d3c(uVar8 + 0x70);
        if (*(int *)((longlong)puVar36 + 0x24) < 1) {
          bVar39 = true;
          pfVar17 = (float *)((longlong)puVar32 + -0x10);
          goto LAB_140773284;
        }
        *(undefined8 *)((longlong)puVar32 + -0x18) = 0x14077327e;
        FUN_14078285c(puVar36,uVar37);
        bVar39 = true;
      }
      else {
        bVar39 = false;
        bVar9 = false;
        if (iVar11 != 0) {
          uVar19 = *(undefined4 *)(puVar36 + 0x10);
          goto LAB_140773100;
        }
LAB_140773284:
        *(undefined4 *)(puVar36 + 0x14) = 0;
        *(byte *)((longlong)puVar36 + 0xac) = *(byte *)((longlong)puVar36 + 0xac) & 0xbd;
      }
      if ((*(uint *)(puVar36 + 6) == 0) ||
         (iVar12 = *(int *)((ulonglong)*(uint *)(puVar36 + 6) + 0x18), iVar12 == 0)) {
        if (0 < *(int *)((longlong)puVar36 + 0x24)) {
          iVar12 = *(int *)((ulonglong)*(uint *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c) +
                           0xb8);
          goto LAB_1407732b4;
        }
      }
      else {
LAB_1407732b4:
        *(int *)((longlong)puVar36 + 0x9c) = iVar12;
      }
      if (bVar39) {
        cVar10 = (char)*(undefined4 *)((longlong)pfVar17 + 4);
        if ((((*(byte *)((longlong)puVar36 + 0xac) & 1) != 0) && (*(int *)(puVar36 + 3) == 0)) &&
           ((*(uint *)(uVar34 + 0x14dc) == 0 ||
            (*(int *)((ulonglong)*(uint *)(uVar34 + 0x14dc) + 0x3b0) != iVar11)))) {
          *(ulonglong *)((longlong)pfVar17 + -8) = uVar37;
          *(undefined8 *)((longlong)pfVar17 + -0x10) = 0x1407732e9;
          FUN_140768d1b();
          pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -8) + 4);
        }
        *(undefined4 *)(puVar36 + 0x12) = *(undefined4 *)(uVar34 + 4);
        if (*(int *)((longlong)puVar36 + 0x1c) != 0) {
          *(undefined8 *)((longlong)pfVar17 + -8) = 0x140773301;
          FUN_140772a6c();
        }
        if (*(int *)(puVar36 + 4) != 0) {
          *(undefined8 *)((longlong)pfVar17 + -8) = 0x14077330d;
          FUN_140772a6c();
        }
        if (*(int *)(puVar36 + 3) == 0) {
          *(undefined8 *)((longlong)pfVar17 + -8) = 0x14077331a;
          FUN_14077e794(uVar37);
        }
      }
      else {
        *(undefined4 *)(puVar36 + 0x12) = *(undefined4 *)(uVar34 + 4);
        cVar10 = (char)*(undefined4 *)((longlong)pfVar17 + 4);
      }
      if (cVar10 != '\0') {
        *(undefined8 *)((longlong)pfVar17 + -8) = 0x140773332;
        FUN_140762c14();
      }
    }
    else {
      if (*(int *)((longlong)puVar36 + 0x9c) == 0) {
LAB_140772d74:
        uVar37 = (ulonglong)*(uint *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c);
      }
      else {
        *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772d70;
        uVar37 = FUN_140782232(puVar36);
        if ((int)uVar37 == 0) goto LAB_140772d74;
      }
      if ((*(char *)(uVar37 + 0x118) < '\x01') && (*(char *)(uVar37 + 0x119) < '\x01'))
      goto LAB_140772b2f;
      *(undefined4 *)((longlong)puVar36 + 0x14) = 2;
    }
  }
  else {
    iVar12 = *(int *)((longlong)puVar36 + 0x24);
    if (((iVar12 < 2) && (*(int *)((longlong)puVar36 + 0x1c) == 0)) &&
       (*(char *)(uVar34 + 0x6f) == '\0')) {
      if (iVar12 != 0) {
        if (*(char *)((ulonglong)*(uint *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c) + 0x34) ==
            '\x01') goto LAB_140772b02;
        goto LAB_140772bd7;
      }
    }
    else {
LAB_140772b02:
      if (*(int *)(puVar36 + 0x11) != 0) goto LAB_140772b0f;
LAB_140772bd7:
      if (iVar12 == 1) {
        uVar35 = *(uint *)(puVar36 + 0xf);
        uVar8 = *(uint *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c);
        uVar37 = (ulonglong)uVar8;
        *(undefined8 *)((longlong)puVar36 + 0x34) = *(undefined8 *)(uVar37 + 0x50);
        uVar19 = *(undefined4 *)(uVar37 + 0x60);
        *(undefined4 *)(puVar36 + 8) = *(undefined4 *)(uVar37 + 100);
        *(undefined4 *)((longlong)puVar36 + 0x3c) = uVar19;
        *(uint *)(puVar36 + 0x15) = *(uint *)(puVar36 + 0x15) & 0xfffffe00 | 0x92;
        if (uVar35 != 0) {
          if (*(uint *)(uVar34 + 0x2048) == uVar35) {
            *(undefined8 *)((longlong)pfVar17 + -8) = 0;
            *(ulonglong *)((longlong)pfVar17 + -0x10) = uVar37;
            *(undefined8 *)((longlong)pfVar17 + -0x18) = 0x140772c29;
            FUN_14075b3b2();
            pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x10) + 8);
            uVar35 = *(uint *)(puVar36 + 0xf);
            if (uVar35 == 0) goto LAB_140772c86;
          }
          uVar13 = (ulonglong)uVar35;
          if ((*(byte *)(uVar34 + 0x27b5) & 8) != 0) {
            uVar35 = *(uint *)(uVar13 + 0x3c);
            *(undefined8 *)((longlong)pfVar17 + -8) = *(undefined8 *)(uVar37 + 4);
            *(undefined8 *)((longlong)pfVar17 + -0x10) = *(undefined8 *)(uVar37 + 8);
            *(undefined8 *)((longlong)pfVar17 + -0x18) = *(undefined8 *)(ulonglong)uVar35;
            *(undefined8 *)((longlong)pfVar17 + -0x20) = *puVar36;
            *(undefined8 *)((longlong)pfVar17 + -0x28) = 0x10355a8b;
            *(undefined8 *)((longlong)pfVar17 + -0x30) = 0x140772c53;
            FUN_1407518b6();
            pfVar17 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar17 + -0x28) + 0x14);
            uVar13 = (ulonglong)*(uint *)(puVar36 + 0xf);
          }
          uVar35 = *(uint *)(uVar13 + 0x3c);
          *(uint *)(uVar37 + 0x3c) = uVar35;
          *(undefined4 *)(uVar37 + 0x40) =
               *(undefined4 *)((ulonglong)*(uint *)(puVar36 + 0xf) + 0x40);
          if (*(char *)((ulonglong)*(uint *)(puVar36 + 0xf) + 0xf8) == '\x01') {
            *(undefined4 *)(ulonglong)uVar35 = *(undefined4 *)(uVar37 + 8);
            *(uint *)((ulonglong)*(uint *)(uVar37 + 0x3c) + 0x58) = uVar8;
            *(undefined1 *)(uVar37 + 0xf8) = 1;
          }
        }
LAB_140772c86:
        *(undefined4 *)((longlong)puVar36 + 0xa4) = *(undefined4 *)(uVar37 + 0x40);
      }
    }
    *(undefined8 *)((longlong)pfVar17 + -8) = 0x140772c96;
    FUN_1407821b4(puVar36);
    *(undefined4 *)((longlong)puVar36 + 0x14) = 1;
    *(undefined4 *)(puVar36 + 0x14) = 0;
    *(byte *)((longlong)puVar36 + 0xac) = *(byte *)((longlong)puVar36 + 0xac) & 0xa7;
    *(undefined4 *)(puVar36 + 0x12) = *(undefined4 *)(uVar34 + 4);
    if (((*(byte *)((longlong)puVar36 + 0xad) & 1) != 0) &&
       (*(int *)((longlong)puVar36 + 0x24) == 1)) {
      if (_DAT_150afb9df == (*(uint *)((longlong)pfVar17 + 0x40) ^ (uint)pfVar17)) {
        FUN_1407821f4(puVar36,*(undefined4 *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c));
        return;
      }
      goto LAB_1407733ed;
    }
  }
  if (_DAT_150afc03e == (*(uint *)((longlong)pfVar17 + 0x40) ^ (uint)pfVar17)) {
    return;
  }
LAB_1407733ed:
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)pfVar17 + -8) = FUN_1407733f8;
  FUN_1408802b0(*(uint *)((longlong)pfVar17 + 0x40) ^ (uint)pfVar17);
}

