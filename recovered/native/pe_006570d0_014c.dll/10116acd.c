/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116acd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_10116acd(float *param_1,float *param_2,float *param_3,uint *param_4,float *param_5,
                    float *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar12 = (float)*(undefined8 *)param_3;
  fVar13 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  fVar21 = *param_2;
  fVar14 = param_2[1];
  uVar5 = *(ulonglong *)param_2;
  if (param_7 == 1) {
    uVar8 = *param_4;
    uVar7 = (uint)(uVar8 != 0xffffffff);
    fVar24 = (float)((ulonglong)*(undefined8 *)(param_6 + 1) >> 0x20) - fVar12;
    fVar25 = (float)*(undefined8 *)(param_6 + 1) - fVar13;
    fVar17 = param_6[3];
    iVar10 = -4 - uVar7;
    puVar6 = (uint *)(&DAT_102b839c + uVar7 * -4);
    fVar23 = *param_6;
    do {
      puVar9 = param_4;
      if (iVar10 != -5) {
        puVar9 = puVar6;
      }
      uVar7 = *puVar9;
      if ((iVar10 == -5) || (uVar7 != uVar8)) {
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        fVar20 = fVar25;
        fVar22 = fVar24;
        switch(uVar7) {
        case 0:
          *param_1 = fVar24;
          param_1[1] = fVar17;
          fVar20 = fVar17;
          break;
        case 1:
          *param_1 = fVar23;
          param_1[1] = fVar25;
          fVar22 = fVar23;
          break;
        case 2:
          *(ulonglong *)param_1 = CONCAT44(fVar25,fVar24);
          break;
        case 3:
          *param_1 = fVar23;
          param_1[1] = fVar17;
          fVar20 = fVar17;
          fVar22 = fVar23;
          break;
        default:
          fVar20 = 0.0;
          fVar22 = 0.0;
        }
        if ((((fVar1 <= fVar22) && (fVar2 <= fVar20)) && (fVar22 + fVar12 <= fVar3)) &&
           (fVar20 + fVar13 <= fVar4)) {
          *param_4 = uVar7;
          return param_1;
        }
      }
      puVar6 = puVar6 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
  }
  if ((param_7 & 0xfffffffd) == 0) {
    auVar18._0_4_ = fVar3 - fVar12;
    auVar18._4_4_ = fVar4 - fVar13;
    auVar18._8_8_ = 0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar5;
    auVar19 = minps(auVar18,auVar19);
    uVar15 = auVar19._8_4_;
    uVar16 = auVar19._12_4_;
    fVar21 = (float)(~-(uint)(fVar21 < fVar1) & auVar19._0_4_ |
                    (uint)fVar1 & -(uint)(fVar21 < fVar1));
    fVar14 = (float)(~-(uint)(fVar14 < fVar2) & auVar19._4_4_ |
                    (uint)fVar2 & -(uint)(fVar14 < fVar2));
    uVar8 = (uint)(*param_4 != 0xffffffff);
    iVar10 = -4 - uVar8;
    puVar6 = (uint *)(&DAT_102b83ac + uVar8 * -4);
    do {
      puVar9 = param_4;
      if (iVar10 != -5) {
        puVar9 = puVar6;
      }
      uVar8 = *puVar9;
      if ((iVar10 == -5) || (uVar8 != *param_4)) {
        fVar17 = *param_6;
        if (uVar8 != 0) {
          fVar17 = fVar3;
        }
        fVar23 = param_6[2];
        if (uVar8 != 1) {
          fVar23 = fVar1;
        }
        if (fVar12 <= fVar17 - fVar23 || 1 < uVar8) {
          fVar17 = param_6[1];
          if (uVar8 != 2) {
            fVar17 = fVar4;
          }
          fVar23 = param_6[3];
          if (uVar8 != 3) {
            fVar23 = fVar2;
          }
          if ((fVar13 <= fVar17 - fVar23) || ((uVar8 & 0xfffffffe) != 2)) {
            if (uVar8 == 0) {
              fVar21 = *param_6 - fVar12;
            }
            else if (uVar8 == 1) {
              uVar15 = 0;
              uVar16 = 0;
              fVar21 = param_6[2];
            }
            else if (uVar8 == 2) {
              fVar14 = param_6[1] - fVar13;
            }
            else if (uVar8 == 3) {
              fVar14 = param_6[3];
            }
            fVar11 = (float10)FUN_100fdbca(fVar21,fVar1,param_6[3],fVar21,fVar14,uVar15,uVar16);
            *param_1 = (float)fVar11;
            fVar11 = (float10)FUN_100fdbca(fVar14,param_5[1]);
            param_1[1] = (float)fVar11;
            *param_4 = uVar8;
            return param_1;
          }
        }
      }
      puVar6 = puVar6 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
  }
  *param_4 = 0xffffffff;
  if (param_7 == 2) {
    *(ulonglong *)param_1 =
         CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + _UNK_102b8ab4,
                  (float)*(undefined8 *)param_2 + _DAT_102b8ab0);
  }
  else {
    fVar1 = *param_5;
    fVar2 = param_2[1];
    fVar11 = (float10)FUN_100ea38a(*param_3 + *param_2,param_5[2]);
    fVar11 = (float10)FUN_100fdbca((float)fVar11 - *param_3,fVar1);
    *param_1 = (float)fVar11;
    fVar1 = param_5[1];
    fVar11 = (float10)FUN_100ea38a(fVar2 + param_3[1],param_5[3]);
    fVar11 = (float10)FUN_100fdbca((float)fVar11 - param_3[1],fVar1);
    param_1[1] = (float)fVar11;
  }
  return param_1;
}

