/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157193 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10157193(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  int iVar10;
  undefined4 uVar11;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined6 uVar12;
  uint7 uVar13;
  undefined8 uVar14;
  
  iVar10 = (int)(_DAT_10389de0 * _DAT_102b8a20);
  iVar15 = (int)(_DAT_10389de4 * _UNK_102b8a24);
  iVar16 = (int)(_DAT_10389de8 * _UNK_102b8a28);
  iVar17 = (int)(DAT_10389dec * _UNK_102b8a2c);
  sVar1 = (short)iVar10;
  sVar2 = (short)((uint)iVar10 >> 0x10);
  cVar5 = (char)((uint)iVar10 >> 0x10);
  sVar3 = (short)iVar15;
  sVar4 = (short)((uint)iVar15 >> 0x10);
  uVar11 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)((uint)iVar15 >> 0x10) - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * (char)iVar15 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                                      (0 < sVar1) * (sVar1 < 0x100) * (char)iVar10 - (0xff < sVar1))
                            ));
  sVar3 = (short)iVar16;
  sVar4 = (short)((uint)iVar16 >> 0x10);
  uVar12 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar4),
                    CONCAT14((0 < sVar3) * (sVar3 < 0x100) * (char)iVar16 - (0xff < sVar3),uVar11));
  sVar3 = (short)iVar17;
  uVar13 = CONCAT16((0 < sVar3) * (sVar3 < 0x100) * (char)iVar17 - (0xff < sVar3),uVar12);
  sVar3 = (short)((uint)iVar17 >> 0x10);
  uVar14 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)((uint)iVar17 >> 0x10) - (0xff < sVar3),
                    uVar13);
  auVar6[8] = (0 < sVar1) * (sVar1 < 0x100) * (char)iVar10 - (0xff < sVar1);
  auVar6._0_8_ = uVar14;
  auVar6[9] = (0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2);
  auVar6._10_2_ = 0;
  auVar6._12_2_ = (short)((ulonglong)uVar14 >> 0x30);
  auVar7._8_2_ = (short)((uint6)uVar12 >> 0x20);
  auVar7._0_8_ = uVar14;
  auVar7._10_4_ = auVar6._10_4_;
  auVar9._6_8_ = 0;
  auVar9._0_6_ = auVar7._8_6_;
  auVar8._4_2_ = (short)((uint)uVar11 >> 0x10);
  auVar8._0_4_ = uVar11;
  auVar8._6_8_ = SUB148(auVar9 << 0x40,6);
  auVar18._4_4_ = _UNK_102b98e4;
  auVar18._0_4_ = _UNK_102b98e4;
  auVar18._8_4_ = _UNK_102b98ec;
  auVar18._12_4_ = _UNK_102b98ec;
  return (uint)((auVar18._8_8_ & 0xffffffff) * (ulonglong)(auVar6._10_4_ >> 0x10)) |
         _UNK_102b98e4 * auVar8._4_4_ |
         (uint)(((ulonglong)auVar7._8_6_ & 0xffffffff) * (ulonglong)_UNK_102b98e8) |
         (uint)(((ulonglong)uVar13 & 0xffff) * (ulonglong)_DAT_102b98e0);
}

