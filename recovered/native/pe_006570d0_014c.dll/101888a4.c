/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101888a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_101888a4(int param_1,undefined8 *param_2,int param_3,uint param_4,float param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  byte bVar19;
  int iVar16;
  uint uVar17;
  int iVar18;
  short sVar20;
  short sVar21;
  bool bVar22;
  float10 fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_5c;
  
  if (0xffffff < param_4 && 1 < param_3) {
    iVar15 = param_3;
    if ((param_6 >> 9 & 1) == 0) {
      iVar15 = param_3 + -1;
    }
    if ((param_6 & 0x8000000f) == 0) {
      uVar3 = **(undefined4 **)(param_1 + 0x2c);
      uVar4 = (*(undefined4 **)(param_1 + 0x2c))[1];
      if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
        FUN_10188516(iVar15 * 6,iVar15 * 4);
        param_5 = param_5 * DAT_102b70e0;
        iVar12 = 1;
        do {
          iVar16 = iVar12;
          if (param_3 == iVar12) {
            iVar16 = 0;
          }
          fVar27 = (float)param_2[iVar12 + -1];
          fVar24 = (float)param_2[iVar16] - fVar27;
          fVar26 = (float)((ulonglong)param_2[iVar16] >> 0x20) -
                   (float)((ulonglong)param_2[iVar12 + -1] >> 0x20);
          auVar28._0_4_ = fVar24 * fVar24 + fVar26 * fVar26;
          auVar28._4_4_ = fVar26;
          auVar28._8_8_ = 0;
          if (0.0 < auVar28._0_4_) {
            auVar28 = rsqrtss(auVar28,auVar28);
            fVar24 = fVar24 * auVar28._0_4_;
            fVar26 = fVar26 * auVar28._0_4_;
          }
          fVar24 = param_5 * fVar24;
          fVar26 = fVar26 * param_5;
          **(float **)(param_1 + 0x30) = fVar27 + fVar26;
          *(float *)(*(int *)(param_1 + 0x30) + 4) =
               *(float *)((int)param_2 + iVar12 * 8 + -4) - fVar24;
          iVar18 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar18 + 0xc) = uVar4;
          *(undefined4 *)(iVar18 + 8) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
          *(float *)(*(int *)(param_1 + 0x30) + 0x14) = *(float *)(param_2 + iVar16) + fVar26;
          *(float *)(*(int *)(param_1 + 0x30) + 0x18) =
               *(float *)((int)param_2 + iVar16 * 8 + 4) - fVar24;
          iVar18 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar18 + 0x20) = uVar4;
          *(undefined4 *)(iVar18 + 0x1c) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = param_4;
          *(float *)(*(int *)(param_1 + 0x30) + 0x28) = *(float *)(param_2 + iVar16) - fVar26;
          *(float *)(*(int *)(param_1 + 0x30) + 0x2c) =
               *(float *)((int)param_2 + iVar16 * 8 + 4) + fVar24;
          iVar16 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar16 + 0x34) = uVar4;
          *(undefined4 *)(iVar16 + 0x30) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x38) = param_4;
          *(float *)(*(int *)(param_1 + 0x30) + 0x3c) = *(float *)(param_2 + iVar12 + -1) - fVar26;
          *(float *)(*(int *)(param_1 + 0x30) + 0x40) =
               fVar24 + *(float *)((int)param_2 + iVar12 * 8 + -4);
          iVar16 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar16 + 0x48) = uVar4;
          *(undefined4 *)(iVar16 + 0x44) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x4c) = param_4;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x50;
          **(undefined2 **)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x28);
          *(short *)(*(int *)(param_1 + 0x34) + 2) = (short)*(undefined4 *)(param_1 + 0x28) + 1;
          *(short *)(*(int *)(param_1 + 0x34) + 4) = (short)*(undefined4 *)(param_1 + 0x28) + 2;
          *(undefined2 *)(*(int *)(param_1 + 0x34) + 6) = *(undefined2 *)(param_1 + 0x28);
          *(short *)(*(int *)(param_1 + 0x34) + 8) = (short)*(undefined4 *)(param_1 + 0x28) + 2;
          *(short *)(*(int *)(param_1 + 0x34) + 10) = (short)*(undefined4 *)(param_1 + 0x28) + 3;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
          bVar22 = iVar12 != iVar15;
          iVar12 = iVar12 + 1;
        } while (bVar22);
      }
      else {
        fVar24 = *(float *)(param_1 + 0xa8);
        fVar23 = (float10)FUN_100fdbca(param_5,0x3f800000);
        fVar26 = (float)fVar23;
        iVar12 = (int)fVar23;
        bVar19 = fVar24 == DAT_1028b430 & iVar12 < 0x20 & *(byte *)(param_1 + 0x24) >> 1 &
                 fVar26 - (float)iVar12 <= DAT_102b8c54;
        iVar16 = 0x12;
        if (param_5 <= fVar24) {
          iVar16 = 0xc;
        }
        iVar18 = 6;
        if (bVar19 == 0) {
          iVar18 = iVar16;
        }
        if (bVar19 == 1) {
          uVar17 = param_3 * 2;
          iVar16 = 3;
        }
        else {
          uVar17 = param_3 * 3;
          if (fVar24 < param_5) {
            uVar17 = param_3 * 4;
          }
          iVar16 = (uint)(fVar24 < param_5) * 2 + 3;
        }
        FUN_10188516(iVar18 * iVar15,uVar17);
        iVar18 = *(int *)(param_1 + 0x2c);
        iVar16 = iVar16 * param_3;
        if (iVar16 - *(int *)(iVar18 + 0x40) != 0 && *(int *)(iVar18 + 0x40) <= iVar16) {
          if (*(int *)(iVar18 + 0x44) != 0) {
            FUN_100fa2cb(*(int *)(iVar18 + 0x44));
          }
          uVar7 = FUN_100fa1fa(iVar16 * 8);
          *(undefined4 *)(iVar18 + 0x44) = uVar7;
          *(int *)(iVar18 + 0x40) = iVar16;
          iVar18 = *(int *)(param_1 + 0x2c);
        }
        uVar5 = _DAT_1028f620;
        uVar8 = param_4 & 0xffffff;
        puVar10 = *(undefined8 **)(iVar18 + 0x44);
        iVar16 = 1;
        do {
          iVar18 = iVar16;
          if (param_3 == iVar16) {
            iVar18 = 0;
          }
          fVar27 = (float)param_2[iVar18] - (float)param_2[iVar16 + -1];
          fVar29 = (float)((ulonglong)param_2[iVar18] >> 0x20) -
                   (float)((ulonglong)param_2[iVar16 + -1] >> 0x20);
          auVar30._0_4_ = fVar27 * fVar27 + fVar29 * fVar29;
          auVar30._4_4_ = fVar29;
          auVar30._8_8_ = 0;
          if (0.0 < auVar30._0_4_) {
            auVar28 = rsqrtss(auVar30,auVar30);
            fVar27 = fVar27 * auVar28._0_4_;
            fVar29 = fVar29 * auVar28._0_4_;
          }
          *(float *)(puVar10 + iVar16 + -1) = fVar29;
          *(uint *)((int)puVar10 + iVar16 * 8 + -4) = (uint)fVar27 ^ uVar5;
          bVar22 = iVar16 != iVar15;
          iVar16 = iVar16 + 1;
        } while (bVar22);
        if ((param_6 >> 9 & 1) == 0) {
          uVar7 = *(undefined4 *)(puVar10 + param_3 + -2);
          *(undefined4 *)((int)puVar10 + param_3 * 8 + -4) =
               *(undefined4 *)((int)puVar10 + param_3 * 8 + -0xc);
          *(undefined4 *)(puVar10 + param_3 + -1) = uVar7;
          fVar29 = (float)((ulonglong)puVar10[param_3 + -2] >> 0x20);
          fVar27 = (float)puVar10[param_3 + -2];
          if (param_5 <= fVar24 || bVar19 != 0) {
            if (bVar19 != 0) {
              fVar24 = fVar26 * DAT_102b70e0 + DAT_1028b430;
            }
            puVar10[param_3] =
                 CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                          (float)((ulonglong)*puVar10 >> 0x20) * fVar24,
                          (float)*param_2 + (float)*puVar10 * fVar24);
            puVar10[param_3 + 1] =
                 CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                          (float)((ulonglong)*puVar10 >> 0x20) * fVar24,
                          (float)*param_2 - (float)*puVar10 * fVar24);
            puVar10[param_3 + (param_3 + -1) * 2] =
                 CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) + fVar24 * fVar29,
                          (float)param_2[param_3 + -1] + fVar24 * fVar27);
            puVar10[param_3 + (param_3 + -1) * 2 + 1] =
                 CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) - fVar24 * fVar29,
                          (float)param_2[param_3 + -1] - fVar24 * fVar27);
