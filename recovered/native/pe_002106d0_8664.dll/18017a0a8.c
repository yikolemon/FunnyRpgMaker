/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a0a8 */

undefined8 FUN_18017a0a8(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  byte bVar12;
  undefined1 uVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar20;
  
  pbVar11 = *(byte **)(param_1 + 0xc0);
  if (*(byte **)(param_1 + 200) <= pbVar11) {
    if (*(int *)(param_1 + 0x30) == 0) {
      bVar5 = 0;
      goto LAB_18017a0fd;
    }
    FUN_180176673(param_1);
    pbVar11 = *(byte **)(param_1 + 0xc0);
  }
  *(byte **)(param_1 + 0xc0) = pbVar11 + 1;
  bVar5 = *pbVar11;
  if (0xc < bVar5) {
    return 0;
  }
LAB_18017a0fd:
  uVar25 = 1 << (bVar5 & 0x1f);
  uVar8 = 0;
  do {
    *(undefined2 *)(param_2 + 0x834 + uVar8 * 4) = 0xffff;
    *(char *)(param_2 + 0x836 + uVar8 * 4) = (char)uVar8;
    *(char *)(param_2 + 0x837 + uVar8 * 4) = (char)uVar8;
    uVar8 = uVar8 + 1;
  } while (uVar25 != uVar8);
  uVar6 = (2 << (bVar5 & 0x1f)) - 1;
  uVar18 = 0;
  iVar20 = 0;
  uVar23 = 0;
  bVar2 = false;
  uVar3 = uVar25 + 2;
  uVar4 = 0xffffffff;
  iVar19 = bVar5 + 1;
  uVar24 = uVar6;
  do {
    do {
      for (; uVar7 = uVar24, iVar14 = iVar19, uVar17 = uVar4, uVar21 = uVar3, bVar1 = bVar2,
          iVar19 = iVar20 - iVar14, iVar20 < iVar14; iVar20 = iVar20 + 8) {
        pbVar11 = *(byte **)(param_1 + 0xc0);
        pbVar15 = *(byte **)(param_1 + 200);
        pbVar9 = pbVar11;
        if (uVar18 == 0) {
          if (pbVar15 <= pbVar11) {
            if (*(int *)(param_1 + 0x30) == 0) goto LAB_18017a34c;
            FUN_180176673(param_1);
            pbVar11 = *(byte **)(param_1 + 0xc0);
          }
          pbVar9 = pbVar11 + 1;
          *(byte **)(param_1 + 0xc0) = pbVar9;
          uVar18 = (uint)*pbVar11;
          if (*pbVar11 == 0) goto LAB_18017a34c;
          pbVar15 = *(byte **)(param_1 + 200);
        }
        if (pbVar9 < pbVar15) {
LAB_18017a1e8:
          *(byte **)(param_1 + 0xc0) = pbVar9 + 1;
          uVar24 = (uint)*pbVar9;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            FUN_180176673(param_1);
            pbVar9 = *(byte **)(param_1 + 0xc0);
            goto LAB_18017a1e8;
          }
          uVar24 = 0;
        }
        bVar12 = (byte)iVar20;
        uVar18 = uVar18 - 1;
        uVar23 = uVar23 | uVar24 << (bVar12 & 0x1f);
        bVar2 = bVar1;
        uVar3 = uVar21;
        uVar4 = uVar17;
        iVar19 = iVar14;
        uVar24 = uVar7;
      }
      uVar24 = (int)uVar23 >> ((byte)iVar14 & 0x1f);
      uVar22 = uVar23 & uVar7;
      iVar20 = iVar19;
      uVar23 = uVar24;
      bVar2 = true;
      uVar3 = uVar25 + 2;
      uVar4 = 0xffffffff;
      iVar19 = bVar5 + 1;
      uVar24 = uVar6;
    } while (uVar22 == uVar25);
    if (uVar22 == uVar25 + 1) break;
    if ((int)uVar21 < (int)uVar22) {
LAB_18017a361:
      pcVar16 = "illegal code in raster";
LAB_18017a37a:
      FUN_1801765d0(pcVar16);
      return 0;
    }
    if (!bVar1) {
      pcVar16 = "no clear code";
      goto LAB_18017a37a;
    }
    if ((int)uVar17 < 0) {
      if (uVar22 == uVar21) goto LAB_18017a361;
    }
    else {
      if (0x1fff < (int)uVar21) {
        pcVar16 = "too many codes";
        goto LAB_18017a37a;
      }
      lVar10 = (longlong)(int)uVar21;
      uVar21 = uVar21 + 1;
      *(short *)(param_2 + 0x834 + lVar10 * 4) = (short)uVar17;
      uVar13 = *(undefined1 *)(param_2 + 0x836 + (ulonglong)uVar17 * 4);
      *(undefined1 *)(param_2 + 0x836 + lVar10 * 4) = uVar13;
      if (uVar22 != uVar21) {
        uVar13 = *(undefined1 *)(param_2 + 0x836 + (longlong)(int)uVar22 * 4);
      }
      *(undefined1 *)(param_2 + 0x837 + lVar10 * 4) = uVar13;
    }
    FUN_18017a384(param_2,uVar22);
    iVar19 = iVar14 + 1;
    uVar24 = ~(-1 << ((byte)iVar19 & 0x1f));
    if (0xfff < (int)uVar21 || (uVar21 & uVar7) != 0) {
      uVar24 = uVar7;
      iVar19 = iVar14;
    }
    bVar2 = true;
    uVar3 = uVar21;
    uVar4 = uVar22;
  } while( true );
  do {
    FUN_180177488(param_1,uVar18);
    pbVar11 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pbVar11) {
      if (*(int *)(param_1 + 0x30) == 0) break;
      FUN_180176673(param_1);
      pbVar11 = *(byte **)(param_1 + 0xc0);
    }
    *(byte **)(param_1 + 0xc0) = pbVar11 + 1;
    uVar18 = (uint)*pbVar11;
  } while (*pbVar11 != 0);
LAB_18017a34c:
  return *(undefined8 *)(param_2 + 8);
}

