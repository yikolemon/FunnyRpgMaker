/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012724c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1012724c(int param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float *local_94;
  float local_90;
  undefined4 local_8c;
  float *local_88;
  float *pfStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float *local_74;
  float *pfStack_70;
  float *pfStack_6c;
  float *pfStack_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_94;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(int *)(DAT_1039d74c + 0x2050) != *(int *)(iVar1 + 0x19c)) {
LAB_1012732a:
    uVar6 = 0;
    goto LAB_1012732c;
  }
  local_24 = *param_2;
  pfStack_20 = (float *)param_2[1];
  fStack_1c = param_2[2];
  fStack_18 = param_2[3];
  pfVar13 = (float *)(DAT_1039d74c + 0x20f4);
  pfVar15 = (float *)(DAT_1039d74c + 0x20f8);
  pfVar14 = (float *)(DAT_1039d74c + 0x20fc);
  pfVar16 = (float *)(DAT_1039d74c + 0x2100);
  *(int *)(DAT_1039d74c + 0x2114) = *(int *)(DAT_1039d74c + 0x2114) + 1;
  pfVar17 = (float *)*pfVar13;
  pfVar18 = (float *)*pfVar15;
  fVar8 = 0.0;
  fVar12 = 0.0;
  fVar9 = *pfVar14;
  fVar10 = *pfVar16;
  fVar11 = 0.0;
  fVar19 = 0.0;
  if (*(int *)(iVar1 + 0x3a0) == *(int *)(iVar4 + 0x2048)) {
    if ((((*(float *)(iVar1 + 0x298) <= (float)pfStack_20) ||
         (fStack_18 < *(float *)(iVar1 + 0x290) || fStack_18 == *(float *)(iVar1 + 0x290))) ||
        (*(float *)(iVar1 + 0x294) <= local_24)) ||
       (pfVar17 = (float *)(iVar1 + 0x28c), fStack_1c < *pfVar17 || fStack_1c == *pfVar17))
    goto LAB_1012732a;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    local_94 = pfVar17;
    local_88 = (float *)*pfVar13;
    pfStack_84 = (float *)*pfVar15;
    local_44 = *pfVar14;
    fStack_40 = *pfVar16;
    FUN_1010fa6a();
    pfVar17 = local_88;
    pfVar18 = pfStack_84;
    fVar8 = fStack_80;
    fVar12 = fStack_7c;
    fVar9 = local_44;
    fVar10 = fStack_40;
    fVar11 = fStack_3c;
    fVar19 = fStack_38;
  }
  if ((float)pfVar17 <= fStack_1c) {
    local_64 = 0.0;
    if (fVar9 < local_24) {
      local_64 = local_24 - fVar9;
    }
  }
  else {
    local_64 = fStack_1c - (float)pfVar17;
  }
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_8c = 0x3f4ccccd;
  local_94 = pfVar18;
  local_90 = fVar10;
  local_88 = pfVar17;
  pfStack_84 = pfVar18;
  fStack_80 = fVar8;
  fStack_7c = fVar12;
  local_74 = pfVar18;
  pfStack_70 = pfVar18;
  pfStack_6c = pfVar18;
  pfStack_68 = pfVar18;
  local_44 = fVar9;
  fStack_40 = fVar10;
  fStack_3c = fVar11;
  fStack_38 = fVar19;
  local_34 = fVar10;
  fStack_30 = fVar10;
  fStack_2c = fVar10;
  fStack_28 = fVar10;
  fVar7 = (float10)FUN_100ea365();
  local_78 = (float)fVar7;
  local_8c = 0x3e4ccccd;
  local_90 = local_34;
  local_94 = local_74;
  local_48 = local_78;
  fVar7 = (float10)FUN_100ea365();
  local_4c = (float)fVar7;
  local_8c = 0x3f4ccccd;
  local_90 = fStack_18;
  local_94 = pfStack_20;
  local_34 = local_4c;
  fVar7 = (float10)FUN_100ea365();
  local_74 = (float *)(float)fVar7;
  pfStack_70 = (float *)0x0;
  pfStack_6c = (float *)0x0;
  pfStack_68 = (float *)0x0;
  local_8c = 0x3e4ccccd;
  local_90 = fStack_18;
  local_94 = pfStack_20;
  local_50 = (float)local_74;
  fVar7 = (float10)FUN_100ea365();
  local_54 = (float)fVar7;
  fVar8 = local_34;
  pfVar13 = local_74;
  pfVar14 = pfStack_70;
  pfVar15 = pfStack_6c;
  pfVar16 = pfStack_68;
  fVar12 = local_64;
  if ((float)local_74 < local_34) {
LAB_10127454:
    pfVar13 = (float *)((float)pfVar13 - fVar8);
    bVar3 = (float)pfVar13 != 0.0;
    if (((local_64 != 0.0) || (NAN(local_64))) && (((float)pfVar13 != 0.0 || (NAN((float)pfVar13))))
       ) {
      bVar3 = true;
      fVar12 = local_64 / DAT_102b8f30 + *(float *)(&DAT_102b90e0 + (uint)(0.0 < local_64) * 4);
    }
  }
  else {
    pfVar14 = (float *)0x0;
    pfVar15 = (float *)0x0;
    pfVar16 = (float *)0x0;
    fVar8 = local_78;
    pfVar13 = (float *)local_54;
    if (local_78 < local_54) goto LAB_10127454;
    pfVar13 = (float *)0x0;
    pfVar14 = (float *)0x0;
    pfVar15 = (float *)0x0;
    pfVar16 = (float *)0x0;
    bVar3 = false;
  }
  fVar8 = (fStack_1c + local_24) - ((float)local_88 + local_44);
  fVar9 = (fStack_18 + (float)pfStack_20) - ((float)pfStack_84 + fStack_40);
  fVar10 = 0.0 - (fStack_80 + fStack_3c);
  fVar11 = 0.0 - (fStack_7c + fStack_38);
  pfVar17 = (float *)((float)((uint)fVar12 & _DAT_1028b410) + (float)((uint)pfVar13 & _DAT_1028b410)
                     );
  pfVar18 = (float *)((float)((uint)fVar9 & _UNK_1028b414) + (float)((uint)fVar8 & _UNK_1028b414));
  fVar19 = (float)((uint)fVar10 & _UNK_1028b418) + (float)((uint)pfVar14 & _UNK_1028b418);
  fVar20 = (float)((uint)fVar11 & _UNK_1028b41c) + (float)((uint)fVar9 & _UNK_1028b41c);
  if (((bVar3) || (fVar12 != 0.0)) || (NAN(fVar12))) {
    local_88 = pfVar17;
    pfStack_84 = pfVar18;
    fStack_80 = fVar19;
    fStack_7c = fVar20;
    local_74 = pfVar13;
    pfStack_70 = pfVar14;
    pfStack_6c = pfVar15;
    pfStack_68 = pfVar16;
    local_64 = fVar12;
    uVar5 = FUN_10127676();
    fVar12 = local_64;
    pfVar13 = local_74;
    fVar8 = local_64;
    pfVar14 = local_74;
    pfVar15 = local_88;
    pfVar17 = local_88;
    pfVar18 = pfStack_84;
  }
  else {
    if ((fVar8 == 0.0) && (!NAN(fVar8))) {
      if ((fVar9 == 0.0) && (!NAN(fVar9))) {
        uVar5 = (uint)(*(uint *)(iVar4 + 0x2044) <= *(uint *)(iVar4 + 0x1e80));
        fVar8 = 0.0;
        pfVar14 = (float *)0.0;
        pfVar15 = (float *)0x0;
        goto LAB_10127589;
      }
    }
    local_88 = pfVar17;
    pfStack_84 = pfVar18;
    fStack_80 = fVar19;
    fStack_7c = fVar20;
    local_74 = pfVar13;
    pfStack_70 = pfVar14;
    pfStack_6c = pfVar15;
    pfStack_68 = pfVar16;
    local_64 = fVar12;
    local_44 = fVar8;
    fStack_40 = fVar9;
    fStack_3c = fVar10;
    fStack_38 = fVar11;
    uVar5 = FUN_10127676();
    fVar12 = local_64;
    pfVar13 = local_74;
    fVar8 = local_44;
    pfVar14 = (float *)fStack_40;
    pfVar15 = pfStack_84;
    pfVar17 = local_88;
    pfVar18 = pfStack_84;
  }
