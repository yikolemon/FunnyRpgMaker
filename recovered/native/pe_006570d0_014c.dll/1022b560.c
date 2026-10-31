/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b560(int param_1,uint param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 local_180 [32];
  undefined4 local_154;
  int iStack_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined1 local_140 [4] [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  uint local_24;
  
  local_24 = DAT_10388d00 ^ (uint)&stack0xffffffe0;
  iStack_150 = param_1;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    local_180 = auVar10._0_32_;
    if (param_3 == pbVar1) goto LAB_1022b6c5;
    do {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      auVar8._1_3_ = 0;
      auVar8[0] = bVar4;
      auVar8[4] = bVar4;
      auVar8._5_3_ = 0;
      auVar8[8] = bVar4;
      auVar8._9_3_ = 0;
      auVar8[0xc] = bVar4;
      auVar8._13_3_ = 0;
      auVar8[0x10] = bVar4;
      auVar8._17_3_ = 0;
      auVar8[0x14] = bVar4;
      auVar8._21_3_ = 0;
      auVar8[0x18] = bVar4;
      auVar8._25_3_ = 0;
      auVar8[0x1c] = bVar4;
      auVar8._29_3_ = 0;
      auVar8 = vpsllvd_avx2(_DAT_102998a0,auVar8 ^ _DAT_102998e0);
      auVar8 = vpor_avx2(auVar8,auVar10._0_32_);
      auVar10 = ZEXT3264(auVar8);
    } while (param_3 != pbVar1);
  }
  else {
    _memset(local_140,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[0][*param_3] = 0xff;
    }
    local_14c = (uint)(SUB321(local_60 >> 7,0) & 1) | (uint)(SUB321(local_60 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(local_60 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(local_60 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(local_60 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(local_60 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(local_60 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(local_60 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(local_60 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(local_60 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(local_60 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(local_60 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(local_60 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(local_60 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(local_60 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(local_60 >> 0x7f,0) << 0xf |
                (uint)(SUB321(local_60 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(local_60 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(local_60 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(local_60 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(local_60 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(local_60 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(local_60 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(local_60 >> 0xbf,0) << 0x17 |
                (uint)(SUB321(local_60 >> 199,0) & 1) << 0x18 |
                (uint)(SUB321(local_60 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(local_60 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(local_60 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(local_60 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(local_60 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(local_60 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(local_60[0x1f] >> 7) << 0x1f;
    local_148 = (uint)(SUB321(local_80 >> 7,0) & 1) | (uint)(SUB321(local_80 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(local_80 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(local_80 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(local_80 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(local_80 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(local_80 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(local_80 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(local_80 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(local_80 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(local_80 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(local_80 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(local_80 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(local_80 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(local_80 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(local_80 >> 0x7f,0) << 0xf |
                (uint)(SUB321(local_80 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(local_80 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(local_80 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(local_80 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(local_80 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(local_80 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(local_80 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(local_80 >> 0xbf,0) << 0x17 |
                (uint)(SUB321(local_80 >> 199,0) & 1) << 0x18 |
                (uint)(SUB321(local_80 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(local_80 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(local_80 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(local_80 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(local_80 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(local_80 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(local_80[0x1f] >> 7) << 0x1f;
    local_144 = (uint)(SUB321(local_a0 >> 7,0) & 1) | (uint)(SUB321(local_a0 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(local_a0 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(local_a0 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(local_a0 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(local_a0 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(local_a0 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(local_a0 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(local_a0 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(local_a0 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(local_a0 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(local_a0 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(local_a0 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(local_a0 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(local_a0 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(local_a0 >> 0x7f,0) << 0xf |
                (uint)(SUB321(local_a0 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(local_a0 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(local_a0 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(local_a0 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(local_a0 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(local_a0 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(local_a0 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(local_a0 >> 0xbf,0) << 0x17 |
                (uint)(SUB321(local_a0 >> 199,0) & 1) << 0x18 |
                (uint)(SUB321(local_a0 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(local_a0 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(local_a0 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(local_a0 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(local_a0 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(local_a0 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(local_a0[0x1f] >> 7) << 0x1f;
    auVar10 = ZEXT2064(CONCAT416((uint)(SUB321(local_c0 >> 7,0) & 1) |
                                 (uint)(SUB321(local_c0 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(local_c0 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(local_c0 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(local_c0 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(local_c0 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(local_c0 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(local_c0 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(local_c0 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(local_c0 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(local_c0 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(local_c0 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(local_c0 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(local_c0 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(local_c0 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(local_c0 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(local_c0 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(local_c0 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(local_c0 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(local_c0 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(local_c0 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(local_c0 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(local_c0 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(local_c0 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(local_c0 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(local_c0 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(local_c0 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(local_c0 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(local_c0 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(local_c0 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(local_c0 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(local_c0[0x1f] >> 7) << 0x1f,
                                 ZEXT416((uint)(SUB321(local_140[0] >> 7,0) & 1) |
                                         (uint)(SUB321(local_140[0] >> 0xf,0) & 1) << 1 |
                                         (uint)(SUB321(local_140[0] >> 0x17,0) & 1) << 2 |
                                         (uint)(SUB321(local_140[0] >> 0x1f,0) & 1) << 3 |
                                         (uint)(SUB321(local_140[0] >> 0x27,0) & 1) << 4 |
                                         (uint)(SUB321(local_140[0] >> 0x2f,0) & 1) << 5 |
                                         (uint)(SUB321(local_140[0] >> 0x37,0) & 1) << 6 |
                                         (uint)(SUB321(local_140[0] >> 0x3f,0) & 1) << 7 |
                                         (uint)(SUB321(local_140[0] >> 0x47,0) & 1) << 8 |
                                         (uint)(SUB321(local_140[0] >> 0x4f,0) & 1) << 9 |
                                         (uint)(SUB321(local_140[0] >> 0x57,0) & 1) << 10 |
                                         (uint)(SUB321(local_140[0] >> 0x5f,0) & 1) << 0xb |
                                         (uint)(SUB321(local_140[0] >> 0x67,0) & 1) << 0xc |
                                         (uint)(SUB321(local_140[0] >> 0x6f,0) & 1) << 0xd |
                                         (uint)(SUB321(local_140[0] >> 0x77,0) & 1) << 0xe |
                                         (uint)SUB321(local_140[0] >> 0x7f,0) << 0xf |
                                         (uint)(SUB321(local_140[0] >> 0x87,0) & 1) << 0x10 |
                                         (uint)(SUB321(local_140[0] >> 0x8f,0) & 1) << 0x11 |
                                         (uint)(SUB321(local_140[0] >> 0x97,0) & 1) << 0x12 |
                                         (uint)(SUB321(local_140[0] >> 0x9f,0) & 1) << 0x13 |
                                         (uint)(SUB321(local_140[0] >> 0xa7,0) & 1) << 0x14 |
                                         (uint)(SUB321(local_140[0] >> 0xaf,0) & 1) << 0x15 |
                                         (uint)(SUB321(local_140[0] >> 0xb7,0) & 1) << 0x16 |
                                         (uint)SUB321(local_140[0] >> 0xbf,0) << 0x17 |
                                         (uint)(SUB321(local_140[0] >> 199,0) & 1) << 0x18 |
                                         (uint)(SUB321(local_140[0] >> 0xcf,0) & 1) << 0x19 |
                                         (uint)(SUB321(local_140[0] >> 0xd7,0) & 1) << 0x1a |
                                         (uint)(SUB321(local_140[0] >> 0xdf,0) & 1) << 0x1b |
                                         (uint)(SUB321(local_140[0] >> 0xe7,0) & 1) << 0x1c |
                                         (uint)(SUB321(local_140[0] >> 0xef,0) & 1) << 0x1d |
                                         (uint)(SUB321(local_140[0] >> 0xf7,0) & 1) << 0x1e |
                                         (uint)(byte)(local_140[0][0x1f] >> 7) << 0x1f)));
  }
  local_180 = auVar10._0_32_;
LAB_1022b6c5:
  uVar6 = 0;
  uVar7 = param_2 & 0xfffffff8;
  if (uVar7 != 0) {
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(iStack_150 + uVar6);
      auVar8 = vpmovzxbd_avx2(auVar2);
      auVar9 = vpsrld_avx2(auVar8,5);
      auVar9 = vpermd_avx2(auVar9,auVar10._0_32_);
      auVar8 = vpandn_avx2(auVar8,_DAT_102998c0);
      auVar8 = vpsllvd_avx2(auVar9,auVar8);
      uVar5 = vmovmskps_avx(auVar8);
      if (uVar5 != 0) {
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      auVar10 = ZEXT3264(local_180);
      uVar6 = uVar6 + 8;
    } while (uVar6 != uVar7);
  }
  param_2 = param_2 & 7;
  if (param_2 != 0) {
    FUN_1025b2d0(&local_154,iStack_150 + uVar7,param_2);
    auVar3._4_4_ = iStack_150;
    auVar3._0_4_ = local_154;
    auVar3._8_8_ = 0;
    auVar8 = vpmovzxbd_avx2(auVar3);
    auVar9 = vpsrld_avx2(auVar8,5);
    auVar9 = vpermd_avx2(auVar9,local_180);
    auVar8 = vpandn_avx2(auVar8,_DAT_102998c0);
    auVar8 = vpsllvd_avx2(auVar9,auVar8);
    uVar6 = vmovmskps_avx(auVar8);
    uVar6 = uVar6 & (1 << (sbyte)param_2) - 1U;
    if (uVar6 != 0) {
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

