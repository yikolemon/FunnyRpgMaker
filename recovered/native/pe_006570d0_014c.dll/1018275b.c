/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018275b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1018275b(float **param_1,float *param_2)

{
  float **ppfVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float local_108;
  int local_104;
  int local_fc;
  uint local_f0;
  float local_e8 [8];
  float local_c8;
  int local_c4 [2];
  int local_bc;
  uint local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  float *local_94;
  uint local_90;
  int local_8c;
  int local_88;
  float local_84;
  int local_80;
  int local_78;
  uint local_6c;
  float *local_64;
  float *local_60;
  float local_5c;
  float *local_58;
  float *local_54;
  undefined4 local_50;
  float *local_4c;
  float local_48;
  float *local_44;
  float *local_40;
  float local_3c;
  float *local_38;
  float *pfStack_34;
  float *local_30;
  float **local_2c;
  float *local_28;
  float *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_108;
  local_14 = 0xffffffff;
  local_18 = &LAB_10186000;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (4 < (uint)((int)param_1[1] - (int)*param_1)) {
    local_60 = param_2;
    local_2c = param_1;
    FUN_1018218a();
    local_14 = 10;
    fVar7 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)
                                                            (uint)((int)local_2c[1] - (int)*local_2c
                                                                  >> 2) | (ulonglong)DAT_1028f6c0) -
                                                  DAT_1028f6b0) / local_108));
    local_a8 = (float)fVar7;
    FUN_101832d8();
    local_28 = local_2c[1];
    pfVar5 = *local_2c;
    while (pfVar5 != local_28) {
      local_e8[0] = *pfVar5;
      local_24 = pfVar5;
      FUN_1018394c(&local_c8,local_e8);
      pfVar5 = local_24 + 1;
    }
    FUN_1018426a();
    local_14 = 0xb;
    fVar7 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)
                                                            (uint)((int)local_2c[1] - (int)*local_2c
                                                                  >> 2) | (ulonglong)DAT_1028f6c0) -
                                                  DAT_1028f6b0) / local_c8));
    local_a4 = (float)fVar7;
    FUN_101846a4();
    FUN_1005c9b8();
    local_14 = 0xc;
    fVar7 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)
                                                            (uint)((int)local_2c[1] - (int)*local_2c
                                                                  >> 2) | (ulonglong)DAT_1028f6c0) -
                                                  DAT_1028f6b0) / local_e8[0]));
    local_a0 = (float)fVar7;
    FUN_1018371a();
    local_28 = local_2c[1];
    pfVar5 = *local_2c;
    while (pfVar5 != local_28) {
      local_58 = (float *)*pfVar5;
      local_38 = (float *)0x0;
      local_24 = pfVar5;
      FUN_101842de(&local_84,&local_58,&local_38);
      pfVar5 = local_24 + 1;
    }
    local_28 = local_2c[1];
    pfVar5 = *local_2c;
    while (pfVar5 != local_28) {
      local_58 = (float *)*pfVar5;
      local_38 = (float *)local_58[0xe8];
      local_24 = pfVar5;
      if (local_38 != (float *)0x0) {
        uVar2 = FUN_100616f3();
        iVar6 = *(int *)(local_fc + 4 + (uVar2 & local_f0) * 8);
        if (iVar6 != local_104) {
          if (local_38 != *(float **)(iVar6 + 8)) {
            do {
              if (iVar6 == *(int *)(local_fc + (uVar2 & local_f0) * 8)) goto code_r0x10182a78;
              iVar6 = *(int *)(iVar6 + 4);
            } while (local_38 != *(float **)(iVar6 + 8));
          }
          local_14 = 0xc;
          FUN_10184adc(&local_84,&local_38);
          pfVar5 = *(float **)((int)local_84 + 0x10);
          if (pfVar5 == *(float **)((int)local_84 + 0x14)) {
            FUN_10051662(pfVar5,&local_58);
          }
          else {
            *pfVar5 = (float)local_58;
            *(int *)((int)local_84 + 0x10) = *(int *)((int)local_84 + 0x10) + 4;
          }
          FUN_10184e36(&local_84,&local_58);
          *(int *)((int)local_84 + 0xc) = *(int *)((int)local_84 + 0xc) + 1;
        }
      }
code_r0x10182a78:
      pfVar5 = local_24 + 1;
    }
    local_58 = (float *)0x0;
    local_54 = (float *)0x0;
    local_50 = 0;
    local_4c = local_60;
    local_14 = 0xd;
    local_28 = local_2c[1];
    pfVar5 = *local_2c;
    while (pfVar5 != local_28) {
      local_84 = *pfVar5;
      local_24 = pfVar5;
      piVar3 = (int *)FUN_1018315c();
      if (*piVar3 == 0) {
        FUN_10184446();
      }
      pfVar5 = local_24 + 1;
    }
    local_38 = (float *)0x0;
    pfStack_34 = (float *)0x0;
    local_30 = (float *)0x0;
    local_14 = 0xe;
    FUN_100647d6();
