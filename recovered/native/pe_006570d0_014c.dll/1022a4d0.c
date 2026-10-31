/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022a4d0 */

uint FUN_1022a4d0(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar6 = 0;
  if ((DAT_10389df8 & 0x20) == 0) {
    if ((DAT_10389df8 & 4) == 0) goto joined_r0x1022a5aa;
    uVar7 = param_3 * 2 & 0xfffffff0;
    if (uVar7 != 0) {
      do {
        pcVar1 = (char *)(uVar6 + param_1);
        auVar2 = *(undefined1 (*) [16])(uVar6 + param_2);
        auVar9[0] = -(*pcVar1 == auVar2[0]);
        auVar9[1] = -(pcVar1[1] == auVar2[1]);
        auVar9[2] = -(pcVar1[2] == auVar2[2]);
        auVar9[3] = -(pcVar1[3] == auVar2[3]);
        auVar9[4] = -(pcVar1[4] == auVar2[4]);
        auVar9[5] = -(pcVar1[5] == auVar2[5]);
        auVar9[6] = -(pcVar1[6] == auVar2[6]);
        auVar9[7] = -(pcVar1[7] == auVar2[7]);
        auVar9[8] = -(pcVar1[8] == auVar2[8]);
        auVar9[9] = -(pcVar1[9] == auVar2[9]);
        auVar9[10] = -(pcVar1[10] == auVar2[10]);
        auVar9[0xb] = -(pcVar1[0xb] == auVar2[0xb]);
        auVar9[0xc] = -(pcVar1[0xc] == auVar2[0xc]);
        auVar9[0xd] = -(pcVar1[0xd] == auVar2[0xd]);
        auVar9[0xe] = -(pcVar1[0xe] == auVar2[0xe]);
        auVar9[0xf] = -(pcVar1[0xf] == auVar2[0xf]);
        uVar8 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar9[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar8 != 0) {
          iVar3 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          return uVar6 + iVar3 >> 1;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar7);
    }
  }
  else {
    uVar7 = param_3 * 2 & 0xffffffe0;
    if (uVar7 != 0) {
      do {
        auVar4 = vpcmpeqb_avx2(*(undefined1 (*) [32])(uVar6 + param_1),
                               *(undefined1 (*) [32])(uVar6 + param_2));
        uVar8 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
        if (uVar8 != 0) goto LAB_1022a5c7;
        uVar6 = uVar6 + 0x20;
      } while (uVar6 != uVar7);
    }
    uVar7 = param_3 * 2 & 0x1c;
    if (uVar7 != 0) {
      auVar4 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_10299870 + -uVar7),
                               *(undefined1 (*) [32])(uVar6 + param_2));
      auVar5 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_10299870 + -uVar7),
                               *(undefined1 (*) [32])(uVar6 + param_1));
      auVar4 = vpcmpeqb_avx2(auVar5,auVar4);
      uVar8 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
      if (uVar8 != 0) {
LAB_1022a5c7:
        iVar3 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        return uVar6 + iVar3 >> 1;
      }
      uVar6 = uVar6 + uVar7;
    }
  }
  uVar6 = uVar6 >> 1;
joined_r0x1022a5aa:
  for (; (uVar6 != param_3 && (*(short *)(param_1 + uVar6 * 2) == *(short *)(param_2 + uVar6 * 2)));
      uVar6 = uVar6 + 1) {
  }
  return uVar6;
}

