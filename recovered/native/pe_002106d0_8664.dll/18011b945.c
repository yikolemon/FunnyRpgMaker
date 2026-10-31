/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b945 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18011b945(float *param_1,float *param_2,float *param_3,uint *param_4,undefined8 *param_5
                     ,float *param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar1 = *param_5;
  uVar7 = *(ulonglong *)param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar7;
  fVar14 = (float)uVar1;
  fVar15 = (float)((ulonglong)uVar1 >> 0x20);
  fVar16 = (float)param_5[1];
  fVar17 = (float)((ulonglong)param_5[1] >> 0x20);
  fVar13 = (float)*(undefined8 *)param_3;
  fVar12 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  if (param_7 == 1) {
    uVar10 = *param_4;
    uVar6 = (ulonglong)(uVar10 == 0xffffffff);
    fVar22 = (float)((ulonglong)*(undefined8 *)(param_6 + 1) >> 0x20) - fVar13;
    fVar25 = (float)*(undefined8 *)(param_6 + 1) - fVar12;
    fVar28 = param_6[3];
    fVar4 = *param_6;
    puVar9 = (uint *)(&DAT_1802ddd30 + (ulonglong)(uVar10 != 0xffffffff) * -4);
    do {
      puVar8 = param_4;
      if (uVar6 != 0) {
        puVar8 = puVar9;
      }
      uVar11 = *puVar8;
      if ((uVar6 == 0) || (uVar11 != uVar10)) {
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        fVar27 = fVar25;
        fVar26 = fVar22;
        switch(uVar11) {
        case 0:
          *param_1 = fVar22;
          param_1[1] = fVar28;
          fVar27 = fVar28;
          break;
        case 1:
          *param_1 = fVar4;
          param_1[1] = fVar25;
          fVar26 = fVar4;
          break;
        case 2:
          *(ulonglong *)param_1 = CONCAT44(fVar25,fVar22);
          break;
        case 3:
          *param_1 = fVar4;
          param_1[1] = fVar28;
          fVar27 = fVar28;
          fVar26 = fVar4;
          break;
        default:
          fVar27 = 0.0;
          fVar26 = 0.0;
        }
        if ((((fVar14 <= fVar26) && (fVar15 <= fVar27)) && (fVar26 + fVar13 <= fVar16)) &&
           (fVar27 + fVar12 <= fVar17)) goto LAB_18011bcaa;
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 != 5);
  }
  if ((param_7 & 0xfffffffd) == 0) {
    auVar23._0_4_ = fVar16 - fVar13;
    auVar23._4_4_ = fVar17 - fVar12;
    auVar23._8_8_ = 0;
    auVar24 = minps(auVar23,auVar24);
    uVar10 = -(uint)((float)uVar7 < fVar14);
    uVar11 = -(uint)((float)(uVar7 >> 0x20) < fVar15);
    auVar19._0_4_ = ~uVar10 & auVar24._0_4_;
    auVar19._4_4_ = ~uVar11 & auVar24._4_4_;
    auVar19._8_4_ = auVar24._8_4_;
    auVar19._12_4_ = auVar24._12_4_;
    auVar5._4_4_ = (uint)fVar15 & uVar11;
    auVar5._0_4_ = (uint)fVar14 & uVar10;
    auVar5._8_8_ = 0;
    auVar19 = auVar19 | auVar5;
    uVar18 = auVar19._0_8_;
    uVar10 = *param_4;
    uVar7 = (ulonglong)(uVar10 == 0xffffffff);
    uVar2 = *(undefined8 *)(param_6 + 2);
    puVar9 = (uint *)(&DAT_1802ddd40 + (ulonglong)(uVar10 != 0xffffffff) * -4);
    do {
      puVar8 = param_4;
      if (uVar7 != 0) {
        puVar8 = puVar9;
      }
      uVar11 = *puVar8;
      if ((uVar7 == 0) || (uVar11 != uVar10)) {
        fVar14 = *param_6;
        if (uVar11 != 0) {
          fVar14 = fVar16;
        }
        uVar3 = uVar2;
        if (uVar11 != 1) {
          uVar3 = uVar1;
        }
        if (fVar13 <= fVar14 - (float)uVar3 || 1 < uVar11) {
          fVar14 = param_6[1];
          if (uVar11 != 2) {
            fVar14 = fVar17;
          }
          fVar28 = param_6[3];
          if (uVar11 != 3) {
            fVar28 = fVar15;
          }
          if ((fVar12 <= fVar14 - fVar28) || ((uVar11 & 0xfffffffe) != 2)) {
            auVar20._4_12_ = auVar19._4_12_;
            if (uVar11 == 0) {
              auVar20._0_4_ = *param_6 - fVar13;
              uVar18 = auVar20._0_8_;
            }
            else if (uVar11 == 1) {
              uVar18 = CONCAT44(auVar19._4_4_,(int)uVar2);
            }
            else if (uVar11 == 2) {
              uVar18 = CONCAT44(param_6[1] - fVar12,auVar19._0_4_);
            }
            else if (uVar11 == 3) {
              uVar18 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),auVar19._0_4_);
            }
            uVar21 = (undefined4)((ulonglong)uVar18 >> 0x20);
            fVar13 = (float)FUN_180102463(uVar18);
            *param_1 = fVar13;
            fVar13 = (float)FUN_180102463(CONCAT44(uVar21,uVar21),
                                          *(undefined4 *)((longlong)param_5 + 4));
            param_1[1] = fVar13;
LAB_18011bcaa:
            *param_4 = uVar11;
            return param_1;
          }
        }
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 != 5);
  }
  *param_4 = 0xffffffff;
  if (param_7 == 2) {
    *(ulonglong *)param_1 =
         CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + _UNK_1802de644,
                  (float)*(undefined8 *)param_2 + _DAT_1802de640);
  }
  else {
    uVar21 = *(undefined4 *)param_5;
    fVar13 = param_2[1];
    fVar12 = (float)FUN_1800eebe2(*param_3 + *param_2,*(undefined4 *)(param_5 + 1));
    fVar12 = (float)FUN_180102463(fVar12 - *param_3,uVar21);
    *param_1 = fVar12;
    uVar21 = *(undefined4 *)((longlong)param_5 + 4);
    fVar13 = (float)FUN_1800eebe2(fVar13 + param_3[1],*(undefined4 *)((longlong)param_5 + 0xc));
    fVar13 = (float)FUN_180102463(fVar13 - param_3[1],uVar21);
    param_1[1] = fVar13;
  }
  return param_1;
}

