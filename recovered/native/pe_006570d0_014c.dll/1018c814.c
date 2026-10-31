/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018c814 */

void __thiscall
FUN_1018c814(undefined4 param_1,int *param_2,float param_3,float *param_4,uint param_5,
            float *param_6,char *param_7,char *param_8,float param_9,uint param_10)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *_Buf;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int local_bc;
  undefined8 *local_b8;
  short *local_b4;
  undefined4 local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_d8;
  local_cc = (float)(int)param_4[1];
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  local_b0 = param_1;
  if (local_cc < param_6[3] || local_cc == param_6[3]) {
    local_9c = param_5 | 0xffffff;
    do {
      fStack_c0 = 0.0;
      fStack_c4 = 0.0;
      fStack_c8 = 0.0;
      local_78 = *param_4;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      if (param_8 == (char *)0x0) {
        sVar5 = _strlen(param_7);
        param_8 = param_7 + sVar5;
      }
      local_94 = FUN_10190228(param_3,0xbf800000);
      local_38 = param_3 / *(float *)(local_94 + 0x10);
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      fVar15 = param_3 + local_cc;
      _Buf = param_7;
      fVar18 = local_ac;
      fVar19 = param_6[1];
      if (fVar15 < param_6[1]) {
        do {
          local_ac = fVar19;
          if (param_8 <= _Buf) break;
          fStack_c8 = 0.0;
          fStack_c4 = 0.0;
          fStack_c0 = 0.0;
          local_cc = fVar15;
          pcVar6 = _memchr(_Buf,10,(int)param_8 - (int)_Buf);
          if (param_9 <= 0.0) {
            _Buf = pcVar6 + 1;
            fVar19 = local_ac;
            if (pcVar6 == (char *)0x0) {
              _Buf = param_8;
            }
          }
          else {
            if (pcVar6 == (char *)0x0) {
              pcVar6 = param_8;
            }
            uVar7 = FUN_101932d6(local_b0,param_3,_Buf,pcVar6,param_9,param_10);
            _Buf = (char *)FUN_1019319d(uVar7,param_8,param_10);
            fVar19 = param_6[1];
          }
          fVar15 = param_3 + local_cc;
          fVar18 = local_ac;
        } while (fVar15 < fVar19);
      }
      local_ac = fVar18;
      pcVar6 = param_8;
      fVar15 = local_ac;
      if (((param_9 <= 0.0) && (10000 < (int)param_8 - (int)_Buf)) &&
         (local_68 = param_6[3], pcVar6 = _Buf, fVar18 = local_cc, local_cc < local_68)) {
        do {
          local_ac = fVar18;
          if (param_8 <= pcVar6) break;
          pvVar8 = _memchr(pcVar6,10,(int)param_8 - (int)pcVar6);
          pcVar6 = (char *)((int)pvVar8 + 1);
          if (pvVar8 == (void *)0x0) {
            pcVar6 = param_8;
          }
          fVar15 = local_ac;
          fVar18 = local_ac + param_3;
        } while (local_ac + param_3 < local_68);
      }
      local_ac = fVar15;
      if (_Buf == pcVar6) break;
      local_90 = ((int)pcVar6 - (int)_Buf) * 4;
      fVar15 = (float)(((int)pcVar6 - (int)_Buf) * 6);
      local_98 = param_2[3];
      FUN_10188516(fVar15,local_90);
      local_b8 = (undefined8 *)param_2[0xc];
      local_b4 = (short *)param_2[0xd];
      local_8c = *param_2;
      local_bc = param_2[10];
      if (_Buf < pcVar6) {
        fVar18 = (float)(int)local_78;
        fVar19 = (float)(int)fStack_74;
        fVar20 = (float)(int)fStack_70;
        fVar21 = (float)(int)fStack_6c;
        local_28 = local_38;
        fStack_24 = local_38;
        fStack_20 = local_38;
        fStack_1c = local_38;
        pcVar9 = (char *)0x0;
        local_68 = fVar18;
        fStack_64 = fVar19;
        fStack_60 = fVar20;
        fStack_5c = fVar21;
        do {
          fVar2 = fStack_c8;
          local_ac = local_cc;
          fStack_a8 = fStack_c8;
          fStack_a4 = fStack_c4;
          fStack_a0 = fStack_c0;
          fStack_c8 = local_cc;
          fStack_c0 = fVar2;
          pcVar10 = _Buf;
          local_d8 = pcVar9;
          local_cc = fVar18;
          fStack_c4 = fVar19;
          while (0.0 < param_9) {
            if (pcVar9 == (char *)0x0) {
              local_78 = fVar18;
              fStack_74 = fVar19;
              fStack_70 = fVar20;
              fStack_6c = fVar21;
              pcVar9 = (char *)FUN_101932d6(local_b0,param_3,pcVar10,pcVar6,
                                            (local_68 - fVar18) + param_9,param_10);
              fVar18 = local_78;
              fVar19 = fStack_74;
            }
            if (pcVar10 < pcVar9) {
              fStack_c8 = local_ac;
              fStack_c0 = fStack_a8;
              _Buf = pcVar10;
              local_d8 = pcVar9;
              local_cc = fVar18;
              fStack_c4 = fVar19;
              break;
            }
            fVar18 = local_ac + param_3;
            if (param_6[3] <= fVar18 && fVar18 != param_6[3]) goto LAB_1018cf9f;
            local_ac = fVar18;
            pcVar10 = (char *)FUN_1019319d(pcVar10,pcVar6,param_10);
            pcVar9 = (char *)0x0;
            fVar18 = local_68;
            fVar19 = fStack_64;
            fVar20 = fStack_60;
            fVar21 = fStack_5c;
            if (pcVar6 <= pcVar10) goto LAB_1018cf9f;
          }
          local_18 = (uint)*_Buf;
          if ((int)local_18 < 0) {
            iVar13 = FUN_100f90d5(&local_18,_Buf,pcVar6);
            _Buf = _Buf + iVar13;
          }
          else {
            _Buf = _Buf + 1;
          }
          if (local_18 < 0x20) {
            fVar18 = local_cc;
            fVar19 = fStack_c8;
            fVar20 = fStack_c4;
            fVar21 = fStack_c0;
            fVar2 = fStack_c8;
            fVar16 = fStack_c8;
            if (local_18 != 0xd) {
              if (local_18 != 10) goto LAB_1018cc4e;
              local_cc = param_3 + fStack_c8;
              fStack_c8 = 0.0;
              fStack_c4 = 0.0;
              fStack_c0 = 0.0;
              fVar18 = local_68;
              fVar19 = fStack_64;
              fVar20 = fStack_60;
              fVar21 = fStack_5c;
              fVar2 = local_cc;
              fVar16 = fStack_c0;
              if (param_6[3] <= local_cc && local_cc != param_6[3]) break;
            }
          }
          else {
LAB_1018cc4e:
            puVar11 = (uint *)FUN_101902dc(local_18 & 0xffff);
            fVar18 = (float)puVar11[1] * local_38;
            if ((*puVar11 & 2) != 0) {
              fVar20 = (float)*(undefined8 *)(puVar11 + 2) * local_28 + local_cc;
              fVar21 = (float)((ulonglong)*(undefined8 *)(puVar11 + 2) >> 0x20) * fStack_24 +
                       fStack_c8;
              fVar19 = param_6[2];
              if (fVar20 <= fVar19) {
                fVar16 = (float)*(undefined8 *)(puVar11 + 4) * local_28 + local_cc;
                fVar17 = (float)((ulonglong)*(undefined8 *)(puVar11 + 4) >> 0x20) * fStack_24 +
                         fStack_c8;
                fVar2 = *param_6;
                if (fVar2 <= fVar16) {
                  local_d0 = (float)puVar11[6];
                  local_d4 = (float)puVar11[7];
                  fVar4 = (float)puVar11[8];
                  fStack_54 = (float)puVar11[9];
                  fVar3 = (float)puVar11[9];
                  uStack_44 = 0;
                  uStack_40 = 0;
                  uStack_3c = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  local_88 = fVar21;
                  local_ac = fVar17;
                  local_58 = fVar4;
                  fVar22 = fStack_54;
                  fStack_a0 = fVar17;
                  local_48 = fVar3;
                  if ((param_10 & 1) != 0) {
                    fStack_74 = 0.0;
                    fStack_70 = 0.0;
                    fStack_6c = 0.0;
                    if (fVar20 < fVar2) {
                      local_d0 = local_d0 +
                                 (fVar4 - local_d0) *
                                 (DAT_1028b430 - (fVar16 - fVar2) / (fVar16 - fVar20));
                      fVar20 = fVar2;
                    }
                    fVar2 = param_6[1];
                    fStack_7c = fVar21;
                    if (fVar21 < fVar2) {
                      fStack_7c = 0.0;
                      local_d4 = local_d4 +
                                 (fVar3 - local_d4) *
                                 (DAT_1028b430 - (fVar17 - fVar2) / (fVar17 - fVar21));
                      local_88 = fVar2;
                    }
                    if (fVar19 < fVar16) {
                      local_58 = (fVar4 - local_d0) * ((fVar19 - fVar20) / (fVar16 - fVar20)) +
                                 local_d0;
                      fVar16 = fVar19;
                    }
                    fVar19 = param_6[3];
                    fVar22 = fVar3;
                    if (fVar19 < fVar17) {
                      local_ac = fVar19;
                      fStack_a0 = 0.0;
                      fVar22 = (fVar3 - local_d4) * ((fVar19 - local_88) / (fVar17 - local_88)) +
                               local_d4;
                    }
                    fStack_84 = fStack_7c;
                    fStack_80 = fStack_7c;
                    local_78 = fVar18;
                    local_48 = fVar22;
                    if (local_ac <= local_88) {
                      fVar18 = fVar18 + local_cc;
                      fVar19 = fStack_74;
                      fVar20 = fStack_70;
                      fVar21 = fStack_6c;
                      fVar2 = fStack_c8;
                      fVar16 = fStack_c8;
                      local_ac = fVar17;
                      fStack_a8 = fVar17;
                      fStack_a4 = fVar17;
                      fStack_a0 = fVar17;
                      local_58 = fVar4;
                      local_48 = fVar3;
                      goto LAB_1018ccd2;
                    }
                  }
                  uStack_3c = 0;
                  uStack_40 = 0;
                  uStack_44 = 0;
                  uStack_4c = 0;
                  uStack_50 = 0;
                  uVar12 = local_9c;
                  if ((*puVar11 & 1) == 0) {
                    uVar12 = param_5;
                  }
                  *local_b8 = CONCAT44(local_88,fVar20);
                  *(uint *)(local_b8 + 2) = uVar12;
                  *(float *)(local_b8 + 1) = local_d0;
                  *(float *)((int)local_b8 + 0xc) = local_d4;
                  *(float *)((int)local_b8 + 0x14) = fVar16;
                  *(float *)(local_b8 + 3) = local_88;
                  *(uint *)((int)local_b8 + 0x24) = uVar12;
                  *(float *)((int)local_b8 + 0x1c) = local_58;
                  *(float *)(local_b8 + 4) = local_d4;
                  *(uint *)(local_b8 + 7) = uVar12;
                  *(float *)(local_b8 + 5) = fVar16;
                  *(float *)((int)local_b8 + 0x2c) = local_ac;
                  *(float *)(local_b8 + 6) = local_58;
                  *(float *)((int)local_b8 + 0x34) = fVar22;
                  *(float *)((int)local_b8 + 0x3c) = fVar20;
                  *(float *)(local_b8 + 8) = local_ac;
                  *(uint *)((int)local_b8 + 0x4c) = uVar12;
                  *(float *)((int)local_b8 + 0x44) = local_d0;
                  *(float *)(local_b8 + 9) = local_48;
                  sVar14 = (short)local_bc;
                  *local_b4 = sVar14;
                  local_b4[1] = sVar14 + 1;
                  local_b4[2] = sVar14 + 2;
                  local_b4[3] = sVar14;
                  local_b4[4] = sVar14 + 2;
                  local_b4[5] = sVar14 + 3;
                  local_b8 = local_b8 + 10;
                  local_bc = local_bc + 4;
                  local_b4 = local_b4 + 6;
                  fStack_a8 = fStack_a0;
                  fStack_a4 = fStack_a0;
                  local_88 = fVar15;
                }
              }
            }
            fVar21 = 0.0;
            fVar20 = 0.0;
            fVar19 = 0.0;
            fVar18 = fVar18 + local_cc;
            fVar2 = fStack_c8;
            fVar16 = fStack_c8;
          }
LAB_1018ccd2:
          fStack_c0 = fVar16;
          local_cc = fVar2;
          pcVar9 = local_d8;
          fStack_c8 = fStack_c0;
          fStack_c4 = fStack_c0;
        } while (_Buf < pcVar6);
      }
LAB_1018cf9f:
      if (local_8c == *param_2) {
        param_2[6] = ((int)local_b8 - param_2[8] >> 2) * -0x33333333;
        iVar13 = (int)local_b4 - param_2[5] >> 1;
        param_2[3] = iVar13;
        piVar1 = (int *)(param_2[2] + -0x18 + local_8c * 0x40);
        *piVar1 = *piVar1 + (iVar13 - (local_98 + (int)fVar15));
        param_2[0xc] = (int)local_b8;
        param_2[0xd] = (int)local_b4;
        param_2[10] = local_bc;
        break;
      }
      *param_2 = *param_2 + -1;
      FUN_10188652(fVar15,local_90);
      FUN_10187d74();
      local_cc = (float)(int)param_4[1];
      fStack_c8 = 0.0;
      fStack_c4 = 0.0;
      fStack_c0 = 0.0;
      param_8 = pcVar6;
    } while (local_cc < param_6[3] || local_cc == param_6[3]);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

