/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8f81 */

int FUN_1400c8f81(int param_1,undefined8 param_2,code *param_3,undefined8 param_4,int param_5,
                 uint param_6,longlong param_7,float param_8,float param_9,undefined8 *param_10)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  ulonglong *local_1b0;
  undefined8 local_1a8;
  int local_19c;
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  char local_129;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  
  lVar8 = DAT_140f2a910;
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_1d8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar8 + 0x1608);
  iVar5 = -1;
  if (*(char *)(lVar1 + 0x10e) != '\0') goto LAB_1400c96a4;
  local_198 = lVar8;
  local_19c = param_1;
  uVar3 = FUN_140080066(lVar1,param_2,0);
  local_150 = FUN_14007b050(param_2,0);
  local_1b8 = (double)CONCAT44(local_1b8._4_4_,0xbf800000);
  FUN_14007b686(&local_100,param_2,local_150,0);
  fVar17 = *(float *)(local_198 + 0xdf8);
  uVar11 = FUN_1400936b2();
  FUN_14008a3c7(&local_108,*param_10,uVar11,fVar17 + fVar17 + local_fc);
  lVar8 = local_198;
  local_128 = *(undefined8 *)(lVar1 + 0x158);
  fVar13 = (float)local_128;
  fVar23 = local_108 + fVar13;
  fVar12 = (float)((ulonglong)local_128 >> 0x20);
  fVar24 = fStack_104 + fVar12;
  local_110 = CONCAT44(fVar24,fVar23);
  fVar17 = 0.0;
  if (0.0 < local_100) {
    fVar17 = local_100 + *(float *)(local_198 + 0xe0c);
  }
  fVar15 = (float)*(undefined8 *)(local_198 + 0xdf4);
  fVar22 = (float)((ulonglong)*(undefined8 *)(local_198 + 0xdf4) >> 0x20);
  local_120 = CONCAT44(fVar24 + 0.0,fVar17 + fVar23);
  local_f8 = CONCAT44((fVar24 + 0.0) - fVar12,(fVar17 + fVar23) - fVar13);
  local_180 = lVar1;
  local_118 = local_128;
  FUN_14008a82c(&local_f8,*(undefined4 *)(local_198 + 0xdf8));
  cVar2 = FUN_14008a9ce(&local_128,uVar3,&local_118,2);
  iVar5 = -1;
  if (cVar2 == '\0') goto LAB_1400c96a4;
  uVar19 = CONCAT44(fVar12 + fVar22,fVar13 + fVar15);
  local_1b8 = (double)((ulonglong)local_1b8 & 0xffffffff00000000);
  FUN_1400ac79b(&local_118,uVar3,&local_129,0);
  fVar17 = DAT_1402112e4;
  uStack_160 = 0;
  local_168 = uVar19;
  if ((param_8 != DAT_1402112e4) || (NAN(param_8) || NAN(DAT_1402112e4))) {
    if ((param_9 == DAT_1402112e4) && (!NAN(param_9) && !NAN(DAT_1402112e4))) goto LAB_1400c91d6;
  }
  else {
LAB_1400c91d6:
    uVar14 = DAT_1402112e0;
    fVar13 = DAT_1402112e4;
    if (0 < param_5) {
      iVar5 = 0;
      do {
        fVar12 = (float)(*param_3)(param_4,iVar5);
        if (!NAN(fVar12)) {
          fVar13 = (float)FUN_14004863e();
          uVar14 = FUN_14007b71f();
        }
        iVar5 = iVar5 + 1;
      } while (param_5 != iVar5);
    }
    uVar10 = -(uint)(param_8 == fVar17);
    param_8 = (float)(~uVar10 & (uint)param_8 | (uint)fVar13 & uVar10);
    uVar10 = -(uint)(fVar17 == param_9);
    param_9 = (float)(~uVar10 & (uint)param_9 | uVar14 & uVar10);
  }
  fVar17 = DAT_1401c86c8;
  fVar12 = (float)local_168;
  fVar13 = (float)((ulonglong)local_168 >> 0x20);
  uVar3 = *(undefined4 *)(lVar8 + 0xdfc);
  uVar11 = FUN_14007a557(7);
  local_1b8 = (double)CONCAT44(local_1b8._4_4_,uVar3);
  FUN_14007ba95(local_118,local_110,uVar11,1);
  iVar5 = -1;
  if ((int)((local_19c == 0) + 1) <= param_5) {
    local_190 = (ulonglong)param_6;
    fVar23 = fVar23 - fVar15;
    fVar24 = fVar24 - fVar22;
    bVar9 = local_19c == 0;
    iVar4 = FUN_140077fbc((int)local_108,param_5);
    local_178 = (float)(param_5 - (uint)bVar9);
    iVar5 = -1;
    if ((((local_129 == '\x01') && (fVar15 = *(float *)(local_198 + 0x118), fVar12 <= fVar15)) &&
        (fVar13 <= *(float *)(local_198 + 0x11c))) &&
       ((fVar15 < fVar23 && (*(float *)(local_198 + 0x11c) < fVar24)))) {
      fVar12 = (float)FUN_140090d06((fVar15 - fVar12) / (fVar23 - fVar12),0,DAT_140211ec0);
      iVar5 = (int)((float)(int)local_178 * fVar12);
      fVar12 = (float)(*param_3)(param_4,(longlong)(int)(param_6 + iVar5) % (longlong)param_5 &
                                         0xffffffff);
      fVar15 = (float)(*param_3)(param_4,(longlong)(int)(iVar5 + param_6 + 1) % (longlong)param_5 &
                                         0xffffffff);
      if (local_19c == 0) {
        local_1b8 = (double)fVar15;
        FUN_140080f0f("%d: %8.4g\n%d: %8.4g",iVar5,(double)fVar12,iVar5 + 1);
      }
      else if (local_19c == 1) {
        FUN_140080f0f("%d: %8.4g",iVar5,(double)fVar12);
      }
    }
    iVar4 = iVar4 - (uint)bVar9;
    fVar22 = (float)(~-(uint)(param_8 == param_9) & (uint)(fVar17 / (param_9 - param_8)));
    fVar15 = (float)(*param_3)(param_4,(longlong)(int)param_6 % (longlong)param_5 & 0xffffffff);
    fVar12 = DAT_1401c86c8;
    if (0.0 <= param_9 * param_8) {
      fVar18 = (float)(~-(uint)(param_8 < 0.0) & (uint)DAT_1401c86c8);
    }
    else {
      fVar18 = param_8 * fVar22 + DAT_1401c86c8;
    }
    bVar9 = local_19c != 0;
    local_188 = param_2;
    uVar3 = FUN_14007a557(bVar9 * '\x02' + ',',DAT_1401c86c8);
    uVar11 = FUN_14007a557(bVar9 * '\x02' + '-');
    param_2 = local_188;
    lVar8 = local_198;
    if (0 < iVar4) {
      fVar20 = fVar22 * (fVar15 - param_8);
      fVar15 = fVar17;
      if (fVar20 <= fVar17) {
        fVar15 = fVar20;
      }
      fVar16 = (float)iVar4;
      fVar21 = (float)(int)local_178;
      local_190 = (ulonglong)((int)local_190 + 1);
      fVar23 = fVar23 - (float)local_168;
      fVar24 = fVar24 - local_168._4_4_;
      local_178 = fVar24 * fVar18 + fVar13;
      fVar18 = 0.0;
      fVar15 = (float)(-(uint)(fVar20 < 0.0) & (uint)fVar17 |
                      ~-(uint)(fVar20 < 0.0) & (uint)(fVar17 - fVar15));
      fStack_174 = fVar24;
      fStack_170 = fVar24;
      fStack_16c = fVar24;
      local_148 = fVar13;
      fStack_144 = fVar13;
      fStack_140 = fVar13;
      fStack_13c = fVar13;
      do {
        iVar6 = (int)(fVar18 * fVar21 + DAT_1401c86a0);
        fVar13 = (float)(*param_3)(param_4,(longlong)((int)local_190 + iVar6) % (longlong)param_5 &
                                           0xffffffff);
        fVar25 = fVar17 / fVar16 + fVar18;
        fVar20 = (fVar13 - param_8) * fVar22;
        fVar13 = fVar12;
        if (fVar20 <= fVar12) {
          fVar13 = fVar20;
        }
        fVar13 = (float)(-(uint)(fVar20 < 0.0) & (uint)fVar12 |
                        ~-(uint)(fVar20 < 0.0) & (uint)(fVar12 - fVar13));
        fVar18 = fVar18 * fVar23 + (float)local_168;
        local_f8 = CONCAT44(fVar15 * fVar24 + local_168._4_4_,fVar18);
        if (local_19c == 0) {
          local_138 = CONCAT44(fVar13 * fVar24 + local_168._4_4_,fVar25 * fVar23 + (float)local_168)
          ;
          uVar7 = uVar3;
          if (iVar5 == iVar6) {
            uVar7 = uVar11;
          }
          local_1b8 = (double)CONCAT44(local_1b8._4_4_,0x3f800000);
          FUN_1400ddd04(*(undefined8 *)(local_180 + 800),&local_f8,&local_138,uVar7);
        }
        else {
          fVar15 = fVar23 * fVar25 + (float)local_168;
          local_138 = CONCAT44(local_178,fVar15);
          if (local_19c == 1) {
            if (fVar18 + DAT_1402113a0 <= fVar15) {
              local_138 = CONCAT44(local_178,fVar15 + DAT_1401c86a4);
            }
            uVar7 = uVar3;
            if (iVar5 == iVar6) {
              uVar7 = uVar11;
            }
            local_1b0 = (ulonglong *)((ulonglong)local_1b0 & 0xffffffff00000000);
            local_1b8 = (double)((ulonglong)local_1b8._4_4_ << 0x20);
            FUN_1400de294(*(undefined8 *)(local_180 + 800),&local_f8,&local_138,uVar7);
          }
        }
        iVar4 = iVar4 + -1;
        param_2 = local_188;
        lVar8 = local_198;
        fVar18 = fVar25;
        fVar15 = fVar13;
        fVar13 = local_148;
      } while (iVar4 != 0);
    }
  }
  if (param_7 != 0) {
    local_f8 = (ulonglong)(uint)DAT_1401c86a0;
    local_138 = CONCAT44(local_118._4_4_ + *(float *)(lVar8 + 0xdf8),(int)local_118);
    local_1a8 = 0;
    local_1b0 = &local_f8;
    local_1b8 = 0.0;
    FUN_14007b731(&local_138,&local_110,param_7,0);
  }
  if (0.0 < local_100) {
    FUN_14007b084(CONCAT44(fVar13,(float)local_110 + *(float *)(lVar8 + 0xe0c)),param_2,local_150,0)
    ;
  }
LAB_1400c96a4:
  if (DAT_140f17b40 != (local_f0 ^ (ulonglong)auStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_f0 ^ (ulonglong)auStack_1d8);
  }
  return iVar5;
}

