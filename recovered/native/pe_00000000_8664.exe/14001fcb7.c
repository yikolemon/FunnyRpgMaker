/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001fcb7 */

ulonglong * FUN_14001fcb7(ulonglong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_78 [36];
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar23 = param_2 & 0xfffffffffffff;
  uVar18 = (uint)(param_2 >> 0x34) & 0x7ff;
  if (uVar18 == 0) {
    iVar19 = -0x432;
    if (uVar23 == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1400200cd;
    }
LAB_14001fd1d:
    iVar20 = iVar19 * 0x4d105 >> 0x14;
    FUN_140020378(&local_50,2 - iVar20);
    bVar13 = (char)((2 - iVar20) * 0x1a934f >> 0x13) + (char)iVar19;
    uVar17 = uVar23 * 2;
    uVar21 = uVar23 * 2 + 1 << (bVar13 & 0x3f);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar21;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_48;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar21;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_50;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = SUB168(auVar2 * auVar8,8);
    auVar11 = auVar1 * auVar7 + auVar11;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    uVar21 = SUB168(auVar3 * ZEXT816(0x20c49ba5e353f7cf),8) >> 7;
    uVar22 = auVar11._8_4_ + (int)uVar21 * -1000;
    uVar18 = (uint)(local_48 >> (~bVar13 & 0x3f));
    if (uVar22 < uVar18) {
      if ((uVar22 != 0) || ((auVar11._0_8_ != 0 || ((uVar23 & 1) == 0)))) {
LAB_14001fe0c:
        iVar20 = iVar20 + 1;
        if ((uVar21 * -0x3898f8b4dd16f1df >> 8 | uVar21 * -0x3898f8b4dd16f1df << 0x38) <
            0x2af31dc462) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar21;
          uVar23 = SUB168(auVar6 * ZEXT816(0xabcc77118461d),8) >> 0xe;
          iVar19 = 6;
          do {
            uVar18 = (uint)uVar23;
            uVar22 = uVar18 * 0x40000000 | uVar18 * -0x3d70a3d7 >> 2;
            uVar23 = (ulonglong)uVar22;
            iVar19 = iVar19 + 2;
          } while (uVar22 < 0x28f5c29);
          goto LAB_1400200b1;
        }
        iVar19 = -1;
        do {
          uVar23 = uVar21;
          uVar21 = uVar23 * -0x70a3d70a3d70a3d7 >> 2 | uVar23 << 0x3e;
          iVar19 = iVar19 + 2;
        } while (uVar21 < 0x28f5c28f5c28f5d);
        *param_1 = uVar23;
        uVar23 = uVar23 * -0x3333333333333333 >> 1 | uVar23 << 0x3f;
LAB_140020059:
        if (uVar23 < 0x199999999999999a) {
          *param_1 = uVar23;
        }
        else {
          iVar19 = iVar19 + -1;
        }
        goto LAB_1400200c8;
      }
      uVar21 = uVar21 - 1;
      uVar22 = 1000;
    }
    else if ((uVar22 <= uVar18) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = local_50, auVar9._8_8_ = 0, auVar9._0_8_ = uVar17 - 1,
            uVar16 = SUB168(auVar4 * auVar9,8) + local_48 * (uVar17 - 1),
            ((uint)(uVar16 << (bVar13 & 0x3f) == 0 &&
                   SUB168(auVar4 * auVar9,0) >> 0x40 - (bVar13 & 0x3f) == 0) & ~(uint)uVar23) != 0
            || (uVar16 >> ((ulonglong)(byte)(0x40 - bVar13) & 0x3f) & 1) != 0)) goto LAB_14001fe0c;
    *(int *)(param_1 + 1) = iVar20;
    uVar22 = uVar22 - (uVar18 >> 1);
    local_54 = uVar22 + 0x32;
    cVar12 = FUN_14002041f(&local_54);
    uVar23 = (ulonglong)local_54 + uVar21 * 10;
    *param_1 = uVar23;
    if (cVar12 != '\0') {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar17;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_50;
      uVar17 = SUB168(auVar5 * auVar10,8) + local_48 * uVar17;
      if ((((uVar22 ^ (uint)(uVar17 >> (-bVar13 & 0x3f))) & 1) != 0) ||
         ((local_54 & 1) != 0 &&
          (SUB168(auVar5 * auVar10,0) >> (0x40 - bVar13 & 0x3f) == 0 &&
          uVar17 << (bVar13 & 0x3f) == 0))) {
        *param_1 = uVar23 - 1;
      }
    }
  }
  else {
    iVar19 = uVar18 - 0x433;
    if (uVar23 != 0) {
      uVar23 = uVar23 + 0x10000000000000;
      goto LAB_14001fd1d;
    }
    iVar20 = iVar19 * 0x9a209 + -0x3fe1f >> 0x15;
    cVar12 = (char)(iVar20 * -0x1a934f >> 0x13) + (char)iVar19;
    FUN_140020378(&local_50,-iVar20);
    uVar23 = local_48 - (local_48 >> 0x36);
    bVar14 = 0xb - cVar12;
    uVar17 = (local_48 >> 0x35) + local_48 >> (bVar14 & 0x3f);
    bVar13 = FUN_14001f137(iVar19);
    uVar21 = (ulonglong)(bVar13 ^ 1) + (uVar23 >> (bVar14 & 0x3f));
    uVar23 = uVar17 / 10;
    if (uVar23 * 10 < uVar21) {
      uVar23 = (local_48 >> (10U - cVar12 & 0x3f)) + 1 >> 1;
      *param_1 = uVar23;
      *(int *)(param_1 + 1) = iVar20;
      if (iVar19 == -0x4d) {
        uVar23 = uVar23 & 0xfffffffffffffffe;
      }
      else {
        if (uVar21 <= uVar23) goto LAB_1400200cd;
        uVar23 = uVar23 + 1;
      }
      *param_1 = uVar23;
      goto LAB_1400200cd;
    }
    iVar20 = iVar20 + 1;
    if (0x2af31dc461 < (uVar23 * -0x3898f8b4dd16f1df >> 8 | uVar23 * -0x3898f8b4dd16f1df << 0x38)) {
      iVar19 = -1;
      do {
        uVar17 = uVar23;
        uVar23 = uVar17 * -0x70a3d70a3d70a3d7 >> 2 | uVar17 << 0x3e;
        iVar19 = iVar19 + 2;
      } while (uVar23 < 0x28f5c28f5c28f5d);
      *param_1 = uVar17;
      uVar23 = uVar17 * -0x3333333333333333 >> 1 | uVar17 << 0x3f;
      goto LAB_140020059;
    }
    uVar17 = uVar17 / 1000000000;
    iVar19 = 6;
    do {
      uVar18 = (uint)uVar17;
      uVar22 = uVar18 * 0x40000000 | uVar18 * -0x3d70a3d7 >> 2;
      uVar17 = (ulonglong)uVar22;
      iVar19 = iVar19 + 2;
    } while (uVar22 < 0x28f5c29);
LAB_1400200b1:
    uVar15 = uVar18 * -0x33333333 >> 1 | (uint)((uVar18 * -0x33333333 & 1) != 0) << 0x1f;
    uVar22 = uVar15;
    if (uVar15 >= 0x1999999a) {
      uVar22 = uVar18;
    }
    iVar19 = iVar19 + (uint)(uVar15 < 0x1999999a);
    *param_1 = (ulonglong)uVar22;
LAB_1400200c8:
    *(int *)(param_1 + 1) = iVar19 + iVar20;
  }
LAB_1400200cd:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

