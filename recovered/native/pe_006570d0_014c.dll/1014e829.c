/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e829 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_1014e829(int ****param_1)

{
  undefined4 uVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  float ***pppfVar10;
  float **ppfVar11;
  float ***pppfVar12;
  char cVar13;
  int iVar14;
  int ****ppppiVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  int ***pppiVar22;
  float ***pppfVar23;
  int ***pppiVar24;
  bool bVar25;
  bool bVar26;
  float10 fVar27;
  int ***pppiVar28;
  float fVar29;
  int ****local_f0;
  float ***local_ec;
  float **local_e8;
  undefined1 *local_e4;
  float **local_e0;
  float ***local_dc;
  int *local_d8;
  int local_d4;
  float **ppfStack_d0;
  float ***pppfStack_cc;
  float local_c8;
  int local_c4;
  float ***local_c0;
  uint uStack_bc;
  undefined1 *puStack_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  float fStack_9c;
  float ***local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float **local_88;
  float **local_84;
  float **ppfStack_80;
  float **ppfStack_7c;
  float **ppfStack_78;
  float ***pppfStack_74;
  float fStack_70;
  float fStack_6c;
  float *pfStack_68;
  float **ppfStack_64;
  float fStack_60;
  float ***pppfStack_5c;
  float ***pppfStack_58;
  float fStack_54;
  int iStack_50;
  undefined8 uStack_4c;
  float **local_44;
  float afStack_40 [3];
  int local_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  int local_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_f0;
  local_d4 = DAT_1039d74c;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  local_84 = (float **)((float)param_1[0xe] - (float)param_1[0xc]);
  local_88 = (float **)param_1[0x10];
  param_1[0x10] = (int ***)local_84;
  local_24 = 0;
  fStack_20 = 0.0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_34 = 0;
  fStack_30 = 0.0;
  uStack_2c = 0;
  fStack_28 = 0.0;
  local_44 = (float **)0x0;
  afStack_40[0] = 0.0;
  afStack_40[1] = 0.0;
  afStack_40[2] = 0.0;
  pppiVar22 = param_1[1];
  if ((int)pppiVar22 < 1) {
    local_b0 = 0.0;
    local_e0 = (float **)0x0;
  }
  else {
    iVar14 = 0;
    local_e0 = (float **)0x0;
    local_b0 = 0.0;
    pppiVar24 = (int ***)0x0;
    do {
      pppiVar28 = param_1[3];
      piVar16 = (int *)((int)pppiVar28 + iVar14);
      if ((*(int *)((int)pppiVar28 + iVar14 + 0xc) < (int)param_1[0xb]) ||
         (*(char *)((int)pppiVar28 + iVar14 + 0x2c) == '\x01')) {
        pppiVar28 = (int ***)*piVar16;
        if (param_1[9] == pppiVar28) {
          param_1[9] = (int ***)0x0;
          pppiVar28 = (int ***)*piVar16;
        }
        if (param_1[6] == pppiVar28) {
          param_1[6] = (int ***)0x0;
          pppiVar28 = (int ***)*piVar16;
        }
        if (param_1[7] == pppiVar28) {
          param_1[7] = (int ***)0x0;
        }
      }
      else {
        if (pppiVar24 != (int ***)local_e0) {
          ppiVar2 = (int **)piVar16[9];
          ppiVar3 = (int **)piVar16[10];
          ppiVar5 = (int **)piVar16[0xb];
          pppiVar22 = pppiVar28 + (int)local_e0 * 0xc + 8;
          *pppiVar22 = (int **)piVar16[8];
          pppiVar22[1] = ppiVar2;
          pppiVar22[2] = ppiVar3;
          pppiVar22[3] = ppiVar5;
          ppiVar2 = (int **)*piVar16;
          ppiVar3 = (int **)piVar16[1];
          ppiVar5 = (int **)piVar16[2];
          ppiVar6 = (int **)piVar16[3];
          ppiVar7 = (int **)piVar16[5];
          ppiVar8 = (int **)piVar16[6];
          ppiVar9 = (int **)piVar16[7];
          pppiVar22 = pppiVar28 + (int)local_e0 * 0xc + 4;
          *pppiVar22 = (int **)piVar16[4];
          pppiVar22[1] = ppiVar7;
          pppiVar22[2] = ppiVar8;
          pppiVar22[3] = ppiVar9;
          pppiVar28 = pppiVar28 + (int)local_e0 * 0xc;
          *pppiVar28 = ppiVar2;
          pppiVar28[1] = ppiVar3;
          pppiVar28[2] = ppiVar5;
          pppiVar28[3] = ppiVar6;
          pppiVar28 = param_1[3];
        }
        *(short *)((int)pppiVar28 + (int)local_e0 * 0x30 + 0x2a) = (short)local_e0;
        ppiVar2 = pppiVar28[(int)local_e0 * 0xc + 1];
        iVar17 = ((char)ppiVar2 < '\0') + 1;
        if (((uint)ppiVar2 & 0x40) != 0) {
          iVar17 = 0;
        }
        if (0 < (int)local_e0) {
          ppiVar3 = param_1[3][(int)local_e0 * 0xc + -0xb];
          local_98 = (float ***)(CONCAT31(local_98._1_3_,(char)((uint)ppiVar2 >> 6)) & 0xffffff03);
          bVar19 = ((uint)ppiVar3 & 0x40) == 0 & (byte)local_98;
          bVar25 = ((uint)ppiVar3 & 0xc0) == 0x80;
          local_98 = (float ***)CONCAT31(local_98._1_3_,bVar25);
          local_d8 = (int *)((uint)ppiVar2 & 0xc0);
          bVar19 = bVar19 | local_b0._0_1_;
          bVar25 = local_d8 != (int *)0x80 && bVar25;
          local_b0 = (float)CONCAT31((int3)(CONCAT22((short)((uint)ppiVar3 >> 0x10),
                                                     CONCAT11(bVar25,bVar19)) >> 8),bVar19 | bVar25)
          ;
        }
        (&local_44)[iVar17 * 4] = (float **)((int)(&local_44)[iVar17 * 4] + 1);
        local_e0 = (float **)((int)local_e0 + 1);
        pppiVar22 = param_1[1];
      }
      pppiVar24 = (int ***)((int)pppiVar24 + 1);
      iVar14 = iVar14 + 0x30;
    } while ((int)pppiVar24 < (int)pppiVar22);
  }
  local_dc = (float ***)param_1;
  if (pppiVar22 != (int ***)local_e0) {
    pppiVar22 = param_1[2];
    if ((int)pppiVar22 < (int)local_e0) {
      if (pppiVar22 == (int ***)0x0) {
        pppiVar22 = (int ***)0x8;
      }
      else {
        pppiVar22 = (int ***)((int)pppiVar22 / 2 + (int)pppiVar22);
      }
      if ((int)pppiVar22 <= (int)local_e0) {
        pppiVar22 = (int ***)local_e0;
      }
      local_f0 = (int ****)((int)pppiVar22 * 0x30);
      ppppiVar15 = (int ****)FUN_100fa1fa();
      param_1 = (int ****)local_dc;
      if ((int ***)local_dc[3] != (int ***)0x0) {
        local_e8 = (float **)((int)local_dc[1] * 0x30);
        local_f0 = ppppiVar15;
        local_ec = (float ***)local_dc[3];
        FUN_1025b2d0();
        local_f0 = (int ****)param_1[3];
        FUN_100fa2cb();
      }
      param_1[3] = (int ***)ppppiVar15;
      param_1[2] = pppiVar22;
    }
    param_1[1] = (int ***)local_e0;
  }
  iVar14 = local_d4;
  if ((~SUB41(local_b0,0) & 1) == 0 && (int ***)0x1 < local_e0) {
    local_f0 = (int ****)param_1[3];
    local_ec = (float ***)local_e0;
    local_e4 = &LAB_10152819;
    local_e8 = (float **)0x30;
    FUN_1026fb00();
  }
  iVar17 = local_24;
  ppfVar11 = local_44;
  ppppiVar15 = (int ****)local_dc;
  local_c0 = *(float ****)(iVar14 + 0xd24);
  local_c4 = local_34;
  local_c8 = (float)local_c0;
  if (local_34 + local_24 < 1) {
    local_c8 = 0.0;
  }
  if ((int)local_44 < 1) {
    local_c8 = 0.0;
  }
  afStack_40[2] = local_c8;
  fStack_9c = (float)local_c0;
  if (local_24 < 1) {
    fStack_9c = 0.0;
  }
  if (local_34 < 1) {
    fStack_9c = 0.0;
  }
  fStack_28 = fStack_9c;
  pppiVar22 = (int ***)local_dc[8];
  if (pppiVar22 != (int ***)0x0) {
    local_dc[8] = (float **)0x0;
  }
  pppiVar24 = (int ***)local_dc[7];
  if (pppiVar24 != (int ***)0x0) {
    local_dc[6] = (float **)pppiVar24;
    local_dc[7] = (float **)0x0;
    pppiVar22 = pppiVar24;
  }
  if ((int ***)local_dc[0x1d] != (int ***)0x0) {
    local_f0 = (int ****)local_dc;
    cVar13 = FUN_1014fa09();
    if ((cVar13 != '\0') && (ppppiVar15[0x1d] == ppppiVar15[6])) {
      pppiVar22 = ppppiVar15[0x1d];
    }
    ppppiVar15[0x1d] = (int ***)0x0;
  }
  if ((((uint)ppppiVar15[4] & 4) != 0) && (piVar16 = (int *)FUN_1015285a(), piVar16 != (int *)0x0))
  {
    pppiVar22 = (int ***)*piVar16;
    ppppiVar15[6] = pppiVar22;
  }
  iStack_50 = 0;
  pppfStack_cc = (float ***)(iVar17 + (int)ppfVar11);
  uStack_4c._0_4_ = (int)pppfStack_cc;
  uStack_4c._4_4_ = (int ***)ppfVar11;
  pppiVar24 = ppppiVar15[1];
  iVar14 = *(int *)(local_d4 + 0x238c);
  iVar17 = local_d4;
  ppfStack_d0 = (float **)pppiVar22;
  if (iVar14 < (int)pppiVar24) {
    if (iVar14 == 0) {
      pppiVar22 = (int ***)0x8;
    }
    else {
      pppiVar22 = (int ***)(iVar14 / 2 + iVar14);
    }
    if ((int)pppiVar22 <= (int)pppiVar24) {
      pppiVar22 = pppiVar24;
    }
    local_f0 = (int ****)((int)pppiVar22 * 0xc);
    ppppiVar15 = (int ****)FUN_100fa1fa();
    iVar17 = local_d4;
    if (*(int ****)(local_d4 + 0x2390) != (int ***)0x0) {
      local_e8 = (float **)(*(int *)(local_d4 + 0x2388) * 0xc);
      local_f0 = ppppiVar15;
      local_ec = (float ***)*(int ****)(local_d4 + 0x2390);
      FUN_1025b2d0();
      local_f0 = *(int *****)(iVar17 + 0x2390);
      FUN_100fa2cb();
    }
    *(int *****)(iVar17 + 0x2390) = ppppiVar15;
    *(int ****)(iVar17 + 0x238c) = pppiVar22;
    ppppiVar15 = (int ****)local_dc;
  }
  *(int ****)(iVar17 + 0x2388) = pppiVar24;
  puStack_b8 = DAT_1028b430;
  if (((uint)ppppiVar15[4] & 0x80) != 0) {
    puStack_b8 = *(undefined1 **)(iVar17 + 0xd70);
  }
  if ((int)ppppiVar15[1] < 1) {
    uStack_bc = 0;
    local_d8 = (int *)0x0;
    bVar25 = false;
  }
  else {
    iVar14 = -1;
    fVar20 = 0.0;
    local_d8 = (int *)0x0;
    uStack_bc = 0;
    pppiVar22 = (int ***)0x0;
    do {
      pppiVar24 = ppppiVar15[3];
      local_ec = (float ***)((int)pppiVar24 + (int)fVar20);
      if (((local_d8 == (int *)0x0) || (local_d8[4] < *(int *)((int)pppiVar24 + (int)fVar20 + 0x10))
          ) && ((*(byte *)((int)pppiVar24 + (int)fVar20 + 6) & 0x20) == 0)) {
        local_d8 = (int *)local_ec;
      }
      pppiVar28 = (int ***)*local_ec;
      local_98 = (float ***)CONCAT31(local_98._1_3_,pppiVar28 == (int ***)local_dc[6]);
      if (((int ***)ppfStack_d0 == (int ***)0x0) &&
         (ppfStack_d0 = (float **)pppiVar28, *(int ****)(local_d4 + 0x2204) != pppiVar28)) {
        ppfStack_d0 = (float **)0x0;
      }
      local_f0 = (int ****)local_dc;
      local_e0 = (float **)pppiVar22;
      local_b0 = (float)iVar14;
      local_ec = (float ***)FUN_1014f6a8();
      uVar18 = *(uint *)((int)pppiVar24 + (int)fVar20 + 4);
      local_f0 = *(int *****)((int)pppiVar24 + (int)fVar20 + 0x20);
      if ((float)local_f0 < 0.0) {
        local_e8 = (float **)(uint)((uVar18 & 0x100001) != 0x100000);
        local_f0 = (int ****)&pppfStack_58;
        FUN_10150b5b();
        uVar18 = *(uint *)((int)pppiVar24 + (int)fVar20 + 4);
        local_f0 = (int ****)pppfStack_58;
      }
      *(int *****)((int)pppiVar24 + (int)fVar20 + 0x1c) = local_f0;
      fStack_b4 = fVar20;
      if ((uVar18 >> 0x15 & 1) == 0) {
        local_ec = *(float ****)(local_d4 + 0xd6c);
        fVar27 = (float10)FUN_100fdbca();
        local_f0 = (int ****)(float)fVar27;
        *(int *****)((int)pppiVar24 + (int)fVar20 + 0x1c) = local_f0;
        uVar18 = *(uint *)((int)pppiVar24 + (int)fVar20 + 4);
        pppfStack_5c = (float ***)local_f0;
      }
      ppfVar11 = local_e0;
      iVar14 = ((char)uVar18 < '\0') + 1;
      if ((uVar18 & 0x40) != 0) {
        iVar14 = 0;
      }
      bVar25 = (float)iVar14 != local_b0;
      local_b0 = (float)local_c0;
      if (bVar25) {
        local_b0 = 0.0;
      }
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_bc = CONCAT31((int3)(uStack_bc >> 8),(byte)uStack_bc | (byte)local_98);
      local_ec = (float ***)puStack_b8;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_98 = (float ***)local_f0;
      fVar27 = (float10)FUN_100ea38a();
      fVar20 = fStack_b4;
      fStack_60 = (float)fVar27;
      *(ulonglong *)(afStack_40 + iVar14 * 4) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(afStack_40 + iVar14 * 4) >> 0x20) +
                    local_b0 + fStack_60,
                    (float)*(undefined8 *)(afStack_40 + iVar14 * 4) + local_b0 + (float)local_98);
      iVar17 = (&iStack_50)[iVar14];
      (&iStack_50)[iVar14] = iVar17 + 1;
      iVar4 = *(int *)(local_d4 + 0x2390);
      *(float ***)(iVar4 + iVar17 * 0xc) = ppfVar11;
      uVar1 = *(undefined4 *)((int)pppiVar24 + (int)fStack_b4 + 0x1c);
      *(undefined4 *)(iVar4 + 8 + iVar17 * 0xc) = uVar1;
      *(undefined4 *)(iVar4 + 4 + iVar17 * 0xc) = uVar1;
      local_f0 = *(int *****)((int)pppiVar24 + (int)fStack_b4 + 0x1c);
      local_ec = (float ***)0x3f800000;
      fVar27 = (float10)FUN_100fdbca();
      *(float *)((int)pppiVar24 + (int)fVar20 + 0x18) = (float)fVar27;
      pppiVar22 = (int ***)((int)ppfVar11 + 1);
      fVar20 = (float)((int)fVar20 + 0x30);
      ppppiVar15 = (int ****)local_dc;
    } while ((int)pppiVar22 < (int)local_dc[1]);
    bVar25 = 1 < (int)local_dc[1];
  }
  pppfVar12 = pppfStack_cc;
  pppiVar24 = (int ***)ppfStack_d0;
  local_c0 = (float ***)(ppppiVar15 + 0xc);
  pppfStack_cc = (float ***)(ppppiVar15 + 0xe);
  pppiVar28 = (int ***)0x0;
  pppiVar22 = (int ***)0x0;
  iVar14 = 0xc;
  do {
    pppiVar28 = (int ***)((float)pppiVar28 +
                         *(float *)((int)&local_44 + iVar14) +
                         (float)*(undefined8 *)((int)&uStack_4c + iVar14));
    pppiVar22 = (int ***)((float)pppiVar22 +
                         *(float *)((int)&local_44 + iVar14) +
                         (float)((ulonglong)*(undefined8 *)((int)&uStack_4c + iVar14) >> 0x20));
    iVar14 = iVar14 + 0x10;
  } while (iVar14 != 0x3c);
  ppppiVar15[0x14] = pppiVar28;
  pppiVar28 = ppppiVar15[4];
  if (((uint)pppiVar28 >> 9 & 1) != 0) {
    pppiVar22 = ppppiVar15[0x13];
  }
  if ((bool)(bVar25 & (float)ppppiVar15[0xe] - (float)ppppiVar15[0xc] < (float)pppiVar22)) {
    bVar25 = ((uint)pppiVar28 & 0x280) != 0;
    bVar26 = ((uint)pppiVar28 & 0x10) == 0;
    pcStack_a0 = (char *)((int)ppppiVar15 + 0x7e);
    *(bool *)((int)ppppiVar15 + 0x7e) = bVar26 && bVar25;
    if (((bVar26 && bVar25) && (piVar16 = (int *)FUN_101529e4(), piVar16 != (int *)0x0)) &&
       (pppiVar24 = (int ***)*piVar16, (*(byte *)((int)piVar16 + 6) & 0x20) == 0)) {
      ppppiVar15[6] = pppiVar24;
    }
  }
  else {
    pcStack_a0 = (char *)((int)ppppiVar15 + 0x7e);
    *(undefined1 *)((int)ppppiVar15 + 0x7e) = 0;
  }
  if ((pppiVar24 == (int ***)0x0) && ((float)local_84 < (float)local_88)) {
    pppiVar24 = ppppiVar15[6];
  }
  fVar20 = afStack_40[0] + local_c8 + fStack_20 + 0.0;
  pppiVar22 = (int ***)((float)ppppiVar15[0xe] - (float)ppppiVar15[0xc]);
  if ((float)pppiVar22 <= fVar20) {
    pppiVar28 = (int ***)(fVar20 - (float)pppiVar22);
  }
  else {
    local_f0 = (int ****)
               ((fStack_30 + fStack_9c) -
               (((float)pppiVar22 - (afStack_40[0] + local_c8)) - (fStack_20 + 0.0)));
    local_ec = (float ***)0x0;
    local_e0 = (float **)pppiVar22;
    local_b0 = fVar20;
    fVar27 = (float10)FUN_100fdbca();
    pppiVar28 = (int ***)(float)fVar27;
    fVar20 = local_b0;
    pppiVar22 = (int ***)local_e0;
    ppfStack_64 = (float **)pppiVar28;
  }
  ppfStack_d0 = (float **)pppiVar24;
  if (((float)DAT_1028b430 <= (float)pppiVar28) &&
     (((uint)ppppiVar15[4] >> 8 & 1) != 0 ||
      ((char)ppppiVar15[4] < '\0' || (float)pppiVar22 <= fVar20))) {
    pppfVar23 = pppfVar12;
    pppfVar10 = (float ***)local_c4;
    if ((float)pppiVar22 <= fVar20) {
      pppfVar23 = (float ***)0x0;
      pppfVar10 = pppfVar12;
    }
    local_f0 = (int ****)((int)pppfVar23 * 0xc + *(int *)(local_d4 + 0x2390));
    local_e4 = puStack_b8;
    local_ec = pppfVar10;
    local_e8 = (float **)pppiVar28;
    FUN_101329c9();
    local_c4 = (int)pppfVar10;
    if (0 < (int)pppfVar10) {
      local_c4 = (int)pppfVar10 + (int)pppfVar23;
      iVar14 = (int)pppfVar23 * 0xc + 4;
      do {
        iVar17 = (int)*(float *)(*(int *)(local_d4 + 0x2390) + iVar14);
        if (-1 < iVar17) {
          pppiVar22 = (int ***)local_dc[3];
          iVar4 = *(int *)(*(int *)(local_d4 + 0x2390) + -4 + iVar14);
          local_ec = (float ***)(float)iVar17;
          local_f0 = (int ****)0x3f800000;
          fVar27 = (float10)FUN_100fdbca();
          pfStack_68 = (float *)(float)fVar27;
          iVar17 = ((char)pppiVar22[iVar4 * 0xc + 1] < '\0') + 1;
          if (((uint)pppiVar22[iVar4 * 0xc + 1] & 0x40) != 0) {
            iVar17 = 0;
          }
          afStack_40[iVar17 * 4] =
               afStack_40[iVar17 * 4] - ((float)pppiVar22[iVar4 * 0xc + 6] - (float)pfStack_68);
          pppiVar22[iVar4 * 0xc + 6] = (int **)pfStack_68;
        }
        pppfVar23 = (float ***)((int)pppfVar23 + 1);
        iVar14 = iVar14 + 0xc;
      } while ((int)pppfVar23 < local_c4);
    }
  }
  local_dc[0x13] = (float **)0x0;
  fVar20 = 0.0;
  iVar14 = 0;
  fVar21 = 0.0;
  do {
    if (iVar14 == 2) {
      local_ec = (float ***)(((float)*pppfStack_cc - (float)*local_c0) - fStack_20);
      local_f0 = (int ****)0x0;
      local_e0 = (float **)fVar20;
      fVar27 = (float10)FUN_100fdbca();
      local_ec = (float ***)local_e0;
      local_f0 = (int ****)(float)fVar27;
      fVar27 = (float10)FUN_100ea38a();
      fVar20 = (float)fVar27;
      fStack_6c = fVar20;
    }
    pppiVar22 = (int ***)(&local_44)[iVar14 * 4];
    if (0 < (int)pppiVar22) {
      iVar17 = (int)fVar21 * 0x30 + 0x24;
      pppiVar24 = (int ***)0x0;
      do {
        pppiVar28 = (int ***)local_dc[3];
        *(float *)((int)pppiVar28 + iVar17 + -0x10) = fVar20;
        *(undefined4 *)((int)pppiVar28 + iVar17) = 0xffffffff;
        fVar29 = 0.0;
        if ((int)pppiVar24 < (int)pppiVar22 + -1) {
          fVar29 = *(float *)(local_d4 + 0xd24);
        }
        fVar20 = fVar20 + fVar29 + *(float *)((int)pppiVar28 + iVar17 + -0xc);
        pppiVar24 = (int ***)((int)pppiVar24 + 1);
        iVar17 = iVar17 + 0x30;
      } while (pppiVar22 != pppiVar24);
    }
    fStack_b4 = afStack_40[iVar14 * 4 + 2];
    local_f0 = (int ****)(afStack_40[iVar14 * 4] + fStack_b4);
    local_ec = (float ***)0x0;
    local_e0 = (float **)fVar20;
    local_b0 = fVar21;
    local_98 = &local_44 + iVar14 * 4;
    fVar27 = (float10)FUN_100fdbca();
    iVar17 = local_d4;
    pppfVar12 = local_dc;
    fStack_70 = (float)fVar27;
    local_dc[0x13] = (float **)(fStack_70 + (float)local_dc[0x13]);
    fVar20 = (float)local_e0 + fStack_b4;
    fVar21 = (float)((int)local_b0 + (int)pppiVar22);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 3);
  if ((int)local_dc[0x27] < 0) {
    local_f0 = (int ****)0x0;
    ppppiVar15 = (int ****)FUN_100fa1fa();
    if ((int ****)pppfVar12[0x28] != (int ****)0x0) {
      local_e8 = pppfVar12[0x26];
      local_f0 = ppppiVar15;
      local_ec = (float ***)pppfVar12[0x28];
      FUN_1025b2d0();
      local_f0 = (int ****)pppfVar12[0x28];
      FUN_100fa2cb();
    }
    pppfVar12[0x28] = (float **)ppppiVar15;
    pppfVar12[0x27] = (float **)0x0;
  }
  pppfVar12[0x26] = (float **)0x0;
  if ((uStack_bc & 1) == 0 && *(int *)(iVar17 + 4) <= (int)pppfVar12[0xb] + 1) {
    pppfVar12[6] = (float **)0x0;
  }
  else {
    pppiVar22 = (int ***)pppfVar12[6];
    if (pppiVar22 != (int ***)0x0) goto LAB_1014f2f6;
  }
  pppiVar22 = (int ***)0x0;
  if (((int ***)pppfVar12[7] == (int ***)0x0) && (local_d8 != (int *)0x0)) {
    pppiVar22 = (int ***)*local_d8;
    pppfVar12[6] = (float **)pppiVar22;
    ppfStack_d0 = (float **)pppiVar22;
  }
