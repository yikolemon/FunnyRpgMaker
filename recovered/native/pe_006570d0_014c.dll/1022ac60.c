/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ac60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ac60(int param_1,uint param_2,byte *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [64];
  undefined1 local_180 [32];
  undefined4 local_158;
  int iStack_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  byte *local_144;
  undefined1 local_140 [4] [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  uint local_24;
  
  local_24 = DAT_10388d00 ^ (uint)&stack0xffffffe0;
  iStack_154 = param_1;
  local_150 = param_2;
  local_144 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar7 = ZEXT1664((undefined1  [16])0x0);
    local_180 = auVar7._0_32_;
    if (param_3 == local_144) goto joined_r0x1022adee;
    do {
      bVar3 = *param_3;
      param_3 = param_3 + 1;
      auVar5._1_3_ = 0;
      auVar5[0] = bVar3;
      auVar5[4] = bVar3;
      auVar5._5_3_ = 0;
      auVar5[8] = bVar3;
      auVar5._9_3_ = 0;
      auVar5[0xc] = bVar3;
      auVar5._13_3_ = 0;
      auVar5[0x10] = bVar3;
      auVar5._17_3_ = 0;
      auVar5[0x14] = bVar3;
      auVar5._21_3_ = 0;
      auVar5[0x18] = bVar3;
      auVar5._25_3_ = 0;
      auVar5[0x1c] = bVar3;
      auVar5._29_3_ = 0;
      auVar5 = vpsllvd_avx2(_DAT_102998a0,auVar5 ^ _DAT_102998e0);
      auVar5 = vpor_avx2(auVar5,auVar7._0_32_);
      auVar7 = ZEXT3264(auVar5);
    } while (param_3 != local_144);
  }
  else {
    _memset(local_140,0,0x100);
    for (; param_3 != local_144; param_3 = param_3 + 1) {
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
    local_144 = (byte *)((uint)(SUB321(local_a0 >> 7,0) & 1) |
                         (uint)(SUB321(local_a0 >> 0xf,0) & 1) << 1 |
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
                        (uint)(byte)(local_a0[0x1f] >> 7) << 0x1f);
    auVar7 = ZEXT2064(CONCAT416((uint)(SUB321(local_c0 >> 7,0) & 1) |
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
  local_180 = auVar7._0_32_;
  param_2 = local_150;
joined_r0x1022adee:
  while( true ) {
    if (param_2 < 8) {
      if ((param_2 & 7) != 0) {
        FUN_1025b2d0(&local_158,iStack_154,param_2 & 7);
        auVar2._4_4_ = iStack_154;
        auVar2._0_4_ = local_158;
        auVar2._8_8_ = 0;
        auVar5 = vpmovzxbd_avx2(auVar2);
        auVar6 = vpsrld_avx2(auVar5,5);
        auVar6 = vpermd_avx2(auVar6,local_180);
        auVar5 = vpandn_avx2(auVar5,_DAT_102998c0);
        auVar5 = vpsllvd_avx2(auVar6,auVar5);
        vmovmskps_avx(auVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(iStack_154 + -8 + param_2);
    auVar5 = vpmovzxbd_avx2(auVar1);
    param_2 = param_2 - 8;
    auVar6 = vpsrld_avx2(auVar5,5);
    auVar6 = vpermd_avx2(auVar6,auVar7._0_32_);
    auVar5 = vpandn_avx2(auVar5,_DAT_102998c0);
    auVar5 = vpsllvd_avx2(auVar6,auVar5);
    iVar4 = vmovmskps_avx(auVar5);
    if (iVar4 != 0) break;
    auVar7 = ZEXT3264(local_180);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

