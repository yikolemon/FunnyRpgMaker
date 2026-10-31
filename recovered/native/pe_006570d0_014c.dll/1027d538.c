/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027d538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1027d538(double param_1)

{
  undefined1 auVar1 [12];
  ushort uVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong uVar19;
  ulonglong in_XMM7_Qb;
  undefined1 auVar20 [16];
  double local_c;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  uVar4 = uVar8 >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = DAT_10325b78 & (ulonglong)param_1;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (uVar8 >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(DAT_10325b80 - param_1 * param_1) * dVar14;
    dVar9 = param_1 * *(double *)(&DAT_10327fa0 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((DAT_10325b28 * dVar10 + DAT_10325b20) * dVar9 * dVar10 * dVar10 +
                      (DAT_10325b18 * dVar9 * dVar10 -
                      ((double)(*(ulonglong *)(&DAT_103270a0 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      DAT_10325ab0))) -
                     ((param_1 + dVar14) * (param_1 - dVar14)) /
                     (param_1 * *(double *)(&DAT_10327fa0 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_103270a8 + iVar6) ^ auVar12._8_8_) - DAT_10325ab8)
                    );
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)param_1 & 0xffffffc000000000);
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    auVar1._0_8_ = param_1;
    dVar14 = DAT_10325b80 - dVar18 * dVar18;
    dVar9 = (param_1 + dVar18) * (param_1 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)(DAT_10325b78 & (ulonglong)dVar13 |
                     ~DAT_10325b70 & (ulonglong)param_1 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_10327fa0 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (param_1 - dVar18) * dVar10;
    dVar9 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar14 = (double)(auVar15._8_8_ & _UNK_10325ac8) + *(double *)(&DAT_103270a8 + iVar6);
    dVar13 = dVar18 * dVar18;
    dVar10 = dVar9 + dVar14;
    return (float10)(double)((ulonglong)
                             ((DAT_10325b28 * dVar13 + DAT_10325b20) * dVar18 * dVar13 * dVar13 +
                              DAT_10325b18 * dVar18 * dVar13 +
                              (double)(auVar15._0_8_ & _DAT_10325ac0) +
                              *(double *)(&DAT_103270a0 + iVar6) + dVar9 + (dVar14 - dVar10) +
                             dVar10) ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = param_1 * param_1;
    dVar10 = param_1 * param_1;
    dVar14 = param_1 * dVar9;
    return (float10)((DAT_10325ab8 - param_1) +
                    (((DAT_10325ab0 -
                      dVar14 * dVar14 * dVar14 *
                      (_DAT_10325b30 * dVar9 + _DAT_10325b40 + _DAT_10325b50 * dVar9 * dVar9)) -
                     param_1 * dVar10 *
                     (_UNK_10325b38 * dVar10 + _UNK_10325b48 + _UNK_10325b58 * dVar10 * dVar10)) -
                    (param_1 - (DAT_10325ab8 - (DAT_10325ab8 - param_1)))));
  }
  uVar2 = (ushort)((ulonglong)param_1 >> 0x30);
  if (uVar4 - 0x3fefc < 4) {
    dVar9 = DAT_10325b88 - (double)((ulonglong)param_1 & DAT_10325b70) * DAT_10325b88;
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar20._8_4_ = SUB84(dVar9,0);
    auVar20._0_8_ = dVar9;
    auVar20._12_4_ = uVar7;
    dVar10 = SQRT(dVar9);
    dVar13 = auVar20._8_8_;
    auVar17._8_4_ = SUB84(dVar9,0);
    auVar17._0_8_ = dVar9;
    auVar17._12_4_ = uVar7;
    dVar14 = (double)(DAT_10325af0 & (ulonglong)dVar10);
    auVar16._8_4_ = SUB84(dVar10,0);
    auVar16._0_8_ = dVar10;
    auVar16._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(-(ulonglong)(param_1 < 0.0) & _UNK_10325ac8) +
                             (_DAT_10325b40 + _DAT_10325b30 * dVar9 + _DAT_10325b50 * dVar9 * dVar9)
                             * dVar9 * dVar9 * dVar9 * dVar9 * (dVar10 + dVar10) +
                             (double)(-(ulonglong)(param_1 < 0.0) & _DAT_10325ac0) +
                             (_UNK_10325b48 + _UNK_10325b38 * dVar13 +
                             _UNK_10325b58 * dVar13 * dVar13) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar9 - dVar14 * dVar14) -
                             (dVar10 - dVar14) * ((dVar10 + dVar10) - (dVar10 - dVar14))) / dVar10 +
                             dVar10 + dVar10) ^ (ulonglong)(uVar2 & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)(DAT_10325ab8 + DAT_10325ab0);
  }
  if ((uVar8 & 0x7fffffff) != 0x3ff00000 || SUB84(param_1,0) != 0) {
    if ((int)(((uVar8 & 0x7fffffff) + 0x80100000) - (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      local_c = param_1 + 0.0;
      uVar7 = 0x3f0;
    }
    FUN_1027dde0(&param_1,&param_1,&local_c,uVar7);
    return (float10)local_c;
  }
  iVar6 = -(uint)(uVar2 >> 0xf);
  uVar19 = CONCAT44(iVar6,iVar6);
  return (float10)((double)(DAT_10325ad8 & uVar19) + (double)(DAT_10325ad0 & uVar19));
}

