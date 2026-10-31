/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147db9 */

uint FUN_10147db9(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float *pfVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar12;
  int iVar13;
  byte bVar14;
  byte bVar16;
  float fVar15;
  uint uVar17;
  bool bVar18;
  float10 extraout_ST0;
  float10 fVar19;
  float fVar20;
  undefined *puVar21;
  undefined *puVar22;
  float local_c8;
  float local_c4;
  int local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint local_84;
  float local_80;
  int local_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  float local_5c;
  float local_58;
  undefined8 local_54;
  byte local_4b;
  byte local_4a;
  byte local_49;
  uint local_48;
  undefined8 local_44;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_c8;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) != '\0') {
    fVar15 = 0.0;
    goto LAB_10147df5;
  }
  local_a4 = *(float *)(iVar2 + 0xd10);
  if ((param_2 & 0x402) == 0) {
    fVar19 = (float10)FUN_100ea38a(*(undefined4 *)(iVar1 + 0x17c),local_a4);
    local_a4 = (float)fVar19;
    local_58 = local_a4;
  }
  uStack_98 = 0;
  uStack_9c = 0;
  fStack_a0 = 0.0;
  local_78 = *(float *)(iVar2 + 0xd0c);
  fStack_74 = 0.0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (param_4 == 0) {
    param_4 = FUN_100fd57d(param_3,0);
  }
  local_94 = (float)CONCAT31(local_94._1_3_,(param_2 & 2) == 0);
  local_7c = param_4;
  uVar6 = FUN_100fdb2e(&local_1c,param_3,param_4,0,0xbf800000);
  fVar15 = *(float *)(iVar2 + 0x1228);
  local_c8 = *(float *)(iVar1 + 0x17c);
  local_c4 = fVar15;
  if ((param_2 & 0x402) != 0) {
    local_b4 = fVar15;
    uVar6 = FUN_100fdbca(*(undefined4 *)(iVar2 + 0xd10),local_c8);
    local_c8 = (float)extraout_ST0;
    fVar15 = *(float *)(iVar2 + 0x1228);
    local_c4 = local_b4;
    local_5c = local_c8;
  }
  if ((param_2 >> 0xe & 1) == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = CONCAT31((int3)((uint)uVar6 >> 8),*(int *)(iVar2 + 0x2308) != 0);
  }
  uVar12 = (uint)local_94 & 0xff;
  local_b4 = 0.0;
  if ((short)param_2 < 0) {
    local_b4 = (float)CONCAT31((int3)(param_2 >> 8),*(int *)(iVar2 + 0x2308) != 0);
  }
  local_94 = local_78 + local_78 + fVar15 + local_1c;
  fStack_90 = local_a4 + local_a4 + local_18;
  fStack_8c = fStack_74 + fStack_74 + 0.0;
  fStack_88 = fStack_a0 + fStack_a0 + 0.0;
  if ((char)local_b0 == '\0') {
    pfVar11 = (float *)(iVar1 + 0x26c);
    if ((param_2 >> 0xc & 1) == 0) {
      pfVar11 = (float *)(iVar1 + 0x144);
    }
    local_2c = *pfVar11;
    fVar15 = *(float *)(iVar1 + 0x148);
    fStack_28 = (local_c8 - local_a4) + fVar15;
    if ((param_2 >> 0xd & 1) == 0) {
      fStack_24 = *(float *)(iVar1 + 0x274);
    }
    else {
      fStack_24 = *(float *)(iVar1 + 0x144) + local_94 + local_78;
    }
  }
  else {
    local_2c = *(float *)(iVar1 + 0x27c);
    fVar15 = *(float *)(iVar1 + 0x148);
    fStack_28 = (local_c8 - local_a4) + fVar15;
    fStack_24 = *(float *)(iVar1 + 0x284);
  }
  local_c4 = *(float *)(&DAT_102b9630 + uVar12 * 4) * local_78 + local_c4;
  fStack_20 = fStack_90 + fStack_28;
  if ((param_2 & 2) != 0) {
    fVar20 = (float)(int)(*(float *)(iVar1 + 0x80) * DAT_102b70e0);
    local_2c = local_2c - fVar20;
    fStack_24 = fStack_24 + fVar20;
  }
  local_c8 = local_c8 + fVar15;
  local_bc = *(float *)(iVar1 + 0x144) + local_c4;
  local_44 = CONCAT44(fStack_90,local_94);
  local_34 = local_bc;
  local_30 = local_c8;
  FUN_1010c810(&local_44,local_a4);
  local_44 = CONCAT44(fStack_28,local_2c);
  fStack_3c = fStack_24;
  fStack_38 = fStack_20;
  if ((param_2 & 0x7802) == 0) {
    fStack_3c = 0.0;
    if (0.0 < local_1c) {
      fStack_3c = *(float *)(iVar2 + 0xd1c) + *(float *)(iVar2 + 0xd1c);
    }
    fStack_3c = local_94 + local_2c + fStack_3c;
  }
  local_60 = param_1;
  if ((*(byte *)(iVar2 + 0x1e48) & 0x10) != 0) {
    local_60 = *(int *)(iVar2 + 0x1e78);
  }
  local_94 = (float)FUN_10148cb5(local_60,param_2);
  bVar16 = (byte)local_b0 | local_b4._0_1_;
  if ((bVar16 & 1) == 0) {
    cVar5 = FUN_1010c9d8(&local_44,param_1,0,0);
    uVar6 = extraout_ECX_00;
  }
  else {
    local_a4 = *(float *)(iVar1 + 0x28c);
    local_b8 = *(undefined4 *)(iVar1 + 0x294);
    *(undefined4 *)(iVar1 + 0x28c) = *(undefined4 *)(iVar1 + 0x27c);
    *(undefined4 *)(iVar1 + 0x294) = *(undefined4 *)(iVar1 + 0x284);
    cVar5 = FUN_1010c9d8(&local_44,param_1,0,0);
    *(float *)(iVar1 + 0x28c) = local_a4;
    *(undefined4 *)(iVar1 + 0x294) = local_b8;
    uVar6 = extraout_ECX;
  }
  *(byte *)(iVar2 + 0x1e88) = *(byte *)(iVar2 + 0x1e88) | 2;
  *(float *)(iVar2 + 0x1eac) = local_2c;
  *(float *)(iVar2 + 0x1eb0) = fStack_28;
  *(float *)(iVar2 + 0x1eb4) = fStack_24;
  *(float *)(iVar2 + 0x1eb8) = fStack_20;
  local_a4 = (float)param_2;
  if ((param_2 & 0x1c0000) == 0) {
    local_a4 = (float)(*(uint *)(iVar2 + 0xd90) | param_2);
  }
  if ((((uint)local_a4 & 0x180000) == 0) || (*(float *)(iVar1 + 0x298) <= fStack_28)) {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),0.0 < *(float *)(iVar2 + 0xd94));
  }
  if (((uint)local_a4 & 8) == 0) {
    uVar7 = uVar6;
    if ((((((uint)local_a4 >> 0x11 & 1) != 0) && (*(char *)(iVar2 + 0x2043) == '\0')) &&
        (*(int *)(iVar2 + 0x20e8) == 0)) && (*(int *)(iVar2 + 0x2048) == iVar1)) {
      uVar7 = FUN_101172b5();
      uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),(byte)uVar7 | (byte)uVar6);
    }
  }
  else {
    uVar7 = 0;
  }
  if (cVar5 == '\0') {
    if ((((uint)local_a4 >> 0x14 & 1) != 0) &&
       (local_b8 = uVar7,
       (*(uint *)(iVar1 + 0x1d4) >> ((byte)(*(char *)(iVar1 + 0x1cc) - 1) & 0x1f) & 1) != 0)) {
      iVar8 = *(int *)(iVar2 + 0x1fd4);
      iVar2 = *(int *)(iVar2 + 0x1fdc);
      fVar19 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + -8 + iVar8 * 0x28),
                                     *(undefined4 *)(iVar1 + 0x148));
      *(float *)(iVar2 + -8 + iVar8 * 0x28) = (float)fVar19;
      uVar7 = local_b8;
      if (*(float *)(iVar1 + 0x298) <= fStack_28) {
        bVar16 = *(char *)(iVar1 + 0x1cc) - 1U & 0x1f;
        *(uint *)(iVar1 + 0x1d4) =
             *(uint *)(iVar1 + 0x1d4) & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      }
    }
    fVar15 = local_94;
    bVar16 = SUB41(local_94,0);
    if (((byte)uVar7 & bVar16) == 1) {
      FUN_10148d61();
    }
    if (bVar16 == 1 && (char)(((uint)local_a4 & 8) >> 3) == '\0') {
      FUN_10148eb8(param_1);
      fVar15 = 1.4013e-45;
    }
    goto LAB_10147df5;
  }
  local_b8 = uVar7;
  local_a8 = uVar6;
  if ((bVar16 & 1) != 0) {
    uVar7 = FUN_101658a9();
    *(byte *)(iVar2 + 0x1e89) = *(byte *)(iVar2 + 0x1e89) | 2;
    uVar6 = *(undefined4 *)(iVar1 + 0x290);
    uVar3 = *(undefined4 *)(iVar1 + 0x294);
    uVar4 = *(undefined4 *)(iVar1 + 0x298);
    *(undefined4 *)(iVar2 + 0x1ebc) = *(undefined4 *)(iVar1 + 0x28c);
    *(undefined4 *)(iVar2 + 0x1ec0) = uVar6;
    *(undefined4 *)(iVar2 + 0x1ec4) = uVar3;
    *(undefined4 *)(iVar2 + 0x1ec8) = uVar4;
  }
  if ((((uint)local_a4 & 4) != 0) || (uVar12 = 0, (*(byte *)(iVar2 + 0x1e85) & 0x40) != 0)) {
    uVar12 = 0x1000;
  }
  uVar17 = uVar12 | 0x200;
  if (((uint)local_a4 >> 8 & 1) != 0) {
    uVar17 = uVar12;
  }
  local_80 = local_bc - local_c4;
  if (local_80 - *(float *)(iVar2 + 0xd34) <= *(float *)(iVar2 + 0xe4)) {
    local_68 = CONCAT31((int3)((uint)uVar7 >> 8),
                        *(float *)(iVar2 + 0xe4) <
                        *(float *)(iVar2 + 0xd34) +
                        local_78 + local_78 + *(float *)(iVar2 + 0x1228) + local_80);
  }
  else {
    local_68 = 0;
  }
  local_84 = *(uint *)(iVar2 + 0x1e84);
  local_ac = (((uint)local_a4 & 0xc0) == 0 | 2) << 6;
  if ((local_84 & 0x400000) == 0) {
    local_ac = 0;
  }
  local_ac = local_ac | (uint)local_a4;
  cVar5 = (char)local_68;
  uVar12 = 0x10;
  if (cVar5 == '\0') {
    uVar12 = (local_ac & 0x40) * 4 + 0x20;
  }
  local_48 = (uint)local_a4 >> 9 & 0x40000 | uVar17 | uVar12;
  local_64 = (uint)local_a4 & 1;
  local_49 = (byte)local_64;
  local_c0 = iVar1;
  if ((local_84 & 0x400000) == 0) {
    uVar12 = local_48;
    if (iVar1 != *(int *)(iVar2 + 0x14d0)) {
      uVar12 = local_48 | 0x10000;
    }
    if (cVar5 == '\0') {
      uVar12 = local_48 | 0x10000;
    }
  }
  else {
    FUN_1013053e(param_1,&local_49,&local_48);
    uVar12 = local_48;
    if (cVar5 != '\0') {
      uVar12 = local_48 & 0xffffffcf | 0x10;
    }
  }
  fVar15 = local_94;
  bVar16 = FUN_1012d77e(&local_44,param_1,&local_4a,&local_4b,uVar12);
  iVar1 = local_c0;
  uVar9 = 1;
  if (((uint)local_a4 >> 8 & 1) == 0) {
    bVar18 = bVar16 != 0;
    bVar16 = 0;
    bVar14 = 0;
    if (bVar18) {
      if (*(int *)(iVar2 + 0x22d8) == param_1) {
        bVar16 = SUB41(local_94,0) ^ 1;
        bVar14 = bVar16;
      }
      else {
        if (((local_ac & 0xc0) == 0) ||
           ((bVar14 = 0, (local_84 >> 0x16 & 1) == 0 && (*(int *)(iVar2 + 0x2058) == param_1)))) {
          bVar14 = 1;
        }
        if ((char)local_ac < '\0') {
          bVar16 = 0;
          if ((char)local_68 != '\0') {
            bVar16 = *(byte *)(iVar2 + 0x2041) ^ 1;
          }
          bVar14 = bVar14 | bVar16;
        }
        bVar16 = 1;
        if (((local_ac & 0x40) != 0) && (*(short *)(iVar2 + 0xb22) == 2)) {
          bVar14 = 1;
        }
      }
    }
    if (*(int *)(iVar2 + 0x2044) == param_1) {
      if (SUB41(local_94,0) == 1 && *(int *)(iVar2 + 0x20e8) == 0) {
        FUN_10117123(0);
        FUN_1010c017();
        bVar14 = 1;
        if (*(int *)(iVar2 + 0x2044) == param_1) goto LAB_1014863c;
      }
      else {
LAB_1014863c:
        if (*(int *)(iVar2 + 0x20e8) != 1 || local_94._0_1_ != '\0') goto LAB_1014864c;
        FUN_10117123(0);
        FUN_1010c017();
      }
    }
    else {
LAB_1014864c:
      if (bVar14 == 0) {
        uVar9 = 1;
        fVar15 = local_94;
        goto LAB_1014868e;
      }
    }
    fVar15 = (float)((uint)local_94 ^ 1);
    FUN_100fb29c(local_60,(uint)fVar15 & 0xff);
    *(byte *)(iVar2 + 0x1e88) = *(byte *)(iVar2 + 0x1e88) | 0x10;
    uVar9 = 0;
  }
