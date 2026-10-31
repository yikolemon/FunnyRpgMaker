/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092360 */

uint thunk_FUN_10233490(uint param_1,int param_2,int param_3,int param_4,wchar_t **param_5)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar44 = (int)(param_2 - param_1) >> 1;
  uVar46 = param_4 - param_3 >> 1;
  uVar47 = 0xffffffff;
  if (param_5 == (wchar_t **)0x0) {
    param_5 = ____lc_locale_name_func();
  }
  pwVar2 = param_5[1];
  if (pwVar2 == (wchar_t *)0x0) {
    if (uVar46 <= uVar44) {
      FUN_1025b2d0(param_1,param_3,uVar46 * 2);
    }
    return uVar46;
  }
  uVar45 = FUN_1026faa0(uVar44);
  if (uVar45 == 0) goto LAB_1023360d;
  uVar47 = FUN_10235240(pwVar2,0x400,param_3,uVar46,uVar45,uVar44);
  if (uVar47 == 0) {
    uVar47 = FUN_10235240(pwVar2,0x400,param_3,uVar46,0,0);
    if (uVar47 == 0) {
      thunk_FUN_10274120(uVar45);
      return 0xffffffff;
    }
    goto LAB_1023360d;
  }
  uVar44 = 0;
  if (uVar47 == 0) goto LAB_1023360d;
  if ((3 < uVar47) && (((uVar47 - 1) + uVar45 < param_1 || ((param_1 - 2) + uVar47 * 2 < uVar45))))
  {
    if (uVar47 < 0x20) {
LAB_102335d9:
      do {
        uVar3 = *(undefined4 *)(uVar45 + uVar44);
        *(ulonglong *)(param_1 + uVar44 * 2) =
             (ulonglong)
             CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                      CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3)) >> 0x10),
                      (short)uVar3) & 0xffffffff00ff00ff;
        uVar44 = uVar44 + 4;
      } while (uVar44 < uVar47 - (uVar47 & 3));
    }
    else {
      do {
        uVar1 = *(ulonglong *)(uVar45 + uVar44);
        auVar4._8_6_ = 0;
        auVar4._0_8_ = uVar1;
        auVar4[0xe] = (char)(uVar1 >> 0x38);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar1;
        auVar8[0xc] = (char)(uVar1 >> 0x30);
        auVar8._13_2_ = auVar4._13_2_;
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar1;
        auVar12._12_3_ = auVar8._12_3_;
        auVar16._8_2_ = 0;
        auVar16._0_8_ = uVar1;
        auVar16[10] = (char)(uVar1 >> 0x28);
        auVar16._11_4_ = auVar12._11_4_;
        auVar20._8_2_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20._10_5_ = auVar16._10_5_;
        auVar24[8] = (char)(uVar1 >> 0x20);
        auVar24._0_8_ = uVar1;
        auVar24._9_6_ = auVar20._9_6_;
        auVar32._7_8_ = 0;
        auVar32._0_7_ = auVar24._8_7_;
        auVar36._1_8_ = SUB158(auVar32 << 0x40,7);
        auVar36[0] = (char)(uVar1 >> 0x18);
        auVar36._9_6_ = 0;
        auVar37._1_10_ = SUB1510(auVar36 << 0x30,5);
        auVar37[0] = (char)(uVar1 >> 0x10);
        auVar37._11_4_ = 0;
        auVar28[2] = (char)(uVar1 >> 8);
        auVar28._0_2_ = (ushort)uVar1;
        auVar28._3_12_ = SUB1512(auVar37 << 0x20,3);
        auVar48._0_2_ = (ushort)uVar1 & 0xff;
        auVar48._2_13_ = auVar28._2_13_;
        auVar48[0xf] = 0;
        *(undefined1 (*) [16])(param_1 + uVar44 * 2) = auVar48;
        uVar1 = *(ulonglong *)(uVar45 + 8 + uVar44);
        auVar5._8_6_ = 0;
        auVar5._0_8_ = uVar1;
        auVar5[0xe] = (char)(uVar1 >> 0x38);
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar1;
        auVar9[0xc] = (char)(uVar1 >> 0x30);
        auVar9._13_2_ = auVar5._13_2_;
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar1;
        auVar13._12_3_ = auVar9._12_3_;
        auVar17._8_2_ = 0;
        auVar17._0_8_ = uVar1;
        auVar17[10] = (char)(uVar1 >> 0x28);
        auVar17._11_4_ = auVar13._11_4_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar1;
        auVar21._10_5_ = auVar17._10_5_;
        auVar25[8] = (char)(uVar1 >> 0x20);
        auVar25._0_8_ = uVar1;
        auVar25._9_6_ = auVar21._9_6_;
        auVar33._7_8_ = 0;
        auVar33._0_7_ = auVar25._8_7_;
        auVar38._1_8_ = SUB158(auVar33 << 0x40,7);
        auVar38[0] = (char)(uVar1 >> 0x18);
        auVar38._9_6_ = 0;
        auVar39._1_10_ = SUB1510(auVar38 << 0x30,5);
        auVar39[0] = (char)(uVar1 >> 0x10);
        auVar39._11_4_ = 0;
        auVar29[2] = (char)(uVar1 >> 8);
        auVar29._0_2_ = (ushort)uVar1;
        auVar29._3_12_ = SUB1512(auVar39 << 0x20,3);
        auVar49._0_2_ = (ushort)uVar1 & 0xff;
        auVar49._2_13_ = auVar29._2_13_;
        auVar49[0xf] = 0;
        *(undefined1 (*) [16])(param_1 + 0x10 + uVar44 * 2) = auVar49;
        uVar1 = *(ulonglong *)(uVar45 + 0x10 + uVar44);
        auVar6._8_6_ = 0;
        auVar6._0_8_ = uVar1;
        auVar6[0xe] = (char)(uVar1 >> 0x38);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar1;
        auVar10[0xc] = (char)(uVar1 >> 0x30);
        auVar10._13_2_ = auVar6._13_2_;
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar1;
        auVar14._12_3_ = auVar10._12_3_;
        auVar18._8_2_ = 0;
        auVar18._0_8_ = uVar1;
        auVar18[10] = (char)(uVar1 >> 0x28);
        auVar18._11_4_ = auVar14._11_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar1;
        auVar22._10_5_ = auVar18._10_5_;
        auVar26[8] = (char)(uVar1 >> 0x20);
        auVar26._0_8_ = uVar1;
        auVar26._9_6_ = auVar22._9_6_;
        auVar34._7_8_ = 0;
        auVar34._0_7_ = auVar26._8_7_;
        auVar40._1_8_ = SUB158(auVar34 << 0x40,7);
        auVar40[0] = (char)(uVar1 >> 0x18);
        auVar40._9_6_ = 0;
        auVar41._1_10_ = SUB1510(auVar40 << 0x30,5);
        auVar41[0] = (char)(uVar1 >> 0x10);
        auVar41._11_4_ = 0;
        auVar30[2] = (char)(uVar1 >> 8);
        auVar30._0_2_ = (ushort)uVar1;
        auVar30._3_12_ = SUB1512(auVar41 << 0x20,3);
        auVar50._0_2_ = (ushort)uVar1 & 0xff;
        auVar50._2_13_ = auVar30._2_13_;
        auVar50[0xf] = 0;
        *(undefined1 (*) [16])(param_1 + 0x20 + uVar44 * 2) = auVar50;
        uVar1 = *(ulonglong *)(uVar45 + 0x18 + uVar44);
        auVar7._8_6_ = 0;
        auVar7._0_8_ = uVar1;
        auVar7[0xe] = (char)(uVar1 >> 0x38);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar1;
        auVar11[0xc] = (char)(uVar1 >> 0x30);
        auVar11._13_2_ = auVar7._13_2_;
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar1;
        auVar15._12_3_ = auVar11._12_3_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar1;
        auVar19[10] = (char)(uVar1 >> 0x28);
        auVar19._11_4_ = auVar15._11_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar1;
        auVar23._10_5_ = auVar19._10_5_;
        auVar27[8] = (char)(uVar1 >> 0x20);
        auVar27._0_8_ = uVar1;
        auVar27._9_6_ = auVar23._9_6_;
        auVar35._7_8_ = 0;
        auVar35._0_7_ = auVar27._8_7_;
        auVar42._1_8_ = SUB158(auVar35 << 0x40,7);
        auVar42[0] = (char)(uVar1 >> 0x18);
        auVar42._9_6_ = 0;
        auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
        auVar43[0] = (char)(uVar1 >> 0x10);
        auVar43._11_4_ = 0;
        auVar31[2] = (char)(uVar1 >> 8);
        auVar31._0_2_ = (ushort)uVar1;
        auVar31._3_12_ = SUB1512(auVar43 << 0x20,3);
        auVar51._0_2_ = (ushort)uVar1 & 0xff;
        auVar51._2_13_ = auVar31._2_13_;
        auVar51[0xf] = 0;
        *(undefined1 (*) [16])(param_1 + 0x30 + uVar44 * 2) = auVar51;
        uVar44 = uVar44 + 0x20;
      } while (uVar44 < uVar47 - (uVar47 & 0x1f));
      if (3 < (uVar47 & 0x1f)) goto LAB_102335d9;
    }
    if (uVar47 <= uVar44) goto LAB_1023360d;
  }
  do {
    *(ushort *)(param_1 + uVar44 * 2) = (ushort)*(byte *)(uVar45 + uVar44);
    uVar44 = uVar44 + 1;
  } while (uVar44 < uVar47);
LAB_1023360d:
  thunk_FUN_10274120(uVar45);
  return uVar47;
}

