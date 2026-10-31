/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800090b4 */

longlong * FUN_1800090b4(longlong *param_1,ulonglong param_2,uint param_3)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong lVar31;
  byte bVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  byte bVar43;
  uint uVar44;
  bool bVar45;
  bool bVar46;
  byte local_48;
  
  uVar33 = param_2 | 0x10000000000000;
  if (param_3 == 0) {
    uVar33 = param_2;
  }
  uVar37 = 0xfffffbcc;
  if (param_3 != 0) {
    uVar37 = param_3 - 0x435;
  }
  uVar34 = uVar33 * 4;
  bVar45 = param_3 < 2 || param_2 != 0;
  local_48 = (byte)uVar33;
  if ((int)uVar37 < 0) {
    uVar35 = (uVar37 * -0xb2efb >> 0x14) - (uint)(uVar37 != 0xffffffff);
    uVar44 = uVar37 + uVar35;
    bVar32 = ((char)uVar35 - (char)(uVar44 * -0x12934f >> 0x13)) + 0x78;
    uVar40 = *(ulonglong *)(&DAT_1802bfa50 + (longlong)(int)-uVar44 * 0x10);
    uVar41 = *(ulonglong *)(&DAT_1802bfa58 + (longlong)(int)-uVar44 * 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar41;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34 | 2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar40;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34 | 2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = SUB168(auVar8 * auVar20,8);
    auVar28 = auVar7 * auVar19 + auVar28;
    uVar42 = auVar28._0_8_ >> (bVar32 & 0x3f) | auVar28._8_8_ << 0x40 - (bVar32 & 0x3f);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar41;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = ~(ulonglong)bVar45 + uVar34;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar40;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = ~(ulonglong)bVar45 + uVar34;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = SUB168(auVar10 * auVar22,8);
    auVar29 = auVar9 * auVar21 + auVar29;
    uVar39 = auVar29._0_8_ >> (bVar32 & 0x3f) | auVar29._8_8_ << 0x40 - (bVar32 & 0x3f);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar34;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar40;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar34;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = SUB168(auVar12 * auVar24,8);
    auVar30 = auVar11 * auVar23 + auVar30;
    uVar40 = auVar30._0_8_ >> (bVar32 & 0x3f) | auVar30._8_8_ << 0x40 - (bVar32 & 0x3f);
    if (1 < uVar35) {
      if (uVar35 < 0x3f) {
        bVar46 = (uVar34 & ~(-1L << ((char)uVar35 - 1U & 0x3f))) == 0;
      }
      else {
        bVar46 = false;
      }
      bVar45 = false;
      goto LAB_18000936b;
    }
    uVar42 = uVar42 - ((uint)uVar33 & 1);
    bVar45 = (uVar33 & 1) == 0 && bVar45;
    bVar46 = true;
  }
  else {
    uVar44 = ((uVar37 * 0x13441 >> 0x12) - 1) + (uint)(uVar37 < 4);
    bVar32 = ((char)uVar44 - (char)uVar37) + (char)(uVar44 * 0x12934f >> 0x13) + 0x7a;
    uVar36 = uVar34 | 2;
    uVar40 = *(ulonglong *)(&DAT_1802be810 + (ulonglong)uVar44 * 0x10);
    uVar41 = *(ulonglong *)(&DAT_1802be818 + (ulonglong)uVar44 * 0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar41;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar36;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar40;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = SUB168(auVar2 * auVar14,8);
    auVar25 = auVar1 * auVar13 + auVar25;
    uVar42 = auVar25._0_8_ >> (bVar32 & 0x3f) | auVar25._8_8_ << 0x40 - (bVar32 & 0x3f);
    uVar39 = ~(ulonglong)bVar45 + uVar34;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar41;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar39;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar40;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar39;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = SUB168(auVar4 * auVar16,8);
    auVar26 = auVar3 * auVar15 + auVar26;
    uVar39 = auVar26._0_8_ >> (bVar32 & 0x3f) | auVar26._8_8_ << 0x40 - (bVar32 & 0x3f);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar41;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar40;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = SUB168(auVar6 * auVar18,8);
    auVar27 = auVar5 * auVar17 + auVar27;
    uVar40 = auVar27._0_8_ >> (bVar32 & 0x3f) | auVar27._8_8_ << 0x40 - (bVar32 & 0x3f);
    if (uVar44 < 0x16) {
      if ((int)(uVar34 / 5) * 5 != (int)uVar34) {
        if ((uVar33 & 1) == 0) {
          uVar37 = 0xffffffff;
          uVar33 = ~(ulonglong)bVar45 + uVar34;
          do {
            uVar34 = uVar33 / 5;
            uVar37 = uVar37 + 1;
            iVar38 = (int)uVar33;
            uVar33 = uVar34;
          } while ((int)uVar34 * 5 == iVar38);
          bVar45 = uVar44 <= uVar37;
          bVar46 = false;
          goto LAB_18000936b;
        }
        uVar37 = 0xffffffff;
        do {
          uVar33 = uVar36 / 5;
          uVar37 = uVar37 + 1;
          iVar38 = (int)uVar36;
          uVar36 = uVar33;
        } while ((int)uVar33 * 5 == iVar38);
        uVar42 = (uVar42 - 1) + (ulonglong)(uVar37 < uVar44);
        goto LAB_180009367;
      }
      uVar37 = 0xffffffff;
      do {
        uVar33 = uVar34 / 5;
        uVar37 = uVar37 + 1;
        iVar38 = (int)uVar34;
        uVar34 = uVar33;
      } while ((int)uVar33 * 5 == iVar38);
      bVar46 = uVar44 <= uVar37;
    }
    else {
LAB_180009367:
      bVar46 = false;
    }
    bVar45 = false;
LAB_18000936b:
    if ((bVar45 == false) && (bVar46 == false)) {
      if (uVar39 / 100 < uVar42 / 100) {
        uVar33 = (ulonglong)(0x31 < (uint)((int)(uVar40 / 100) * -100 + (int)uVar40));
        iVar38 = 2;
        uVar39 = uVar39 / 100;
        uVar40 = uVar40 / 100;
        uVar42 = uVar42 / 100;
      }
      else {
        uVar33 = 0;
        iVar38 = 0;
      }
      uVar42 = uVar42 / 10;
      uVar34 = uVar39 / 10;
      if (uVar39 / 10 < uVar42) {
        do {
          uVar33 = uVar40;
          uVar39 = uVar34;
          uVar40 = uVar33 / 10;
          iVar38 = iVar38 + 1;
          uVar42 = uVar42 / 10;
          uVar34 = uVar39 / 10;
        } while (uVar39 / 10 < uVar42);
        uVar33 = (ulonglong)(4 < (uint)((int)uVar33 + (int)uVar40 * -10));
      }
      uVar34 = 1;
      if (uVar40 != uVar39) {
        uVar34 = uVar33;
      }
      lVar31 = uVar34 + uVar40;
      goto LAB_1800095aa;
    }
  }
  uVar42 = uVar42 / 10;
  bVar32 = 0;
  if (uVar39 / 10 < uVar42) {
    iVar38 = 0;
    uVar33 = uVar39 / 10;
    uVar34 = uVar39;
    uVar41 = uVar40;
    bVar43 = 0;
    do {
      uVar39 = uVar33;
      uVar40 = uVar41 / 10;
      bVar32 = (char)uVar40 * -10 + (char)uVar41;
      bVar45 = (bool)(bVar45 & (int)uVar39 * 10 == (int)uVar34);
      bVar46 = (bool)(bVar46 & bVar43 == 0);
      iVar38 = iVar38 + 1;
      uVar42 = uVar42 / 10;
      uVar33 = uVar39 / 10;
      uVar34 = uVar39;
      uVar41 = uVar40;
      bVar43 = bVar32;
    } while (uVar39 / 10 < uVar42);
  }
  else {
    iVar38 = 0;
  }
  if ((bVar45 != false) &&
     (uVar33 = uVar39 / 10, uVar34 = uVar40, bVar43 = bVar32, (int)(uVar39 / 10) * 10 == (int)uVar39
     )) {
    do {
      uVar39 = uVar33;
      uVar40 = uVar34 / 10;
      bVar32 = (char)uVar40 * -10 + (char)uVar34;
      bVar46 = (bool)(bVar46 & bVar43 == 0);
      iVar38 = iVar38 + 1;
      uVar33 = uVar39 / 10;
      uVar34 = uVar40;
      bVar43 = bVar32;
    } while ((int)(uVar39 / 10) * 10 == (int)uVar39);
  }
  lVar31 = (byte)(((byte)uVar40 | ~bVar46 | bVar32 != 5) & 4 < bVar32 |
                 (~bVar45 | local_48) & uVar40 == uVar39) + uVar40;
LAB_1800095aa:
  *(uint *)(param_1 + 1) = uVar44 + iVar38;
  *param_1 = lVar31;
  return param_1;
}

