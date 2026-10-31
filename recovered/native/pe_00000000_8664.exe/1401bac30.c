/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bac30 */

ulonglong FUN_1401bac30(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  sbyte sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = (param_1 >> 0x34) - 0x3ff;
  lVar12 = -((uVar14 >> 3) - 0x86);
  uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_140ebe3c0 + lVar12);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar2 * auVar4,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_140ebe3c8 + lVar12);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar10;
  uVar14 = uVar14 & 7;
  auVar7 = auVar3 * auVar5 + auVar7;
  uVar8 = auVar7._0_8_;
  uVar13 = auVar7._8_8_ + *(longlong *)(&UNK_140ebe3d0 + lVar12) * uVar10;
  uVar11 = 0x36 - uVar14;
  bVar6 = (byte)uVar11 & 0x3f;
  uVar10 = uVar13 >> bVar6;
  bVar1 = (bool)(((uVar11 & 0x3f) != 0) * ((uVar13 >> bVar6 - 1 & 1) != 0));
  if (bVar1) {
    uVar13 = ~uVar13;
    uVar8 = ~uVar8;
  }
  sVar9 = (char)uVar14 + 10;
  uVar11 = (uVar13 << sVar9) >> sVar9;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  if ((uVar11 == 0) && (lVar12 = 0x3f, uVar8 != 0)) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  return uVar10 + bVar1 & 3;
}

