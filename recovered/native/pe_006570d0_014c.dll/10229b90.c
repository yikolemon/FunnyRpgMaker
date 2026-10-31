/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229b90 */

undefined1 (*) [32] FUN_10229b90(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  undefined1 (*pauVar19) [32];
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  
  uVar22 = (int)param_2 - (int)param_1;
  pauVar21 = param_2;
  if (((uVar22 & 0xffffffe0) == 0) || ((DAT_10389df8 & 0x20) == 0)) {
    if (((uVar22 & 0xfffffff0) != 0) && ((DAT_10389df8 & 4) != 0)) {
      auVar24 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pauVar5 = pauVar21 + -1;
        pauVar6 = pauVar21 + -1;
        pauVar7 = pauVar21 + -1;
        pauVar8 = pauVar21 + -1;
        pauVar9 = pauVar21 + -1;
        pauVar10 = pauVar21 + -1;
        pauVar11 = pauVar21 + -1;
        pauVar12 = pauVar21 + -1;
        pauVar13 = pauVar21 + -1;
        pauVar14 = pauVar21 + -1;
        pauVar15 = pauVar21 + -1;
        pauVar16 = pauVar21 + -1;
        pauVar17 = pauVar21 + -1;
        pauVar18 = pauVar21 + -1;
        pauVar19 = pauVar21 + -1;
        pauVar20 = pauVar21 + -1;
        pauVar21 = (undefined1 (*) [32])(pauVar21[-1] + 0x10);
        auVar23[0] = -((*pauVar5)[0x10] == auVar24[0]);
        auVar23[1] = -((*pauVar6)[0x11] == auVar24[1]);
        auVar23[2] = -((*pauVar7)[0x12] == auVar24[2]);
        auVar23[3] = -((*pauVar8)[0x13] == auVar24[3]);
        auVar23[4] = -((*pauVar9)[0x14] == auVar24[4]);
        auVar23[5] = -((*pauVar10)[0x15] == auVar24[5]);
        auVar23[6] = -((*pauVar11)[0x16] == auVar24[6]);
        auVar23[7] = -((*pauVar12)[0x17] == auVar24[7]);
        auVar23[8] = -((*pauVar13)[0x18] == auVar24[8]);
        auVar23[9] = -((*pauVar14)[0x19] == auVar24[9]);
        auVar23[10] = -((*pauVar15)[0x1a] == auVar24[10]);
        auVar23[0xb] = -((*pauVar16)[0x1b] == auVar24[0xb]);
        auVar23[0xc] = -((*pauVar17)[0x1c] == auVar24[0xc]);
        auVar23[0xd] = -((*pauVar18)[0x1d] == auVar24[0xd]);
        auVar23[0xe] = -((*pauVar19)[0x1e] == auVar24[0xe]);
        auVar23[0xf] = -((*pauVar20)[0x1f] == auVar24[0xf]);
        uVar2 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        if (uVar2 != 0) {
          iVar1 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          return (undefined1 (*) [32])(*pauVar21 + iVar1);
        }
      } while (pauVar21 != (undefined1 (*) [32])((int)param_2 - (uVar22 & 0xfffffff0)));
    }
  }
  else {
    auVar24 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar24;
    do {
      auVar3 = vpcmpeqb_avx2(auVar25,pauVar21[-1]);
      pauVar21 = pauVar21 + -1;
      uVar4 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) {
        return (undefined1 (*) [32])((int)pauVar21 + (0x1f - LZCOUNT(uVar4)));
      }
    } while (pauVar21 != (undefined1 (*) [32])((int)param_2 - (uVar22 & 0xffffffe0)));
    uVar22 = uVar22 & 0x1c;
    if (uVar22 != 0) {
      pauVar21 = (undefined1 (*) [32])((int)pauVar21 - uVar22);
      auVar3 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_10299870 + -uVar22),*pauVar21);
      auVar25 = vpcmpeqb_avx2(auVar3,auVar25);
      auVar25 = vpand_avx2(auVar25,*(undefined1 (*) [32])(&DAT_10299870 + -uVar22));
      uVar22 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar22 != 0) {
        return (undefined1 (*) [32])((int)pauVar21 + (0x1f - LZCOUNT(uVar22)));
      }
    }
  }
  do {
    if (pauVar21 == param_1) {
      return param_2;
    }
    pauVar21 = (undefined1 (*) [32])(pauVar21[-1] + 0x1f);
  } while ((*pauVar21)[0] != param_3);
  return pauVar21;
}

