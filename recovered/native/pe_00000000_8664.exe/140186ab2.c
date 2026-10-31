/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140186ab2 */

void FUN_140186ab2(longlong *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  byte *pbVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  int local_50;
  
  lVar8 = param_1[5];
  pbVar15 = (byte *)*param_1;
  pbVar19 = pbVar15 + ((int)param_1[1] - 5);
  pbVar9 = (byte *)param_1[2];
  lVar12 = param_1[3];
  local_50 = (int)pbVar9 - (param_2 - (int)lVar12);
  iVar5 = *(int *)(lVar8 + 0x34);
  uVar6 = *(uint *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0x3c);
  pbVar10 = *(byte **)(lVar8 + 0x40);
  uVar27 = *(uint *)(lVar8 + 0x48);
  bVar2 = *(byte *)(lVar8 + 0x70);
  bVar3 = *(byte *)(lVar8 + 0x74);
  uVar14 = *(uint *)(lVar8 + 0x4c);
  lVar16 = *(longlong *)(lVar8 + 0x60);
  lVar11 = *(longlong *)(lVar8 + 0x68);
  pbVar21 = pbVar9;
LAB_140186b52:
  if (uVar14 < 0xf) {
    bVar4 = *pbVar15;
    pbVar26 = pbVar15 + 1;
    pbVar15 = pbVar15 + 2;
    uVar27 = ((uint)*pbVar26 << ((byte)uVar14 + 8 & 0x1f)) +
             ((uint)bVar4 << ((byte)uVar14 & 0x1f)) + uVar27;
    uVar14 = uVar14 | 0x10;
  }
  pbVar26 = (byte *)((ulonglong)(uVar27 & ~(-1 << (bVar2 & 0x1f))) * 4 + lVar16);
  while( true ) {
    uVar27 = uVar27 >> (pbVar26[1] & 0x1f);
    uVar14 = uVar14 - pbVar26[1];
    bVar4 = *pbVar26;
    if (bVar4 == 0) break;
    pbVar20 = pbVar21;
    if ((bVar4 & 0x10) != 0) {
      uVar28 = (uint)*(ushort *)(pbVar26 + 2);
      uVar22 = bVar4 & 0xf;
      if ((bVar4 & 0xf) != 0) {
        if (uVar14 < uVar22) {
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          uVar27 = uVar27 + ((uint)bVar4 << ((byte)uVar14 & 0x1f));
          uVar14 = uVar14 + 8;
        }
        uVar28 = (uint)*(ushort *)(pbVar26 + 2) + (~(-1 << (sbyte)uVar22) & uVar27);
        uVar27 = uVar27 >> (sbyte)uVar22;
        uVar14 = uVar14 - uVar22;
      }
      if (uVar14 < 0xf) {
        bVar4 = *pbVar15;
        pbVar26 = pbVar15 + 1;
        pbVar15 = pbVar15 + 2;
        uVar27 = ((uint)*pbVar26 << ((byte)uVar14 + 8 & 0x1f)) +
                 ((uint)bVar4 << ((byte)uVar14 & 0x1f)) + uVar27;
        uVar14 = uVar14 | 0x10;
      }
      pbVar26 = (byte *)(lVar11 + (ulonglong)(uVar27 & ~(-1 << (bVar3 & 0x1f))) * 4);
      uVar27 = uVar27 >> (pbVar26[1] & 0x1f);
      uVar14 = uVar14 - pbVar26[1];
      bVar4 = *pbVar26;
      goto LAB_140186c83;
    }
    if ((bVar4 & 0x40) != 0) {
      uVar23 = 0x3f3f;
      if ((bVar4 & 0x20) != 0) goto LAB_140186f5e;
      pcVar29 = "invalid literal/length code";
      goto LAB_140186f54;
    }
    pbVar26 = (byte *)((ulonglong)*(ushort *)(pbVar26 + 2) * 4 + lVar16 +
                      (ulonglong)(~(-1 << (bVar4 & 0x1f)) & uVar27) * 4);
  }
  *pbVar21 = pbVar26[2];
  goto LAB_140186bd4;
LAB_140186c83:
  if ((bVar4 & 0x10) != 0) goto LAB_140186cc2;
  if ((bVar4 & 0x40) != 0) {
    pcVar29 = "invalid distance code";
    goto LAB_140186f54;
  }
  pbVar26 = (byte *)(lVar11 + (ulonglong)*(ushort *)(pbVar26 + 2) * 4 +
                    (ulonglong)(~(-1 << (bVar4 & 0x1f)) & uVar27) * 4);
  uVar27 = uVar27 >> (pbVar26[1] & 0x1f);
  uVar14 = uVar14 - pbVar26[1];
  bVar4 = *pbVar26;
  goto LAB_140186c83;
LAB_140186cc2:
  uVar22 = bVar4 & 0xf;
  if (uVar14 < uVar22) {
    uVar27 = ((uint)*pbVar15 << ((byte)uVar14 & 0x1f)) + uVar27;
    uVar17 = uVar14 + 8;
    if (uVar17 < uVar22) {
      pbVar1 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar27 = uVar27 + ((uint)*pbVar1 << ((byte)uVar17 & 0x1f));
      uVar14 = uVar14 + 0x10;
    }
    else {
      pbVar15 = pbVar15 + 1;
      uVar14 = uVar17;
    }
  }
  uVar25 = (~(-1 << (sbyte)uVar22) & uVar27) + (uint)*(ushort *)(pbVar26 + 2);
  uVar27 = uVar27 >> (sbyte)uVar22;
  uVar14 = uVar14 - uVar22;
  uVar22 = (int)pbVar21 - local_50;
  uVar17 = uVar25 - uVar22;
  if (uVar25 < uVar22 || uVar17 == 0) {
    uVar13 = (ulonglong)uVar25;
    lVar18 = 0;
    uVar22 = uVar28;
    do {
      lVar24 = lVar18;
      pbVar21[lVar24] = pbVar21[lVar24 - uVar13];
      pbVar21[lVar24 + 1] = pbVar21[lVar24 + (1 - uVar13)];
      pbVar21[lVar24 + 2] = pbVar21[lVar24 + (2 - uVar13)];
      uVar22 = uVar22 - 3;
      lVar18 = lVar24 + 3;
    } while (2 < uVar22);
    if ((uint)lVar18 == uVar28) {
      pbVar20 = pbVar21 + lVar18;
    }
    else {
      pbVar21[lVar18] = pbVar21[lVar18 + -uVar13];
      if ((uint)lVar18 - uVar28 == -2) {
        pbVar20 = pbVar21 + lVar24 + 5;
        pbVar21[lVar24 + 4] = pbVar21[-uVar13 + 1 + lVar18];
      }
      else {
        pbVar20 = pbVar21 + lVar24 + 4;
      }
    }
    goto LAB_140186bd7;
  }
  if ((uVar6 < uVar17) && (*(int *)(lVar8 + 0x1be0) != 0)) {
    pcVar29 = "invalid distance too far back";
LAB_140186f54:
    param_1[4] = (longlong)pcVar29;
    uVar23 = 0x3f51;
LAB_140186f5e:
    *(undefined4 *)(lVar8 + 8) = uVar23;
LAB_140186f62:
    lVar16 = (longlong)pbVar15 - (ulonglong)(uVar14 >> 3);
    *param_1 = lVar16;
    param_1[2] = (longlong)pbVar20;
    *(int *)(param_1 + 1) = ((int)pbVar19 - (int)lVar16) + 5;
    *(int *)(param_1 + 3) = ((int)(pbVar9 + ((int)lVar12 - 0x101)) - (int)pbVar20) + 0x101;
    *(uint *)(lVar8 + 0x48) = ~(-1 << (sbyte)(uVar14 & 7)) & uVar27;
    *(uint *)(lVar8 + 0x4c) = uVar14 & 7;
    return;
  }
  if (uVar7 == 0) {
    pbVar26 = pbVar10 + (iVar5 - uVar17);
    uVar22 = uVar28 - uVar17;
    if (uVar17 <= uVar28 && uVar22 != 0) {
      lVar18 = 0;
      do {
        *pbVar21 = pbVar26[lVar18];
        pbVar21 = pbVar21 + 1;
        lVar18 = lVar18 + 1;
      } while (uVar17 != (uint)lVar18);
LAB_140186ea2:
      pbVar20 = pbVar21;
      pbVar26 = pbVar21 + -(ulonglong)uVar25;
      uVar28 = uVar22;
    }
  }
  else if (uVar7 < uVar17) {
    pbVar26 = pbVar10 + ((uVar7 + iVar5) - uVar17);
    uVar17 = uVar17 - uVar7;
    uVar22 = uVar28 - uVar17;
    if (uVar17 <= uVar28 && uVar22 != 0) {
      lVar18 = 0;
      do {
        pbVar21[lVar18] = pbVar26[lVar18];
        lVar18 = lVar18 + 1;
      } while (uVar17 != (uint)lVar18);
      pbVar20 = pbVar21 + lVar18;
      pbVar26 = pbVar10;
      uVar28 = uVar22;
      if (uVar7 < uVar22) {
        lVar18 = 0;
        do {
          *pbVar20 = pbVar10[lVar18];
          pbVar20 = pbVar20 + 1;
          lVar18 = lVar18 + 1;
        } while (uVar7 != (uint)lVar18);
        pbVar26 = pbVar20 + -(ulonglong)uVar25;
        uVar28 = uVar22 - uVar7;
      }
    }
  }
  else {
    pbVar26 = pbVar10 + (uVar7 - uVar17);
    uVar22 = uVar28 - uVar17;
    if (uVar17 <= uVar28 && uVar22 != 0) {
      lVar18 = 0;
      do {
        *pbVar21 = pbVar26[lVar18];
        pbVar21 = pbVar21 + 1;
        lVar18 = lVar18 + 1;
      } while (uVar17 != (uint)lVar18);
      goto LAB_140186ea2;
    }
  }
  for (; 2 < uVar28; uVar28 = uVar28 - 3) {
    *pbVar20 = *pbVar26;
    pbVar20[1] = pbVar26[1];
    pbVar20[2] = pbVar26[2];
    pbVar20 = pbVar20 + 3;
    pbVar26 = pbVar26 + 3;
  }
  if (uVar28 != 0) {
    *pbVar20 = *pbVar26;
    pbVar21 = pbVar20;
    if (uVar28 == 2) {
      pbVar20[1] = pbVar26[1];
      pbVar20 = pbVar20 + 2;
    }
    else {
LAB_140186bd4:
      pbVar20 = pbVar21 + 1;
    }
  }
LAB_140186bd7:
  if ((pbVar19 <= pbVar15) || (pbVar21 = pbVar20, pbVar9 + ((int)lVar12 - 0x101) <= pbVar20))
  goto LAB_140186f62;
  goto LAB_140186b52;
}

