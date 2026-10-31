/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029d1a0 */

ulonglong FUN_18029d1a0(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  sbyte sVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = (param_1 >> 0x34) - 0x3ff;
  lVar13 = -((uVar15 >> 3) - 0x86);
  uVar11 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_180355730 + lVar13);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar2 * auVar4,8);
  uVar7 = SUB168(auVar2 * auVar4,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_180355738 + lVar13);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  uVar15 = uVar15 & 7;
  auVar6 = auVar3 * auVar5 + auVar6;
  uVar8 = auVar6._0_8_;
  uVar14 = auVar6._8_8_ + *(longlong *)(&UNK_180355740 + lVar13) * uVar11;
  uVar12 = 0x36 - uVar15;
  bVar10 = (byte)uVar12 & 0x3f;
  uVar11 = uVar14 >> bVar10;
  bVar1 = (bool)(((uVar12 & 0x3f) != 0) * ((uVar14 >> bVar10 - 1 & 1) != 0));
  if (bVar1) {
    uVar14 = ~uVar14;
    uVar8 = ~uVar8;
    uVar7 = ~uVar7;
  }
  sVar9 = (char)uVar15 + 10;
  uVar12 = (uVar14 << sVar9) >> sVar9;
  lVar13 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar14 = uVar7;
  uVar15 = uVar8;
  if (uVar12 == 0) {
    uVar14 = 0;
    lVar13 = 0x3f;
    uVar15 = uVar7;
    uVar12 = uVar8;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
  }
  lVar13 = lVar13 + -0x34;
  bVar10 = (byte)lVar13;
  if (lVar13 < 0) {
    uVar15 = uVar15 << (-bVar10 & 0x3f) | uVar14 >> (-(-bVar10 - 0x40) & 0x3f);
  }
  else if (lVar13 != 0) {
    uVar15 = uVar15 >> (bVar10 & 0x3f) | uVar12 << (-(bVar10 - 0x40) & 0x3f);
  }
  lVar13 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  return uVar11 + bVar1 & 3;
}