LAB_1014f2f6:
  pppfVar12[9] = (float **)pppiVar22;
  *(undefined1 *)(pppfVar12 + 0x1f) = 0;
  iVar14 = *(int *)(iVar17 + 0x221c);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x430) != 0)) &&
     (*(int *****)(*(int *)(iVar14 + 0x430) + 0x30) == (int ****)pppfVar12)) {
    ppfStack_d0 = *(float ***)(iVar14 + 0xb8);
    pppfVar12[9] = ppfStack_d0;
  }
  if ((int ***)ppfStack_d0 == (int ***)0x0) {
    if (*pcStack_a0 == '\x01') {
      local_ec = pppfStack_cc;
      local_f0 = (int ****)local_c0;
      local_e8 = (float **)0x1;
      cVar13 = FUN_10102f3a();
      if (cVar13 != '\0') {
        local_f0 = *(int *****)(iVar17 + 0x14cc);
        local_ec = (float ***)0x0;
        cVar13 = FUN_1010296d();
        if (cVar13 != '\0') {
          local_e0 = *(float ***)(iVar17 + 0xf4 + (uint)(*(byte *)(iVar17 + 0xb72) ^ 1) * 4);
          ppppiVar15 = (int ****)(*(byte *)(iVar17 + 0xb72) + 0x295);
          local_ec = (float ***)pppfVar12[5];
          local_f0 = ppppiVar15;
          cVar13 = FUN_10113c9d();
          if (cVar13 != '\0') {
            fVar20 = 0.0;
            if (((float)local_e0 != 0.0) || (NAN((float)local_e0))) {
              FUN_10152dac();
              fVar20 = (fVar20 * (float)local_e0) / _DAT_102b90d0;
              pppfVar12[0x17] = (float **)0x0;
              pppiVar22 = (int ***)(fVar20 + (float)pppfVar12[0x16]);
              FUN_10152dc6();
              pppfVar12[0x16] = (float **)pppiVar22;
            }
          }
          local_ec = (float ***)pppfVar12[5];
          local_e8 = (float **)0x0;
          local_f0 = ppppiVar15;
          FUN_101143b4();
        }
      }
    }
  }
  else {
    local_f0 = (int ****)&local_44;
    FUN_10152c9a();
  }
  pppiVar22 = (int ***)pppfVar12[0x15];
  FUN_10152dc6();
  pppfVar12[0x15] = (float **)pppiVar22;
  pppiVar22 = (int ***)pppfVar12[0x16];
  FUN_10152dc6();
  pppfVar12[0x16] = (float **)pppiVar22;
  if (((float)pppfVar12[0x15] != (float)pppiVar22) ||
     (NAN((float)pppfVar12[0x15]) || NAN((float)pppiVar22))) {
    local_ec = (float ***)(*(float *)(iVar17 + 0x1228) * _DAT_102b9654);
    local_f0 = (int ****)pppfVar12[0x18];
    fVar27 = (float10)FUN_100fdbca();
    local_f0 = (int ****)(float)fVar27;
    pppfVar12[0x18] = (float **)local_f0;
    local_ec = (float ***)
               ((float)((uint)((float)pppfVar12[0x16] - (float)pppfVar12[0x15]) & _DAT_1028b410) /
               DAT_102b8d94);
    pppfStack_74 = (float ***)local_f0;
    fVar27 = (float10)FUN_100fdbca();
    ppfStack_78 = (float **)(float)fVar27;
    pppfVar12[0x18] = ppfStack_78;
    if (((int)pppfVar12[0xb] + 1 < *(int *)(iVar17 + 4)) ||
       (*(float *)(iVar17 + 0x1228) * DAT_102b710c < (float)pppfVar12[0x17])) {
      pppiVar22 = (int ***)pppfVar12[0x16];
    }
    else {
      fVar20 = (float)ppfStack_78 * *(float *)(iVar17 + 0x48);
      pppiVar22 = (int ***)pppfVar12[0x15];
      local_ec = (float ***)pppfVar12[0x16];
      if ((float)local_ec <= (float)pppiVar22) {
        if ((float)local_ec < (float)pppiVar22) {
          local_f0 = (int ****)((float)pppiVar22 - fVar20);
          fVar27 = (float10)FUN_100fdbca();
          pppiVar22 = (int ***)(float)fVar27;
          ppfStack_7c = (float **)pppiVar22;
        }
      }
      else {
        local_f0 = (int ****)(fVar20 + (float)pppiVar22);
        fVar27 = (float10)FUN_100ea38a();
        pppiVar22 = (int ***)(float)fVar27;
        ppfStack_80 = (float **)pppiVar22;
      }
    }
    pppfVar12[0x15] = (float **)pppiVar22;
  }
  else {
    pppfVar12[0x18] = (float **)0x0;
  }
  pppfVar12[0x19] = (float **)((float)pppfVar12[0xc] + afStack_40[0] + local_c8);
  pppfVar12[0x1a] = (float **)(((float)pppfVar12[0xe] - fStack_20) - fStack_9c);
  iVar14 = *(int *)(iVar17 + 0x14cc);
  *(undefined8 *)(iVar14 + 0x144) = *(undefined8 *)(pppfVar12 + 0xc);
  local_ec = (float ***)pppfVar12[0x23];
  fStack_54 = (float)pppfVar12[0xf] - (float)pppfVar12[0xd];
  pppfStack_58 = (float ***)pppfVar12[0x13];
  local_f0 = (int ****)&pppfStack_58;
  FUN_1010c810();
  local_ec = (float ***)((float)pppfVar12[0xc] + (float)pppfVar12[0x14]);
  local_f0 = *(int *****)(iVar14 + 0x164);
  fVar27 = (float10)FUN_100fdbca();
  *(float *)(iVar14 + 0x164) = (float)fVar27;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_f0)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

