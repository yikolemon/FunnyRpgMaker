/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dadf0 */

undefined1 (*) [32]
FUN_1400dadf0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  uint uVar11;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar13 = (longlong)param_2 - (longlong)param_1;
  pauVar12 = param_2;
  if (((uVar13 & 0xffffffffffffffe0) == 0) || ((DAT_1401ca374 & 0x20) == 0)) {
    if (((uVar13 & 0xfffffffffffffff0) != 0) && ((DAT_1401ca374 & 4) != 0)) {
      do {
        pauVar3 = pauVar12 + -1;
        pauVar4 = pauVar12 + -1;
        pauVar5 = pauVar12 + -1;
        pauVar6 = pauVar12 + -1;
        pauVar7 = pauVar12 + -1;
        pauVar8 = pauVar12 + -1;
        pauVar9 = pauVar12 + -1;
        pauVar10 = pauVar12 + -1;
        pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x10);
        auVar15._0_2_ = -(ushort)(*(short *)(*pauVar3 + 0x10) == param_3);
        auVar15._2_2_ = -(ushort)(*(short *)(*pauVar4 + 0x12) == param_3);
        auVar15._4_2_ = -(ushort)(*(short *)(*pauVar5 + 0x14) == param_3);
        auVar15._6_2_ = -(ushort)(*(short *)(*pauVar6 + 0x16) == param_3);
        auVar15._8_2_ = -(ushort)(*(short *)(*pauVar7 + 0x18) == param_3);
        auVar15._10_2_ = -(ushort)(*(short *)(*pauVar8 + 0x1a) == param_3);
        auVar15._12_2_ = -(ushort)(*(short *)(*pauVar9 + 0x1c) == param_3);
        auVar15._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0x1e) == param_3);
        uVar1 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar15._14_2_ >> 7) & 1) << 0xe | auVar15._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar11 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)uVar11 + 0x1f);
        }
      } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar15 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar15 = vpshufd_avx(auVar15,0);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar15;
    do {
      auVar2 = vpcmpeqw_avx2(auVar16,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      uVar11 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) goto LAB_1400daeab;
    } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xffffffffffffffe0)));
    uVar14 = (ulonglong)((uint)uVar13 & 0x1c);
    if ((uVar13 & 0x1c) != 0) {
      pauVar12 = (undefined1 (*) [32])((longlong)pauVar12 - uVar14);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140162e00 + -uVar14),*pauVar12);
      auVar16 = vpcmpeqw_avx2(auVar2,auVar16);
      auVar16 = vpand_avx2(auVar16,*(undefined1 (*) [32])(&DAT_140162e00 + -uVar14));
      uVar11 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) {
LAB_1400daeab:
        return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)(0x1f - LZCOUNT(uVar11)) + 0x1f);
      }
    }
  }
  do {
    if (pauVar12 == param_1) {
      return param_2;
    }
    pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x1e);
  } while (*(short *)*pauVar12 != param_3);
  return pauVar12;
}

