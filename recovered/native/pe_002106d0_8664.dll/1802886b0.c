/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802886b0 */

/* WARNING: Removing unreachable block (ram,0x000180288b7f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802886b0(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [60];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar10 [16];
  undefined1 in_ZMM0 [64];
  undefined4 uVar14;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  ulonglong uVar9;
  undefined1 auVar13 [64];
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar19 [64];
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar29 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  
  fVar22 = in_ZMM0._0_4_;
  auVar13._16_48_ = in_ZMM0._16_48_;
  auVar26 = in_ZMM2._0_16_;
  if (DAT_1804218b4 != 0) {
    auVar18 = vpunpckldq_avx(in_ZMM1._0_16_,in_ZMM0._0_16_);
    auVar27 = (undefined1  [16])0x0;
    uVar9 = 0;
    fVar15 = auVar18._0_4_;
    fVar5 = ABS(fVar15);
    fVar6 = ABS(fVar22);
    uVar17 = auVar18._0_8_;
    if ((uint)fVar5 < 0x7f800000) {
      if ((uint)fVar5 < 0x3f800001) {
        if (fVar5 == 0.0) {
          if ((uint)fVar6 < 0x7f800001) {
            return 0x3f800000;
          }
          if (0x7fbfffff < (uint)fVar6) {
            return 0x3f800000;
          }
          uVar9 = FUN_1802a14c0(fVar6,(uint)fVar6 | 0x400000,(uint)fVar6 | 0x400000,DAT_180352098);
          return uVar9;
        }
        if (fVar15 == 1.0) {
          if ((uint)fVar6 < 0x7f800001) {
            return in_ZMM0._0_8_;
          }
          uVar9 = FUN_1802a14c0(fVar6,(uint)fVar22 | 0x400000,(uint)fVar22 | 0x400000,DAT_180352098)
          ;
          return uVar9;
        }
      }
      if ((uint)fVar6 < 0x7f800000) {
        auVar28 = vcvtps2pd_avx(auVar18);
        auVar13 = ZEXT1664(auVar28);
        if ((int)fVar22 < 0x3f880000) {
          if ((int)fVar22 < 1) {
            if (fVar6 == 0.0) {
              fVar5 = fVar15;
              if ((int)fVar15 < 0) {
                fVar5 = INFINITY;
              }
              fVar6 = 0.0;
              if ((int)fVar15 < 0) {
                fVar6 = INFINITY;
              }
              uVar7 = 0;
              if (0 < (int)fVar15) {
                fVar5 = 0.0;
              }
              if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
                auVar26 = vroundss_avx(auVar26,auVar18,8);
                uVar7 = 0;
                if (auVar26._0_4_ == fVar15) {
                  if (((int)ROUND(fVar15) & 1U) == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (uint)fVar22 & 0x80000000;
                  }
                }
              }
              uVar7 = uVar7 | (uint)fVar5;
              if (fVar6 == 0.0) {
                return (ulonglong)uVar7;
              }
              uVar9 = FUN_1802a14c0(uVar7,uVar17,uVar7,DAT_180352094);
              return uVar9;
            }
            if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
              auVar26 = vroundss_avx(auVar26,auVar18,8);
              if (auVar26._0_4_ != fVar15) {
                uVar9 = FUN_1802a14c0(fVar6,0xffc00000,0xffc00000,DAT_1803520a4);
                return uVar9;
              }
              if (((int)ROUND(fVar15) & 1U) != 0) {
                auVar27 = ZEXT416(DAT_1803520fc);
              }
            }
          }
          uVar9 = auVar27._0_8_;
          auVar26 = vpshufd_avx(auVar28,0xee);
          dVar16 = auVar26._0_8_ - DAT_1803520ec;
          param_2 = ABS(dVar16);
          if ((ulonglong)param_2 < (ulonglong)DAT_1803520e4) {
            vpshufd_avx(auVar27,0x44);
            dVar32 = dVar16 / (dVar16 + DAT_1803520f4);
            dVar24 = dVar32 + dVar32;
            dVar34 = dVar24 * dVar24;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = dVar34;
            auVar26 = vpshufd_avx(auVar26,0x44);
            auVar18._8_8_ = 0;
            auVar18._0_8_ = dVar34 * dVar34 * dVar24 * dVar34;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar24 * dVar34;
            auVar18 = vunpcklpd_avx(auVar27,auVar18);
            auVar28._0_8_ = auVar18._0_8_ * (auVar26._0_8_ * _DAT_180352110 + _DAT_180352120);
            auVar28._8_8_ = auVar18._8_8_ * (auVar26._8_8_ * _UNK_180352118 + _UNK_180352128);
            auVar26 = vpshufd_avx(auVar28,0xee);
            auVar33._8_8_ = 0;
            auVar33._0_8_ = dVar32 * dVar16;
            auVar18 = vpshufd_avx(auVar33,0xee);
            uVar9 = auVar18._0_8_;
            dVar16 = dVar16 + ((auVar26._0_8_ + auVar28._0_8_) - dVar32 * dVar16);
            goto LAB_1802887ae;
          }
        }
        auVar26 = vpshufd_avx(auVar28,0xee);
        auVar26 = vpand_avx(auVar26,_DAT_180352170);
        uVar7 = (auVar26._4_4_ >> 0xc) + (uint)((auVar26._0_8_ >> 0x2b & 1) != 0);
        auVar3._8_8_ = _UNK_180352158;
        auVar3._0_8_ = DAT_180352150;
        auVar18 = vpor_avx(auVar26,auVar3);
        auVar26 = vpshufd_avx(auVar18,0xee);
        auVar26 = vpsrlq_avx(auVar26,0x34);
        auVar4._8_8_ = _UNK_180352168;
        auVar4._0_8_ = _DAT_180352160;
        auVar26 = vpsubq_avx(auVar26,auVar4);
        auVar26 = vcvtdq2pd_avx(auVar26);
        dVar16 = ((double)((ulonglong)(uVar7 | 0x3fe00) << 0x2c) - auVar18._0_8_) *
                 *(double *)(&DAT_1803571b0 + (ulonglong)uVar7 * 8);
        dVar16 = dVar16 * (dVar16 * (dVar16 * DAT_1803520b4 + DAT_180352150) + DAT_1803520ec);
        dVar24 = auVar28._0_8_ *
                 ((auVar26._0_8_ * DAT_1803520bc +
                  *(double *)(&DAT_180352180 + (ulonglong)uVar7 * 8)) - dVar16);
        if (DAT_1803520c4 < dVar24) {
          uVar9 = FUN_1802a14c0(&DAT_180352180,0x7f800000,SUB168(ZEXT416(0x7f800000),0) | uVar9,
                                DAT_1803520b0);
          return uVar9;
        }
        if (DAT_1803520cc < dVar24) {
          auVar29._0_8_ = dVar24 * _DAT_180352140;
          auVar29._8_8_ = _UNK_180352148 * 0.0;
          auVar18 = vcvtpd2dq_avx(auVar29);
          auVar26 = vcvtdq2pd_avx(auVar18);
          dVar24 = -(auVar26._0_8_ * DAT_1803520d4) + dVar24;
          auVar10._0_8_ =
               *(double *)(&DAT_180355990 + (ulonglong)(auVar18._0_4_ & 0x3f) * 8) *
               dVar24 * (dVar24 * (dVar24 * DAT_1803520dc + DAT_180352150) + DAT_1803520ec) +
               *(double *)(&DAT_180355990 + (ulonglong)(auVar18._0_4_ & 0x3f) * 8);
          auVar10._8_8_ = 0;
          auVar26 = vpsrad_avx(auVar18,6);
          auVar26 = vpsllq_avx(auVar26,0x34);
          auVar26 = vpaddq_avx(auVar26,auVar10);
          return CONCAT44((int)((ulonglong)auVar10._0_8_ >> 0x20),(float)auVar26._0_8_) | uVar9;
        }
        uVar9 = FUN_1802a14c0(&DAT_180352180,dVar16,uVar9,DAT_1803520a8);
        return uVar9;
      }
      if (fVar5 == 0.0) {
        return 0x3f800000;
      }
      if (fVar22 == INFINITY) {
        if (-1 < (int)fVar15) {
          return 0x7f800000;
        }
        return 0;
      }
      if (fVar22 == -INFINITY) {
        uVar7 = 0;
        fVar22 = fVar15;
        if ((int)fVar15 < 0) {
          fVar22 = 0.0;
        }
        if (0 < (int)fVar15) {
          fVar22 = INFINITY;
        }
        if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
          auVar26 = vroundss_avx(auVar26,auVar18,8);
          uVar7 = 0;
          if ((auVar26._0_4_ == fVar15) && (uVar7 = 0x80000000, ((int)ROUND(fVar15) & 1U) == 0)) {
            uVar7 = 0;
          }
        }
        return (ulonglong)(uVar7 | (uint)fVar22);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar5) {
        if (0x7f800000 < (uint)fVar6) {
          if (fVar22 != -NAN) {
            uVar9 = FUN_1802a14c0((uint)fVar22 | 0x400000,uVar17,(uint)fVar22 | 0x400000,
                                  DAT_1803520a0);
            return uVar9;
          }
          uVar9 = FUN_1802a14c0(0x7fc00000,uVar17,(uint)fVar15 | 0x400000,DAT_1803520a0);
          return uVar9;
        }
        if (fVar22 == 1.0) {
          if (0x7fbfffff < (uint)fVar5) {
            return 0x3f800000;
          }
          uVar9 = FUN_1802a14c0(0x3f800000,0x3f800000,0x3f800000,DAT_18035209c);
          return uVar9;
        }
        uVar9 = FUN_1802a14c0(uVar17,uVar17,(uint)fVar15 | 0x400000,DAT_18035209c);
        return uVar9;
      }
      if ((uint)fVar6 < 0x7f800001) {
        if (fVar6 == 1.0) {
          return 0x3f800000;
        }
        if (-1 < (int)fVar15) {
          if (0x3f7fffff < (uint)fVar6) {
            return 0x7f800000;
          }
          return 0;
        }
        uVar7 = 0;
        if ((uint)fVar6 < 0x3f800000) {
          uVar7 = 0x7f800000;
        }
        return (ulonglong)uVar7;
      }
    }
    uVar9 = FUN_1802a14c0((uint)fVar22 | 0x400000,uVar17,(uint)fVar22 | 0x400000,DAT_180352098);
    return uVar9;
  }
  auVar21._16_48_ = in_ZMM1._16_48_;
  auVar21._0_12_ = in_ZMM1._0_12_;
  auVar21._12_4_ = in_ZMM0._4_4_;
  auVar20._12_52_ = auVar21._12_52_;
  auVar20._0_8_ = in_ZMM1._0_8_;
  auVar20._8_4_ = in_ZMM1._4_4_;
  auVar19._8_56_ = auVar20._8_56_;
  fVar15 = in_ZMM1._0_4_;
  auVar19._0_8_ = CONCAT44(fVar22,fVar15);
  uVar9 = 0;
  fVar5 = ABS(fVar15);
  fVar6 = ABS(fVar22);
  auVar18 = auVar19._0_16_;
  if (0x7f7fffff < (uint)fVar5) {
    if (0x7f800000 < (uint)fVar5) {
      if (0x7f800000 < (uint)fVar6) {
        if (fVar22 != -NAN) {
          uVar9 = FUN_1802a14c0((uint)fVar22 | 0x400000,auVar19._0_8_,param_3,DAT_1803520a0);
          return uVar9;
        }
        uVar9 = FUN_1802a14c0(0x7fc00000,auVar19._0_8_,param_3,DAT_1803520a0);
        return uVar9;
      }
      if (fVar22 == 1.0) {
        if (0x7fbfffff < (uint)fVar5) {
          return 0x3f800000;
        }
        uVar9 = FUN_1802a14c0(0x3f800000,0x3f800000,param_3,DAT_18035209c);
        return uVar9;
      }
      uVar9 = FUN_1802a14c0(fVar6,auVar19._0_8_,param_3,DAT_18035209c);
      return uVar9;
    }
    if ((uint)fVar6 < 0x7f800001) {
      if (fVar6 == 1.0) {
        return 0x3f800000;
      }
      if ((int)fVar15 < 0) {
        if (fVar6 != 0.0) {
          uVar7 = 0;
          if ((uint)fVar6 < 0x3f800000) {
            uVar7 = 0x7f800000;
          }
          return (ulonglong)uVar7;
        }
      }
      else if ((uint)fVar6 < 0x3f800000) {
        return 0;
      }
      return 0x7f800000;
    }
LAB_180288d20:
    uVar9 = FUN_1802a14c0((uint)fVar22 | 0x400000,auVar19._0_8_,param_3,DAT_180352098);
    return uVar9;
  }
  if ((uint)fVar5 < 0x3f800001) {
    if (fVar5 == 0.0) {
      if ((uint)fVar6 < 0x7f800001) {
        return 0x3f800000;
      }
      if (0x7fbfffff < (uint)fVar6) {
        return 0x3f800000;
      }
      uVar9 = FUN_1802a14c0(fVar6,(uint)fVar6 | 0x400000,param_3,DAT_180352098);
      return uVar9;
    }
    param_2 = (double)(auVar20._0_8_ & 0xffffffff);
    if (fVar15 == 1.0) {
      if ((uint)ABS(fVar22) < 0x7f800001) {
        return in_ZMM0._0_8_;
      }
      uVar9 = FUN_1802a14c0(fVar6,(uint)fVar22 | 0x400000,param_3,DAT_180352098);
      return uVar9;
    }
  }
  if (0x7f7fffff < (uint)fVar6) {
    if (fVar5 == 0.0) {
      return 0x3f800000;
    }
    if (fVar22 == INFINITY) {
      if (-1 < (int)fVar15) {
        return 0x7f800000;
      }
      return 0;
    }
    if (fVar22 == -INFINITY) {
      uVar7 = 0;
      fVar22 = fVar15;
      if ((int)fVar15 < 0) {
        fVar22 = 0.0;
      }
      if (0 < (int)fVar15) {
        fVar22 = INFINITY;
      }
      if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
        if (DAT_1804039d8 < 2) {
          fVar5 = (float)(int)ROUND(fVar15);
        }
        else {
          auVar26 = roundss(auVar26,auVar18,8);
          fVar5 = auVar26._0_4_;
        }
        uVar7 = 0;
        if ((fVar5 == fVar15) && (uVar7 = 0x80000000, ((int)ROUND(fVar15) & 1U) == 0)) {
          uVar7 = 0;
        }
      }
      return (ulonglong)(uVar7 | (uint)fVar22);
    }
    goto LAB_180288d20;
  }
  auVar13._0_8_ = (double)fVar15;
  auVar13._8_8_ = (double)fVar22;
  uVar14 = (undefined4)((ulonglong)auVar13._8_8_ >> 0x20);
  if ((int)fVar22 < 0x3f880000) {
    if ((int)fVar22 < 1) {
      if (fVar6 == 0.0) {
        fVar5 = fVar15;
        if ((int)fVar15 < 0) {
          fVar5 = INFINITY;
        }
        fVar6 = 0.0;
        if ((int)fVar15 < 0) {
          fVar6 = INFINITY;
        }
        uVar7 = 0;
        if (0 < (int)fVar15) {
          fVar5 = 0.0;
        }
        uVar9 = (ulonglong)((uint)fVar15 & 0x7f800000);
        if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
          if (DAT_1804039d8 < 2) {
            uVar9 = (ulonglong)(uint)(int)ROUND(fVar15);
            fVar23 = (float)(int)ROUND(fVar15);
          }
          else {
            auVar26 = roundss(auVar26,auVar18,8);
            fVar23 = auVar26._0_4_;
          }
          uVar7 = 0;
          if (fVar23 == fVar15) {
            uVar9 = (ulonglong)(CONCAT14(fVar23 < fVar15,(int)ROUND(fVar15)) >> 1);
            if (((int)ROUND(fVar15) & 1U) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)fVar22 & 0x80000000;
            }
          }
        }
        uVar8 = (ulonglong)(uVar7 | (uint)fVar5);
        if (fVar6 != 0.0) {
          uVar8 = FUN_1802a14c0(uVar7 | (uint)fVar5,auVar19._0_8_,uVar9,DAT_180352094);
        }
        return uVar8;
      }
      if (((uint)fVar15 & 0x7f800000) < 0x4b000001) {
        if (DAT_1804039d8 < 2) {
          fVar22 = (float)(int)ROUND(fVar15);
        }
        else {
          auVar26 = roundss(auVar26,auVar18,8);
          fVar22 = auVar26._0_4_;
        }
        if (fVar22 != fVar15) {
          uVar9 = FUN_1802a14c0(fVar6,0xffc00000,param_3,DAT_1803520a4);
          return uVar9;
        }
        if (((int)ROUND(fVar15) & 1U) != 0) {
          uVar9 = (ulonglong)DAT_1803520fc;
        }
      }
    }
    auVar30._8_4_ = SUB84(auVar13._8_8_,0);
    auVar30._0_8_ = auVar13._8_8_;
    auVar30._16_48_ = in_ZMM3._16_48_;
    auVar30._12_4_ = uVar14;
    in_ZMM3._8_56_ = auVar30._8_56_;
    in_ZMM3._0_8_ = auVar13._8_8_ - DAT_1803520ec;
    param_2 = ABS(in_ZMM3._0_8_);
    if ((ulonglong)param_2 < (ulonglong)DAT_1803520e4) {
      dVar34 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + DAT_1803520f4);
      dVar24 = dVar34 + dVar34;
      dVar16 = dVar24 * dVar24;
      auVar31._8_4_ = SUB84(dVar16,0);
      auVar31._0_8_ = dVar16;
      auVar31._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      dVar16 = in_ZMM3._0_8_ +
               ((dVar24 * dVar16 * (dVar16 * _DAT_180352110 + _DAT_180352120) +
                dVar16 * dVar16 * dVar24 * dVar16 *
                (auVar31._8_8_ * _UNK_180352118 + _UNK_180352128)) - dVar34 * in_ZMM3._0_8_);
      goto LAB_1802887ae;
    }
  }
  auVar25._8_4_ = SUB84(auVar13._8_8_,0);
  auVar25._0_8_ = auVar13._8_8_;
  auVar25._12_4_ = uVar14;
  auVar25 = auVar25 & _DAT_180352170;
  uVar7 = (auVar25._4_4_ >> 0xc) + (uint)((auVar25._0_8_ >> 0x2b & 1) != 0);
  auVar2._8_8_ = _UNK_180352158;
  auVar2._0_8_ = DAT_180352150;
  auVar1._4_56_ = in_ZMM3._8_56_;
  auVar1._0_4_ = SUB164(auVar25 | auVar2,0xc);
  dVar16 = ((double)((ulonglong)(uVar7 | 0x3fe00) << 0x2c) - SUB168(auVar25 | auVar2,0)) *
           *(double *)(&DAT_1803571b0 + (ulonglong)uVar7 * 8);
  dVar16 = ((double)(int)(((auVar1._0_8_ & 0xffffffff) >> 0x14) - _DAT_180352160) * DAT_1803520bc +
           *(double *)(&DAT_180352180 + (ulonglong)uVar7 * 8)) -
           (dVar16 * dVar16 * (DAT_1803520b4 * dVar16 + DAT_180352150) + dVar16);
LAB_1802887ae:
  auVar11._8_56_ = auVar13._8_56_;
  dVar16 = auVar13._0_8_ * dVar16;
  if (DAT_1803520c4 < dVar16) {
    uVar9 = FUN_1802a14c0(dVar16,0x7f800000,param_3,DAT_1803520b0);
    return uVar9;
  }
  if (DAT_1803520cc < dVar16) {
    uVar7 = (uint)(dVar16 * _DAT_180352140);
    dVar16 = dVar16 - (double)(int)uVar7 * DAT_1803520d4;
    auVar11._0_8_ =
         (dVar16 * dVar16 * (DAT_1803520dc * dVar16 + DAT_180352150) + dVar16) *
         *(double *)(&DAT_180355990 + (ulonglong)(uVar7 & 0x3f) * 8) +
         *(double *)(&DAT_180355990 + (ulonglong)(uVar7 & 0x3f) * 8);
    auVar12._4_60_ = auVar11._4_60_;
    auVar12._0_4_ =
         (float)(double)(((ulonglong)(uint)((int)uVar7 >> 6) << 0x34) + (longlong)auVar11._0_8_);
    return auVar12._0_8_ | uVar9;
  }
  uVar9 = FUN_1802a14c0(dVar16,param_2,param_3,DAT_1803520a8);
  return uVar9;
}

