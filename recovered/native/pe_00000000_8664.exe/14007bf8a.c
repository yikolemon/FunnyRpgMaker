/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007bf8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007bf8a(undefined8 param_1,float param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 auStack_100 [2];
  ulonglong local_f0;
  
  fVar7 = DAT_1402113b0;
  fVar6 = DAT_1402113a0;
  fVar5 = _UNK_140211394;
  fVar4 = _DAT_140211390;
  fVar3 = DAT_1401c86c8;
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_208;
  if (10 < param_3) {
    param_3 = 0;
  }
  local_1c8 = DAT_140f2a910;
  local_1d0 = param_4;
  if ((longlong)*(int *)(DAT_140f2a910 + 0x2178) != 0) {
    lVar11 = *(longlong *)(DAT_140f2a910 + 0x1348);
    lVar10 = *(longlong *)(DAT_140f2a910 + 0x2180);
    lVar12 = (longlong)*(int *)(DAT_140f2a910 + 0x2178) << 3;
    local_1cc = param_3 & 0xe;
    lVar13 = 0;
    local_1c0 = lVar12;
    local_1b8 = lVar11;
    local_1b0 = lVar10;
    do {
      lVar1 = *(longlong *)(lVar10 + lVar13);
      local_120 = 0;
      local_128 = 0;
      local_108 = 0;
      auStack_100[0] = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_1e8 = &local_118;
      local_1e0 = &local_108;
      uVar8 = FUN_1400e3464(lVar11,param_3,&local_120,&local_128);
      if ((char)uVar8 != '\0') {
        fVar15 = (float)param_1 - (float)local_120;
        fVar16 = (float)((ulonglong)param_1 >> 0x20) - (float)((ulonglong)local_120 >> 0x20);
        local_130 = CONCAT44(fVar16,fVar15);
        fVar17 = *(float *)(lVar1 + 0x30) * param_2;
        fVar14 = (float)*(undefined8 *)(lVar1 + 0xc);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 8) < ((float)local_128 + fVar4) * fVar17 + fVar15)
        ;
        auVar2._0_4_ = -(uint)(fVar14 < ((float)((ulonglong)local_128 >> 0x20) + fVar5) * fVar17 +
                                        fVar16);
        auVar2._8_4_ = -(uint)(fVar16 < *(float *)(lVar1 + 0x14) + fVar14);
        auVar2._12_4_ =
             -(uint)(fVar15 < *(float *)(lVar1 + 8) +
                              (float)((ulonglong)*(undefined8 *)(lVar1 + 0xc) >> 0x20));
        iVar9 = movmskps(uVar8,auVar2);
        if (iVar9 == 0xf) {
          lVar10 = FUN_14007c4e4(lVar1);
          local_148 = *(undefined8 *)(lVar11 + 0x28);
          uStack_140 = *(undefined8 *)(lVar11 + 0x30);
          local_158 = *(undefined4 *)(lVar11 + 0x28);
          uStack_154 = *(undefined4 *)(lVar11 + 0x2c);
          uStack_150 = *(undefined4 *)(lVar11 + 0x30);
          uStack_14c = *(undefined4 *)(lVar11 + 0x34);
          FUN_1400dad02(lVar10,&local_158);
          fVar14 = (float)((ulonglong)local_130 >> 0x20);
          local_160 = CONCAT44(((float)((ulonglong)local_128 >> 0x20) + 0.0) * fVar17 + fVar14,
                               ((float)local_128 + fVar3) * fVar17 + (float)local_130);
          local_168 = CONCAT44(fVar14 + fVar17 * 0.0,(float)local_130 + fVar17 * fVar3);
          local_178 = (undefined4)local_148;
          uStack_174 = local_148._4_4_;
          uStack_170 = (undefined4)uStack_140;
          uStack_16c = uStack_140._4_4_;
          local_1d8 = param_6;
          local_1e8 = &local_108;
          local_1e0 = auStack_100;
          FUN_1400dfb8e(lVar10,&local_178,&local_168,&local_160);
          fVar14 = (float)((ulonglong)local_130 >> 0x20);
          local_160 = CONCAT44(((float)((ulonglong)local_128 >> 0x20) + 0.0) * fVar17 + fVar14,
                               ((float)local_128 + fVar6) * fVar17 + (float)local_130);
          local_168 = CONCAT44(fVar17 * 0.0 + fVar14,fVar17 + fVar17 + (float)local_130);
          local_188 = (undefined4)local_148;
          uStack_184 = local_148._4_4_;
          uStack_180 = (undefined4)uStack_140;
          uStack_17c = uStack_140._4_4_;
          local_1d8 = param_6;
          local_1e8 = &local_108;
          local_1e0 = auStack_100;
          FUN_1400dfb8e(lVar10,&local_188,&local_168,&local_160);
          local_160 = CONCAT44((float)((ulonglong)local_130 >> 0x20) +
                               (float)((ulonglong)local_128 >> 0x20) * fVar17,
                               (float)local_130 + (float)local_128 * fVar17);
          local_198 = (undefined4)local_148;
          uStack_194 = local_148._4_4_;
          uStack_190 = (undefined4)uStack_140;
          uStack_18c = uStack_140._4_4_;
          local_1d8 = param_5;
          local_1e8 = &local_108;
          local_1e0 = auStack_100;
          FUN_1400dfb8e(lVar10,&local_198,&local_130,&local_160);
          local_160 = CONCAT44((float)((ulonglong)local_130 >> 0x20) +
                               (float)((ulonglong)local_128 >> 0x20) * fVar17,
                               (float)local_130 + (float)local_128 * fVar17);
          local_1a8 = (undefined4)local_148;
          uStack_1a4 = local_148._4_4_;
          uStack_1a0 = (undefined4)uStack_140;
          uStack_19c = uStack_140._4_4_;
          local_1d8 = local_1d0;
          local_1e0 = &uStack_110;
          local_1e8 = &local_118;
          FUN_1400dfb8e(lVar10,&local_1a8,&local_130,&local_160);
          if (local_1cc == 8) {
            fVar14 = (float)FUN_1401a3780((float)*(double *)(local_1c8 + 0x18) * DAT_1401c86c0);
            local_160 = CONCAT44(local_130._4_4_ - fVar17,fVar17 * DAT_1402113ac + (float)local_130)
            ;
            local_1e0 = (undefined8 *)((ulonglong)local_1e0 & 0xffffffff00000000);
            local_1e8._0_4_ = fVar14 + _DAT_1402113a8;
            FUN_1400dc6f0(lVar10,&local_160,fVar17 * DAT_14020fff0,fVar14);
            local_1e0 = (undefined8 *)((ulonglong)local_1e0 & 0xffffffff00000000);
            local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,fVar17 * fVar7);
            FUN_1400db1c8(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),
                          local_1d0);
            *(undefined4 *)(lVar10 + 0x50) = 0;
          }
          FUN_1400dadbc(lVar10);
          lVar11 = local_1b8;
          lVar12 = local_1c0;
          lVar10 = local_1b0;
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar12 != lVar13);
  }
  if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_208)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)auStack_208);
}