code_r0x10182b12:
    if (local_58 != local_54) {
      local_5c = *local_58;
      if (4 < (int)local_54 - (int)local_58) {
        local_3c = local_54[-1];
        local_54[-1] = local_5c;
        local_90 = (int)local_54 + (-4 - (int)local_58);
        local_88 = (int)local_90 >> 2;
        local_8c = local_88 + -1;
        local_64 = (float *)(local_8c >> 1);
        if ((int)local_64 < 1) {
          pfVar4 = (float *)0x0;
          pfVar5 = local_58;
        }
        else {
          local_14 = 0xe;
          pfVar4 = (float *)0x0;
          local_94 = local_58;
          local_24 = local_4c;
          do {
            local_84 = local_94[(int)pfVar4 * 2 + 1];
            local_48 = local_94[(int)pfVar4 * 2 + 2];
            local_28 = pfVar4;
            piVar3 = (int *)FUN_1018315c();
            local_98 = *piVar3;
            piVar3 = (int *)FUN_1018315c();
            pfVar4 = (float *)((int)local_28 * 2 | 1);
            if (local_98 <= *piVar3) {
              pfVar4 = (float *)((int)local_28 * 2 + 2);
            }
            local_94[(int)local_28] = local_94[(int)pfVar4];
            pfVar5 = local_94;
          } while ((int)pfVar4 < (int)local_64);
        }
        if (((local_90 & 4) == 0) && (pfVar4 == local_64)) {
          pfVar5[(int)local_64] = pfVar5[local_88 + -1];
        }
        local_14 = 0xe;
        FUN_10184faa(&local_3c);
      }
      local_54 = local_54 + -1;
      if (pfStack_34 == local_30) {
        local_14 = 0xe;
        FUN_10051662(pfStack_34,&local_5c);
      }
      else {
        *pfStack_34 = local_5c;
        pfStack_34 = pfStack_34 + 1;
      }
      uVar2 = FUN_100616f3();
      iVar6 = *(int *)(local_bc + 4 + (uVar2 & local_b0) * 8);
      if (iVar6 != local_c4[0]) {
        if (local_5c != *(float *)(iVar6 + 8)) {
          do {
            if (iVar6 == *(int *)(local_bc + (uVar2 & local_b0) * 8)) goto code_r0x10182b12;
            iVar6 = *(int *)(iVar6 + 4);
          } while (local_5c != *(float *)(iVar6 + 8));
        }
        if (iVar6 != local_c4[0]) {
          local_28 = *(float **)(iVar6 + 0x10);
          pfVar5 = *(float **)(iVar6 + 0xc);
          while (pfVar5 != local_28) {
            local_84 = *pfVar5;
            local_14 = 0xe;
            local_24 = pfVar5;
            piVar3 = (int *)FUN_1018315c();
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              FUN_10184446();
            }
            pfVar5 = local_24 + 1;
          }
        }
      }
      goto code_r0x10182b12;
    }
    if ((int)pfStack_34 - (int)local_38 != (int)local_2c[1] - (int)*local_2c) {
      local_14 = 0xe;
      FUN_1018218a();
      local_14 = 0xf;
      fVar7 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)
                                                              (uint)((int)pfStack_34 - (int)local_38
                                                                    >> 2) | (ulonglong)DAT_1028f6c0)
                                                    - DAT_1028f6b0) / local_84));
      local_9c = (float)fVar7;
      FUN_101832d8();
      local_28 = pfStack_34;
      pfVar5 = local_38;
      while (pfVar5 != local_28) {
        local_3c = *pfVar5;
        local_24 = pfVar5;
        FUN_1018394c(&local_48,&local_3c);
        pfVar5 = local_24 + 1;
      }
      local_48 = 0.0;
      local_44 = (float *)0x0;
      local_40 = (float *)0x0;
      local_14 = 0x10;
      FUN_100647d6();
      local_28 = local_2c[1];
      pfVar5 = *local_2c;
      while (pfVar5 != local_28) {
        local_3c = *pfVar5;
        local_24 = pfVar5;
        uVar2 = FUN_100616f3();
        iVar6 = *(int *)(local_78 + 4 + (uVar2 & local_6c) * 8);
        if (iVar6 == local_80) {
code_r0x10182e35:
          if (local_44 == local_40) {
            local_14 = 0x10;
            FUN_10051662(local_44,&local_3c);
          }
          else {
            *local_44 = local_3c;
            local_44 = local_44 + 1;
          }
        }
        else if (local_3c != *(float *)(iVar6 + 8)) {
          do {
            if (iVar6 == *(int *)(local_78 + (uVar2 & local_6c) * 8)) goto code_r0x10182e35;
            iVar6 = *(int *)(iVar6 + 4);
          } while (local_3c != *(float *)(iVar6 + 8));
        }
        pfVar5 = local_24 + 1;
      }
      local_14 = 0x10;
      FUN_10185034((int)local_44 - (int)local_48 >> 2,local_60);
      FUN_100b67c0(pfStack_34,local_48,(int)local_44 - (int)local_48 >> 2);
      local_14 = 0xffffffff;
      FUN_10004eae();
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_101832a0();
    }
    ppfVar1 = local_2c;
    if (local_2c != &local_38) {
      FUN_10004eae();
      *(ulonglong *)ppfVar1 = CONCAT44(pfStack_34,local_38);
      ppfVar1[2] = local_30;
      local_38 = (float *)0x0;
      pfStack_34 = (float *)0x0;
      local_30 = (float *)0x0;
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    local_14 = 0xffffffff;
    FUN_10004eae();
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10060eb6();
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_1018466c(local_c4,local_c4[0]);
    FUN_102283a0(local_c4[0],0x18);
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_101832a0();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

