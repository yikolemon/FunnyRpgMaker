/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10106f03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106f03(void)

{
  float *pfVar1;
  short *psVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  short *local_38;
  float local_30;
  float fStack_2c;
  
  iVar7 = DAT_1039d74c;
  if (*(char *)(DAT_1039d74c + 0x105) == '\x01') {
    bVar8 = *(byte *)(DAT_1039d74c + 0x79) ^ 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)(DAT_1039d74c + 0xb72) = bVar8;
  cVar9 = FUN_10103c30(iVar7 + 0xe4);
  if (cVar9 != '\0') {
    fVar19 = (float)*(undefined8 *)(iVar7 + 0xe4);
    fVar20 = (float)((ulonglong)*(undefined8 *)(iVar7 + 0xe4) >> 0x20);
    fVar19 = (float)(int)((int)fVar19 - (uint)((float)(int)fVar19 != fVar19 && fVar19 < 0.0));
    fVar20 = (float)(int)((int)fVar20 - (uint)((float)(int)fVar20 != fVar20 && fVar20 < 0.0));
    *(ulonglong *)(iVar7 + 0x2468) = CONCAT44(fVar20,fVar19);
    *(ulonglong *)(iVar7 + 0xe4) = CONCAT44(fVar20,fVar19);
  }
  cVar9 = FUN_10103c30(iVar7 + 0xe4);
  if (cVar9 != '\0') {
    cVar9 = FUN_10103c30(iVar7 + 0xac0);
    if (cVar9 != '\0') {
      fVar19 = (float)*(undefined8 *)(iVar7 + 0xe4) - (float)*(undefined8 *)(iVar7 + 0xac0);
      fVar20 = (float)((ulonglong)*(undefined8 *)(iVar7 + 0xe4) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(iVar7 + 0xac0) >> 0x20);
      *(ulonglong *)(iVar7 + 0xd8) = CONCAT44(fVar20,fVar19);
      uVar17 = -(uint)(fVar19 != 0.0);
      uVar18 = -(uint)(fVar20 != 0.0);
      fVar19 = fVar19 * fVar19 + fVar20 * fVar20;
      goto LAB_10106fde;
    }
  }
  *(undefined4 *)(iVar7 + 0xd8) = 0;
  *(undefined4 *)(iVar7 + 0xdc) = 0;
  uVar17 = 0;
  uVar18 = 0;
  fVar19 = 0.0;
LAB_10106fde:
  uVar10 = (uint)(*(int *)(iVar7 + 0xfc) == 0);
  fVar20 = 0.0;
  if (fVar19 <= *(float *)(&DAT_102b8c30 + uVar10 * 4)) {
    fVar20 = *(float *)(iVar7 + 0x2464) + *(float *)(iVar7 + 0x48);
  }
  *(float *)(iVar7 + 0x2464) = fVar20;
  auVar6._8_4_ = 0;
  auVar6._0_8_ = (ulonglong)uVar17 << 0x3f;
  auVar6._12_4_ = (int)(((ulonglong)uVar18 << 0x3f) >> 0x20);
  iVar11 = movmskpd(uVar10,auVar6);
  if (iVar11 != 0) {
    *(undefined1 *)(iVar7 + 0x2041) = 0;
  }
  iVar13 = 0xb18;
  iVar14 = 0xb36;
  iVar11 = 0xb22;
  iVar15 = 0;
  do {
    if (*(char *)(iVar7 + -0xa4a + iVar14) == '\0') {
      *(undefined1 *)(iVar7 + -0x1e + iVar14) = 0;
      *(undefined2 *)(iVar7 + -0xb0e + iVar13 * 2) = 0;
      bVar5 = 0.0 <= *(float *)(iVar7 + -0x20ec + iVar13 * 4);
      *(bool *)(iVar7 + iVar14) = bVar5;
      if (bVar5) {
        *(undefined8 *)(iVar7 + -0x4d80 + iVar13 * 8) = *(undefined8 *)(iVar7 + 0x18);
      }
      pcVar12 = (char *)(iVar7 + iVar13);
      local_38 = (short *)(iVar7 + iVar11);
      *(undefined4 *)(iVar7 + -0x20d8 + iVar13 * 4) = *(undefined4 *)(iVar7 + -0x20ec + iVar13 * 4);
      *(undefined4 *)(iVar7 + -0x20ec + iVar13 * 4) = 0xbf800000;
      if (*(char *)(iVar7 + -0x1e + iVar14) == '\x01') goto LAB_101071fd;
    }
    else {
      fVar20 = 0.0;
      pfVar1 = (float *)(iVar7 + -0x20ec + iVar13 * 4);
      *(bool *)(iVar7 + -0x1e + iVar14) = *pfVar1 <= 0.0 && *pfVar1 != 0.0;
      *(undefined2 *)(iVar7 + -0xb0e + iVar13 * 2) = 0;
      *(undefined1 *)(iVar7 + iVar14) = 0;
      fVar19 = *(float *)(iVar7 + -0x20ec + iVar13 * 4);
      *(float *)(iVar7 + -0x20d8 + iVar13 * 4) = fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19 + *(float *)(iVar7 + 0x48);
      }
      pcVar12 = (char *)(iVar7 + 0xb18 + iVar15);
      local_38 = (short *)(iVar7 + 0xb22 + iVar15 * 2);
      *(float *)(iVar7 + -0x20ec + iVar13 * 4) = fVar20;
      if (*(char *)(iVar7 + -0x1e + iVar14) == '\0') {
        local_30 = 0.0;
        fStack_2c = 0.0;
        cVar9 = FUN_10103c30(iVar7 + 0xe4);
        if (cVar9 != '\0') {
          uVar3 = *(undefined8 *)(iVar7 + -0x4df8 + iVar13 * 8);
          local_30 = (float)*(undefined8 *)(iVar7 + 0xe4) - (float)uVar3;
          fStack_2c = (float)((ulonglong)*(undefined8 *)(iVar7 + 0xe4) >> 0x20) -
                      (float)((ulonglong)uVar3 >> 0x20);
        }
        fVar16 = (float10)FUN_100fdbca(*(undefined4 *)(iVar7 + -0x209c + iVar13 * 4),
                                       local_30 * local_30 + fStack_2c * fStack_2c);
        *(float *)(iVar7 + -0x209c + iVar13 * 4) = (float)fVar16;
        fVar19 = (float)((uint)local_30 ^ _DAT_1028f620);
        if ((float)((uint)local_30 ^ _DAT_1028f620) <= local_30) {
          fVar19 = local_30;
        }
        fVar16 = (float10)FUN_100fdbca(*(undefined4 *)(iVar7 + -0x4d24 + iVar13 * 8),fVar19);
        *(float *)(iVar7 + -0x4d24 + iVar13 * 8) = (float)fVar16;
        fVar19 = (float)((uint)fStack_2c ^ _DAT_1028f620);
        if ((float)((uint)fStack_2c ^ _DAT_1028f620) <= fStack_2c) {
          fVar19 = fStack_2c;
        }
        fVar16 = (float10)FUN_100fdbca(*(undefined4 *)(iVar7 + -0x4d20 + iVar13 * 8),fVar19);
        *(float *)(iVar7 + -0x4d20 + iVar13 * 8) = (float)fVar16;
      }
      else {
LAB_101071fd:
        dVar4 = *(double *)(iVar7 + 0x18);
        if (*(float *)(iVar7 + 0x88) <= (float)(dVar4 - *(double *)(iVar7 + -0x4dd0 + iVar13 * 8)))
        {
LAB_1010729e:
          *(undefined2 *)(iVar7 + -0xb04 + iVar13 * 2) = 1;
        }
        else {
          cVar9 = FUN_10103c30(iVar7 + 0xe4);
          fVar19 = 0.0;
          if (cVar9 != '\0') {
            fVar19 = *(float *)(iVar7 + 0xe8) - *(float *)(iVar7 + -0x4df4 + iVar13 * 8);
            fVar20 = *(float *)(iVar7 + 0xe4) - *(float *)(iVar7 + -0x4df8 + iVar13 * 8);
            fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
          }
          if (*(float *)(iVar7 + 0x8c) * *(float *)(iVar7 + 0x8c) <= fVar19) goto LAB_1010729e;
          psVar2 = (short *)(iVar7 + -0xb04 + iVar13 * 2);
          *psVar2 = *psVar2 + 1;
        }
        *(double *)(iVar7 + -0x4dd0 + iVar13 * 8) = dVar4;
        *(undefined8 *)(iVar7 + -0x4df8 + iVar13 * 8) = *(undefined8 *)(iVar7 + 0xe4);
        *local_38 = *(short *)(iVar7 + -0xb04 + iVar13 * 2);
        *(undefined4 *)(iVar7 + -0x4d24 + iVar13 * 8) = 0;
        *(undefined4 *)(iVar7 + -0x4d20 + iVar13 * 8) = 0;
        *(undefined4 *)(iVar7 + -0x209c + iVar13 * 4) = 0;
      }
    }
    *(bool *)(iVar7 + -0x19 + iVar14) = *local_38 == 2;
    if (*pcVar12 == '\x01') {
      *(undefined1 *)(iVar7 + 0x2041) = 0;
    }
    iVar15 = iVar15 + 1;
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + 1;
    iVar11 = iVar11 + 2;
    if (iVar13 == 0xb1d) {
      return;
    }
  } while( true );
}

