/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ed10 */

undefined1 (*) [16] FUN_18026ed10(undefined1 (*param_1) [16],byte param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  
  if (param_2 == 0) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar14[0] = -(*pcVar4 == '\0');
    auVar14[1] = -(pcVar4[1] == '\0');
    auVar14[2] = -(pcVar4[2] == '\0');
    auVar14[3] = -(pcVar4[3] == '\0');
    auVar14[4] = -(pcVar4[4] == '\0');
    auVar14[5] = -(pcVar4[5] == '\0');
    auVar14[6] = -(pcVar4[6] == '\0');
    auVar14[7] = -(pcVar4[7] == '\0');
    auVar14[8] = -(pcVar4[8] == '\0');
    auVar14[9] = -(pcVar4[9] == '\0');
    auVar14[10] = -(pcVar4[10] == '\0');
    auVar14[0xb] = -(pcVar4[0xb] == '\0');
    auVar14[0xc] = -(pcVar4[0xc] == '\0');
    auVar14[0xd] = -(pcVar4[0xd] == '\0');
    auVar14[0xe] = -(pcVar4[0xe] == '\0');
    auVar14[0xf] = -(pcVar4[0xf] == '\0');
    uVar5 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar14[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar7 = pcVar4;
    if (uVar5 == 0) {
      do {
        pcVar4 = pcVar7 + 0x10;
        auVar11[0] = -(*pcVar4 == '\0');
        auVar11[1] = -(pcVar7[0x11] == '\0');
        auVar11[2] = -(pcVar7[0x12] == '\0');
        auVar11[3] = -(pcVar7[0x13] == '\0');
        auVar11[4] = -(pcVar7[0x14] == '\0');
        auVar11[5] = -(pcVar7[0x15] == '\0');
        auVar11[6] = -(pcVar7[0x16] == '\0');
        auVar11[7] = -(pcVar7[0x17] == '\0');
        auVar11[8] = -(pcVar7[0x18] == '\0');
        auVar11[9] = -(pcVar7[0x19] == '\0');
        auVar11[10] = -(pcVar7[0x1a] == '\0');
        auVar11[0xb] = -(pcVar7[0x1b] == '\0');
        auVar11[0xc] = -(pcVar7[0x1c] == '\0');
        auVar11[0xd] = -(pcVar7[0x1d] == '\0');
        auVar11[0xe] = -(pcVar7[0x1e] == '\0');
        auVar11[0xf] = -(pcVar7[0x1f] == '\0');
        uVar2 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf;
        uVar5 = (uint)uVar2;
        pcVar7 = pcVar4;
      } while (uVar2 == 0);
    }
    uVar8 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar4 + uVar8);
  }
  pauVar6 = (undefined1 (*) [16])0x0;
  if (DAT_1804039d8 < 2) {
    pcVar7 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    uVar5 = -1 << ((byte)param_1 & 0xf);
    auVar14 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    auVar12[0] = -(*pcVar7 == '\0');
    auVar12[1] = -(pcVar7[1] == '\0');
    auVar12[2] = -(pcVar7[2] == '\0');
    auVar12[3] = -(pcVar7[3] == '\0');
    auVar12[4] = -(pcVar7[4] == '\0');
    auVar12[5] = -(pcVar7[5] == '\0');
    auVar12[6] = -(pcVar7[6] == '\0');
    auVar12[7] = -(pcVar7[7] == '\0');
    auVar12[8] = -(pcVar7[8] == '\0');
    auVar12[9] = -(pcVar7[9] == '\0');
    auVar12[10] = -(pcVar7[10] == '\0');
    auVar12[0xb] = -(pcVar7[0xb] == '\0');
    auVar12[0xc] = -(pcVar7[0xc] == '\0');
    auVar12[0xd] = -(pcVar7[0xd] == '\0');
    auVar12[0xe] = -(pcVar7[0xe] == '\0');
    auVar12[0xf] = -(pcVar7[0xf] == '\0');
    cVar17 = auVar14[0];
    auVar16[0] = -(*pcVar7 == cVar17);
    cVar18 = auVar14[1];
    auVar16[1] = -(pcVar7[1] == cVar18);
    cVar19 = auVar14[2];
    auVar16[2] = -(pcVar7[2] == cVar19);
    cVar20 = auVar14[3];
    auVar16[3] = -(pcVar7[3] == cVar20);
    auVar16[4] = -(pcVar7[4] == cVar17);
    auVar16[5] = -(pcVar7[5] == cVar18);
    auVar16[6] = -(pcVar7[6] == cVar19);
    auVar16[7] = -(pcVar7[7] == cVar20);
    auVar16[8] = -(pcVar7[8] == cVar17);
    auVar16[9] = -(pcVar7[9] == cVar18);
    auVar16[10] = -(pcVar7[10] == cVar19);
    auVar16[0xb] = -(pcVar7[0xb] == cVar20);
    auVar16[0xc] = -(pcVar7[0xc] == cVar17);
    auVar16[0xd] = -(pcVar7[0xd] == cVar18);
    auVar16[0xe] = -(pcVar7[0xe] == cVar19);
    auVar16[0xf] = -(pcVar7[0xf] == cVar20);
    uVar8 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar16[0xf] >> 7) << 0xf) & uVar5;
    uVar5 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar12[0xf] >> 7) << 0xf) & uVar5;
    if (uVar5 == 0) {
      do {
        uVar1 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar1 == 0; uVar1 = uVar1 - 1) {
          }
        }
        auVar15[0] = -(pcVar7[0x10] == '\0');
        auVar15[1] = -(pcVar7[0x11] == '\0');
        auVar15[2] = -(pcVar7[0x12] == '\0');
        auVar15[3] = -(pcVar7[0x13] == '\0');
        auVar15[4] = -(pcVar7[0x14] == '\0');
        auVar15[5] = -(pcVar7[0x15] == '\0');
        auVar15[6] = -(pcVar7[0x16] == '\0');
        auVar15[7] = -(pcVar7[0x17] == '\0');
        auVar15[8] = -(pcVar7[0x18] == '\0');
        auVar15[9] = -(pcVar7[0x19] == '\0');
        auVar15[10] = -(pcVar7[0x1a] == '\0');
        auVar15[0xb] = -(pcVar7[0x1b] == '\0');
        auVar15[0xc] = -(pcVar7[0x1c] == '\0');
        auVar15[0xd] = -(pcVar7[0x1d] == '\0');
        auVar15[0xe] = -(pcVar7[0x1e] == '\0');
        auVar15[0xf] = -(pcVar7[0x1f] == '\0');
        uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        uVar5 = (uint)uVar2;
        bVar10 = uVar8 != 0;
        auVar13[0] = -(pcVar7[0x10] == cVar17);
        auVar13[1] = -(pcVar7[0x11] == cVar18);
        auVar13[2] = -(pcVar7[0x12] == cVar19);
        auVar13[3] = -(pcVar7[0x13] == cVar20);
        auVar13[4] = -(pcVar7[0x14] == cVar17);
        auVar13[5] = -(pcVar7[0x15] == cVar18);
        auVar13[6] = -(pcVar7[0x16] == cVar19);
        auVar13[7] = -(pcVar7[0x17] == cVar20);
        auVar13[8] = -(pcVar7[0x18] == cVar17);
        auVar13[9] = -(pcVar7[0x19] == cVar18);
        auVar13[10] = -(pcVar7[0x1a] == cVar19);
        auVar13[0xb] = -(pcVar7[0x1b] == cVar20);
        auVar13[0xc] = -(pcVar7[0x1c] == cVar17);
        auVar13[0xd] = -(pcVar7[0x1d] == cVar18);
        auVar13[0xe] = -(pcVar7[0x1e] == cVar19);
        auVar13[0xf] = -(pcVar7[0x1f] == cVar20);
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar13[0xf] >> 7) << 0xf);
        if (bVar10) {
          pauVar6 = (undefined1 (*) [16])(pcVar7 + uVar1);
        }
        pcVar7 = pcVar7 + 0x10;
      } while (uVar2 == 0);
    }
    uVar8 = (-uVar5 & uVar5) - 1 & uVar8;
    uVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    if (uVar8 != 0) {
      pauVar6 = (undefined1 (*) [16])(pcVar7 + uVar5);
    }
  }
  else {
    for (; bVar10 = ((ulonglong)param_1 & 0xf) == 0, !bVar10;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar6 = param_1;
      }
      if ((*param_1)[0] == 0) {
        return pauVar6;
      }
    }
    bVar9 = false;
    while( true ) {
      iVar3 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar9) {
        pauVar6 = (undefined1 (*) [16])(*param_1 + iVar3);
        bVar10 = pauVar6 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar10) break;
      bVar9 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar10 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar6;
}