LAB_1014868e:
  if ((local_84 >> 0x16 & 1) != 0) {
    uVar10 = 0;
    if (bVar16 != 0) {
      uVar10 = uVar9;
    }
    local_54 = CONCAT71(local_54._1_7_,uVar10);
    FUN_10130650(param_1,&local_49,&local_54);
    if (bVar16 != 0) {
      FUN_1011714e(param_1,*(undefined4 *)(iVar1 + 0x19c),*(undefined4 *)(iVar2 + 0x1e3c),&local_44)
      ;
    }
  }
  bVar16 = local_49;
  if (local_64 != local_49) {
    *(byte *)(iVar2 + 0x1e88) = *(byte *)(iVar2 + 0x1e88) | 8;
  }
  local_94 = fVar15;
  local_c0 = FUN_100fcb39(0,0x3f800000);
  uVar12 = local_84 >> 0x14 & 4 | 2;
  if ((param_2 & 2) == 0) {
    if (bVar16 != 0 || local_4a != 0) {
      iVar8 = 0x1b;
      if ((local_4b & local_4a) == 0) {
        iVar8 = local_4a + 0x19;
      }
      uVar6 = FUN_100fcb39(iVar8,0x3f800000);
      FUN_100fdee9(local_2c,fStack_28,fStack_24,fStack_20,uVar6,0,0);
    }
    FUN_100fe25e(&local_2c,param_1,uVar12);
    fVar15 = local_94;
    if (((~(byte)local_b0 | local_b4._0_1_) & 1) == 0) {
      FUN_101658f6();
    }
    iVar8 = local_7c;
    if (((uint)local_a4 >> 9 & 1) == 0) {
      if (((uint)local_a4 >> 8 & 1) == 0) {
        iVar13 = 1;
        if (SUB41(fVar15,0) != '\0') {
          iVar13 = 3 - (uint)(((uint)local_a4 >> 0x1d & 1) != 0);
        }
        FUN_10193b2c(*(undefined4 *)(iVar1 + 0x2e8),local_80 + local_78,
                     *(float *)(iVar2 + 0x1228) * DAT_102b9110 + local_c8,local_c0,iVar13,0x3f333333
                    );
      }
    }
    else {
      FUN_10193c4a(*(undefined4 *)(iVar1 + 0x2e8),local_bc - DAT_102b70e0 * local_c4,
                   *(float *)(iVar2 + 0x1228) * DAT_102b70e0 + local_c8,local_c0);
    }
    if (*(char *)(iVar2 + 0x2748) == '\x01') {
      puVar22 = (undefined *)0x0;
      puVar21 = &DAT_1033cff8;
LAB_10148a52:
      FUN_10118366(puVar21,puVar22);
    }
  }
  else {
    bVar16 = 0x19;
    if (local_4a != 0) {
      bVar16 = local_4b | 0x1a;
    }
    uVar6 = FUN_100fcb39(bVar16,0x3f800000);
    FUN_100fdee9(local_2c,fStack_28,fStack_24,fStack_20,uVar6,1,*(undefined4 *)(iVar2 + 0xd14));
    FUN_100fe25e(&local_2c,param_1,uVar12);
    if (((~(byte)local_b0 | local_b4._0_1_) & 1) == 0) {
      FUN_101658f6();
    }
    iVar8 = local_7c;
    fVar15 = local_94;
    if (((uint)local_a4 >> 9 & 1) == 0) {
      if (((uint)local_a4 >> 8 & 1) == 0) {
        iVar13 = 1;
        if (SUB41(local_94,0) != '\0') {
          iVar13 = 3 - (uint)(((uint)local_a4 >> 0x1d & 1) != 0);
        }
        FUN_10193b2c(*(undefined4 *)(iVar1 + 0x2e8),local_80 + local_78,local_c8,local_c0,iVar13,
                     0x3f800000);
      }
      else {
        local_bc = local_bc - (local_c4 - local_78);
        local_34 = local_bc;
      }
    }
    else {
      FUN_10193c4a(*(undefined4 *)(iVar1 + 0x2e8),DAT_102b9638 * local_c4 + local_bc,
                   *(float *)(iVar2 + 0x1228) * DAT_102b70e0 + local_c8,local_c0);
    }
    if (((uint)local_a4 >> 0x1c & 1) != 0) {
      fStack_24 = fStack_24 - (*(float *)(iVar2 + 0x1228) + *(float *)(iVar2 + 0xd0c));
    }
    if (*(char *)(iVar2 + 0x2748) == '\x01') {
      puVar22 = &DAT_1034a58c;
      puVar21 = &DAT_1034a58c;
      goto LAB_10148a52;
    }
  }
  if ((char)local_a8 != '\0') {
    local_54 = CONCAT44(*(float *)(iVar2 + 0x1228) * DAT_102b70e0 + local_c8,
                        local_78 + (local_bc - local_c4));
    FUN_10148eda(&local_54);
  }
  if ((param_2 & 2) == 0) {
    FUN_100fd5ae(local_bc,local_c8,param_3,iVar8,0);
  }
  else {
    local_54 = 0;
    FUN_100fdbf2(&local_34,&fStack_24,param_3,iVar8,&local_1c,&local_54,0);
  }
  if (local_b4._0_1_ != '\0') {
    FUN_101658f6();
  }
  if ((byte)((byte)local_b8 & SUB41(fVar15,0)) == 1) {
    FUN_10148d61();
  }
  if (SUB41(fVar15,0) == 1 && (char)(((uint)local_a4 & 8) >> 3) == '\0') {
    FUN_10148eb8(param_1);
  }
LAB_10147df5:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (uint)fVar15;
}

