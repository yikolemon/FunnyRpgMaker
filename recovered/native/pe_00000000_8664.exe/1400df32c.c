/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400df32c */

void FUN_1400df32c(undefined8 param_1,int *param_2,float param_3,float *param_4,uint param_5,
                  float *param_6,char *param_7,char *param_8,float param_9,uint param_10)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  short sVar14;
  char *pcVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1b8 [32];
  float local_198;
  uint local_190;
  float local_184;
  float local_180;
  int local_17c;
  int *local_178;
  ulonglong local_170;
  undefined8 *local_168;
  short *local_160;
  uint local_154;
  int local_150;
  int local_14c;
  undefined1 local_148 [16];
  char *local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong local_100;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_1b8;
  fVar27 = (float)(int)param_4[1];
  if (fVar27 < param_6[3] || fVar27 == param_6[3]) {
    local_154 = param_5 | 0xffffff;
    local_178 = param_2;
    do {
      fVar31 = *param_4;
      if (param_8 == (char *)0x0) {
        sVar6 = strlen(param_7);
        param_8 = param_7 + sVar6;
      }
      local_108 = FUN_1400e30e8(param_1,param_3,DAT_1401c86a4);
      fVar29 = param_3 / *(float *)(local_108 + 0x14);
      fVar21 = param_6[1];
      pcVar9 = param_7;
      fVar23 = param_3 + fVar27;
      if (param_3 + fVar27 < fVar21) {
        do {
          fVar30 = fVar23;
          if (param_8 <= pcVar9) break;
          pcVar7 = (char *)FUN_1401c4fe0(pcVar9,10,(longlong)param_8 - (longlong)pcVar9);
          if (param_9 <= 0.0) {
            pcVar9 = pcVar7 + 1;
            if (pcVar7 == (char *)0x0) {
              pcVar9 = param_8;
            }
          }
          else {
            if (pcVar7 == (char *)0x0) {
              pcVar7 = param_8;
            }
            local_190 = param_10;
            local_198 = param_9;
            uVar8 = FUN_1400e64e3(param_1,param_3,pcVar9,pcVar7);
            pcVar9 = (char *)FUN_1400e638d(uVar8,param_8,param_10);
            fVar21 = param_6[1];
          }
          fVar27 = fVar30;
          fVar23 = param_3 + fVar30;
        } while (param_3 + fVar30 < fVar21);
      }
      pcVar7 = param_8;
      if ((param_9 <= 0.0) && (10000 < (longlong)param_8 - (longlong)pcVar9)) {
        fVar21 = param_6[3];
        pcVar7 = pcVar9;
        fVar23 = fVar27;
        while ((fVar23 < fVar21 && (pcVar7 < param_8))) {
          lVar10 = FUN_1401c4fe0(pcVar7,10,(longlong)param_8 - (longlong)pcVar7);
          pcVar7 = (char *)(lVar10 + 1);
          if (lVar10 == 0) {
            pcVar7 = param_8;
          }
          fVar23 = fVar23 + param_3;
        }
      }
      if (pcVar9 == pcVar7) break;
      iVar4 = (int)pcVar7 - (int)pcVar9;
      local_14c = iVar4 * 4;
      iVar4 = iVar4 * 6;
      local_150 = param_2[4];
      FUN_1400dae70(param_2,iVar4);
      local_168 = *(undefined8 **)(param_2 + 0x10);
      local_160 = *(short **)(param_2 + 0x12);
      local_170 = (ulonglong)(uint)param_2[0xd];
      local_100 = (longlong)*param_2;
      if (pcVar9 < pcVar7) {
        fVar30 = (float)(int)fVar31;
        pcVar12 = (char *)0x0;
        fVar31 = fVar30;
        local_17c = iVar4;
        fVar21 = fVar30;
        fVar23 = fVar27;
        pcVar15 = pcVar9;
        pcVar11 = pcVar12;
LAB_1400df5f9:
        do {
          pcVar3 = pcVar11;
          pcVar16 = pcVar15;
          fVar28 = fVar21;
          fVar24 = fVar23;
          if (0.0 < param_9) {
            if (pcVar12 == (char *)0x0) {
              local_198 = (fVar30 - fVar31) + param_9;
              local_190 = param_10;
              pcVar12 = (char *)FUN_1400e64e3(param_1,param_3,pcVar9,pcVar7);
            }
            pcVar3 = pcVar12;
            pcVar16 = pcVar9;
            fVar28 = fVar31;
            fVar24 = fVar27;
            if (pcVar12 <= pcVar9) {
              fVar27 = fVar27 + param_3;
              param_2 = local_178;
              iVar4 = local_17c;
              if (param_6[3] <= fVar27 && fVar27 != param_6[3]) break;
              pcVar9 = (char *)FUN_1400e638d(pcVar9,pcVar7,param_10);
              pcVar12 = (char *)0x0;
              param_2 = local_178;
              fVar31 = fVar30;
              iVar4 = local_17c;
              if (pcVar7 <= pcVar9) break;
              goto LAB_1400df5f9;
            }
          }
          fVar27 = fVar24;
          pcVar12 = pcVar3;
          local_f4 = (uint)*pcVar16;
          if (*pcVar16 < '\0') {
            iVar4 = FUN_140076955(&local_f4,pcVar16,pcVar7);
            pcVar9 = pcVar16 + iVar4;
          }
          else {
            pcVar9 = pcVar16 + 1;
          }
          param_2 = local_178;
          iVar4 = local_17c;
          if (local_f4 < 0x20) {
            fVar31 = fVar28;
            if (local_f4 != 0xd) {
              if (local_f4 != 10) goto LAB_1400df6f7;
              fVar27 = param_3 + fVar27;
              fVar31 = fVar30;
              if (param_6[3] <= fVar27 && fVar27 != param_6[3]) break;
            }
          }
          else {
LAB_1400df6f7:
            local_130 = pcVar12;
            puVar13 = (uint *)FUN_1400e3188(local_108);
            fVar31 = (float)puVar13[1];
            fVar21 = fStack_11c;
            if ((*puVar13 & 2) != 0) {
              fVar24 = (float)*(undefined8 *)(puVar13 + 2) * fVar29 + fVar28;
              fVar26 = (float)((ulonglong)*(undefined8 *)(puVar13 + 2) >> 0x20) * fVar29 + fVar27;
              fVar23 = param_6[2];
              if (fVar24 <= fVar23) {
                fVar17 = (float)*(undefined8 *)(puVar13 + 4) * fVar29 + fVar28;
                fVar18 = (float)((ulonglong)*(undefined8 *)(puVar13 + 4) >> 0x20) * fVar29 + fVar27;
                fVar1 = *param_6;
                if (fVar1 <= fVar17) {
                  fVar19 = (float)puVar13[6];
                  local_180 = (float)puVar13[7];
                  uVar8 = *(undefined8 *)(puVar13 + 8);
                  fVar25 = (float)uVar8;
                  fVar22 = (float)puVar13[9];
                  local_148 = ZEXT416((uint)fVar22);
                  fVar20 = fVar18;
                  fStack_11c = fVar18;
                  if ((param_10 & 1) == 0) {
                    fVar22 = (float)((ulonglong)uVar8 >> 0x20);
                  }
                  else {
                    uStack_110 = 0;
                    if (fVar24 < fVar1) {
                      fVar19 = fVar19 + (fVar25 - fVar19) *
                                        (DAT_1401c86c8 - (fVar17 - fVar1) / (fVar17 - fVar24));
                      fVar24 = fVar1;
                    }
                    fVar21 = param_6[1];
                    if (fVar26 < fVar21) {
                      local_180 = local_180 +
                                  (fVar22 - local_180) *
                                  (DAT_1401c86c8 - (fVar18 - fVar21) / (fVar18 - fVar26));
                      fVar26 = fVar21;
                    }
                    if (fVar23 < fVar17) {
                      fVar25 = (fVar25 - fVar19) * ((fVar23 - fVar24) / (fVar17 - fVar24)) + fVar19;
                      fVar17 = fVar23;
                    }
                    fVar21 = param_6[3];
                    if (fVar21 < fVar18) {
                      fVar22 = (fVar22 - local_180) * ((fVar21 - fVar26) / (fVar18 - fVar26)) +
                               local_180;
                      fVar20 = fVar21;
                      fStack_11c = 0.0;
                    }
                    local_184 = fVar19;
                    local_128 = fVar18;
                    fStack_124 = fVar18;
                    fStack_120 = fVar18;
                    fVar21 = fVar18;
                    local_118 = uVar8;
                    if (fVar20 <= fVar26) goto LAB_1400df9e9;
                    local_148 = ZEXT416((uint)fVar22);
                  }
                  uVar2 = local_154;
                  if ((*puVar13 & 1) == 0) {
                    uVar2 = param_5;
                  }
                  *local_168 = CONCAT44(fVar26,fVar24);
                  *(uint *)(local_168 + 2) = uVar2;
                  *(float *)(local_168 + 1) = fVar19;
                  *(float *)((longlong)local_168 + 0xc) = local_180;
                  *(float *)((longlong)local_168 + 0x14) = fVar17;
                  *(float *)(local_168 + 3) = fVar26;
                  *(uint *)((longlong)local_168 + 0x24) = uVar2;
                  *(float *)((longlong)local_168 + 0x1c) = fVar25;
                  *(float *)(local_168 + 4) = local_180;
                  *(uint *)(local_168 + 7) = uVar2;
                  *(float *)(local_168 + 5) = fVar17;
                  *(float *)((longlong)local_168 + 0x2c) = fVar20;
                  *(float *)(local_168 + 6) = fVar25;
                  *(float *)((longlong)local_168 + 0x34) = fVar22;
                  *(float *)((longlong)local_168 + 0x3c) = fVar24;
                  *(float *)(local_168 + 8) = fVar20;
                  *(uint *)((longlong)local_168 + 0x4c) = uVar2;
                  *(float *)((longlong)local_168 + 0x44) = fVar19;
                  *(int *)(local_168 + 9) = local_148._0_4_;
                  sVar14 = (short)local_170;
                  *local_160 = sVar14;
                  local_160[1] = sVar14 + 1;
                  local_160[2] = sVar14 + 2;
                  local_160[3] = sVar14;
                  local_160[4] = sVar14 + 2;
                  local_160[5] = sVar14 + 3;
                  local_168 = local_168 + 10;
                  local_170 = (ulonglong)((int)local_170 + 4);
                  local_160 = local_160 + 6;
                  local_128 = fVar20;
                  fStack_124 = fStack_11c;
                  fStack_120 = fStack_11c;
                  fVar21 = fStack_11c;
                }
              }
            }
LAB_1400df9e9:
            fStack_11c = fVar21;
            pcVar12 = local_130;
            fVar31 = fVar31 * fVar29 + fVar28;
          }
          fVar21 = fVar31;
          fVar23 = fVar27;
          pcVar15 = pcVar9;
          pcVar11 = pcVar12;
        } while (pcVar9 < pcVar7);
      }
      if ((int)local_100 == *param_2) {
        param_2[8] = (int)((ulonglong)((longlong)local_168 - *(longlong *)(param_2 + 10)) >> 2) *
                     -0x33333333;
        iVar5 = (int)((ulonglong)((longlong)local_160 - *(longlong *)(param_2 + 6)) >> 1);
        param_2[4] = iVar5;
        *(int *)(*(longlong *)(param_2 + 2) + -0x20 + local_100 * 0x48) =
             (*(int *)(*(longlong *)(param_2 + 2) + -0x20 + local_100 * 0x48) - (local_150 + iVar4))
             + iVar5;
        *(undefined8 **)(param_2 + 0x10) = local_168;
        *(short **)(param_2 + 0x12) = local_160;
        param_2[0xd] = (int)local_170;
        break;
      }
      *param_2 = *param_2 + -1;
      FUN_1400dafb2(param_2,iVar4,local_14c);
      FUN_1400da69a(param_2);
      fVar27 = (float)(int)param_4[1];
      param_8 = pcVar7;
    } while (fVar27 < param_6[3] || fVar27 == param_6[3]);
  }
  if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_1b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)auStack_1b8);
}

