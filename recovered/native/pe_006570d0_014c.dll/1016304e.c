/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016304e */

void FUN_1016304e(void)

{
  undefined4 *puVar1;
  short sVar2;
  char *pcVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  int local_68;
  char *local_64;
  int local_60;
  float local_5c;
  float local_58;
  int local_54;
  int *local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_7c;
  pcVar3 = *(char **)(DAT_1039d74c + 0x2308);
  if (pcVar3 == (char *)0x0) {
    local_7c._0_4_ = "EndTable() call should only be done while in BeginTable() scope!";
    FUN_100fcef5();
    goto LAB_101639a5;
  }
  local_4c = DAT_1039d74c;
  if (pcVar3[0x1ed] == '\0') {
    local_7c = (double)CONCAT44(local_7c._4_4_,pcVar3);
    FUN_10161186();
  }
  uVar16 = *(uint *)(pcVar3 + 4);
  local_60 = *(int *)(pcVar3 + 0xc);
  iVar15 = *(int *)(pcVar3 + 0x158);
  iVar18 = *(int *)(pcVar3 + 0x154);
  if (pcVar3[0x1ee] == '\x01') {
    local_7c = (double)CONCAT44(local_7c._4_4_,pcVar3);
    FUN_101639ce();
  }
  if ((((uVar16 & 0x20) != 0) && (*(short *)(pcVar3 + 0x1be) != -1)) &&
     (cVar9 = FUN_1010bfbb(), cVar9 == '\0')) {
    local_7c._0_4_ = (char *)0x1;
    cVar9 = FUN_10113f33();
    if (cVar9 != '\0') {
      local_7c = (double)CONCAT44(local_7c._4_4_,(int)*(short *)(pcVar3 + 0x1be));
      FUN_10163fd1();
    }
  }
  if (*(short *)(pcVar3 + 0x4c) == 0) {
    local_50 = (int *)(pcVar3 + 0x16c);
  }
  else {
    local_50 = (int *)(*(int *)(pcVar3 + 0x18c) + *(short *)(pcVar3 + 0x4c) * 0x18 + -0x18);
  }
  *(undefined8 *)(iVar15 + 0x174) = *(undefined8 *)(local_60 + 0x58);
  *(undefined8 *)(iVar15 + 0x16c) = *(undefined8 *)(local_60 + 0x60);
  *(undefined8 *)(iVar15 + 0x15c) = *(undefined8 *)(local_60 + 0x68);
  local_7c = (double)*(float *)(pcVar3 + 0x54);
  fVar19 = (float10)FUN_1026d3b0();
  local_58 = (float)fVar19;
  local_20 = local_58;
  if (iVar15 == iVar18) {
    if ((uVar16 >> 0x11 & 1) == 0) {
      local_7c = (double)CONCAT44(local_58,*(undefined4 *)(pcVar3 + 0xd0));
      fVar19 = (float10)FUN_100fdbca();
      local_24 = (float)fVar19;
      *(float *)(pcVar3 + 0xe0) = local_24;
      *(float *)(pcVar3 + 0xd0) = local_24;
    }
  }
  else {
    *(float *)(iVar15 + 0x160) = local_58;
  }
  local_7c = (double)CONCAT44(*(undefined4 *)(pcVar3 + 0xd0),*(undefined4 *)(pcVar3 + 0xf0));
  fVar19 = (float10)FUN_100fdbca();
  *(float *)(pcVar3 + 0xf0) = (float)fVar19;
  local_50[1] = (int)(*(float *)(pcVar3 + 0xd0) - *(float *)(pcVar3 + 200));
  if ((*(uint *)(pcVar3 + 4) >> 0x18 & 1) != 0) {
    fVar21 = *(float *)(iVar15 + 0x15c);
    if (*(short *)(pcVar3 + 0x1d4) != -1) {
      fVar20 = 0.0;
      if ((*(uint *)(pcVar3 + 4) >> 10 & 1) != 0) {
        fVar20 = DAT_1028b430;
      }
      local_7c = (double)CONCAT44((*(float *)(*(int *)(pcVar3 + 0x10) + 0x3c +
                                             *(short *)(pcVar3 + 0x1d4) * 0x74) +
                                   *(float *)(pcVar3 + 0x94) + *(float *)(pcVar3 + 0x90)) - fVar20,
                                  fVar21);
      fVar19 = (float10)FUN_100fdbca();
      fVar21 = (float)fVar19;
      local_28 = fVar21;
    }
    if (*(short *)(pcVar3 + 0x1c6) != -1) {
      local_7c = (double)CONCAT44(*(undefined4 *)(pcVar3 + 0xb4),fVar21);
      fVar19 = (float10)FUN_100fdbca();
      fVar21 = (float)fVar19;
      local_2c = fVar21;
    }
    *(float *)(iVar15 + 0x15c) = fVar21 + *(float *)(*(int *)(pcVar3 + 0xc) + 0xc);
  }
  if ((uVar16 >> 0x14 & 1) == 0) {
    FUN_10188384();
  }
  uVar11 = *(uint *)(iVar15 + 0x2e8);
  puVar1 = (undefined4 *)(*(int *)(uVar11 + 0x8c) + -0x10 + *(int *)(uVar11 + 0x84) * 0x10);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)(iVar15 + 0x28c) = *puVar1;
  *(undefined4 *)(iVar15 + 0x290) = uVar5;
  *(undefined4 *)(iVar15 + 0x294) = uVar6;
  *(undefined4 *)(iVar15 + 0x298) = uVar7;
  if ((uVar16 & 0x780) != 0) {
    local_7c = (double)CONCAT44(local_7c._4_4_,pcVar3);
    FUN_1016402e();
    uVar11 = *(uint *)(iVar15 + 0x2e8);
  }
  local_7c = (double)(ulonglong)uVar11;
  local_68 = iVar15;
  FUN_1018de6c();
  if ((pcVar3[6] & 0x10U) == 0) {
    local_7c = (double)CONCAT44(local_7c._4_4_,pcVar3);
    FUN_10164541();
  }
  local_7c = (double)CONCAT44(local_7c._4_4_,*(undefined4 *)(local_68 + 0x2e8));
  FUN_10187968();
  local_54 = iVar18;
  if (*(int *)(pcVar3 + 0x40) < 1) {
    fVar21 = 0.0;
    local_6c = 0.0;
    local_64 = (char *)0x0;
  }
  else {
    local_64 = (char *)0x0;
    uVar16 = 0;
    iVar15 = 0;
    local_6c = 0.0;
    fVar21 = 0.0;
    do {
      if ((*(uint *)(*(int *)(pcVar3 + 0x2c) + (uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
        iVar18 = *(int *)(pcVar3 + 0x10);
        uVar11 = *(uint *)(iVar18 + iVar15);
        if ((uVar11 & 0x30) == 0x10) {
          fVar20 = *(float *)(iVar18 + 0x10 + iVar15);
        }
        else {
          local_7c = (double)CONCAT44(iVar18 + iVar15,pcVar3);
          local_5c = fVar21;
          fVar19 = (float10)FUN_10162427();
          fVar20 = (float)fVar19;
          uVar11 = *(uint *)(iVar18 + iVar15);
          fVar21 = local_5c;
          local_30 = fVar20;
        }
        if ((uVar11 & 0x10) == 0) {
          local_6c = local_6c + fVar20;
        }
        else {
          local_64 = (char *)((float)local_64 + fVar20);
        }
        if ((~uVar11 & 0x28) == 0) {
          local_7c = (double)CONCAT44(fVar20 / (*(float *)(iVar18 + 0x1c + iVar15) /
                                               *(float *)(pcVar3 + 0xac)),fVar21);
          fVar19 = (float10)FUN_100fdbca();
          fVar21 = (float)fVar19;
          local_34 = fVar21;
        }
      }
      uVar16 = uVar16 + 1;
      iVar15 = iVar15 + 0x74;
    } while ((int)uVar16 < *(int *)(pcVar3 + 0x40));
  }
  local_44 = *(float *)(pcVar3 + 0x98) + *(float *)(pcVar3 + 0x9c);
  sVar2 = *(short *)(pcVar3 + 0x1b6);
  local_48 = *(float *)(pcVar3 + 0x90);
  local_5c = *(float *)(pcVar3 + 0x94);
  local_7c = (double)CONCAT44(fVar21,local_6c);
  fVar19 = (float10)FUN_100fdbca();
  iVar8 = local_4c;
  iVar18 = local_54;
  iVar15 = local_68;
  local_38 = (float)fVar19;
  *(float *)(pcVar3 + 0xa8) =
       (float)(int)sVar2 * (local_5c + local_5c) +
       local_48 + local_48 + (float)(sVar2 + -1) * local_44 + (float)local_64 + local_38;
  if ((local_68 == local_54) || ((*(uint *)(pcVar3 + 4) & 0x1000000) != 0)) {
    if (((*(short *)(pcVar3 + 0x1c8) != -1) &&
        ((*(short *)(pcVar3 + 0x1c6) == -1 && (*(char *)(local_68 + 0xf4) == '\x01')))) &&
       (*(short *)(pcVar3 + 0x4e) == *(short *)(pcVar3 + 0x4c))) {
      fVar20 = *(float *)(pcVar3 + 0x94) + *(float *)(pcVar3 + 0x94) + *(float *)(pcVar3 + 0x8c);
      fVar21 = *(float *)(*(int *)(pcVar3 + 0x10) + 0xc + *(short *)(pcVar3 + 0x1c8) * 0x74);
      if (*(float *)(pcVar3 + 0xf4) <= fVar21) {
        if (fVar21 < *(float *)(pcVar3 + 0xfc) || fVar21 == *(float *)(pcVar3 + 0xfc))
        goto LAB_10163578;
        local_7c._4_4_ = fVar20 + (fVar21 - *(float *)(local_68 + 0x50));
      }
      else {
        local_7c._4_4_ = (fVar21 - *(float *)(local_68 + 0x50)) - fVar20;
      }
      local_7c = (double)CONCAT44(local_7c._4_4_,local_68);
      local_74 = 0x3f800000;
      FUN_10115835();
    }
  }
  else {
    *(undefined4 *)(local_68 + 0xc4) = 0;
  }
LAB_10163578:
  if ((*(short *)(pcVar3 + 0x1c6) != -1) && (*(short *)(pcVar3 + 0x4c) == *(short *)(pcVar3 + 0x4e))
     ) {
    *(float *)(pcVar3 + 0xb0) =
         (float)(int)(((((float)(int)(*(float *)(iVar8 + 0x1238) * DAT_102b8cb0) +
                        (*(float *)(iVar8 + 0xe4) - *(float *)(iVar8 + 0x1540))) -
                       *(float *)(*(int *)(pcVar3 + 0x10) + 8 + *(short *)(pcVar3 + 0x1c6) * 0x74))
                      - *(float *)(pcVar3 + 0x98)) -
                     (*(float *)(pcVar3 + 0x94) + *(float *)(pcVar3 + 0x94)));
  }
  if (*(int *)(iVar8 + 0x152c) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = pcVar3[0x1fb] ^ 1;
  }
  pcVar3[0x1fc] = bVar10;
  if (*(int *)(*(int *)(iVar15 + 0x140) + -4 + *(int *)(iVar15 + 0x138) * 4) != *local_50) {
    local_7c = (double)CONCAT44(local_7c._4_4_,"Mismatching PushID/PopID!");
    FUN_100fcef5();
  }
  if (*(int *)(iVar18 + 0x224) < *(int *)(local_60 + 0x78)) {
    local_7c = (double)CONCAT44(local_7c._4_4_,"Too many PopItemWidth!");
    FUN_100fcef5();
  }
  if (0 < *(short *)(pcVar3 + 0x4c)) {
    FUN_10113568();
  }
  FUN_10113568();
  local_6c = *(float *)(iVar18 + 0x15c);
  local_64 = *(char **)(iVar18 + 0x160);
  uVar5 = *(undefined4 *)(local_60 + 0x3c);
  uVar6 = *(undefined4 *)(local_60 + 0x40);
  uVar7 = *(undefined4 *)(local_60 + 0x44);
  *(undefined4 *)(iVar15 + 0x26c) = *(undefined4 *)(local_60 + 0x38);
  *(undefined4 *)(iVar15 + 0x270) = uVar5;
  *(undefined4 *)(iVar15 + 0x274) = uVar6;
  *(undefined4 *)(iVar15 + 0x278) = uVar7;
  uVar5 = *(undefined4 *)(local_60 + 0x4c);
  uVar6 = *(undefined4 *)(local_60 + 0x50);
  uVar7 = *(undefined4 *)(local_60 + 0x54);
  *(undefined4 *)(iVar15 + 0x27c) = *(undefined4 *)(local_60 + 0x48);
  *(undefined4 *)(iVar15 + 0x280) = uVar5;
  *(undefined4 *)(iVar15 + 0x284) = uVar6;
  *(undefined4 *)(iVar15 + 0x288) = uVar7;
  *(char *)(iVar15 + 0xfe) = pcVar3[0x200];
  *(undefined8 *)(iVar18 + 0x144) = *(undefined8 *)(pcVar3 + 0xc4);
  *(undefined4 *)(iVar18 + 0x218) = *(undefined4 *)(local_60 + 0x74);
  *(undefined4 *)(iVar18 + 0x224) = *(undefined4 *)(local_60 + 0x78);
  *(undefined4 *)(iVar18 + 0x18c) = *(undefined4 *)(local_60 + 0x70);
  if (iVar15 == iVar18) {
    *(int *)(local_68 + 0x1cc) = *(int *)(local_68 + 0x1cc) + -1;
    local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(pcVar3 + 0xcc) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(pcVar3 + 0xc4) >> 0x20),
                        (float)*(undefined8 *)(pcVar3 + 0xcc) -
                        (float)*(undefined8 *)(pcVar3 + 0xc4));
    local_7c = (double)CONCAT44(0xbf800000,&local_1c);
    FUN_1010c810();
    iVar15 = local_68;
    local_70 = 0;
    local_74 = 0;
    local_7c = (double)ZEXT48(pcVar3 + 0xc4);
    FUN_1010c9d8();
  }
  else {
    uVar4 = (ushort)*(undefined4 *)(iVar15 + 0x1a0);
    *(ushort *)(local_68 + 0x1a0) = uVar4 | (ushort)(1 << ((byte)pcVar3[0x1ec] & 0x1f));
    *(undefined4 *)(iVar8 + 0x2308) = 0;
    FUN_1010c644();
    *(char **)(iVar8 + 0x2308) = pcVar3;
    *(ushort *)(local_68 + 0x1a0) = uVar4;
    iVar15 = local_68;
  }
  if ((pcVar3[6] & 1U) == 0) {
    fVar21 = 0.0;
    if (*(float *)(local_60 + 0x1c) <= 0.0) {
      if (iVar15 != iVar18) {
        fVar21 = *(float *)(iVar15 + 0xec);
      }
      local_5c = *(float *)(pcVar3 + 0xc4) + *(float *)(pcVar3 + 0xa8) +
                 *(float *)(*(int *)(pcVar3 + 0xc) + 0xc) + fVar21;
      local_7c = (double)CONCAT44(local_5c - *(float *)(local_60 + 0x1c),
                                  *(undefined4 *)(iVar18 + 0x164));
      fVar19 = (float10)FUN_100fdbca();
      *(float *)(iVar18 + 0x164) = (float)fVar19;
      local_7c = (double)CONCAT44(local_5c,*(undefined4 *)(pcVar3 + 0xcc));
      fVar19 = (float10)FUN_100ea38a();
      fVar21 = (float)fVar19;
      local_3c = fVar21;
    }
    else {
      fVar21 = *(float *)(pcVar3 + 0xcc);
    }
  }
  else {
    fVar21 = *(float *)(pcVar3 + 0xc4) + *(float *)(pcVar3 + 0xa8);
  }
  local_7c = (double)CONCAT44(fVar21,local_6c);
  fVar19 = (float10)FUN_100fdbca();
  *(float *)(iVar18 + 0x15c) = (float)fVar19;
  fVar21 = 0.0;
  if (*(float *)(local_60 + 0x20) <= 0.0) {
    pfVar12 = (float *)(iVar15 + 0x158);
    if (iVar15 == iVar18) {
      pfVar12 = (float *)(pcVar3 + 0xd8);
    }
    if (iVar15 != iVar18) {
      fVar21 = *(float *)(iVar15 + 0xf0);
    }
    local_58 = (local_58 - *pfVar12) + *(float *)(pcVar3 + 200) + fVar21;
    local_7c = (double)CONCAT44(local_58 - *(float *)(local_60 + 0x20),
                                *(undefined4 *)(iVar18 + 0x168));
    fVar19 = (float10)FUN_100fdbca();
    *(float *)(iVar18 + 0x168) = (float)fVar19;
    local_7c = (double)CONCAT44(local_58,*(undefined4 *)(pcVar3 + 0xd0));
    fVar19 = (float10)FUN_100ea38a();
    local_7c._4_4_ = (float)fVar19;
    local_40 = local_7c._4_4_;
  }
  else {
    local_7c._4_4_ = *(float *)(pcVar3 + 0xd0);
  }
  local_7c._0_4_ = local_64;
  fVar19 = (float10)FUN_100fdbca();
  *(float *)(iVar18 + 0x160) = (float)fVar19;
  if (pcVar3[0x1f5] == '\x01') {
    local_7c._0_4_ = pcVar3;
    FUN_10164d3d();
  }
  pcVar3[0x1ef] = '\0';
  iVar15 = *(int *)(iVar8 + 0x2310);
  *(int *)(iVar8 + 0x2310) = iVar15 + -1;
  if (iVar15 < 2) {
LAB_1016398d:
    *(undefined4 *)(iVar8 + 0x2308) = 0;
    iVar13 = -1;
  }
  else {
    iVar15 = iVar15 * 0x7c + *(int *)(iVar8 + 0x231c);
    piVar14 = (int *)(iVar15 + -0xf8);
    if ((piVar14 == (int *)0x0) || (*piVar14 != *(int *)(iVar18 + 8))) goto LAB_1016398d;
    iVar17 = *(int *)(iVar15 + -0xf4) * 0x204 + *(int *)(iVar8 + 9000);
    *(int *)(iVar8 + 0x2308) = iVar17;
    iVar13 = -1;
    iVar18 = local_54;
    if (*(int *)(iVar8 + 9000) != 0) {
      *(int **)(iVar17 + 0xc) = piVar14;
      *(int *)(*(int *)(iVar8 + 0x2308) + 0x168) = iVar15 + -0xd4;
      if (*(int *)(iVar8 + 0x2308) != 0) {
        iVar13 = (*(int *)(iVar8 + 0x2308) - *(int *)(iVar8 + 9000) >> 2) * 0xfe03f81;
      }
    }
  }
  *(int *)(iVar18 + 0x1ec) = iVar13;
  FUN_1011728b();
LAB_101639a5:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

