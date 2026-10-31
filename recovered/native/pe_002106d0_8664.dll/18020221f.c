/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020221f */

int FUN_18020221f(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  uVar10 = 0;
  iVar8 = 4;
  bVar3 = false;
  iVar15 = 0;
  iVar11 = 0;
  while( true ) {
    while( true ) {
      pbVar7 = param_1;
      if ((iVar8 != 0) && (pbVar7 = param_1 + 1, pbVar7 <= param_2 && param_2 < param_1 + 2))
      goto LAB_18020259b;
      uVar5 = (uint)*pbVar7;
      bVar1 = *pbVar7 >> ((byte)iVar8 & 0x1f);
      uVar13 = bVar1 & 0xf;
      iVar8 = 4 - iVar8;
      param_1 = pbVar7;
      if (uVar13 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar13) break;
    iVar16 = (int)uVar10;
    if (iVar16 < 0xccccccc) {
      uVar10 = 0;
      if ((bVar1 & 0xf) != 0 || iVar16 != 0) {
        iVar11 = iVar11 + 1;
        uVar10 = (ulonglong)(uVar13 + iVar16 * 10);
      }
    }
    else {
      iVar15 = iVar15 + 1;
    }
  }
  iVar16 = 0;
  if (uVar13 == 10) {
    iVar16 = 0;
LAB_1802022df:
    do {
      iVar9 = (int)uVar10;
      pbVar6 = pbVar7;
      do {
        pbVar7 = pbVar6;
        if (iVar8 != 0) {
          pbVar7 = pbVar6 + 1;
          if (pbVar7 <= param_2 && param_2 < pbVar6 + 2) goto LAB_18020259b;
          uVar5 = (uint)*pbVar7;
        }
        uVar13 = uVar5 >> ((byte)iVar8 & 0x1f) & 0xf;
        iVar8 = 4 - iVar8;
        if (9 < uVar13) goto LAB_180202369;
        if (uVar13 == 0 && iVar9 == 0) {
          iVar15 = iVar15 + -1;
          uVar10 = 0;
          goto LAB_1802022df;
        }
        pbVar6 = pbVar7;
      } while (8 < iVar16 || 0xccccccb < iVar9);
      iVar16 = iVar16 + 1;
      uVar10 = (ulonglong)(uVar13 + iVar9 * 10);
    } while( true );
  }
LAB_180202369:
  uVar12 = (uint)uVar10;
  if (uVar13 - 0xb < 2) {
    bVar2 = false;
    iVar9 = 0;
    while( true ) {
      iVar14 = iVar9;
      if (iVar8 != 0) {
        pbVar6 = pbVar7 + 1;
        if (pbVar6 <= param_2 && param_2 < pbVar7 + 2) goto LAB_180202476;
        uVar5 = (uint)*pbVar6;
        pbVar7 = pbVar6;
      }
      uVar4 = uVar5 >> ((byte)iVar8 & 0x1f) & 0xf;
      if (9 < uVar4) break;
      iVar8 = 4 - iVar8;
      iVar9 = uVar4 + iVar14 * 10;
      if (1000 < iVar14) {
        bVar2 = true;
        iVar9 = iVar14;
      }
    }
    if (uVar12 == 0) {
LAB_180202476:
      iVar8 = 0;
      goto LAB_18020259d;
    }
    iVar8 = -iVar14;
    if (uVar13 != 0xc) {
      iVar8 = iVar14;
    }
    if (!bVar2) goto LAB_1802023fb;
    iVar8 = 0x7fffffff;
    if (uVar13 != 0xc) goto LAB_18020259d;
  }
  else {
    iVar8 = 0;
    if (uVar12 == 0) goto LAB_18020259d;
LAB_1802023fb:
    iVar15 = iVar15 + param_3 + iVar8;
    if (param_4 != (int *)0x0) {
      uVar5 = iVar16 + iVar11;
      uVar13 = iVar11 + iVar15;
      if (5 < (int)uVar5) {
        if ((int)uVar12 / *(int *)(&DAT_180339b5c + (ulonglong)uVar5 * 4) < 0x8000) {
          iVar8 = FUN_1801cc3a4(uVar10,*(int *)(&DAT_180339b5c + (ulonglong)uVar5 * 4));
          iVar11 = uVar13 - 5;
        }
        else {
          iVar8 = FUN_1801cc3a4(uVar10,*(undefined4 *)(&DAT_180339b60 + (ulonglong)uVar5 * 4));
          iVar11 = uVar13 - 4;
        }
        *param_4 = iVar11;
        goto LAB_18020259d;
      }
      if (0x7fff < (int)uVar12) {
        iVar8 = FUN_1801cc3a4(uVar10,10);
        *param_4 = (iVar15 - iVar16) + 1;
        goto LAB_18020259d;
      }
      if ((int)uVar13 < 1) {
LAB_18020252e:
        iVar15 = iVar15 - iVar16;
      }
      else {
        uVar4 = 5;
        if (uVar13 < 5) {
          uVar4 = uVar13;
        }
        if (uVar4 - uVar5 == 0 || (int)uVar4 < (int)uVar5) goto LAB_18020252e;
        iVar15 = uVar13 - uVar4;
        uVar12 = uVar12 * *(int *)(&DAT_180339b70 + (ulonglong)(uVar4 - uVar5) * 4);
        if (0x7fff < (int)uVar12) {
          uVar12 = uVar12 / 10;
          iVar15 = iVar15 + 1;
        }
      }
      *param_4 = iVar15;
      iVar8 = uVar12 << 0x10;
      goto LAB_18020259d;
    }
    iVar9 = iVar15 + iVar11;
    iVar8 = 0x7fffffff;
    if (5 < iVar9) goto LAB_18020259d;
    if (-6 < iVar9) {
      if (iVar9 < 0) {
        uVar10 = (longlong)(int)uVar12 /
                 (longlong)*(int *)(&DAT_180339b70 + (ulonglong)(uint)-iVar9 * 4) & 0xffffffff;
      }
      else {
        iVar11 = -iVar15;
      }
      uVar5 = iVar16 + iVar11;
      if (uVar5 == 10) {
        uVar10 = (ulonglong)(uint)((int)uVar10 / 10);
      }
      uVar13 = 9;
      if (uVar5 != 10) {
        uVar13 = uVar5;
      }
      if ((int)uVar13 < 1) {
        iVar11 = (int)uVar10 * *(int *)(&DAT_180339b70 + (ulonglong)-uVar13 * 4);
        iVar8 = 0x7fffffff;
        if (iVar11 < 0x8000) {
          iVar8 = iVar11 * 0x10000;
        }
        goto LAB_18020259d;
      }
      if ((int)uVar10 / *(int *)(&DAT_180339b70 + (ulonglong)uVar13 * 4) < 0x8000) {
        iVar8 = FUN_1801cc3a4(uVar10,*(int *)(&DAT_180339b70 + (ulonglong)uVar13 * 4));
        goto LAB_18020259d;
      }
    }
  }
LAB_18020259b:
  iVar8 = 0;
LAB_18020259d:
  iVar11 = -iVar8;
  if (!bVar3) {
    iVar11 = iVar8;
  }
  return iVar11;
}