LAB_10188d76:
            fVar35 = DAT_102b9528;
            fVar25 = DAT_102b8c10;
            fVar29 = DAT_102b89c0._4_4_;
            fVar27 = (float)DAT_102b89c0;
            fVar26 = DAT_1028b430;
            iVar18 = 1;
            iVar16 = *(int *)(param_1 + 0x28);
LAB_10188da5:
            if (param_3 == iVar18) {
              iVar9 = *(int *)(param_1 + 0x28);
              iVar13 = 0;
            }
            else {
              iVar9 = (bVar19 ^ 3) + iVar16;
              iVar13 = iVar18;
            }
            fVar31 = ((float)puVar10[iVar13] + (float)puVar10[iVar18 + -1]) * fVar27;
            fVar32 = ((float)((ulonglong)puVar10[iVar13] >> 0x20) +
                     (float)((ulonglong)puVar10[iVar18 + -1] >> 0x20)) * fVar29;
            fVar33 = fVar31 * fVar31 + fVar32 * fVar32;
            if (fVar35 < fVar33) {
              fVar33 = fVar26 / fVar33;
              fVar34 = fVar25;
              if (fVar33 <= fVar25) {
                fVar34 = fVar33;
              }
              fVar31 = fVar31 * fVar34;
              fVar32 = fVar32 * fVar34;
            }
            *(float *)(puVar10 + param_3 + iVar13 * 2) =
                 *(float *)(param_2 + iVar13) + fVar24 * fVar31;
            *(float *)((int)puVar10 + iVar13 * 0x10 + param_3 * 8 + 4) =
                 *(float *)((int)param_2 + iVar13 * 8 + 4) + fVar32 * fVar24;
            *(float *)(puVar10 + param_3 + iVar13 * 2 + 1) =
                 *(float *)(param_2 + iVar13) - fVar24 * fVar31;
            *(float *)((int)puVar10 + iVar13 * 0x10 + param_3 * 8 + 0xc) =
                 *(float *)((int)param_2 + iVar13 * 8 + 4) - fVar32 * fVar24;
            sVar6 = (short)iVar9;
            **(short **)(param_1 + 0x34) = sVar6;
            sVar21 = (short)iVar16;
            *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar21;
            if (bVar19 == 0) {
              *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar21 + 2;
              *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar21 + 2;
              *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar6 + 2;
              *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar6;
              *(short *)(*(int *)(param_1 + 0x34) + 0xc) = sVar6 + 1;
              *(short *)(*(int *)(param_1 + 0x34) + 0xe) = sVar21 + 1;
              *(short *)(*(int *)(param_1 + 0x34) + 0x10) = sVar21;
              *(short *)(*(int *)(param_1 + 0x34) + 0x12) = sVar21;
              *(short *)(*(int *)(param_1 + 0x34) + 0x14) = sVar6;
              *(short *)(*(int *)(param_1 + 0x34) + 0x16) = sVar6 + 1;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x18;
              if (iVar15 != iVar18) goto LAB_10188f0a;
              puVar14 = *(undefined8 **)(param_1 + 0x30);
              puVar10 = puVar10 + param_3 + 1;
              iVar15 = 0;
              do {
                *puVar14 = param_2[iVar15];
                iVar12 = *(int *)(param_1 + 0x30);
                *(undefined4 *)(iVar12 + 0xc) = uVar4;
                *(undefined4 *)(iVar12 + 8) = uVar3;
                *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
                *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x14) = puVar10[-1];
                iVar12 = *(int *)(param_1 + 0x30);
                *(undefined4 *)(iVar12 + 0x20) = uVar4;
                *(undefined4 *)(iVar12 + 0x1c) = uVar3;
                *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = uVar8;
                *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x28) = *puVar10;
                iVar12 = *(int *)(param_1 + 0x30);
                *(undefined4 *)(iVar12 + 0x34) = uVar4;
                *(undefined4 *)(iVar12 + 0x30) = uVar3;
                *(uint *)(*(int *)(param_1 + 0x30) + 0x38) = uVar8;
                puVar14 = (undefined8 *)(*(int *)(param_1 + 0x30) + 0x3c);
                *(undefined8 **)(param_1 + 0x30) = puVar14;
                iVar15 = iVar15 + 1;
                puVar10 = puVar10 + 2;
              } while (param_3 != iVar15);
            }
            else {
              *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar21 + 1;
              *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar6 + 1;
              *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar21 + 1;
              *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar6;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc;
              if (iVar15 != iVar18) goto LAB_10188f0a;
              puVar14 = *(undefined8 **)(param_1 + 0x30);
              iVar15 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
              uVar1 = *(undefined8 *)(iVar15 + iVar12 * 0x10);
              uVar2 = *(undefined8 *)(iVar15 + 8 + iVar12 * 0x10);
              puVar10 = puVar10 + param_3 + 1;
              do {
                *puVar14 = puVar10[-1];
                *(undefined8 *)(*(int *)(param_1 + 0x30) + 8) = uVar1;
                *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
                *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x14) = *puVar10;
                *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x1c) = uVar2;
                *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = param_4;
                puVar14 = (undefined8 *)(*(int *)(param_1 + 0x30) + 0x28);
                *(undefined8 **)(param_1 + 0x30) = puVar14;
                puVar10 = puVar10 + 2;
                param_3 = param_3 + -1;
              } while (param_3 != 0);
            }
            goto LAB_1018935a;
          }
          fVar26 = (fVar26 - fVar24) * DAT_102b70e0;
          fVar25 = fVar24 + fVar26;
          puVar10[param_3] =
               CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                        (float)((ulonglong)*puVar10 >> 0x20) * fVar25,
                        (float)*param_2 + (float)*puVar10 * fVar25);
          puVar10[param_3 + 1] =
               CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                        (float)((ulonglong)*puVar10 >> 0x20) * fVar26,
                        (float)*param_2 + (float)*puVar10 * fVar26);
          puVar10[param_3 + 2] =
               CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                        (float)((ulonglong)*puVar10 >> 0x20) * fVar26,
                        (float)*param_2 - (float)*puVar10 * fVar26);
          puVar10[param_3 + 3] =
               CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                        (float)((ulonglong)*puVar10 >> 0x20) * fVar25,
                        (float)*param_2 - (float)*puVar10 * fVar25);
          iVar12 = param_3 + -1;
          puVar10[param_3 + iVar12 * 4] =
               CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) + fVar25 * fVar29,
                        (float)param_2[param_3 + -1] + fVar25 * fVar27);
          puVar10[param_3 + iVar12 * 4 + 1] =
               CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) + fVar26 * fVar29,
                        (float)param_2[param_3 + -1] + fVar26 * fVar27);
          puVar10[param_3 + iVar12 * 4 + 2] =
               CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) - fVar26 * fVar29,
                        (float)param_2[param_3 + -1] - fVar26 * fVar27);
          puVar10[param_3 + iVar12 * 4 + 3] =
               CONCAT44((float)((ulonglong)param_2[param_3 + -1] >> 0x20) - fVar25 * fVar29,
                        (float)param_2[param_3 + -1] - fVar25 * fVar27);
        }
        else {
          if (param_5 <= fVar24 || bVar19 != 0) {
            if (bVar19 != 0) {
              fVar24 = fVar26 * DAT_102b70e0 + DAT_1028b430;
            }
            goto LAB_10188d76;
          }
          fVar26 = (fVar26 - fVar24) * DAT_102b70e0;
        }
        fVar27 = DAT_102b9528;
        iVar12 = *(int *)(param_1 + 0x28);
        iVar16 = 1;
        do {
          if (param_3 == iVar16) {
            local_5c = *(int *)(param_1 + 0x28);
            iVar18 = 0;
          }
          else {
            local_5c = iVar12 + 4;
            iVar18 = iVar16;
          }
          fVar29 = ((float)puVar10[iVar18] + (float)puVar10[iVar16 + -1]) * (float)DAT_102b89c0;
          fVar25 = ((float)((ulonglong)puVar10[iVar18] >> 0x20) +
                   (float)((ulonglong)puVar10[iVar16 + -1] >> 0x20)) * DAT_102b89c0._4_4_;
          fVar35 = fVar29 * fVar29 + fVar25 * fVar25;
          if (fVar27 < fVar35) {
            fVar35 = DAT_1028b430 / fVar35;
            fVar31 = DAT_102b8c10;
            if (fVar35 <= DAT_102b8c10) {
              fVar31 = fVar35;
            }
            fVar29 = fVar29 * fVar31;
            fVar25 = fVar25 * fVar31;
          }
          fVar35 = (fVar24 + fVar26) * fVar29;
          fVar31 = (fVar24 + fVar26) * fVar25;
          iVar9 = iVar18 * 0x20;
          *(float *)(puVar10 + param_3 + iVar18 * 4) = *(float *)(param_2 + iVar18) + fVar35;
          *(float *)((int)puVar10 + iVar9 + param_3 * 8 + 4) =
               *(float *)((int)param_2 + iVar18 * 8 + 4) + fVar31;
          *(float *)(puVar10 + param_3 + iVar18 * 4 + 1) =
               *(float *)(param_2 + iVar18) + fVar26 * fVar29;
          *(float *)((int)puVar10 + iVar9 + param_3 * 8 + 0xc) =
               *(float *)((int)param_2 + iVar18 * 8 + 4) + fVar25 * fVar26;
          *(float *)(puVar10 + param_3 + iVar18 * 4 + 2) =
               *(float *)(param_2 + iVar18) - fVar26 * fVar29;
          *(float *)((int)puVar10 + iVar9 + param_3 * 8 + 0x14) =
               *(float *)((int)param_2 + iVar18 * 8 + 4) - fVar25 * fVar26;
          *(float *)(puVar10 + param_3 + iVar18 * 4 + 3) = *(float *)(param_2 + iVar18) - fVar35;
          *(float *)((int)puVar10 + iVar9 + param_3 * 8 + 0x1c) =
               *(float *)((int)param_2 + iVar18 * 8 + 4) - fVar31;
          sVar6 = (short)local_5c;
          sVar20 = sVar6 + 1;
          **(short **)(param_1 + 0x34) = sVar20;
          sVar21 = (short)iVar12;
          *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar21 + 1;
          *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar21 + 2;
          *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar21 + 2;
          sVar11 = sVar6 + 2;
          *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar11;
          *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar20;
          *(short *)(*(int *)(param_1 + 0x34) + 0xc) = sVar20;
          *(short *)(*(int *)(param_1 + 0x34) + 0xe) = sVar21 + 1;
          *(short *)(*(int *)(param_1 + 0x34) + 0x10) = sVar21;
          *(short *)(*(int *)(param_1 + 0x34) + 0x12) = sVar21;
          *(short *)(*(int *)(param_1 + 0x34) + 0x14) = sVar6;
          *(short *)(*(int *)(param_1 + 0x34) + 0x16) = sVar20;
          *(short *)(*(int *)(param_1 + 0x34) + 0x18) = sVar11;
          *(short *)(*(int *)(param_1 + 0x34) + 0x1a) = sVar21 + 2;
          *(short *)(*(int *)(param_1 + 0x34) + 0x1c) = sVar21 + 3;
          *(short *)(*(int *)(param_1 + 0x34) + 0x1e) = sVar21 + 3;
          *(short *)(*(int *)(param_1 + 0x34) + 0x20) = sVar6 + 3;
          *(short *)(*(int *)(param_1 + 0x34) + 0x22) = sVar11;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x24;
          bVar22 = iVar16 != iVar15;
          iVar12 = local_5c;
          iVar16 = iVar16 + 1;
        } while (bVar22);
        puVar14 = *(undefined8 **)(param_1 + 0x30);
        puVar10 = puVar10 + param_3 + 3;
        do {
          *puVar14 = puVar10[-3];
          iVar15 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar15 + 0xc) = uVar4;
          *(undefined4 *)(iVar15 + 8) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = uVar8;
          *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x14) = puVar10[-2];
          iVar15 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar15 + 0x20) = uVar4;
          *(undefined4 *)(iVar15 + 0x1c) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = param_4;
          *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x28) = puVar10[-1];
          iVar15 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar15 + 0x34) = uVar4;
          *(undefined4 *)(iVar15 + 0x30) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x38) = param_4;
          *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x3c) = *puVar10;
          iVar15 = *(int *)(param_1 + 0x30);
          *(undefined4 *)(iVar15 + 0x48) = uVar4;
          *(undefined4 *)(iVar15 + 0x44) = uVar3;
          *(uint *)(*(int *)(param_1 + 0x30) + 0x4c) = uVar8;
          puVar14 = (undefined8 *)(*(int *)(param_1 + 0x30) + 0x50);
          *(undefined8 **)(param_1 + 0x30) = puVar14;
          puVar10 = puVar10 + 4;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
LAB_1018935a:
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (uVar17 & 0xffff);
      }
    }
    else {
      FUN_100fcef5("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
    }
  }
  return;
LAB_10188f0a:
  iVar18 = iVar18 + 1;
  iVar16 = iVar9;
  goto LAB_10188da5;
}

