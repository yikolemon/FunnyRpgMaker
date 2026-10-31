/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d5408 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d5408(void)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  ushort uVar3;
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint in_XMM0_Dd;
  double dVar11;
  double dVar12;
  ulonglong in_XMM2_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  ulonglong unaff_XMM7_Qb;
  undefined1 auVar22 [16];
  double in_stack_00000004;
  
  uVar10 = (uint)((ulonglong)in_stack_00000004 >> 0x20);
  uVar5 = uVar10 >> 0xc & 0x7ffff;
  iVar8 = (int)&stack0x00000000;
  if (uVar5 - 0x3fb00 < 0x3bb) {
    auVar13._0_8_ = CONCAT44(uRam0000000150bfafa6,_DAT_150bfafa2) & (ulonglong)in_stack_00000004;
    auVar13._8_8_ = in_XMM2_Qb & unaff_XMM7_Qb;
    uVar7 = (ulonglong)((uVar10 >> 0xc & 0xfffc) - 0xfb00);
    lVar1 = uVar7 * 4;
    dVar16 = SUB168(auVar13 | ZEXT816(0x200000000000),0);
    dVar21 = in_stack_00000004 * *(double *)(uVar7 * 2 + 0x10327fa0);
    dVar15 = SQRT(_DAT_150bfaf9e - in_stack_00000004 * in_stack_00000004) * dVar16;
    dVar11 = dVar21 - dVar15;
    uVar5 = SUB164(auVar13 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar12 = dVar11 * dVar11;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar5;
    auVar14._0_12_ = auVar4 << 0x20;
    auVar14._12_4_ = uVar5;
    *(double *)((ulonglong)(iVar8 - 0x10) + 4) =
         (((_DAT_150bfafe9 * dVar12 + _DAT_150bfb00c) * dVar11 * dVar12 * dVar12 +
          (_DAT_150bfafe1 * dVar11 * dVar12 -
          ((double)(*(ulonglong *)(lVar1 + 0x103270a0) ^ (ulonglong)uVar5 << 0x20) - _DAT_150bfafb7)
          )) - ((in_stack_00000004 + dVar16) * (in_stack_00000004 - dVar16)) / (dVar21 + dVar15)) -
         ((double)(*(ulonglong *)(lVar1 + 0x103270a8) ^ auVar14._8_8_) - dRam0000000150bfafbf);
    return;
  }
  if (uVar5 - 0x3febb < 0x41) {
    dVar21 = (double)((ulonglong)in_stack_00000004 & 0xffffffc000000000);
    auVar2._8_4_ = in_XMM0_Dd >> 0xc;
    auVar2._0_8_ = in_stack_00000004;
    dVar16 = _DAT_150bfaf9e - dVar21 * dVar21;
    dVar11 = (in_stack_00000004 + dVar21) * (in_stack_00000004 - dVar21);
    dVar15 = SQRT(dVar16 - dVar11);
    iVar6 = -(uint)(SUB121(auVar2 >> 0x3f,0) & 1);
    dVar12 = (double)(CONCAT44(uRam0000000150bfafa6,_DAT_150bfafa2) & (ulonglong)dVar15 |
                     ~_DAT_150bfaf86 & (ulonglong)in_stack_00000004 | 0x200000000000);
    auVar17._0_8_ = CONCAT44(iVar6,iVar6);
    auVar17._8_4_ = iVar6;
    auVar17._12_4_ = iVar6;
    uVar7 = (ulonglong)(((ushort)((ulonglong)((longlong)dVar15 << 2) >> 0x30) - 0xfec0) * 2);
    dVar15 = dVar15 * *(double *)(uVar7 * 4 + 0x10327fa0);
    dVar21 = (dVar21 * dVar12 - dVar15) + (in_stack_00000004 - dVar21) * dVar12;
    dVar11 = ((dVar16 - dVar12 * dVar12) - dVar11) / (dVar15 + dVar15 + dVar21);
    lVar1 = uVar7 * 8;
    dVar16 = (double)(auVar17._8_8_ & uRam0000000150bfb098) + *(double *)(lVar1 + 0x103270a8);
    dVar15 = dVar21 * dVar21;
    dVar12 = dVar11 + dVar16;
    *(ulonglong *)((ulonglong)(iVar8 - 0x10) + 4) =
         (ulonglong)
         ((_DAT_150bfb11c * dVar15 + (double)CONCAT44(uRam0000000150bfb124,_DAT_150bfb120)) *
          dVar21 * dVar15 * dVar15 +
          _DAT_150bfb0fc * dVar21 * dVar15 +
          (double)(auVar17._0_8_ & _DAT_150bfb090) + *(double *)(lVar1 + 0x103270a0) +
          dVar11 + (dVar16 - dVar12) + dVar12) ^ (ulonglong)((ushort)iVar6 & 0x8000) << 0x30;
    return;
  }
  if (uVar5 - 0x3c300 < 0x3800) {
    dVar11 = in_stack_00000004 * in_stack_00000004;
    dVar12 = in_stack_00000004 * in_stack_00000004;
    dVar16 = in_stack_00000004 * dVar11;
    *(double *)((ulonglong)(iVar8 - 0x10) + 4) =
         (dRam0000000150bfb165 - in_stack_00000004) +
         (((_DAT_150bfb15d -
           dVar16 * dVar16 * dVar16 *
           (_DAT_150bfb1bd * dVar11 + _DAT_150bfb1d9 + _DAT_150bfb1f1 * dVar11 * dVar11)) -
          in_stack_00000004 * dVar12 *
          (dRam0000000150bfb1c5 * dVar12 + dRam0000000150bfb1e1 +
          dRam0000000150bfb1f9 * dVar12 * dVar12)) -
         (in_stack_00000004 - (dRam0000000150bfb165 - (dRam0000000150bfb165 - in_stack_00000004))));
    return;
  }
  uVar3 = (ushort)((ulonglong)in_stack_00000004 >> 0x30);
  if (uVar5 - 0x3fefc < 4) {
    dVar11 = _DAT_150bfb2bb -
             (double)((ulonglong)in_stack_00000004 & _DAT_150bfb29b) * _DAT_150bfb2bb;
    uVar19 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar22._8_4_ = SUB84(dVar11,0);
    auVar22._0_8_ = dVar11;
    auVar22._12_4_ = uVar19;
    dVar12 = SQRT(dVar11);
    dVar15 = auVar22._8_8_;
    auVar20._8_4_ = SUB84(dVar11,0);
    auVar20._0_8_ = dVar11;
    auVar20._12_4_ = uVar19;
    dVar16 = (double)(CONCAT62(uRam0000000150bfb26c,CONCAT11(DAT_150bfb26b,DAT_150bfb26a)) &
                     (ulonglong)dVar12);
    auVar18._8_4_ = SUB84(dVar12,0);
    auVar18._0_8_ = dVar12;
    auVar18._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(ulonglong *)((ulonglong)(iVar8 - 0x10) + 4) =
         (ulonglong)
         ((double)(-(ulonglong)(in_stack_00000004 < 0.0) &
                  CONCAT17(DAT_150bfb26b,CONCAT16(DAT_150bfb26a,uRam0000000150bfb264))) +
         (_DAT_150bfb287 +
          (double)CONCAT17(uRam0000000150bfb272,CONCAT61(uRam0000000150bfb26c,DAT_150bfb26b)) *
          dVar11 + _DAT_150bfb2a3 * dVar11 * dVar11) * dVar11 * dVar11 * dVar11 * dVar11 *
         (dVar12 + dVar12) + (double)(-(ulonglong)(in_stack_00000004 < 0.0) & _DAT_150bfb25c) +
         (dRam0000000150bfb28f + dRam0000000150bfb273 * dVar15 +
         dRam0000000150bfb2ab * dVar15 * dVar15) * auVar20._8_8_ * (auVar18._8_8_ + auVar18._8_8_) +
         ((dVar11 - dVar16 * dVar16) - (dVar12 - dVar16) * ((dVar12 + dVar12) - (dVar12 - dVar16)))
         / dVar12 + dVar12 + dVar12) ^ (ulonglong)(uVar3 & 0x8000) << 0x30;
    return;
  }
  if (uVar5 < 0x3ff00) {
    *(double *)((ulonglong)(iVar8 - 0x10) + 4) =
         _DAT_150bfb3d5 + (double)CONCAT53(_DAT_150bfb3c8,_DAT_150bfb3c5);
    return;
  }
  if ((uVar10 & 0x7fffffff) != 0x3ff00000 || SUB84(in_stack_00000004,0) != 0) {
    if ((int)(((uVar10 & 0x7fffffff) + 0x80100000) - (uint)(SUB84(in_stack_00000004,0) == 0)) < 0) {
      dVar11 = -NAN;
      iVar6 = 0x3a;
    }
    else {
      dVar11 = in_stack_00000004 + 0.0;
      iVar6 = 0x3f0;
    }
    piVar9 = (int *)(ulonglong)(iVar8 - 0x1c);
    *(double *)(piVar9 + 4) = dVar11;
    piVar9[3] = iVar6;
    piVar9[2] = iVar8 + -0xc;
    piVar9[1] = iVar8 + 4;
    *piVar9 = iVar8 + 4;
    piVar9[-2] = 0x408d58b3;
    piVar9[-1] = 1;
    FUN_1408d5cb0();
    *(undefined8 *)((ulonglong)(iVar8 - 0x10) + 4) = *(undefined8 *)(piVar9 + 4);
    return;
  }
  iVar6 = -(uint)(uVar3 >> 0xf);
  uVar7 = CONCAT44(iVar6,iVar6);
  *(double *)((ulonglong)(iVar8 - 0x10) + 4) =
       (double)(CONCAT35(uRam0000000150bfb3cd,_DAT_150bfb3c8) & uVar7) +
       (double)(_DAT_150bfb3b8 & uVar7);
  return;
}

