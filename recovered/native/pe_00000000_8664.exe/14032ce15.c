/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032ce15 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 *
FUN_14032ce15(undefined8 *param_1,float *param_2,float *param_3,uint *param_4,undefined8 *param_5,
             float *param_6,uint param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  float10 in_ST0;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined8 uStack_d8;
  
  uVar5 = *(ulonglong *)param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar5;
  fVar13 = (float)*param_5;
  fVar14 = (float)((ulonglong)*param_5 >> 0x20);
  fVar15 = (float)param_5[1];
  fVar16 = (float)((ulonglong)param_5[1] >> 0x20);
  fVar12 = (float)*(undefined8 *)param_3;
  fVar10 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  if (param_7 == 1) {
    uVar8 = *param_4;
    uVar4 = (ulonglong)(uVar8 == 0xffffffff);
    puVar7 = (uint *)(&DAT_1404ef200 + (ulonglong)(uVar8 != 0xffffffff) * -4);
    do {
      puVar6 = param_4;
      if (uVar4 != 0) {
        puVar6 = puVar7;
      }
      uVar9 = *puVar6;
      if ((uVar4 == 0) || (uVar9 != uVar8)) {
        *param_1 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(uVar9) {
        case 0:
          pcVar3 = (char *)((longlong)param_1 + (longlong)param_2 * 4);
          iRam0000000000000001._0_1_ = (char)iRam0000000000000001 + '\x01';
          *pcVar3 = *pcVar3 + (char)param_3;
          *(undefined1 *)param_6 = *(undefined1 *)param_6;
          iRam0000000000000001._0_1_ = (char)iRam0000000000000001 + '\x01';
          if ((char)iRam0000000000000001 == '\0') {
            *param_4 = (int)in_ST0;
            iRam0000000000000001 =
                 CONCAT31(iRam0000000000000001._1_3_,(char)iRam0000000000000001 + '\x02');
            uRam0000000000000000 = *(undefined1 *)param_1;
            pcVar3 = (char *)(ulonglong)(iRam0000000000000001 + 1U);
            cVar2 = (char)(iRam0000000000000001 + 1U);
            *pcVar3 = *pcVar3 + cVar2;
            *pcVar3 = *pcVar3 + cVar2;
            *(char *)((longlong)param_3 + 0x18035f6) =
                 *(char *)((longlong)param_3 + 0x18035f6) + (char)param_3;
            *pcVar3 = *pcVar3 + cVar2;
            pcVar3[3] = pcVar3[3] + (char)((ulonglong)param_6 >> 8);
            *pcVar3 = *pcVar3 + cVar2;
            *(char *)((longlong)param_1 + 0x18035f7) =
                 *(char *)((longlong)param_1 + 0x18035f7) + (char)param_6;
            *pcVar3 = *pcVar3 + cVar2;
            *(char *)((longlong)param_1 + 4) =
                 *(char *)((longlong)param_1 + 4) + (char)((ulonglong)uStack_d8 >> 8);
            *pcVar3 = *pcVar3 + cVar2;
            *(char *)((longlong)param_6 + 0x18035f6) =
                 *(char *)((longlong)param_6 + 0x18035f6) + cVar2;
            *pcVar3 = *pcVar3 + cVar2;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((((fVar13 <= 0.0) && (fVar14 <= 0.0)) && (fVar12 + 0.0 <= fVar15)) &&
           (fVar10 + 0.0 <= fVar16)) goto LAB_14032d17a;
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar4 != 5);
  }
  if ((param_7 & 0xfffffffd) == 0) {
    auVar22._0_4_ = fVar15 - fVar12;
    auVar22._4_4_ = fVar16 - fVar10;
    auVar22._8_8_ = 0;
    auVar23 = minps(auVar22,auVar23);
    uVar8 = -(uint)((float)uVar5 < fVar13);
    uVar9 = -(uint)((float)(uVar5 >> 0x20) < fVar14);
    auVar18._0_4_ = ~uVar8 & auVar23._0_4_;
    auVar18._4_4_ = ~uVar9 & auVar23._4_4_;
    auVar18._8_4_ = auVar23._8_4_;
    auVar18._12_4_ = auVar23._12_4_;
    auVar1._4_4_ = (uint)fVar14 & uVar9;
    auVar1._0_4_ = (uint)fVar13 & uVar8;
    auVar1._8_8_ = 0;
    auVar18 = auVar18 | auVar1;
    uVar17 = auVar18._0_8_;
    uVar8 = *param_4;
    uVar5 = (ulonglong)(uVar8 == 0xffffffff);
    puVar7 = (uint *)(&DAT_1404ef210 + (ulonglong)(uVar8 != 0xffffffff) * -4);
    do {
      puVar6 = param_4;
      if (uVar5 != 0) {
        puVar6 = puVar7;
      }
      uVar9 = *puVar6;
      if ((uVar5 == 0) || (uVar9 != uVar8)) {
        fVar24 = *param_6;
        if (uVar9 != 0) {
          fVar24 = fVar15;
        }
        fVar21 = (float)*(undefined8 *)(param_6 + 2);
        fVar25 = fVar21;
        if (uVar9 != 1) {
          fVar25 = fVar13;
        }
        if (fVar12 <= fVar24 - fVar25 || 1 < uVar9) {
          fVar24 = param_6[1];
          if (uVar9 != 2) {
            fVar24 = fVar16;
          }
          fVar25 = param_6[3];
          if (uVar9 != 3) {
            fVar25 = fVar14;
          }
          if ((fVar10 <= fVar24 - fVar25) || ((uVar9 & 0xfffffffe) != 2)) {
            auVar19._4_12_ = auVar18._4_12_;
            if (uVar9 == 0) {
              auVar19._0_4_ = *param_6 - fVar12;
              uVar17 = auVar19._0_8_;
            }
            else if (uVar9 == 1) {
              uVar17 = CONCAT44(auVar18._4_4_,fVar21);
            }
            else if (uVar9 == 2) {
              uVar17 = CONCAT44(param_6[1] - fVar10,auVar18._0_4_);
            }
            else if (uVar9 == 3) {
              uVar17 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_6 + 2) >> 0x20),auVar18._0_4_
                               );
            }
            uVar20 = (undefined4)((ulonglong)uVar17 >> 0x20);
            uVar11 = FUN_140313933(uVar17);
            *(undefined4 *)param_1 = uVar11;
            uVar11 = FUN_140313933(CONCAT44(uVar20,uVar20),*(undefined4 *)((longlong)param_5 + 4));
            *(undefined4 *)((longlong)param_1 + 4) = uVar11;
LAB_14032d17a:
            *param_4 = uVar9;
            return param_1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 5);
  }
  *param_4 = 0xffffffff;
  if (param_7 == 2) {
    *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + _UNK_1404efb14,
                        (float)*(undefined8 *)param_2 + _DAT_1404efb10);
  }
  else {
    uVar11 = *(undefined4 *)param_5;
    fVar12 = param_2[1];
    fVar10 = (float)FUN_1403000b2(*param_3 + *param_2,*(undefined4 *)(param_5 + 1));
    uVar11 = FUN_140313933(fVar10 - *param_3,uVar11);
    *(undefined4 *)param_1 = uVar11;
    uVar11 = *(undefined4 *)((longlong)param_5 + 4);
    fVar12 = (float)FUN_1403000b2(fVar12 + param_3[1],*(undefined4 *)((longlong)param_5 + 0xc));
    uVar11 = FUN_140313933(fVar12 - param_3[1],uVar11);
    *(undefined4 *)((longlong)param_1 + 4) = uVar11;
  }
  return param_1;
}

