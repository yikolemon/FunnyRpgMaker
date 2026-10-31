/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010740f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010740f(void)

{
  float fVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  float fVar6;
  bool bVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined4 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float local_54;
  undefined8 *local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  fVar10 = *(float *)(DAT_1039d74c + 0x14e0);
  if (fVar10 == 0.0) {
LAB_101074cd:
    fVar10 = *(float *)(iVar4 + 0x14d0);
    bVar7 = true;
    if (fVar10 == 0.0) goto LAB_101074e2;
  }
  else {
    local_48 = *(float *)(DAT_1039d74c + 0x14f4) - *(float *)(DAT_1039d74c + 0x48);
    *(float *)(DAT_1039d74c + 0x14f4) = local_48;
    local_54 = 0.0;
    cVar5 = FUN_10103c30();
    if ((cVar5 == '\0') ||
       (fVar9 = *(float *)(iVar4 + 0xe8) - *(float *)(iVar4 + 0x14e8),
       fVar15 = *(float *)(iVar4 + 0xe4) - *(float *)(iVar4 + 0x14e4),
       fVar15 * fVar15 + fVar9 * fVar9 <= *(float *)(iVar4 + 0x90) * *(float *)(iVar4 + 0x90))) {
      if (local_48 <= 0.0) goto LAB_101074b7;
      bVar7 = false;
    }
    else {
      *(undefined4 *)(iVar4 + 0x14f4) = 0;
LAB_101074b7:
      bVar7 = false;
      FUN_10126ed4();
      fVar10 = *(float *)(iVar4 + 0x14e0);
      if (fVar10 == 0.0) goto LAB_101074cd;
    }
  }
  if (*(char *)((int)fVar10 + 0xfc) != '\0') goto LAB_101074e2;
  puVar3 = *(undefined8 **)((int)fVar10 + 8);
  local_54 = 9.26258e-43;
  local_50 = puVar3;
  cVar5 = FUN_10113c9d();
  local_48 = 0.0;
  if (cVar5 != '\0') {
    local_48 = *(float *)(iVar4 + 0xf8);
  }
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  uStack_3c = 0;
  local_54 = 9.2766e-43;
  local_50 = puVar3;
  cVar5 = FUN_10113c9d();
  fVar9 = 0.0;
  if (cVar5 != '\0') {
    fVar9 = *(float *)(iVar4 + 0xf4);
  }
  if (!bVar7) {
    local_4c = 0;
    local_54 = 9.26258e-43;
    local_50 = puVar3;
    local_38 = fVar9;
    FUN_101143b4();
    local_4c = 0;
    local_54 = 9.2766e-43;
    local_50 = puVar3;
    FUN_101143b4();
    fVar9 = local_38;
  }
  if ((fVar9 != 0.0) || (NAN(fVar9))) {
    if (*(char *)(iVar4 + 0x104) != '\0') {
      if (*(char *)(iVar4 + 100) == '\x01') {
        FUN_10126ed4();
        local_54 = *(float *)(iVar4 + 0xf4) * DAT_102b71b8 + *(float *)((int)fVar10 + 0x2d8);
        local_4c = 0x40200000;
        local_50 = (undefined8 *)0x3f000000;
        fVar8 = (float10)FUN_10112cc4();
        local_28 = (float)fVar8;
        fVar9 = *(float *)((int)fVar10 + 0x2d8);
        *(float *)((int)fVar10 + 0x2d8) = local_28;
        if (fVar10 == *(float *)((int)fVar10 + 0x3a8)) {
          local_48 = local_28 / fVar9;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          uStack_3c = 0;
          uVar2 = *(ulonglong *)((int)fVar10 + 0x58);
          fVar9 = (float)*(undefined8 *)((int)fVar10 + 0x50);
          fVar15 = (float)((ulonglong)*(undefined8 *)((int)fVar10 + 0x50) >> 0x20);
          auVar18._0_4_ =
               (DAT_1028b430 - local_48) * (float)uVar2 *
               ((float)*(undefined8 *)(iVar4 + 0xe4) - fVar9);
          auVar18._4_4_ =
               (DAT_1028b430 - local_48) * (float)(uVar2 >> 0x20) *
               ((float)((ulonglong)*(undefined8 *)(iVar4 + 0xe4) >> 0x20) - fVar15);
          auVar18._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar2;
          auVar11 = divps(auVar18,auVar11);
          local_1c = CONCAT44(auVar11._4_4_ + fVar15,auVar11._0_4_ + fVar9);
          local_50 = &local_1c;
          local_4c = 0;
          local_54 = fVar10;
          FUN_10103c64();
          *(float *)((int)fVar10 + 0x58) = (float)(int)(local_48 * *(float *)((int)fVar10 + 0x58));
          *(float *)((int)fVar10 + 0x5c) = (float)(int)(local_48 * *(float *)((int)fVar10 + 0x5c));
          *(float *)((int)fVar10 + 0x60) = (float)(int)(local_48 * *(float *)((int)fVar10 + 0x60));
          *(float *)((int)fVar10 + 100) = (float)(int)(local_48 * *(float *)((int)fVar10 + 100));
          local_54 = fVar10;
          FUN_1010e508();
        }
      }
      goto LAB_101074e2;
    }
  }
  else if (*(char *)(iVar4 + 0x104) != '\0') goto LAB_101074e2;
  uVar2 = *(ulonglong *)(iVar4 + 0x1500);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar11 = divps(auVar14,_DAT_102b8c40);
  fVar10 = local_48;
  fVar15 = fStack_44;
  if (*(char *)(iVar4 + 0xb72) != '\0') {
    fVar10 = fVar9;
    fVar15 = 0.0;
    fVar9 = 0.0;
  }
  auVar17._0_4_ = _DAT_1028b410 & (uint)fVar10;
  auVar17._4_4_ = _UNK_1028b414 & (uint)fVar9;
  auVar17._8_4_ = _UNK_1028b418 & (uint)fVar15;
  auVar17._12_4_ = 0;
  auVar18 = divps(auVar17,_DAT_102b8c40);
  *(ulonglong *)(iVar4 + 0x1500) =
       CONCAT44(auVar18._4_4_ + ((float)(uVar2 >> 0x20) - auVar11._4_4_),
                auVar18._0_4_ + ((float)uVar2 - auVar11._0_4_));
  fVar10 = fVar10 + (float)*(undefined8 *)(iVar4 + 0x14f8);
  fVar9 = fVar9 + (float)((ulonglong)*(undefined8 *)(iVar4 + 0x14f8) >> 0x20);
  local_1c = CONCAT44(fVar9,fVar10);
  *(undefined4 *)(iVar4 + 0x14f8) = 0;
  *(undefined4 *)(iVar4 + 0x14fc) = 0;
  if (((((fVar10 == 0.0) && (fVar9 == 0.0)) && (!NAN(fVar9))) ||
      ((fVar6 = *(float *)(iVar4 + 0x14e0), fVar12 = fVar15 + 0.0, uVar13 = 0, fVar16 = fVar9,
       fVar19 = fVar9, fVar20 = fVar9, fVar21 = fVar9, fVar6 == 0.0 &&
       (local_48 = fVar10, fStack_44 = fVar9, fStack_40 = fVar15 + 0.0, uStack_3c = 0,
       local_38 = fVar9, fStack_34 = fVar9, fStack_30 = fVar9, fStack_2c = fVar9,
       fVar6 = (float)FUN_10126f94(), fVar10 = local_48, fVar9 = fStack_44, fVar12 = fStack_40,
       uVar13 = uStack_3c, fVar16 = local_38, fVar19 = fStack_34, fVar20 = fStack_30,
       fVar21 = fStack_2c, fVar6 == 0.0)))) || ((*(ushort *)((int)fVar6 + 0xc) & 0x210) != 0))
  goto LAB_101074e2;
  if ((fVar10 != 0.0) || (NAN(fVar10))) {
    fVar15 = *(float *)((int)fVar6 + 0xcc);
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      fVar1 = *(float *)((int)fVar6 + 0xd0);
      bVar7 = fVar1 != 0.0;
      if (fVar15 != 0.0 && bVar7) {
        if (*(float *)(iVar4 + 0x1500) < *(float *)(iVar4 + 0x1504) ||
            *(float *)(iVar4 + 0x1500) == *(float *)(iVar4 + 0x1504)) goto LAB_10107877;
        goto LAB_101077cc;
      }
      if ((fVar15 == 0.0) && (!NAN(fVar15))) goto LAB_1010786f;
    }
    else {
      if ((fVar15 == 0.0) && (!NAN(fVar15))) goto LAB_101074e2;
LAB_101077cc:
      bVar7 = false;
    }
    local_48 = fVar10;
    fStack_44 = fVar9;
    fStack_40 = fVar12;
    uStack_3c = uVar13;
    local_38 = fVar16;
    fStack_34 = fVar19;
    fStack_30 = fVar20;
    fStack_2c = fVar21;
    FUN_10126ed4();
    local_50 = (undefined8 *)
               ((*(float *)((int)fVar6 + 0x254) - *(float *)((int)fVar6 + 0x24c)) * _DAT_102b8c50);
    local_54 = *(float *)((int)fVar6 + 0x2e0) + *(float *)((int)fVar6 + 0x2e0);
    fVar8 = (float10)FUN_100ea38a();
    local_20 = (float)fVar8;
    local_50 = (undefined8 *)(*(float *)((int)fVar6 + 0xc4) - (float)(int)fVar8 * local_48);
    local_54 = fVar6;
    FUN_10115911();
    *(undefined4 *)(iVar4 + 0x14f0) = *(undefined4 *)(iVar4 + 4);
    fVar16 = local_38;
    fVar19 = fStack_34;
    fVar20 = fStack_30;
    fVar21 = fStack_2c;
joined_r0x10107861:
    if (!bVar7) goto LAB_101074e2;
  }
  else {
    if ((fVar16 == 0.0) && (!NAN(fVar16))) goto LAB_101074e2;
    fVar1 = *(float *)((int)fVar6 + 0xd0);
LAB_1010786f:
    bVar7 = NAN(fVar1);
    if (fVar1 == 0.0) goto joined_r0x10107861;
  }
LAB_10107877:
  local_38 = fVar16;
  fStack_34 = fVar19;
  fStack_30 = fVar20;
  fStack_2c = fVar21;
  FUN_10126ed4();
  local_50 = (undefined8 *)
             ((*(float *)((int)fVar6 + 600) - *(float *)((int)fVar6 + 0x250)) * _DAT_102b8c50);
  local_54 = *(float *)((int)fVar6 + 0x2e0) * DAT_102b7100;
  fVar8 = (float10)FUN_100ea38a();
  local_24 = (float)fVar8;
  local_50 = (undefined8 *)(*(float *)((int)fVar6 + 200) - (float)(int)fVar8 * local_38);
  local_54 = fVar6;
  FUN_10115932();
  *(undefined4 *)(iVar4 + 0x14f0) = *(undefined4 *)(iVar4 + 4);
LAB_101074e2:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

