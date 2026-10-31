/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a66f9 */

/* WARNING: Removing unreachable block (ram,0x0001407a6dca) */
/* WARNING: Removing unreachable block (ram,0x0001407a6de7) */
/* WARNING: Removing unreachable block (ram,0x0001407a6df2) */
/* WARNING: Removing unreachable block (ram,0x0001407a6dfa) */
/* WARNING: Removing unreachable block (ram,0x0001407a6b53) */
/* WARNING: Removing unreachable block (ram,0x0001407a700c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a66f9(ulonglong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  float fVar13;
  int iVar14;
  char *pcVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  byte bVar22;
  float *pfVar23;
  float fVar24;
  int iVar25;
  float10 in_ST0;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pfVar23 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xe0);
  pcVar15 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffdc);
  *pcVar15 = *pcVar15 + (char)pcVar15;
  *(char *)(param_1 + 0x1039d74c) =
       *(char *)(param_1 + 0x1039d74c) + (char)((ulonglong)pcVar15 >> 8);
  pfVar23[7] = SUB84(pcVar15,0);
  *(undefined1 *)(param_1 + 0x7b) = 0;
  fVar26 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30);
  pfVar23[0x1a] = *(float *)(param_1 + 0x40);
  pfVar23[0x1b] = fVar26;
  *(float *)(param_1 + 0x40) = fVar26;
  pfVar23[0x33] = 0.0;
  pfVar23[0x34] = 0.0;
  pfVar23[0x35] = 0.0;
  pfVar23[0x36] = 0.0;
  pfVar23[0x2f] = 0.0;
  pfVar23[0x30] = 0.0;
  pfVar23[0x31] = 0.0;
  pfVar23[0x32] = 0.0;
  pfVar23[0x2b] = 0.0;
  pfVar23[0x2c] = 0.0;
  pfVar23[0x2d] = 0.0;
  pfVar23[0x2e] = 0.0;
  fVar26 = *(float *)(param_1 + 4);
  pfVar23[5] = (float)param_1;
  if ((int)fVar26 < 1) {
    pfVar23[0x10] = 0.0;
    pfVar23[4] = 0.0;
  }
  else {
    uVar16 = 0;
    pfVar23[4] = 0.0;
    pfVar23[0x10] = 0.0;
    do {
      uVar20 = (ulonglong)*(uint *)(param_1 + 0xc);
      piVar21 = (int *)(ulonglong)(*(uint *)(param_1 + 0xc) + (int)uVar16);
      param_1 = (ulonglong)(uint)pfVar23[5];
      if ((*(int *)(uVar20 + 0xc + uVar16) < *(int *)((ulonglong)(uint)pfVar23[5] + 0x2c)) ||
         (*(char *)(uVar20 + 0x2c + uVar16) == '\x01')) {
        iVar14 = *piVar21;
        if (*(int *)(param_1 + 0x24) == iVar14) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          iVar14 = *piVar21;
        }
        if (*(int *)(param_1 + 0x18) == iVar14) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          iVar14 = *piVar21;
        }
        if (*(int *)(param_1 + 0x1c) == iVar14) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        fVar26 = pfVar23[4];
        if (fVar26 != 0.0) {
          uVar19 = (ulonglong)(uint)((int)fVar26 * 0x30);
          uVar3 = *(undefined8 *)(piVar21 + 10);
          puVar1 = (undefined8 *)(uVar20 + 0x20 + uVar19);
          *puVar1 = *(undefined8 *)(piVar21 + 8);
          puVar1[1] = uVar3;
          iVar14 = *piVar21;
          iVar25 = piVar21[1];
          iVar6 = piVar21[2];
          iVar7 = piVar21[3];
          iVar8 = piVar21[5];
          iVar9 = piVar21[6];
          iVar10 = piVar21[7];
          piVar2 = (int *)(uVar20 + 0x10 + uVar19);
          *piVar2 = piVar21[4];
          piVar2[1] = iVar8;
          piVar2[2] = iVar9;
          piVar2[3] = iVar10;
          piVar21 = (int *)(uVar20 + uVar19);
          *piVar21 = iVar14;
          piVar21[1] = iVar25;
          piVar21[2] = iVar6;
          piVar21[3] = iVar7;
          param_1 = (ulonglong)(uint)pfVar23[5];
          uVar20 = (ulonglong)*(uint *)(param_1 + 0xc);
        }
        pfVar23[4] = fVar26;
        uVar19 = (ulonglong)(uint)((int)fVar26 * 0x30);
        *(short *)(uVar20 + 0x2a + uVar19) = SUB42(fVar26,0);
        fVar26 = *(float *)(uVar20 + 4 + uVar19);
        uVar18 = (uint)(SUB41(fVar26,0) < '\0');
        if (((uint)fVar26 & 0x40) != 0) {
          uVar18 = 0;
        }
        if (0 < (int)pfVar23[4]) {
          uVar4 = *(uint *)(((ulonglong)*(uint *)((ulonglong)(uint)pfVar23[5] + 0xc) - 0x2c) +
                           uVar19);
          param_1 = (ulonglong)(uint)pfVar23[5];
          pfVar23[6] = fVar26;
          *(byte *)(pfVar23 + 0x16) = SUB41(pfVar23[6],0) >> 6;
          bVar22 = *(byte *)(pfVar23 + 0x16);
          *(bool *)(pfVar23 + 0x16) = (uVar4 & 0xc0) == 0x80;
          pfVar23[6] = (float)((uint)pfVar23[6] & 0xc0);
          bVar22 = (uVar4 & 0x40) == 0 & bVar22 | *(byte *)(pfVar23 + 0x10);
          pfVar23[0x10] =
               (float)CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                               CONCAT11(pfVar23[6] != 1.79366e-43 &
                                                        *(byte *)(pfVar23 + 0x16),bVar22)) >> 8),
                               bVar22 | pfVar23[6] != 1.79366e-43 & *(byte *)(pfVar23 + 0x16));
        }
        piVar21 = (int *)((longlong)pfVar23 + (ulonglong)(uVar18 << 4) + 0xac);
        *piVar21 = *piVar21 + 1;
        pfVar23[4] = (float)((int)pfVar23[4] + 1);
        fVar26 = *(float *)(param_1 + 4);
      }
      uVar16 = (ulonglong)((int)uVar16 + 0x30);
    } while (0 < (int)fVar26);
  }
  fVar13 = pfVar23[4];
  uVar16 = (ulonglong)(uint)pfVar23[7];
  if (fVar26 != fVar13) {
    iVar14 = *(int *)(param_1 + 8);
    if (iVar14 < (int)fVar13) {
      if (iVar14 == 0) {
        fVar26 = 1.12104e-44;
      }
      else {
        fVar26 = (float)(iVar14 / 2 + iVar14);
      }
      if ((int)fVar26 <= (int)pfVar23[4]) {
        fVar26 = pfVar23[4];
      }
      *pfVar23 = (float)((int)fVar26 * 0x30);
      pfVar23[-2] = 3.9126587;
      pfVar23[-1] = 1.4013e-45;
      uVar12 = FUN_1407520ca();
      param_1 = (ulonglong)(uint)pfVar23[5];
      fVar13 = *(float *)(param_1 + 0xc);
      if (fVar13 != 0.0) {
        pfVar23[2] = (float)(*(int *)(param_1 + 4) * 0x30);
        pfVar23[1] = fVar13;
        *pfVar23 = (float)uVar12;
        pfVar23[-2] = 3.9126678;
        pfVar23[-1] = 1.4013e-45;
        FUN_1408b31a0();
        *pfVar23 = (float)*(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
        pfVar23[-2] = 3.9126704;
        pfVar23[-1] = 1.4013e-45;
        FUN_14075219b();
      }
      *(undefined4 *)(param_1 + 0xc) = uVar12;
      *(float *)(param_1 + 8) = fVar26;
      uVar16 = (ulonglong)(uint)pfVar23[7];
    }
    fVar13 = pfVar23[4];
    *(float *)(param_1 + 4) = fVar13;
  }
  if ((~SUB41(pfVar23[0x10],0) & 1) == 0 && 1 < (uint)fVar13) {
    uVar12 = *(undefined4 *)(param_1 + 0xc);
    pfVar23[1] = fVar13;
    *pfVar23 = (float)uVar12;
    pfVar23[3] = 2.941596e-29;
    pfVar23[2] = 6.72623e-44;
    pfVar23[-2] = 3.9126868;
    pfVar23[-1] = 1.4013e-45;
    FUN_1408c79d0();
  }
  fVar26 = *(float *)(uVar16 + 0xd24);
  fVar13 = pfVar23[0x2b];
  fVar27 = pfVar23[0x33];
  pfVar23[0xb] = pfVar23[0x2f];
  pfVar23[0xc] = fVar26;
  pfVar23[10] = fVar26;
  if ((int)pfVar23[0x2f] + (int)fVar27 < 1) {
    pfVar23[10] = 0.0;
  }
  if ((int)fVar13 < 1) {
    pfVar23[10] = 0.0;
  }
  pfVar23[0x2e] = pfVar23[10];
  fVar26 = pfVar23[0xc];
  if ((int)fVar27 < 1) {
    fVar26 = 0.0;
  }
  if ((int)pfVar23[0xb] < 1) {
    fVar26 = 0.0;
  }
  pfVar23[0x32] = fVar26;
  fVar28 = pfVar23[5];
  uVar16 = (ulonglong)(uint)fVar28;
  fVar24 = *(float *)(uVar16 + 0x20);
  if (fVar24 != 0.0) {
    *(undefined4 *)(uVar16 + 0x20) = 0;
  }
  fVar5 = *(float *)(uVar16 + 0x1c);
  if (fVar5 != 0.0) {
    *(float *)(uVar16 + 0x18) = fVar5;
    *(undefined4 *)(uVar16 + 0x1c) = 0;
    fVar24 = fVar5;
  }
  iVar14 = *(int *)(uVar16 + 0x74);
  pfVar23[0x15] = fVar26;
  if (iVar14 != 0) {
    *pfVar23 = fVar28;
    pfVar23[-2] = 3.912729;
    pfVar23[-1] = 1.4013e-45;
    cVar11 = FUN_1407a78d9();
    if ((cVar11 != '\0') && (*(float *)(uVar16 + 0x74) == *(float *)(uVar16 + 0x18))) {
      fVar24 = *(float *)(uVar16 + 0x74);
    }
    *(undefined4 *)(uVar16 + 0x74) = 0;
  }
  if ((*(byte *)(uVar16 + 0x10) & 4) != 0) {
    pfVar23[-2] = 3.912737;
    pfVar23[-1] = 1.4013e-45;
    pfVar17 = (float *)FUN_1407aa72a();
    if ((int)pfVar17 != 0) {
      fVar24 = *pfVar17;
      *(float *)(uVar16 + 0x18) = fVar24;
    }
  }
  pfVar23[8] = fVar24;
  pfVar23[0x28] = 0.0;
  pfVar23[9] = (float)((int)fVar27 + (int)fVar13);
  pfVar23[0x29] = (float)((int)fVar27 + (int)fVar13);
  pfVar23[0x2a] = fVar13;
  iVar14 = *(int *)(uVar16 + 4);
  uVar20 = (ulonglong)(uint)pfVar23[7];
  iVar25 = *(int *)(uVar20 + 0x238c);
  if (iVar25 < iVar14) {
    if (iVar25 == 0) {
      iVar25 = 8;
    }
    else {
      iVar25 = iVar25 / 2 + iVar25;
    }
    if (iVar25 <= iVar14) {
      iVar25 = iVar14;
    }
    *pfVar23 = (float)(iVar25 * 0xc);
    pfVar23[-2] = 3.9127626;
    pfVar23[-1] = 1.4013e-45;
    uVar12 = FUN_1407520ca();
    uVar20 = (ulonglong)(uint)pfVar23[7];
    fVar26 = *(float *)(uVar20 + 0x2390);
    if (fVar26 != 0.0) {
      pfVar23[2] = (float)(*(int *)(uVar20 + 0x2388) * 0xc);
      pfVar23[1] = fVar26;
      *pfVar23 = (float)uVar12;
      pfVar23[-2] = 3.9127731;
      pfVar23[-1] = 1.4013e-45;
      FUN_1408b31a0();
      *pfVar23 = (float)*(undefined4 *)(uVar20 + 0x2390);
                    /* WARNING: Subroutine does not return */
      pfVar23[-2] = 3.9127765;
      pfVar23[-1] = 1.4013e-45;
      FUN_14075219b();
    }
    *(undefined4 *)(uVar20 + 0x2390) = uVar12;
    *(int *)(uVar20 + 0x238c) = iVar25;
    uVar16 = (ulonglong)(uint)pfVar23[5];
  }
  *(int *)(uVar20 + 0x2388) = iVar14;
  fVar26 = _DAT_150a31f42;
  if ((*(byte *)(uVar16 + 0x10) & 0x80) != 0) {
    fVar26 = *(float *)(uVar20 + 0xd70);
  }
  pfVar23[0xe] = fVar26;
  fVar26 = pfVar23[9];
  if (0 < *(int *)(uVar16 + 4)) {
    pfVar23[0xd] = 0.0;
    fVar26 = *(float *)(uVar16 + 0xc);
    uVar16 = (ulonglong)(uint)fVar26;
    pfVar23[4] = 0.0;
    pfVar23[0x10] = 0.0;
    fVar13 = 0.0;
    if ((*(byte *)(uVar16 + 6) & 0x20) == 0) {
      fVar13 = fVar26;
    }
    pfVar23[6] = fVar13;
    fVar13 = *(float *)(ulonglong)(uint)fVar26;
    *(bool *)(pfVar23 + 0x16) = fVar13 == *(float *)((ulonglong)(uint)pfVar23[5] + 0x18);
    if (pfVar23[8] == 0.0) {
      if (*(float *)((ulonglong)(uint)pfVar23[7] + 0x2204) != fVar13) {
        fVar13 = 0.0;
      }
      pfVar23[8] = fVar13;
    }
    pfVar23[1] = fVar26;
    *pfVar23 = pfVar23[5];
    pfVar23[-2] = 3.9128225;
    pfVar23[-1] = 1.4013e-45;
    fVar13 = (float)FUN_1407a7578();
    uVar18 = *(uint *)(uVar16 + 4);
    fVar26 = *(float *)(uVar16 + 0x20);
    if (fVar26 < 0.0) {
      pfVar23[1] = fVar13;
      *pfVar23 = (float)(int)(pfVar23 + 0x26);
      pfVar23[2] = (float)(uint)((uVar18 & 0x100001) != 0x100000);
      pfVar23[-2] = 3.9128363;
      pfVar23[-1] = 1.4013e-45;
      FUN_1407a8a2b();
      fVar26 = pfVar23[0x26];
      uVar18 = *(uint *)(uVar16 + 4);
    }
    *(float *)(uVar16 + 0x1c) = fVar26;
    pfVar23[0xf] = 0.0;
    if ((uVar18 >> 0x15 & 1) != 0) {
      uVar20 = (ulonglong)((char)uVar18 < '\0');
      if ((param_4 & 0x40) != 0) {
        uVar20 = 0;
      }
      uVar19 = (ulonglong)(uint)((int)(float)uVar20 << 4);
      fVar13 = pfVar23[0xc];
      fVar27 = pfVar23[4];
      if ((float)uVar20 != pfVar23[0x10]) {
        fVar13 = 0.0;
      }
      *(undefined1 (*) [16])(pfVar23 + 0x10) = ZEXT416((uint)fVar13);
      pfVar23[0xd] = (float)CONCAT31((int3)((uint)pfVar23[0xd] >> 8),
                                     SUB41(pfVar23[0xd],0) | *(byte *)(pfVar23 + 0x16));
      pfVar23[1] = pfVar23[0xe];
      *pfVar23 = fVar26;
      *(undefined1 (*) [16])(pfVar23 + 0x16) = ZEXT416((uint)fVar26);
      pfVar23[-2] = 3.9128773;
      pfVar23[-1] = 1.4013e-45;
      FUN_14074225a();
      pfVar23[0x24] = (float)in_ST0;
      uVar3 = *(undefined8 *)((longlong)pfVar23 + uVar19 + 0xb0);
      *(ulonglong *)((longlong)pfVar23 + uVar19 + 0xb0) =
           CONCAT44((float)((ulonglong)uVar3 >> 0x20) + pfVar23[0x10] + pfVar23[0x24],
                    (float)uVar3 + pfVar23[0x10] + pfVar23[0x16]);
      fVar26 = pfVar23[uVar20 + 0x28];
      pfVar23[uVar20 + 0x28] = (float)((int)fVar26 + 1);
      uVar19 = (ulonglong)*(uint *)((ulonglong)(uint)pfVar23[7] + 0x2390);
      uVar20 = (ulonglong)(uint)((int)fVar26 * 3);
      *(float *)(uVar19 + uVar20 * 4) = fVar27;
      fVar26 = pfVar23[0xf];
      uVar12 = *(undefined4 *)(uVar16 + 0x1c + (ulonglong)(uint)fVar26);
      *(undefined4 *)(uVar19 + 8 + uVar20 * 4) = uVar12;
      *(undefined4 *)(uVar19 + 4 + uVar20 * 4) = uVar12;
      *pfVar23 = (float)*(undefined4 *)(uVar16 + 0x1c + (ulonglong)(uint)fVar26);
      pfVar23[1] = 1.0;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(pfVar23 + -2) = &UNK_1407a6d1e;
      FUN_140755a9a();
    }
    pfVar23[1] = *(float *)((ulonglong)(uint)pfVar23[7] + 0xd6c);
    *pfVar23 = fVar26;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar23 + -2) = &UNK_1407a6c22;
    FUN_140755a9a();
  }
  pfVar23[0xd] = 0.0;
  pfVar23[6] = 0.0;
  iVar14 = (int)uVar16;
  pfVar23[0xc] = (float)(iVar14 + 0x30);
  pfVar23[9] = (float)(iVar14 + 0x38);
  fVar27 = 0.0;
  uVar20 = 0xc;
  fVar13 = pfVar23[8];
  do {
    fVar27 = fVar27 + *(float *)((longlong)pfVar23 + uVar20 + 0xac) +
                      (float)*(undefined8 *)((longlong)pfVar23 + uVar20 + 0xa4);
    uVar18 = (int)uVar20 + 0x10;
    uVar20 = (ulonglong)uVar18;
  } while (uVar18 != 0x3c);
  *(float *)(uVar16 + 0x50) = fVar27;
  pfVar23[0x14] = (float)(iVar14 + 0x7e);
  *(undefined1 *)(uVar16 + 0x7e) = 0;
  if ((fVar13 == 0.0) && (pfVar23[0x1b] <= pfVar23[0x1a] && pfVar23[0x1a] != pfVar23[0x1b])) {
    fVar13 = *(float *)(uVar16 + 0x18);
  }
  fVar27 = pfVar23[0x2c] + pfVar23[10] + pfVar23[0x34] + 0.0;
  fVar28 = *(float *)(ulonglong)(iVar14 + 0x38) - *(float *)(ulonglong)(iVar14 + 0x30);
  if (fVar28 <= fVar27) {
    uVar18 = *(uint *)(uVar16 + 0x10);
    pfVar23[8] = fVar13;
    if ((_DAT_150a3230c <= fVar27 - fVar28) &&
       ((uVar18 >> 8 & 1) != 0 || ((char)uVar18 < '\0' || fVar28 <= fVar27))) {
      fVar24 = fVar26;
      fVar13 = pfVar23[0xb];
      if (fVar28 <= fVar27) {
        fVar24 = 0.0;
        fVar13 = fVar26;
      }
      iVar14 = *(int *)((ulonglong)(uint)pfVar23[7] + 0x2390);
      pfVar23[3] = pfVar23[0xe];
      pfVar23[2] = fVar27 - fVar28;
      pfVar23[1] = fVar13;
      *pfVar23 = (float)((int)fVar24 * 0xc + iVar14);
      pfVar23[-2] = 3.9130366;
      pfVar23[-1] = 1.4013e-45;
      FUN_14078a899();
      pfVar23[0xb] = fVar13;
      if (0 < (int)fVar13) {
        pfVar23[0xb] = (float)((int)pfVar23[0xb] + (int)fVar24);
        uVar16 = (ulonglong)((int)fVar24 * 0xc + 4);
        do {
          iVar14 = (int)*(float *)(*(uint *)((ulonglong)(uint)pfVar23[7] + 0x2390) + uVar16);
          if (-1 < iVar14) {
            uVar12 = *(undefined4 *)
                      (((ulonglong)*(uint *)((ulonglong)(uint)pfVar23[7] + 0x2390) - 4) + uVar16);
            pfVar23[1] = (float)iVar14;
            *pfVar23 = 1.0;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(pfVar23 + -2) = &UNK_1407a6f87;
            FUN_140755a9a(uVar12);
          }
        } while ((int)fVar24 < (int)pfVar23[0xb]);
      }
    }
    *(undefined4 *)((ulonglong)(uint)pfVar23[5] + 0x4c) = 0;
    fVar13 = 0.0;
    fVar26 = (float)((int)&stack0xffffffffffffffe0 + -0x34);
    pfVar23[0x16] = fVar26;
    iVar14 = *(int *)(ulonglong)(uint)fVar26;
    pfVar23[0x10] = 0.0;
    if (0 < iVar14) {
      uVar18 = 0x24;
      do {
        uVar16 = (ulonglong)uVar18;
        uVar20 = (ulonglong)*(uint *)((ulonglong)(uint)pfVar23[5] + 0xc);
        *(float *)((uVar20 - 0x10) + uVar16) = fVar13;
        *(undefined4 *)(uVar20 + uVar16) = 0xffffffff;
        fVar26 = 0.0;
        if (0 < iVar14 + -1) {
          fVar26 = *(float *)((ulonglong)(uint)pfVar23[7] + 0xd24);
        }
        fVar13 = fVar13 + fVar26 + *(float *)((uVar20 - 0xc) + uVar16);
        uVar18 = uVar18 + 0x30;
      } while (iVar14 != 0);
    }
    pfVar23[4] = fVar13;
    fVar26 = *(float *)((ulonglong)(uint)pfVar23[0x16] + 0xc);
    pfVar23[0xf] = fVar26;
    *pfVar23 = *(float *)((ulonglong)(uint)pfVar23[0x16] + 4) + fVar26;
    pfVar23[1] = 0.0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar23 + -2) = &UNK_1407a70e3;
    FUN_140755a9a();
  }
  pfVar23[0x10] = fVar27;
  pfVar23[4] = fVar28;
  *pfVar23 = (pfVar23[0x30] + pfVar23[0x15]) -
             ((pfVar23[4] - (pfVar23[0x2c] + pfVar23[10])) - (pfVar23[0x34] + 0.0));
  pfVar23[1] = 0.0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar23 + -2) = &UNK_1407a6e92;
  FUN_140755a9a();
}

