/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a5b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a5b80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 in_ZMM0 [64];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = in_ZMM0._0_8_;
  fVar9 = in_ZMM0._0_4_;
  auVar6._16_48_ = in_ZMM0._16_48_;
  if (DAT_140f33260 != 0) {
    if ((uint)ABS(fVar9) < 0x7f800000) {
      if (0.0 < fVar9) {
        uVar2 = (uint)fVar9 & 0x7fffff;
        uVar4 = (uint)ABS(fVar9) >> 0x17;
        if (uVar4 == 0) {
          auVar12._4_12_ = _UNK_140eb6214;
          auVar12._0_4_ = DAT_140eb6210;
          auVar12 = vpor_avx(ZEXT416(uVar2),auVar12);
          auVar12 = ZEXT416((uint)(auVar12._0_4_ - DAT_140eb6210));
          auVar13 = vpsrld_avx(auVar12,0x17);
          auVar12 = vpand_avx(auVar12,_DAT_140eb6280);
          in_ZMM0 = ZEXT1664(auVar12);
          uVar2 = auVar12._0_4_;
          auVar1._4_12_ = _UNK_140eb62a4;
          auVar1._0_4_ = _DAT_140eb62a0;
          auVar12 = vpsubd_avx(auVar13,auVar1);
          auVar12 = vcvtdq2ps_avx(auVar12);
          fVar9 = auVar12._0_4_;
        }
        else {
          auVar12 = vcvtdq2ps_avx(ZEXT416(uVar4 - 0x7f));
          fVar9 = auVar12._0_4_;
        }
        if (DAT_140eb633c <= (float)((uint)(in_ZMM0._0_4_ - DAT_140eb6210) & _DAT_140eb6270)) {
          uVar4 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
          uVar5 = (ulonglong)uVar4;
          fVar10 = ((float)(uVar4 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
                   *(float *)(&DAT_140ebc0b0 + uVar5 * 4);
          return (ulonglong)
                 (uint)(fVar9 * _DAT_140eb62f0 + *(float *)(&DAT_140ebbc90 + uVar5 * 4) +
                       (fVar9 * _DAT_140eb6300 -
                       ((fVar10 * _DAT_140eb6320 + DAT_140eb6330) * fVar10 * fVar10 + fVar10)) +
                       *(float *)(&DAT_140ebbea0 + uVar5 * 4));
        }
        fVar10 = in_ZMM0._0_4_ - DAT_140eb6210;
        fVar11 = fVar10 / (_DAT_140eb6220 + fVar10);
        fVar9 = fVar11 + fVar11;
        return (ulonglong)
               (uint)(fVar10 + (fVar9 * fVar9 * fVar9 *
                                (_DAT_140eb62e0 * fVar9 * fVar9 + DAT_140eb62d0) - fVar10 * fVar11))
        ;
      }
      if (fVar9 == 0.0) {
        uVar5 = FUN_1401bdcc0(param_1,_DAT_140eb6230,DAT_140eb6340);
        return uVar5;
      }
    }
    else {
      if (fVar9 == INFINITY) {
        return uVar5;
      }
      if (fVar9 != -INFINITY) {
        uVar5 = FUN_1401bdcc0(param_1,(uint)fVar9 | 0x400000,DAT_140eb6348);
        return uVar5;
      }
    }
    uVar5 = FUN_1401bdcc0(param_1,_DAT_140eb6260,DAT_140eb6344);
    return uVar5;
  }
  if ((uint)ABS(fVar9) < 0x7f800000) {
    if (0.0 < fVar9) {
      uVar2 = (uint)fVar9 & 0x7fffff;
      uVar4 = (uint)ABS(fVar9) >> 0x17;
      if (uVar4 == 0) {
        fVar10 = (float)(uVar2 | 0x3f800000) - DAT_140eb6210;
        uVar2 = (uint)fVar10 & 0x7fffff;
        iVar3 = ((uint)fVar10 >> 0x17) - _DAT_140eb62a0;
      }
      else {
        iVar3 = uVar4 - 0x7f;
      }
      auVar8._4_60_ = in_ZMM0._4_60_;
      if (DAT_140eb633c <= (float)((uint)(fVar9 - DAT_140eb6210) & _DAT_140eb6270)) {
        uVar4 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
        uVar5 = (ulonglong)uVar4;
        fVar9 = ((float)(uVar4 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
                *(float *)(&DAT_140ebc0b0 + uVar5 * 4);
        auVar6._4_12_ = _UNK_140eb62f4;
        auVar6._0_4_ = _DAT_140eb62f0;
        auVar7._4_60_ = auVar6._4_60_;
        auVar7._0_4_ = _DAT_140eb62f0 * (float)iVar3 + *(float *)(&DAT_140ebbc90 + uVar5 * 4) +
                       (_DAT_140eb6300 * (float)iVar3 -
                       (fVar9 + (fVar9 * _DAT_140eb6320 + DAT_140eb6330) * fVar9 * fVar9)) +
                       *(float *)(&DAT_140ebbea0 + uVar5 * 4);
        return auVar7._0_8_;
      }
      fVar9 = fVar9 - DAT_140eb6210;
      fVar10 = fVar9 / (_DAT_140eb6220 + fVar9);
      fVar11 = fVar10 + fVar10;
      auVar8._0_4_ = fVar9 + ((fVar11 * fVar11 * _DAT_140eb62e0 + DAT_140eb62d0) *
                              fVar11 * fVar11 * fVar11 - fVar9 * fVar10);
      return auVar8._0_8_;
    }
    if (fVar9 == 0.0) {
      uVar5 = FUN_1401bdcc0(param_1,param_2,DAT_140eb6340);
      return uVar5;
    }
LAB_1401a5b4a:
    uVar5 = FUN_1401bdcc0(param_1,param_2,DAT_140eb6344);
    return uVar5;
  }
  if (fVar9 != INFINITY) {
    if (fVar9 == -INFINITY) goto LAB_1401a5b4a;
    uVar5 = (ulonglong)((uint)fVar9 | 0x400000);
  }
  return uVar5;
}

