/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180028e0b */

ulonglong FUN_180028e0b(uint param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar11 = param_1 & 0x7fffff;
  uVar9 = param_1 >> 0x17 & 0xff;
  if (uVar9 == 0) {
    iVar10 = -0x95;
    if (uVar11 == 0) {
      uVar8 = 0;
      uVar6 = 0;
      goto LAB_180029085;
    }
LAB_180028e68:
    uVar9 = iVar10 * 0x4d105 >> 0x14;
    uVar8 = (ulonglong)uVar9;
    uVar14 = *(ulonglong *)(&DAT_1802b2638 + (longlong)(int)(1 - uVar9) * 8);
    bVar4 = (char)((int)((1 - uVar9) * 0x1a934f) >> 0x13) + (char)iVar10;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar14;
    auVar1 = (ZEXT416(uVar11 * 2 + 1 << (bVar4 & 0x1f)) << 0x20) * auVar1;
    uVar6 = auVar1._8_8_ >> 0x20;
    iVar3 = (int)(uVar6 / 100);
    iVar10 = (int)(uVar6 / 100);
    uVar13 = iVar10 * -100 + auVar1._12_4_;
    uVar12 = (uint)(uVar14 >> (~bVar4 & 0x3f));
    if (uVar13 < uVar12) {
      if ((uVar13 != 0) || ((auVar1._8_4_ != 0 || ((uVar11 & 1) == 0)))) {
LAB_180028f24:
        iVar10 = uVar9 - 1;
        uVar6 = uVar6 / 100;
        do {
          uVar8 = uVar6;
          iVar3 = (int)uVar8;
          uVar9 = iVar3 * 0x40000000 | (uint)(iVar3 * -0x3d70a3d7) >> 2;
          iVar10 = iVar10 + 2;
          uVar6 = (ulonglong)uVar9;
        } while (uVar9 < 0x28f5c29);
        uVar9 = (uint)(iVar3 * -0x33333333) >> 1 | (uint)((iVar3 * -0x33333333 & 1U) != 0) << 0x1f;
        bVar15 = uVar9 < 0x1999999a;
        uVar6 = (ulonglong)uVar9;
        if (!bVar15) {
          uVar6 = uVar8;
        }
        goto LAB_180029082;
      }
      iVar3 = iVar10 + -1;
      uVar13 = 100;
    }
    else if ((uVar13 <= uVar12) &&
            (uVar7 = (uVar11 * 2 - 1) * uVar14,
            ((uint)((int)(uVar7 >> (-(bVar4 + 0x20) & 0x3f)) == 0) & ~uVar11) != 0 ||
            (uVar7 >> ((ulonglong)(byte)(0x40 - bVar4) & 0x3f) & 1) != 0)) goto LAB_180028f24;
    uVar13 = uVar13 - (uVar12 >> 1);
    local_44 = uVar13 + 5;
    cVar2 = FUN_1800295ea(&local_44);
    uVar9 = local_44 + iVar3 * 10;
    uVar6 = (ulonglong)uVar9;
    if (cVar2 != '\0') {
      uVar14 = uVar14 * (uVar11 * 2);
      if (((uVar13 ^ (uint)(uVar14 >> (-bVar4 & 0x3f))) & 1) == 0) {
        uVar6 = (ulonglong)
                (uVar9 - ((byte)local_44 & (int)(uVar14 >> (-(bVar4 + 0x20) & 0x3f)) == 0));
      }
      else {
        uVar6 = (ulonglong)(uVar9 - 1);
      }
    }
  }
  else {
    iVar10 = uVar9 - 0x96;
    if (uVar11 != 0) {
      uVar11 = uVar11 | 0x800000;
      goto LAB_180028e68;
    }
    uVar11 = iVar10 * 0x9a209 + -0x3fe1f >> 0x15;
    uVar8 = (ulonglong)uVar11;
    cVar2 = (char)((int)(uVar11 * -0x1a934f) >> 0x13) + (char)iVar10;
    uVar6 = *(ulonglong *)(&DAT_1802b2638 + (longlong)(int)-uVar11 * 8);
    bVar5 = 0x28 - cVar2;
    bVar4 = FUN_180029601(iVar10);
    uVar9 = (uint)(bVar4 ^ 1) + (int)(uVar6 - (uVar6 >> 0x19) >> (bVar5 & 0x3f));
    uVar14 = (uVar6 >> 0x18) + uVar6 >> (bVar5 & 0x3f) & 0xffffffff;
    if ((uint)((int)(uVar14 / 10) * 10) < uVar9) {
      uVar11 = (int)(uVar6 >> (0x27U - cVar2 & 0x3f)) + 1U >> 1;
      if (iVar10 == -0x23) {
        uVar6 = (ulonglong)(uVar11 & 0xfffffffe);
      }
      else {
        uVar6 = (ulonglong)(uVar11 + (uVar11 < uVar9));
      }
      goto LAB_180029085;
    }
    iVar10 = uVar11 - 1;
    uVar6 = uVar14 / 10;
    do {
      uVar8 = uVar6;
      iVar3 = (int)uVar8;
      uVar9 = iVar3 * 0x40000000 | (uint)(iVar3 * -0x3d70a3d7) >> 2;
      iVar10 = iVar10 + 2;
      uVar6 = (ulonglong)uVar9;
    } while (uVar9 < 0x28f5c29);
    uVar9 = (uint)(iVar3 * -0x33333333) >> 1 | (uint)((iVar3 * -0x33333333 & 1U) != 0) << 0x1f;
    bVar15 = uVar9 < 0x1999999a;
    uVar6 = (ulonglong)uVar9;
    if (!bVar15) {
      uVar6 = uVar8;
    }
LAB_180029082:
    uVar8 = (ulonglong)(iVar10 + (uint)bVar15);
  }
LAB_180029085:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
  }
  return uVar6 | uVar8 << 0x20;
}

