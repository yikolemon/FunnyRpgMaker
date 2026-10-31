/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014cf5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1014cf5e(undefined4 param_1,char *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int *piVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  bool bVar18;
  float10 fVar19;
  float fVar20;
  undefined8 uVar21;
  float local_cc;
  int local_c8;
  float *local_c4;
  float local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [20];
  float local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar9 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_cc;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar8 = *(int *)(iVar9 + 0x14cc);
  uVar13 = 0;
  if (*(char *)(iVar8 + 0xfe) == '\0') {
    iVar4 = FUN_101021d4(param_1,0);
    local_c4 = (float *)FUN_10103f84(iVar4,0);
    uVar14 = (uint)((*(byte *)(iVar8 + 0xf) & 0x10) >> 4) << 0x18 | 0x10020145;
    iVar6 = *(int *)(iVar9 + 0x25fc);
    piVar5 = *(int **)(iVar9 + 0x2604);
    piVar11 = piVar5;
LAB_1014cfe6:
    local_b4 = iVar8;
    if (piVar11 < piVar5 + iVar6) goto code_r0x1014cfea;
    local_bc = iVar9;
    local_9c = uVar14;
    if (iVar6 == *(int *)(iVar9 + 0x2600)) {
      if (iVar6 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar6 / 2 + iVar6;
      }
      iVar16 = iVar6 + 1;
      if (iVar6 + 1 < iVar8) {
        iVar16 = iVar8;
      }
      piVar5 = (int *)FUN_100fa1fa(iVar16 * 4);
      iVar9 = local_bc;
      if (*(int *)(local_bc + 0x2604) != 0) {
        FUN_1025b2d0(piVar5,*(int *)(local_bc + 0x2604),*(int *)(local_bc + 0x25fc) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar9 + 0x2604));
      }
      *(int **)(iVar9 + 0x2604) = piVar5;
      *(int *)(iVar9 + 0x2600) = iVar16;
      iVar6 = *(int *)(iVar9 + 0x25fc);
    }
    piVar5[iVar6] = iVar4;
    *(int *)(iVar9 + 0x25fc) = *(int *)(iVar9 + 0x25fc) + 1;
    local_a8 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_1c,param_1,local_a8,0,0xbf800000);
    cVar2 = FUN_1014db19();
    local_c8 = CONCAT31(local_c8._1_3_,cVar2);
    if (cVar2 != '\0') {
      FUN_1011177d(0x2000,1);
    }
    iVar8 = local_b4;
    local_b0 = *(float *)(local_b4 + 0x144);
    local_cc = *(float *)(local_b4 + 0x148);
    FUN_101131fa(param_1);
    if (param_3 == '\0') {
      FUN_10111871(1);
    }
    iVar9 = local_bc;
    local_b8 = (uint)local_c4 & 0xff;
    if (*(int *)(iVar8 + 0x1f0) == 0) {
      *(float *)(iVar8 + 0x144) =
           (float)(int)(*(float *)(local_bc + 0xd1c) * DAT_102b70e0) + *(float *)(iVar8 + 0x144);
      FUN_100fd1ac(0xe,*(float *)(local_bc + 0xd1c) + *(float *)(local_bc + 0xd1c));
      local_cc = local_cc + *(float *)(iVar8 + 0x17c);
      local_c0 = (float)*(ushort *)(iVar8 + 0x1bc) + *(float *)(iVar8 + 0x144);
      uVar3 = FUN_10133727(&DAT_10356101,local_b8,0x400001,&local_1c);
      local_b8 = CONCAT31(local_b8._1_3_,uVar3);
      FUN_10118366(&DAT_1033b941,&DAT_1033b90e);
      FUN_100fd5ae(local_c0,local_cc,param_1,local_a8,0);
      FUN_100fd4c4(1);
      *(float *)(iVar8 + 0x144) =
           (float)(int)(*(float *)(iVar9 + 0xd1c) * DAT_102b8d58) + *(float *)(iVar8 + 0x144);
      local_20 = (local_cc - *(float *)(iVar9 + 0xd10)) + *(float *)(iVar8 + 0x94);
      local_24 = (local_b0 + DAT_102b8a50) - (float)(int)(DAT_102b70e0 * *(float *)(iVar9 + 0xd1c));
      uVar13 = extraout_EDX_00;
    }
    else {
      local_a4 = 0.0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        FUN_100fdb2e(local_84,param_2,0,0,0xbf800000);
        local_a4 = local_84[0];
      }
      fVar19 = (float10)FUN_1014c7f4(local_a4,local_1c,0,
                                     (float)(int)(*(float *)(local_bc + 0x1228) * DAT_102b8e98));
      local_ac = (float)fVar19;
      local_88 = local_ac;
      FUN_1010c3e4(local_84);
      fVar19 = (float10)FUN_100fdbca(0,local_84[0] - local_ac);
      iVar8 = local_b4;
      local_a0 = (float)fVar19;
      local_cc = local_cc + *(float *)(local_b4 + 0x17c);
      local_c0 = *(float *)(local_b4 + 0x144);
      local_84[1] = (float)local_18;
      local_84[0] = local_ac;
      local_8c = local_a0;
      uVar3 = FUN_10133727(&DAT_10356101,local_b8,0x1400001,local_84);
      local_b8 = CONCAT31(local_b8._1_3_,uVar3);
      FUN_10118366(&DAT_10356101,&DAT_1033cff8);
      FUN_100fd5ae((float)*(ushort *)(iVar8 + 0x1bc) + local_c0,local_cc,param_1,local_a8,0);
      if (0.0 < local_a4) {
        FUN_100fd5ae((float)*(ushort *)(iVar8 + 0x1ba) + local_c0,local_cc,param_2,0,1);
      }
      uVar13 = FUN_100fcb39(0,0x3f800000);
      iVar9 = local_bc;
      FUN_10193b2c(*(undefined4 *)(iVar8 + 0x2e8),
                   *(float *)(local_bc + 0x1228) * DAT_102b8d94 +
                   local_a0 + local_c0 + (float)*(ushort *)(iVar8 + 0x1c0),local_cc,uVar13,1,
                   0x3f800000);
      local_20 = local_cc - *(float *)(iVar9 + 0xcd8);
      uVar13 = extraout_EDX;
      local_24 = local_b0;
    }
    if (param_3 == '\0') {
      FUN_10111961();
      uVar13 = extraout_EDX_01;
    }
    iVar8 = local_b4;
    if ((((*(int *)(iVar9 + 0x1528) == iVar4) && (*(int *)(iVar9 + 0x1510) != iVar4)) &&
        (*(int *)(iVar9 + 0x1548) == 1)) &&
       (cVar2 = FUN_1010378f(0,0xbf800000), uVar13 = extraout_EDX_02, cVar2 != '\0')) {
      FUN_101028d8();
      FUN_101143b4(0x290,0xffffffff,0);
      uVar13 = extraout_EDX_03;
    }
    bVar12 = 0;
    if ((param_3 != '\0') && (*(int *)(iVar9 + 0x1510) == iVar4)) {
      bVar12 = *(byte *)(iVar9 + 0x2041) ^ 1;
    }
    if ((byte)local_c8 != '\0') {
      FUN_10111839();
      uVar13 = extraout_EDX_04;
    }
    if (*(int *)(iVar8 + 0x1f0) == 1) {
      iVar8 = iVar9;
      if (((*(int *)(iVar9 + 0x1fc8) < *(int *)(iVar9 + 0x1fbc)) && (*(int *)(iVar9 + 0x1fc4) != 0))
         && (iVar6 = *(int *)(*(int *)(iVar9 + 0x1fc4) + 4 + *(int *)(iVar9 + 0x1fc8) * 0x28),
            iVar6 != 0)) {
        uVar13 = 0;
        if ((*(int *)(iVar6 + 0x3a0) == local_b4) && (*(int *)(iVar9 + 0x14d0) == local_b4)) {
          local_cc = *(float *)(iVar9 + 0x1228);
          local_34 = *(float *)(iVar6 + 0x50);
          local_2c._4_4_ = *(float *)(iVar6 + 0x54);
          bVar18 = local_34 != *(float *)(local_b4 + 0x50);
          bVar1 = *(float *)(local_b4 + 0x50) <= local_34;
          local_c8 = iVar9 + 0xe4;
          local_c0 = *(float *)(&DAT_102b90e0 + (uint)(bVar1 && bVar18) * 4);
          local_30 = *(float *)(iVar6 + 0x5c) + local_2c._4_4_;
          local_84[0] = (float)*(undefined8 *)(iVar9 + 0xe4) - (float)*(undefined8 *)(iVar9 + 0xd8);
          local_84[1] = (float)((ulonglong)*(undefined8 *)(iVar9 + 0xe4) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(iVar9 + 0xd8) >> 0x20);
          if (!bVar1 || !bVar18) {
            local_34 = *(float *)(iVar6 + 0x58) + local_34;
          }
          local_2c._0_4_ = local_34;
          fVar19 = (float10)FUN_10112cc4((float)((uint)(local_84[0] - local_34) & _DAT_1028b410) *
                                         DAT_102b8d94,DAT_102b70e0 * local_cc,
                                         DAT_102b9644 * local_cc);
          local_b0 = (float)fVar19;
          local_84[0] = DAT_102b8d58 * local_c0 + local_84[0];
          local_34 = local_c0 * local_cc + local_34;
          local_2c = CONCAT44(local_2c._4_4_,(float)local_2c + local_c0 * local_cc);
          local_c0 = local_84[1];
          local_90 = local_b0;
          fVar19 = (float10)FUN_100fdbca((local_2c._4_4_ - local_b0) - local_84[1],
                                         DAT_102b9648 * local_cc);
          local_94 = (float)fVar19;
          local_2c = CONCAT44(local_c0 + local_94,(float)local_2c);
          fVar20 = local_cc * DAT_102b8f18;
          local_cc = local_84[1];
          fVar19 = (float10)FUN_100ea38a((local_b0 + local_30) - local_84[1],fVar20);
          local_98 = (float)fVar19;
          local_30 = local_cc + local_98;
          uVar13 = FUN_100f9edd(local_84,&local_2c,&local_34,local_c8);
          iVar8 = local_bc;
        }
      }
      else {
        uVar13 = 0;
      }
      bVar10 = (byte)local_c4 ^ 1;
      uVar7 = (undefined3)((uint)local_c4 >> 8);
      if (((((bVar10 | bVar12) & 1) == 0) &&
          (uVar7 = (undefined3)((uint)local_b4 >> 8),
          *(int *)(iVar9 + 0x14d0) == local_b4 && (byte)uVar13 == 0)) &&
         (*(char *)(iVar8 + 0x2041) == '\0')) {
        bVar18 = *(int *)(iVar8 + 0x1528) == 0;
      }
      else {
        bVar18 = false;
      }
      fVar20 = (float)CONCAT31(uVar7,1);
      if (((byte)local_b8 & bVar10) == 0) {
        bVar12 = (byte)local_c4 | bVar12 ^ 1;
        uVar7 = (undefined3)((uint)uVar13 >> 8);
        fVar20 = (float)(CONCAT31(uVar7,(byte)uVar13 | bVar12) ^ 1);
        if (((bVar12 | SUB41(fVar20,0)) & 1) == 0) {
          if ((*(float *)(iVar8 + 0x151c) < DAT_102b8d94) ||
             (*(float *)(iVar8 + 0x2464) < DAT_102b8d94)) {
            fVar20 = 0.0;
          }
          else {
            fVar20 = (float)CONCAT31(uVar7,1);
          }
        }
      }
      iVar9 = iVar8;
      if ((*(int *)(iVar8 + 0x2044) == iVar4) && (*(int *)(iVar8 + 0x20e8) == 1)) {
        FUN_1010c017();
        uVar21 = FUN_101170bb();
        fVar20 = (float)CONCAT31((int3)((ulonglong)uVar21 >> 0x28),1);
        local_c8 = CONCAT31((int3)((ulonglong)uVar21 >> 8),1);
      }
      else {
        local_c8 = 0;
      }
LAB_1014d977:
      local_cc = fVar20;
      if ((param_3 == '\0') || (bVar18)) goto LAB_1014d988;
    }
    else {
      if (((byte)local_c8 & (byte)local_c4 & (byte)local_b8) == 0) {
        fVar20 = (float)CONCAT31((int3)((uint)uVar13 >> 8),1);
        if ((byte)local_b8 == 0) {
          if ((byte)((byte)local_c4 | (byte)local_c8 & bVar12 ^ 1) == 1) {
            if ((*(int *)(iVar9 + 0x2044) == iVar4) && (*(int *)(iVar9 + 0x20e8) == 3)) {
              FUN_1010c017();
              fVar20 = (float)CONCAT31((int3)((uint)extraout_EDX_05 >> 8),1);
            }
            else {
              fVar20 = 0.0;
            }
            local_c8 = 0;
            bVar18 = false;
            goto LAB_1014d977;
          }
          local_c4 = (float *)0x0;
        }
        local_c8 = 0;
        bVar18 = false;
        goto LAB_1014d977;
      }
      local_c4 = (float *)0x0;
      local_c8 = 0;
      local_cc = 0.0;
LAB_1014d988:
      cVar2 = FUN_10103f84(iVar4,0);
      if (cVar2 != '\0') {
        FUN_1011630c(*(undefined4 *)(iVar9 + 0x1fc8),1);
      }
    }
    FUN_10113568();
    if ((((uint)local_cc & 1) != 0) && (*(int *)(iVar9 + 0x1528) == iVar4)) {
      *(undefined1 *)(iVar9 + 0x1536) = 1;
    }
    if ((((~SUB41(local_cc,0) | (byte)local_c4) & 1) == 0) &&
       (*(int *)(iVar9 + 0x1fc8) < *(int *)(iVar9 + 0x1fbc))) {
      FUN_10115ea4(param_1,0);
      goto LAB_1014dadf;
    }
    if (((uint)local_cc & 1) == 0) {
      if ((byte)local_c4 == 0) goto LAB_1014dadf;
    }
    else {
      FUN_10115ea4(param_1,0x20);
    }
    iVar8 = local_bc;
    local_c4 = (float *)(iVar9 + 0x1e80);
    pfVar15 = local_c4;
    pfVar17 = local_84;
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar17 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar17 = pfVar17 + 1;
    }
    local_2c = 0;
    FUN_10111d56(&local_24,1,&local_2c);
    FUN_100fd0a3(7,*(undefined4 *)(iVar8 + 0xd04));
    uVar13 = FUN_10116644(iVar4,param_1,local_9c);
    FUN_100fd4c4(1);
    if ((char)uVar13 != '\0') {
      if (((SUB41(local_cc,0) & (byte)local_c8) == 1) && (*(char *)(iVar8 + 0x209a) == '\0')) {
        FUN_101034e2(*(undefined4 *)(iVar8 + 0x14cc),2);
        FUN_1010c53d(*(undefined4 *)(iVar8 + 0x14cc),0);
      }
      pfVar15 = local_84;
      pfVar17 = local_c4;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar17 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar17 = pfVar17 + 1;
      }
      if (*(int *)(local_bc + 0x14d0) == local_b4) {
        *(byte *)(local_bc + 0x1e88) = *(byte *)(local_bc + 0x1e88) | 0x80;
      }
    }
  }
LAB_1014daeb:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_cc)) {
    return uVar13;
  }
LAB_1014db0b:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
code_r0x1014cfea:
  iVar16 = *piVar11;
  piVar11 = piVar11 + 1;
  if (iVar16 == iVar4) goto code_r0x1014cff1;
  goto LAB_1014cfe6;
code_r0x1014cff1:
  if ((byte)local_c4 != '\0') {
    uVar13 = FUN_10116644(iVar4,param_1,uVar14);
    if (DAT_10388d00 == (local_14 ^ (uint)&local_cc)) {
      return uVar13;
    }
    goto LAB_1014db0b;
  }
LAB_1014dadf:
  *(undefined4 *)(iVar9 + 0x1ed0) = 0;
  uVar13 = 0;
  goto LAB_1014daeb;
}