LAB_10127589:
  uVar2 = *(uint *)(iVar4 + 0x20e8);
  fVar9 = *(float *)(param_1 + 0x20);
  if (uVar5 != uVar2) goto LAB_101275df;
  if (fVar9 <= (float)pfVar17) {
    if (((float)pfVar17 != fVar9) || (NAN((float)pfVar17) || NAN(fVar9))) {
LAB_101275df:
      uVar6 = 0;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x24);
      if (fVar10 <= (float)pfVar18) {
        if (((float)pfVar18 == fVar10) && (!NAN((float)pfVar18) && !NAN(fVar10))) {
          if (uVar5 < 2) {
            pfVar13 = (float *)fVar12;
          }
          if ((float)pfVar13 < 0.0) goto LAB_101275db;
        }
        goto LAB_101275df;
      }
      *(float **)(param_1 + 0x24) = pfVar18;
LAB_101275db:
      uVar6 = 1;
    }
    if (((((fVar9 != DAT_102b89b4) || (NAN(fVar9) || NAN(DAT_102b89b4))) ||
         (*(float *)(param_1 + 0x28) <= (float)pfVar15)) ||
        ((*(int *)(iVar4 + 0x2050) != 1 || ((*(byte *)(*(int *)(iVar4 + 0x2048) + 0xf) & 0x10) != 0)
         ))) || (((((uVar2 != 0 || (0.0 <= fVar8)) && ((uVar2 != 1 || (fVar8 <= 0.0)))) &&
                  ((uVar2 != 2 || (0.0 <= (float)pfVar14)))) &&
                 ((uVar2 != 3 || ((float)pfVar14 <= 0.0)))))) goto LAB_1012732c;
    *(float **)(param_1 + 0x28) = pfVar15;
  }
  else {
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(pfVar18,pfVar17);
  }
  uVar6 = 1;
LAB_1012732c:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_94)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

