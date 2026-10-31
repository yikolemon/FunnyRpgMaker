/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ec80 */

char * FUN_18026ec80(ulonglong param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  
  pcVar18 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar22 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar24[0] = -(*pcVar18 == '\0');
  auVar24[1] = -(pcVar18[1] == '\0');
  auVar24[2] = -(pcVar18[2] == '\0');
  auVar24[3] = -(pcVar18[3] == '\0');
  auVar24[4] = -(pcVar18[4] == '\0');
  auVar24[5] = -(pcVar18[5] == '\0');
  auVar24[6] = -(pcVar18[6] == '\0');
  auVar24[7] = -(pcVar18[7] == '\0');
  auVar24[8] = -(pcVar18[8] == '\0');
  auVar24[9] = -(pcVar18[9] == '\0');
  auVar24[10] = -(pcVar18[10] == '\0');
  auVar24[0xb] = -(pcVar18[0xb] == '\0');
  auVar24[0xc] = -(pcVar18[0xc] == '\0');
  auVar24[0xd] = -(pcVar18[0xd] == '\0');
  auVar24[0xe] = -(pcVar18[0xe] == '\0');
  auVar24[0xf] = -(pcVar18[0xf] == '\0');
  cVar25 = auVar22[0];
  auVar21[0] = -(*pcVar18 == cVar25);
  cVar26 = auVar22[1];
  auVar21[1] = -(pcVar18[1] == cVar26);
  cVar27 = auVar22[2];
  auVar21[2] = -(pcVar18[2] == cVar27);
  cVar28 = auVar22[3];
  auVar21[3] = -(pcVar18[3] == cVar28);
  auVar21[4] = -(pcVar18[4] == cVar25);
  auVar21[5] = -(pcVar18[5] == cVar26);
  auVar21[6] = -(pcVar18[6] == cVar27);
  auVar21[7] = -(pcVar18[7] == cVar28);
  auVar21[8] = -(pcVar18[8] == cVar25);
  auVar21[9] = -(pcVar18[9] == cVar26);
  auVar21[10] = -(pcVar18[10] == cVar27);
  auVar21[0xb] = -(pcVar18[0xb] == cVar28);
  auVar21[0xc] = -(pcVar18[0xc] == cVar25);
  auVar21[0xd] = -(pcVar18[0xd] == cVar26);
  auVar21[0xe] = -(pcVar18[0xe] == cVar27);
  auVar21[0xf] = -(pcVar18[0xf] == cVar28);
  auVar21 = auVar21 | auVar24;
  uVar20 = (uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  if (uVar20 == 0) {
    do {
      pcVar19 = pcVar18 + 0x10;
      pcVar3 = pcVar18 + 0x11;
      pcVar4 = pcVar18 + 0x12;
      pcVar5 = pcVar18 + 0x13;
      pcVar6 = pcVar18 + 0x14;
      pcVar7 = pcVar18 + 0x15;
      pcVar8 = pcVar18 + 0x16;
      pcVar9 = pcVar18 + 0x17;
      pcVar10 = pcVar18 + 0x18;
      pcVar11 = pcVar18 + 0x19;
      pcVar12 = pcVar18 + 0x1a;
      pcVar13 = pcVar18 + 0x1b;
      pcVar14 = pcVar18 + 0x1c;
      pcVar15 = pcVar18 + 0x1d;
      pcVar16 = pcVar18 + 0x1e;
      pcVar17 = pcVar18 + 0x1f;
      pcVar18 = pcVar18 + 0x10;
      auVar22[0] = -(*pcVar19 == '\0');
      auVar22[1] = -(*pcVar3 == '\0');
      auVar22[2] = -(*pcVar4 == '\0');
      auVar22[3] = -(*pcVar5 == '\0');
      auVar22[4] = -(*pcVar6 == '\0');
      auVar22[5] = -(*pcVar7 == '\0');
      auVar22[6] = -(*pcVar8 == '\0');
      auVar22[7] = -(*pcVar9 == '\0');
      auVar22[8] = -(*pcVar10 == '\0');
      auVar22[9] = -(*pcVar11 == '\0');
      auVar22[10] = -(*pcVar12 == '\0');
      auVar22[0xb] = -(*pcVar13 == '\0');
      auVar22[0xc] = -(*pcVar14 == '\0');
      auVar22[0xd] = -(*pcVar15 == '\0');
      auVar22[0xe] = -(*pcVar16 == '\0');
      auVar22[0xf] = -(*pcVar17 == '\0');
      auVar23[0] = -(*pcVar19 == cVar25);
      auVar23[1] = -(*pcVar3 == cVar26);
      auVar23[2] = -(*pcVar4 == cVar27);
      auVar23[3] = -(*pcVar5 == cVar28);
      auVar23[4] = -(*pcVar6 == cVar25);
      auVar23[5] = -(*pcVar7 == cVar26);
      auVar23[6] = -(*pcVar8 == cVar27);
      auVar23[7] = -(*pcVar9 == cVar28);
      auVar23[8] = -(*pcVar10 == cVar25);
      auVar23[9] = -(*pcVar11 == cVar26);
      auVar23[10] = -(*pcVar12 == cVar27);
      auVar23[0xb] = -(*pcVar13 == cVar28);
      auVar23[0xc] = -(*pcVar14 == cVar25);
      auVar23[0xd] = -(*pcVar15 == cVar26);
      auVar23[0xe] = -(*pcVar16 == cVar27);
      auVar23[0xf] = -(*pcVar17 == cVar28);
      auVar23 = auVar23 | auVar22;
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
              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar2;
    } while (uVar2 == 0);
  }
  uVar1 = 0;
  if (uVar20 != 0) {
    for (; (uVar20 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar19 = (char *)0x0;
  if (pcVar18[uVar1] == param_2) {
    pcVar19 = pcVar18 + uVar1;
  }
  return pcVar19;
}

