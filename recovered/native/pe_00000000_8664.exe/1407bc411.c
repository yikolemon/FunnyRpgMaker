/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bc411 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bc411(short *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  longlong unaff_RBX;
  uint uVar25;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  int in_R11D;
  longlong unaff_R12;
  int unaff_R15D;
  float10 in_ST0;
  float10 fVar30;
  float10 fVar31;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  int *piVar26;
  
  uVar25 = (int)&stack0xffffffffffffffe0 - 0xd0;
  piVar26 = (int *)(ulonglong)uVar25;
  uVar28 = piVar26[0x39];
  pcVar15 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffcc);
  *pcVar15 = *pcVar15 + (char)pcVar15;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c0d);
  bVar4 = *pbVar1;
  bVar19 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar19;
  *(char *)(unaff_RBX + 0x16882) = *(char *)(unaff_RBX + 0x16882) + bVar19 + CARRY1(bVar4,bVar19);
  *(byte *)(param_1 + 0x79a1222) = (char)param_1[0x79a1222] + bVar19;
  fVar30 = in_ST0 + (float10)*param_1;
  *pcVar15 = *pcVar15 + (char)pcVar15;
  *(short *)((longlong)piVar26 + 0x12) = (short)pcVar15;
  *(undefined2 *)((longlong)piVar26 + 0x3a) = *(undefined2 *)((ulonglong)uVar28 + 0x1e2);
  piVar26[0x2e] = 0;
  piVar26[0x2f] = 0;
  piVar26[0x30] = 0;
  piVar26[0x31] = 0;
  piVar26[0x2b] = 0;
  piVar26[0x2c] = 0;
  piVar26[0x2d] = 0;
  piVar26[0x2e] = 0;
  piVar26[0x27] = 0;
  piVar26[0x28] = 0;
  piVar26[0x29] = 0;
  piVar26[0x2a] = 0;
  piVar26[0x23] = 0;
  piVar26[0x24] = 0;
  piVar26[0x25] = 0;
  piVar26[0x26] = 0;
  piVar26[0x1f] = 0;
  piVar26[0x20] = 0;
  piVar26[0x21] = 0;
  piVar26[0x22] = 0;
  piVar26[0x1b] = 0;
  piVar26[0x1c] = 0;
  piVar26[0x1d] = 0;
  piVar26[0x1e] = 0;
  iVar24 = *(int *)((ulonglong)uVar28 + 0x40) * 2 + 0x23;
  piVar26[10] = iVar24;
  uVar28 = iVar24 >> 3 & 0xfffffffc;
  iVar29 = uVar28 * 5;
  iVar24 = *(int *)(param_1 + 0x14d2);
  piVar26[5] = (int)param_1;
  if (iVar24 < iVar29) {
    *piVar26 = iVar29;
    piVar26[-2] = 0x407bc4b0;
    piVar26[-1] = 1;
    uVar13 = FUN_1407520ca();
    param_1 = (short *)(ulonglong)(uint)piVar26[5];
    iVar24 = *(int *)(param_1 + 0x14d4);
    if (iVar24 != 0) {
      piVar26[2] = *(int *)((ulonglong)(uint)piVar26[5] + 0x29a0);
      piVar26[1] = iVar24;
      *piVar26 = uVar13;
      piVar26[-2] = 0x407bc4da;
      piVar26[-1] = 1;
      FUN_1408b31a0();
      *piVar26 = *(undefined4 *)((ulonglong)(uint)piVar26[5] + 0x29a8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(piVar26 + -2) = &UNK_1407bc4ec;
      FUN_14075219b();
    }
    *(undefined4 *)(param_1 + 0x14d4) = uVar13;
    *(int *)(param_1 + 0x14d2) = iVar29;
  }
  else {
    uVar13 = *(undefined4 *)(param_1 + 0x14d4);
  }
  piVar26[2] = iVar29;
  *piVar26 = uVar13;
  piVar26[1] = 0;
  piVar26[-2] = 0x407bc51a;
  piVar26[-1] = 1;
  FUN_1408b3720();
  iVar24 = *(int *)(((ulonglong)param_1 & 0xffffffff) + 0x29a8);
  piVar26[0x20] = iVar24;
  piVar26[0x26] = iVar24 + uVar28;
  piVar26[0x2c] = iVar24 + uVar28 * 2;
  piVar26[0x32] = uVar28 * 3 + iVar24;
  uVar17 = (ulonglong)(uint)piVar26[0x39];
  uVar27 = (ulonglong)(uint)piVar26[0xd];
  sVar6 = *(short *)((longlong)piVar26 + 0x12);
  if (0 < *(int *)(uVar17 + 0x40)) {
    piVar26[0xb] = iVar24 + uVar28 * 4;
    uVar28 = 0;
    piVar26[7] = 0;
    do {
      if ((*(uint *)((ulonglong)*(uint *)(uVar17 + 0x30) + (ulonglong)(uVar28 >> 5) * 4) >>
           (uVar28 & 0x1f) & 1) != 0) {
        piVar26[6] = uVar28;
        uVar28 = uVar28 * 0x74 + *(int *)(uVar17 + 0x10);
        uVar17 = (ulonglong)uVar28;
        bVar10 = true;
        piVar26[3] = uVar28;
        do {
          uVar7 = *(ushort *)(uVar17 + 0x62 + (ulonglong)(byte)~bVar10 * 2);
          uVar28 = *(uint *)(uVar27 + 0x10);
          piVar26[9] = (uint)uVar7;
          uVar22 = (uint)uVar7 + (uint)uVar7 * 2;
          iVar24 = *(int *)((ulonglong)uVar28 + (ulonglong)uVar22 * 8);
          if (iVar24 < 1) {
            uVar17 = (ulonglong)(uint)piVar26[3];
          }
          else {
            uVar28 = uVar28 + uVar22 * 8;
            piVar26[8] = uVar28;
            uVar28 = *(uint *)((ulonglong)uVar28 + 8);
            if ((*(int *)(((ulonglong)uVar28 - 0x18) + (ulonglong)(uint)(iVar24 * 0x40)) == 0) &&
               (*(int *)((ulonglong)(uVar28 + iVar24 * 0x40) - 0x14) == 0)) {
              **(int **)(piVar26 + 8) = iVar24;
            }
            uVar17 = (ulonglong)(uint)piVar26[3];
            if (iVar24 == 1) {
              if ((*(byte *)(uVar17 + 1) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (sVar6 < 1) {
                uVar13 = *(undefined4 *)(uVar17 + 0x48);
                piVar26[1] = *(int *)(uVar17 + 0x4c);
                *piVar26 = uVar13;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(piVar26 + -2) = &UNK_1407bc646;
                FUN_140755a9a();
              }
              if (bVar10) {
                uVar13 = *(undefined4 *)(uVar17 + 0x44);
                piVar26[1] = *(int *)(uVar17 + 0x4c);
                *piVar26 = uVar13;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(piVar26 + -2) = &UNK_1407bc613;
                FUN_140755a9a();
              }
              if (*(float *)(uVar17 + 0x48) < *(float *)(uVar17 + 0x2c) ||
                  *(float *)(uVar17 + 0x48) == *(float *)(uVar17 + 0x2c)) {
                halt_baddata();
              }
            }
          }
          bVar9 = (bool)(0 < sVar6 & bVar10);
          bVar10 = false;
        } while (bVar9);
        *(undefined2 *)(uVar17 + 0x60) = 0xffff;
        uVar17 = (ulonglong)(uint)piVar26[0x39];
        uVar28 = piVar26[6];
      }
    } while (unaff_R15D < param_3);
    if (piVar26[7] != 0) {
      iVar29 = *(int *)(uVar27 + 4) + -2;
      uVar17 = (ulonglong)(uint)piVar26[5];
      iVar24 = *(int *)(uVar17 + 0x2350);
      if (iVar24 < iVar29) {
        if (iVar24 == 0) {
          iVar24 = 8;
        }
        else {
          iVar24 = iVar24 / 2 + iVar24;
        }
        if (iVar24 <= iVar29) {
          iVar24 = iVar29;
        }
        *piVar26 = iVar24 * 0x18;
        piVar26[-2] = 0x407bc7bd;
        piVar26[-1] = 1;
        iVar14 = FUN_1407520ca();
        uVar17 = (ulonglong)(uint)piVar26[5];
        iVar8 = *(int *)(uVar17 + 0x2354);
        if (iVar8 != 0) {
          piVar26[2] = *(int *)((ulonglong)(uint)piVar26[5] + 0x234c) * 0x18;
          piVar26[1] = iVar8;
          *piVar26 = iVar14;
          piVar26[-2] = 0x407bc7ed;
          piVar26[-1] = 1;
          FUN_1408b31a0();
          *piVar26 = *(undefined4 *)((ulonglong)(uint)piVar26[5] + 0x2354);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(piVar26 + -2) = &UNK_1407bc7ff;
          FUN_14075219b();
        }
        piVar26[9] = iVar14;
        *(int *)(uVar17 + 0x2354) = iVar14;
        *(int *)(uVar17 + 0x2350) = iVar24;
        uVar28 = 0;
      }
      else {
        uVar28 = *(uint *)(uVar17 + 0x2354);
        piVar26[9] = uVar28;
      }
      *(int *)(uVar17 + 0x234c) = iVar29;
      iVar24 = *(int *)(uVar27 + 4);
      uVar22 = piVar26[0xb];
      if (2 < iVar24) {
        do {
          puVar2 = (uint *)((ulonglong)uVar22 + (ulonglong)(uint)((int)uVar28 >> 5) * 4);
          *puVar2 = *puVar2 | (0xffffffffU >> ((byte)uVar28 & 0x1f)) << ((byte)uVar28 & 0x1f);
          uVar28 = (uVar28 & 0xffffffe0) + 0x20;
        } while ((int)uVar28 < iVar24);
      }
      sVar6 = *(short *)((longlong)piVar26 + 0x12);
      uVar18 = (ulonglong)(uint)piVar26[0x39];
      bVar4 = (byte)*(ushort *)(uVar18 + 0x1ea) & 0x1f;
      puVar2 = (uint *)((ulonglong)uVar22 + (ulonglong)(*(ushort *)(uVar18 + 0x1ea) >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      uVar27 = (ulonglong)(uint)piVar26[0xd];
      piVar26[0xc] = (*(int *)(uVar27 + 4) - (uint)(0 < sVar6)) + -2;
      piVar26[0x14] = *(int *)(uVar18 + 0x134);
      piVar26[0x13] = *(int *)(uVar18 + 0x138);
      piVar26[0x12] = *(int *)(uVar18 + 0x13c);
      piVar26[0x11] = *(int *)(uVar18 + 0x140);
      iVar24 = piVar26[10] >> 5;
      uVar17 = 0;
      piVar26[10] = iVar24;
      do {
        uVar16 = (ulonglong)(uint)((int)uVar17 * 3);
        iVar29 = piVar26[uVar16 * 2 + 0x1f];
        piVar26[3] = iVar29;
        piVar26[6] = (int)uVar17;
        if (iVar29 != 0) {
          piVar21 = (int *)(ulonglong)((int)(piVar26 + uVar16 * 2) + 0x6c);
          iVar29 = *piVar21;
          iVar14 = piVar21[1];
          iVar8 = piVar21[3];
          piVar26[7] = piVar21[2];
          piVar26[0x10] = iVar8;
          fVar31 = fVar30;
          if (((byte)uVar17 & 0 < *(short *)((longlong)piVar26 + 0x3a)) == 0) {
            piVar26[1] = piVar26[0x14];
            *piVar26 = iVar29;
            piVar26[8] = iVar14;
            piVar26[-2] = 0x407bc94e;
            piVar26[-1] = 1;
            fVar31 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            FUN_14074225a();
            iVar14 = piVar26[8];
            uVar17 = (ulonglong)(uint)piVar26[6];
            piVar26[0x18] = (int)(float)fVar30;
            iVar29 = piVar26[0x18];
            in_ST7 = in_ST6;
          }
          piVar26[0xf] = iVar29;
          fVar30 = fVar31;
          if ((uint)uVar17 < 2 || *(short *)((longlong)piVar26 + 0x12) < 1) {
            piVar26[1] = piVar26[0x13];
            *piVar26 = iVar14;
            piVar26[-2] = 0x407bc991;
            piVar26[-1] = 1;
            fVar30 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            FUN_14074225a();
            uVar17 = (ulonglong)(uint)piVar26[6];
            piVar26[0x17] = (int)(float)fVar31;
            iVar14 = piVar26[0x17];
            in_ST7 = in_ST6;
          }
          iVar29 = piVar26[7];
          if ((uVar17 & 1) != 0) {
            piVar26[1] = piVar26[0x12];
            *piVar26 = iVar29;
            piVar26[8] = iVar14;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(piVar26 + -2) = &UNK_1407bc9c6;
            FUN_140755a9a();
          }
          iVar8 = piVar26[0xf];
          iVar5 = piVar26[0x10];
          if ((1 < (uint)uVar17) && ((*(byte *)(uVar18 + 6) & 2) == 0)) {
            piVar26[1] = piVar26[0x11];
            *piVar26 = iVar5;
            piVar26[8] = iVar14;
            piVar26[7] = iVar29;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(piVar26 + -2) = &UNK_1407bca13;
            FUN_140755a9a();
          }
          uVar28 = piVar26[0xb];
          if (0 < iVar24) {
            uVar22 = piVar21[5];
            do {
              *(uint *)(ulonglong)uVar28 = *(uint *)(ulonglong)uVar28 & ~*(uint *)(ulonglong)uVar22;
            } while (in_R11D != 0);
          }
          iVar24 = piVar26[3];
          piVar26[0xc] = piVar26[0xc] - iVar24;
          iVar20 = *(int *)(uVar27 + 4);
          if (0 < iVar20) {
            uVar28 = piVar21[5];
            *(int *)(unaff_R12 * 2 + 0x1c) = in_R11D;
            do {
              piVar26[8] = iVar20;
              piVar26[3] = iVar24;
              iVar24 = *(int *)((ulonglong)uVar28 + 0x1ffffffc);
              if (iVar24 < 0) {
                *(int *)((ulonglong)uVar28 + 0x1ffffffc) = iVar24;
                piVar21 = (int *)(ulonglong)
                                 *(uint *)((ulonglong)
                                           *(uint *)((ulonglong)(uint)piVar26[0xd] + 0x10) + 8);
                *piVar21 = iVar8;
                piVar21[1] = iVar14;
                piVar21[2] = iVar29;
                piVar21[3] = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar27 = (ulonglong)(uint)piVar26[0xd];
              iVar24 = piVar26[3];
              iVar20 = piVar26[8];
            } while ((0 < iVar20) && (uVar28 = piVar26[7], iVar24 != 0));
          }
          uVar18 = (ulonglong)(uint)piVar26[0x39];
          iVar24 = piVar26[10];
          uVar17 = (ulonglong)(uint)piVar26[6];
        }
        if ((int)uVar17 == 1 && 0 < *(short *)((longlong)piVar26 + 0x12)) {
          uVar28 = *(uint *)(uVar27 + 0x10);
          uVar17 = (ulonglong)
                   ((uint)*(ushort *)(uVar18 + 0x1ea) + (uint)*(ushort *)(uVar18 + 0x1ea) * 2);
          uVar22 = piVar26[9];
          puVar23 = (undefined4 *)(ulonglong)uVar22;
          *(undefined8 *)(puVar23 + 4) = *(undefined8 *)((ulonglong)uVar28 + 0x10 + uVar17 * 8);
          puVar3 = (undefined4 *)((ulonglong)uVar28 + uVar17 * 8);
          uVar13 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          *puVar23 = *puVar3;
          puVar23[1] = uVar13;
          puVar23[2] = uVar11;
          puVar23[3] = uVar12;
          uVar17 = (ulonglong)(uint)piVar26[6];
          piVar26[9] = uVar22 + 0x18;
        }
      } while ((int)uVar17 != 4);
      uVar28 = *(uint *)(uVar27 + 4);
      uVar18 = (ulonglong)uVar28;
      if ((0 < (int)uVar28) && (iVar24 = piVar26[0xc], iVar24 != 0)) {
        uVar22 = piVar26[0xb];
        do {
          piVar26[0xc] = iVar24;
          if (*(int *)((ulonglong)uVar22 + 0x1ffffffc) < 0) {
            uVar18 = (ulonglong)*(uint *)(uVar27 + 0x10);
            uVar28 = piVar26[9];
            puVar23 = (undefined4 *)(ulonglong)uVar28;
            *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(uVar18 + 0x10 + uVar17);
            puVar3 = (undefined4 *)(uVar18 + uVar17);
            uVar13 = puVar3[1];
            uVar11 = puVar3[2];
            uVar12 = puVar3[3];
            *puVar23 = *puVar3;
            puVar23[1] = uVar13;
            puVar23[2] = uVar11;
            puVar23[3] = uVar12;
            iVar24 = piVar26[0xc];
            piVar26[9] = uVar28 + 0x18;
          }
          else {
            iVar24 = piVar26[0xc];
          }
          uVar28 = (uint)uVar18;
        } while ((0 < (int)uVar28) && (iVar24 != 0));
      }
      iVar24 = *(int *)(uVar27 + 0x10);
      iVar29 = *(int *)((ulonglong)(uint)piVar26[5] + 0x2354);
      piVar26[2] = uVar28 * 0x18 + -0x30;
      piVar26[1] = iVar29;
      *piVar26 = iVar24 + 0x30;
      piVar26[-2] = 0x407bcbe1;
      piVar26[-1] = 1;
      FUN_1408b31a0();
    }
  }
  if (_DAT_150b458f0 == (piVar26[0x33] ^ uVar25)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(piVar26 + -2) = &UNK_1407bcc0d;
  FUN_1408802b0(piVar26[0x33] ^ uVar25);
}

