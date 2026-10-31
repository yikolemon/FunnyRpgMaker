/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400941ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400941ae(undefined8 *param_1,uint param_2)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  float fVar9;
  float fVar19;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  ulonglong local_50;
  undefined1 auVar13 [16];
  undefined1 auVar11 [16];
  
  lVar4 = DAT_140f2a910;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x2200);
  iVar6 = FUN_140095029(param_2);
  if (iVar6 == 1) {
    cVar5 = FUN_140081bec((undefined8 *)(lVar4 + 0x118));
    puVar7 = (undefined8 *)(lVar4 + 0x26a0);
    if (cVar5 != '\0') {
      puVar7 = (undefined8 *)(lVar4 + 0x118);
    }
    uVar10 = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) + _UNK_140211614,
                      (float)*puVar7 + _DAT_140211610);
    goto LAB_140094358;
  }
  if ((((*(int *)(lVar4 + 0x167c) == 0) || (*(char *)(lVar4 + 0x168e) != '\x01')) ||
      ((param_2 >> 0x1a & 1) == 0)) || (*(int *)(lVar4 + 0x167c) != *(int *)(lVar4 + 0x1fe0))) {
    if (lVar2 != 0) {
      pfVar1 = (float *)(lVar2 + 0x458 + (longlong)*(int *)(lVar4 + 0x220c) * 0x10);
      fVar17 = (float)*(undefined8 *)(lVar2 + 0x168);
      fVar16 = *pfVar1 + fVar17;
      fVar17 = pfVar1[2] + fVar17;
      fVar18 = pfVar1[3] + (float)((ulonglong)*(undefined8 *)(lVar2 + 0x168) >> 0x20);
      goto LAB_140094278;
    }
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
LAB_1400942d6:
    bVar3 = true;
  }
  else {
    fVar16 = *(float *)(lVar4 + 0x1ffc);
    fVar17 = *(float *)(lVar4 + 0x2004);
    fVar18 = *(float *)(lVar4 + 0x2008);
    if (lVar2 == 0) goto LAB_1400942d6;
LAB_140094278:
    if (*(int *)(lVar2 + 0x2e0) != *(int *)(lVar4 + 4)) {
      if (*(float *)(lVar2 + 0xe4) == DAT_1402112e4) {
        if ((*(float *)(lVar2 + 0xe8) == DAT_1402112e4) &&
           (!NAN(*(float *)(lVar2 + 0xe8)) && !NAN(DAT_1402112e4))) goto LAB_1400942cf;
      }
      FUN_14008db73(local_58,lVar2);
      fVar9 = (float)*(undefined8 *)(lVar2 + 0xd4) - local_58._0_4_;
      fVar16 = fVar16 + fVar9;
      fVar17 = fVar17 + fVar9;
      fVar18 = fVar18 + ((float)((ulonglong)*(undefined8 *)(lVar2 + 0xd4) >> 0x20) - local_58._4_4_)
      ;
    }
LAB_1400942cf:
    bVar3 = false;
  }
  fVar9 = (float)FUN_14004863e();
  auVar15._0_8_ = FUN_14004863e(*(float *)(lVar4 + 0xdf4) * DAT_140211518,fVar17 - fVar16);
  auVar15._8_8_ = extraout_XMM0_Qb;
  auVar11._4_12_ = auVar15._4_12_;
  fVar19 = (float)auVar15._0_8_ + fVar16;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_4_ = (int)((ulonglong)auVar15._0_8_ >> 0x20);
  auVar13._12_4_ = fVar18;
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._0_8_ = CONCAT44(fVar18 - fVar9,fVar19);
  if ((!bVar3) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
    fVar16 = (float)*(undefined8 *)(lVar2 + 8);
    fVar17 = (float)((ulonglong)*(undefined8 *)(lVar2 + 8) >> 0x20);
    auVar14._0_4_ = (float)*(undefined8 *)(lVar2 + 0x10) + fVar16;
    auVar14._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) + fVar17;
    auVar14._8_8_ = 0;
    auVar15 = minps(auVar14,auVar12);
    uVar8 = -(uint)(fVar18 - fVar9 < fVar17);
    auVar12._0_8_ =
         CONCAT44(~uVar8 & auVar15._4_4_,~-(uint)(fVar19 < fVar16) & auVar15._0_4_) |
         CONCAT44((uint)fVar17 & uVar8,(uint)fVar16 & -(uint)(fVar19 < fVar16));
  }
  uVar10 = CONCAT44((float)(int)(float)(auVar12._0_8_ >> 0x20),(float)(int)(float)auVar12._0_8_);
LAB_140094358:
  *param_1 = uVar10;
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_78);
}

