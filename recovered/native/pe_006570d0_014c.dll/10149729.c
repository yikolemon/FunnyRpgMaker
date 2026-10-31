/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149729 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10149729(float *param_1,int param_2,int param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  float *extraout_ECX_02;
  float *pfVar11;
  uint uVar12;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  
  iVar9 = DAT_1039d74c;
  FUN_10103c09(param_3);
  if (*(int *)(iVar9 + 0x2394) != param_3) {
    return 0;
  }
  *(undefined1 *)(iVar9 + 0x23c0) = 0;
  *(undefined1 *)(iVar9 + 0x239c) = 0;
  pfVar11 = extraout_ECX;
  if (*(char *)(iVar9 + 0x2399) == '\x01') {
    cVar10 = FUN_10113fae(0,0xbf800000);
    if (cVar10 == '\0') {
      pfVar11 = extraout_ECX_00;
      if (*(char *)(iVar9 + 0x2399) == '\0') goto LAB_101497a0;
      goto LAB_101497a9;
    }
    FUN_10149c98();
    pfVar11 = extraout_ECX_01;
  }
  else {
LAB_101497a0:
    if (*(char *)(iVar9 + 0x2398) == '\x01') {
LAB_101497a9:
      if (*(char *)(iVar9 + 0xec) == '\0') {
        FUN_10149ce7();
        pfVar11 = extraout_ECX_02;
      }
    }
  }
  if (*(char *)(iVar9 + 0x2398) != '\x01') {
    return 0;
  }
  fVar18 = (float)*(undefined8 *)(param_2 + 0x154);
  fVar13 = (float)*(undefined8 *)(iVar9 + 0x23a4) + fVar18;
  fVar19 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x154) >> 0x20);
  fVar17 = (float)((ulonglong)*(undefined8 *)(iVar9 + 0x23a4) >> 0x20) + fVar19;
  fVar18 = (float)*(undefined8 *)(iVar9 + 0x23ac) + fVar18;
  fVar19 = (float)((ulonglong)*(undefined8 *)(iVar9 + 0x23ac) >> 0x20) + fVar19;
  fVar23 = *(float *)(iVar9 + 0xe4);
  fVar20 = *(float *)(iVar9 + 0xe8);
  fVar15 = fVar23;
  fVar16 = fVar20;
  if ((param_4 >> 0xb & 1) != 0) {
    fVar16 = param_1[1];
    if ((param_1[1] <= fVar20) && (fVar16 = param_1[3], fVar20 <= param_1[3])) {
      fVar16 = fVar20;
    }
    pfVar11 = param_1;
    fVar15 = *param_1;
    if ((*param_1 <= fVar23) && (fVar15 = param_1[2], fVar23 <= param_1[2])) {
      fVar15 = fVar23;
    }
  }
  fVar24 = (float)(~-(uint)(fVar13 < fVar18) & (uint)fVar18 |
                  (uint)fVar13 & -(uint)(fVar13 < fVar18));
  fVar26 = (float)(~-(uint)(fVar17 < fVar19) & (uint)fVar19 |
                  (uint)fVar17 & -(uint)(fVar17 < fVar19));
  fVar27 = (float)(~-(uint)(fVar18 <= fVar13) & (uint)fVar18 |
                  (uint)fVar13 & -(uint)(fVar18 <= fVar13));
  fVar19 = (float)(~-(uint)(fVar19 <= fVar17) & (uint)fVar19 |
                  (uint)fVar17 & -(uint)(fVar19 <= fVar17));
  *(float *)(iVar9 + 0x23f4) = fVar24;
  *(float *)(iVar9 + 0x23f8) = fVar26;
  *(float *)(iVar9 + 0x23fc) = fVar27;
  *(float *)(iVar9 + 0x2400) = fVar19;
  fVar23 = (float)(~-(uint)(fVar13 < fVar15) & (uint)fVar15 |
                  (uint)fVar13 & -(uint)(fVar13 < fVar15));
  fVar18 = (float)(~-(uint)(fVar17 < fVar16) & (uint)fVar16 |
                  (uint)fVar17 & -(uint)(fVar17 < fVar16));
  fVar20 = (float)(~-(uint)(fVar15 <= fVar13) & (uint)fVar15 |
                  (uint)fVar13 & -(uint)(fVar15 <= fVar13));
  fVar16 = (float)(~-(uint)(fVar16 <= fVar17) & (uint)fVar16 |
                  (uint)fVar17 & -(uint)(fVar16 <= fVar17));
  *(float *)(iVar9 + 0x2404) = fVar23;
  *(float *)(iVar9 + 0x2408) = fVar18;
  *(float *)(iVar9 + 0x240c) = fVar20;
  *(float *)(iVar9 + 0x2410) = fVar16;
  uVar8 = _UNK_102b8bfc;
  uVar7 = _UNK_102b8bf8;
  uVar6 = _UNK_102b8bf4;
  if ((param_4 & 0xc0) == 0) {
    return 1;
  }
  *(undefined4 *)(iVar9 + 0x23e4) = _DAT_102b8bf0;
  *(undefined4 *)(iVar9 + 0x23e8) = uVar6;
  *(undefined4 *)(iVar9 + 0x23ec) = uVar7;
  *(undefined4 *)(iVar9 + 0x23f0) = uVar8;
  *(undefined4 *)(iVar9 + 0x23d4) = *(undefined4 *)(iVar9 + 0x23e4);
  *(undefined4 *)(iVar9 + 0x23d8) = *(undefined4 *)(iVar9 + 0x23e8);
  *(undefined4 *)(iVar9 + 0x23dc) = *(undefined4 *)(iVar9 + 0x23ec);
  *(undefined4 *)(iVar9 + 0x23e0) = *(undefined4 *)(iVar9 + 0x23f0);
  auVar3._4_4_ = -(uint)(fVar18 < fVar26);
  auVar3._0_4_ = -(uint)(fVar23 < fVar24);
  auVar3._8_4_ = -(uint)(fVar20 < fVar27);
  auVar3._12_4_ = -(uint)(fVar16 < fVar19);
  uVar12 = movmskps(pfVar11,auVar3);
  local_e0 = fVar16;
  if ((uVar12 & 8) == 0) {
    local_e0 = fVar19;
  }
  local_e4 = fVar20;
  if ((uVar12 & 4) == 0) {
    local_e4 = fVar27;
  }
  local_d8 = fVar18;
  if ((uVar12 & 2) == 0) {
    local_d8 = fVar26;
  }
  local_dc = fVar23;
  if ((uVar12 & 1) == 0) {
    local_dc = fVar24;
  }
  pfVar11 = (float *)(iVar9 + 0x23d4);
  pfVar1 = (float *)(iVar9 + 0x23e4);
  fVar15 = DAT_102b89b0;
  fVar13 = DAT_102b89b0;
  fVar17 = DAT_102b89b4;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    fVar2 = local_dc;
    fVar21 = local_d8;
    fVar25 = (float)(~-(uint)(fVar26 <= fVar18) & (uint)fVar26 |
                    (uint)fVar18 & -(uint)(fVar26 <= fVar18));
    fVar22 = (float)(~-(uint)(fVar24 <= fVar23) & (uint)fVar24 |
                    (uint)fVar23 & -(uint)(fVar24 <= fVar23));
    if (!bVar5) {
      fVar2 = local_e4;
      fVar21 = local_e0;
      fVar25 = (float)(~-(uint)(fVar19 <= fVar16) & (uint)fVar19 |
                      (uint)fVar16 & -(uint)(fVar19 <= fVar16));
      fVar22 = (float)(~-(uint)(fVar27 <= fVar20) & (uint)fVar27 |
                      (uint)fVar20 & -(uint)(fVar27 <= fVar20));
    }
    if ((fVar2 != fVar22) || (NAN(fVar2) || NAN(fVar22))) {
      fVar14 = *pfVar11;
      if (fVar2 < *pfVar11) {
        *pfVar11 = fVar2;
        fVar14 = fVar2;
      }
      fVar28 = *(float *)(iVar9 + 0x23dc);
      if (*(float *)(iVar9 + 0x23dc) < fVar2) {
        *(float *)(iVar9 + 0x23dc) = fVar2;
        fVar28 = fVar2;
      }
      if (fVar22 < fVar14) {
        *pfVar11 = fVar22;
      }
      if (fVar28 < fVar22) {
        *(float *)(iVar9 + 0x23dc) = fVar22;
      }
    }
    if ((fVar21 != fVar25) || (NAN(fVar21) || NAN(fVar25))) {
      if (fVar21 < fVar17) {
        *(float *)(iVar9 + 0x23e8) = fVar21;
        fVar17 = fVar21;
      }
      bVar4 = fVar15 < fVar21;
      fVar15 = fVar13;
      if (bVar4) {
        *(float *)(iVar9 + 0x23f0) = fVar21;
        fVar15 = fVar21;
      }
      if (fVar25 < fVar17) {
        *(float *)(iVar9 + 0x23e8) = fVar25;
        fVar17 = fVar25;
      }
      fVar13 = fVar15;
      if (fVar15 < fVar25) {
        *(float *)(iVar9 + 0x23f0) = fVar25;
        fVar15 = fVar25;
        fVar13 = fVar25;
      }
    }
    bVar4 = false;
  } while (bVar5);
  if ((char)param_4 < '\0') {
    if ((fVar24 == fVar23) && (!NAN(fVar24) && !NAN(fVar23))) {
      if ((fVar27 == fVar20) && (!NAN(fVar27) && !NAN(fVar20))) goto LAB_10149b69;
    }
    fVar15 = fVar18;
    if (fVar26 <= fVar18) {
      fVar15 = fVar26;
    }
    fVar13 = *(float *)(iVar9 + 0x23d8);
    if (fVar15 < *(float *)(iVar9 + 0x23d8)) {
      *(float *)(iVar9 + 0x23d8) = fVar15;
      fVar13 = fVar15;
    }
    fVar17 = fVar16;
    if (fVar16 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar21 = *(float *)(iVar9 + 0x23e0);
    if (*(float *)(iVar9 + 0x23e0) < fVar15) {
      *(float *)(iVar9 + 0x23e0) = fVar15;
      fVar21 = fVar15;
    }
    if (fVar17 < fVar13) {
      *(float *)(iVar9 + 0x23d8) = fVar17;
    }
    if (fVar21 < fVar17) {
      *(float *)(iVar9 + 0x23e0) = fVar17;
    }
  }
LAB_10149b69:
  if ((fVar26 == fVar18) && (!NAN(fVar26) && !NAN(fVar18))) {
    if ((fVar19 == fVar16) && (!NAN(fVar19) && !NAN(fVar16))) goto LAB_10149bd1;
  }
  if (fVar24 <= fVar23) {
    fVar23 = fVar24;
  }
  fVar16 = DAT_102b89b4;
  if (fVar23 < DAT_102b89b4) {
    *pfVar1 = fVar23;
    fVar16 = fVar23;
  }
  if (fVar20 <= fVar27) {
    fVar20 = fVar27;
  }
  fVar15 = DAT_102b89b0;
  if (DAT_102b89b0 < fVar23) {
    *(float *)(iVar9 + 0x23ec) = fVar23;
    fVar15 = fVar23;
  }
  if (fVar20 < fVar16) {
    *pfVar1 = fVar20;
  }
  if (fVar15 < fVar20) {
    *(float *)(iVar9 + 0x23ec) = fVar20;
  }
LAB_10149bd1:
  *(float *)(iVar9 + 0x23c4) = *pfVar11;
  *(undefined4 *)(iVar9 + 0x23c8) = *(undefined4 *)(iVar9 + 0x23d8);
  *(undefined4 *)(iVar9 + 0x23cc) = *(undefined4 *)(iVar9 + 0x23dc);
  *(undefined4 *)(iVar9 + 0x23d0) = *(undefined4 *)(iVar9 + 0x23e0);
  FUN_10149d24(pfVar1);
  fVar23 = *(float *)(iVar9 + 0x23c4);
  fVar20 = *(float *)(iVar9 + 0x23cc);
  if (fVar23 <= fVar20) {
    fVar16 = *(float *)(iVar9 + 0x23c8);
    fVar15 = *(float *)(iVar9 + 0x23d0);
    if ((fVar16 <= fVar15) &&
       (((((fVar23 < *(float *)(param_2 + 0x28c) || (fVar16 < *(float *)(param_2 + 0x290))) ||
          (*(float *)(param_2 + 0x294) <= fVar23)) ||
         ((*(float *)(param_2 + 0x298) <= fVar16 || (fVar20 < *(float *)(param_2 + 0x28c))))) ||
        ((fVar15 < *(float *)(param_2 + 0x290) ||
         ((*(float *)(param_2 + 0x294) <= fVar20 || (*(float *)(param_2 + 0x298) <= fVar15)))))))) {
      *(undefined1 *)(iVar9 + 0x23c0) = 1;
    }
  }
  if (*(char *)(iVar9 + 0x23c0) == '\x01') {
    if (*(int *)(iVar9 + 0x2308) != 0) {
      FUN_10162f7f(*(int *)(iVar9 + 0x2308),iVar9 + 0x23c4);
      return 1;
    }
    return 1;
  }
  return 1;
}

