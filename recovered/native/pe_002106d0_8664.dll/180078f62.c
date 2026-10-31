/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078f62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180078f62(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  
  uVar24 = _UNK_1802b7c4c;
  uVar23 = _UNK_1802b7c48;
  uVar22 = _UNK_1802b7c44;
  uVar21 = _DAT_1802b7c40;
  uVar20 = _UNK_1802b7c3c;
  uVar19 = _UNK_1802b7c38;
  uVar18 = _UNK_1802b7c34;
  uVar17 = _DAT_1802b7c30;
  uVar16 = _UNK_1802b0cec;
  uVar15 = _UNK_1802b0ce8;
  uVar14 = _UNK_1802b0ce4;
  uVar26 = _DAT_1802b0ce0;
  if (*param_1 == 0x270) {
    lVar25 = -0x270;
    do {
      puVar1 = param_1 + lVar25 + 0x271;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = param_1 + lVar25 + 0x272;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = param_1 + lVar25 + 0x3fe;
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar4 = param_1 + lVar25 + 0x4e1;
      *puVar4 = *puVar3 ^ (*puVar2 & uVar17 | *puVar1 & uVar26) >> 1 ^
                (int)(*puVar2 << 0x1f) >> 0x1f & uVar21;
      puVar4[1] = uVar11 ^ (uVar5 & uVar18 | uVar8 & uVar14) >> 1 ^
                  (int)(uVar5 << 0x1f) >> 0x1f & uVar22;
      puVar4[2] = uVar12 ^ (uVar6 & uVar19 | uVar9 & uVar15) >> 1 ^
                  (int)(uVar6 << 0x1f) >> 0x1f & uVar23;
      puVar4[3] = uVar13 ^ (uVar7 & uVar20 | uVar10 & uVar16) >> 1 ^
                  (int)(uVar7 << 0x1f) >> 0x1f & uVar24;
      lVar25 = lVar25 + 4;
    } while (lVar25 != 0);
  }
  else if (0x4df < *param_1) {
    FUN_180079030(param_1);
  }
  uVar26 = *param_1;
  *param_1 = uVar26 + 1;
  uVar26 = param_1[(ulonglong)uVar26 + 1] >> 0xb ^ param_1[(ulonglong)uVar26 + 1];
  uVar26 = (uVar26 & 0x13a58ad) << 7 ^ uVar26;
  uVar26 = (uVar26 & 0x1df8c) << 0xf ^ uVar26;
  return uVar26 >> 0x12 ^ uVar26;
}

