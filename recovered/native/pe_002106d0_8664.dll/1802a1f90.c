/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a1f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2d2f_forC
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  sbyte sVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar19 = (param_1 >> 0x34) - 0x3ff;
  lVar17 = -((uVar19 >> 3) - 0x86);
  uVar13 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_18035a1a0 + lVar17);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar2 * auVar5,8);
  uVar9 = SUB168(auVar2 * auVar5,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_18035a1a8 + lVar17);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  uVar19 = uVar19 & 7;
  auVar8 = auVar3 * auVar6 + auVar8;
  uVar10 = auVar8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_18035a1b0 + lVar17);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  uVar18 = auVar8._8_8_ + SUB168(auVar4 * auVar7,0);
  uVar16 = 0;
  bVar12 = (byte)(0x36 - uVar19) & 0x3f;
  uVar13 = uVar18 >> bVar12;
  bVar1 = (bool)(((0x36 - uVar19 & 0x3f) != 0) * ((uVar18 >> bVar12 - 1 & 1) != 0));
  if (bVar1) {
    uVar18 = ~uVar18;
    uVar10 = ~uVar10;
    uVar9 = ~uVar9;
    uVar16 = 0x8000000000000000;
  }
  *param_3 = (int)uVar13 + (uint)bVar1 & 3;
  sVar11 = (char)uVar19 + 10;
  uVar13 = (uVar18 << sVar11) >> sVar11;
  lVar14 = uVar19 - 0x36;
  lVar17 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  uVar18 = uVar10;
  if (uVar13 == 0) {
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    lVar14 = uVar19 - 0x76;
    uVar18 = uVar9;
    uVar13 = uVar10;
  }
  lVar15 = lVar17 + -0x34;
  if (lVar15 < 0) {
    bVar12 = -(byte)lVar15;
    uVar13 = uVar13 << (bVar12 & 0x3f) | uVar18 >> (-(bVar12 - 0x40) & 0x3f);
  }
  else if (lVar15 != 0) {
    uVar13 = uVar13 >> ((byte)lVar15 & 0x3f);
  }
  *param_2 = (double)(uVar13 & 0xffefffffffffffff | uVar16 | lVar14 + lVar17 + 0x3ff << 0x34) *
             _DAT_18035a190;
  return;
}

