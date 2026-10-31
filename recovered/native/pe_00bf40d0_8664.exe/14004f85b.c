/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f85b */

int FUN_14004f85b(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  iVar7 = 4;
  bVar3 = false;
  iVar14 = 0;
  iVar9 = 0;
  uVar4 = 0;
  while( true ) {
    while( true ) {
      uVar11 = uVar4;
      pbVar6 = param_1;
      if ((iVar7 != 0) && (pbVar6 = param_1 + 1, pbVar6 <= param_2 && param_2 < param_1 + 2))
      goto LAB_14004fbd7;
      uVar10 = (uint)*pbVar6;
      bVar1 = *pbVar6 >> ((byte)iVar7 & 0x1f);
      uVar12 = bVar1 & 0xf;
      iVar7 = 4 - iVar7;
      param_1 = pbVar6;
      uVar4 = uVar11;
      if (uVar12 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar12) break;
    if ((int)uVar11 < 0xccccccc) {
      uVar4 = 0;
      if ((bVar1 & 0xf) != 0 || uVar11 != 0) {
        iVar9 = iVar9 + 1;
        uVar4 = uVar12 + uVar11 * 10;
      }
    }
    else {
      iVar14 = iVar14 + 1;
    }
  }
  iVar15 = 0;
  if (uVar12 == 10) {
    iVar15 = 0;
LAB_14004f91b:
    do {
      pbVar5 = pbVar6;
      do {
        pbVar6 = pbVar5;
        if (iVar7 != 0) {
          pbVar6 = pbVar5 + 1;
          if (pbVar6 <= param_2 && param_2 < pbVar5 + 2) goto LAB_14004fbd7;
          uVar10 = (uint)*pbVar6;
        }
        uVar12 = uVar10 >> ((byte)iVar7 & 0x1f) & 0xf;
        iVar7 = 4 - iVar7;
        if (9 < uVar12) goto LAB_14004f9a5;
        if (uVar12 == 0 && uVar11 == 0) {
          iVar14 = iVar14 + -1;
          uVar11 = 0;
          goto LAB_14004f91b;
        }
        pbVar5 = pbVar6;
      } while (8 < iVar15 || 0xccccccb < (int)uVar11);
      iVar15 = iVar15 + 1;
      uVar11 = uVar12 + uVar11 * 10;
    } while( true );
  }
LAB_14004f9a5:
  if (uVar12 - 0xb < 2) {
    bVar2 = false;
    iVar8 = 0;
    while( true ) {
      iVar13 = iVar8;
      if (iVar7 != 0) {
        pbVar5 = pbVar6 + 1;
        if (pbVar5 <= param_2 && param_2 < pbVar6 + 2) goto LAB_14004fab2;
        uVar10 = (uint)*pbVar5;
        pbVar6 = pbVar5;
      }
      uVar4 = uVar10 >> ((byte)iVar7 & 0x1f) & 0xf;
      if (9 < uVar4) break;
      iVar7 = 4 - iVar7;
      iVar8 = uVar4 + iVar13 * 10;
      if (1000 < iVar13) {
        bVar2 = true;
        iVar8 = iVar13;
      }
    }
    if (uVar11 == 0) {
LAB_14004fab2:
      iVar7 = 0;
      goto LAB_14004fbd9;
    }
    iVar7 = -iVar13;
    if (uVar12 != 0xc) {
      iVar7 = iVar13;
    }
    if (!bVar2) goto LAB_14004fa37;
    iVar7 = 0x7fffffff;
    if (uVar12 != 0xc) goto LAB_14004fbd9;
  }
  else {
    iVar7 = 0;
    if (uVar11 == 0) goto LAB_14004fbd9;
LAB_14004fa37:
    iVar14 = iVar14 + param_3 + iVar7;
    if (param_4 != (int *)0x0) {
      uVar4 = iVar15 + iVar9;
      uVar10 = iVar9 + iVar14;
      if (5 < (int)uVar4) {
        if ((int)uVar11 / (int)*(uint *)(&DAT_1400f6c7c + (ulonglong)uVar4 * 4) < 0x8000) {
          iVar7 = FUN_14001ecff(uVar11,*(uint *)(&DAT_1400f6c7c + (ulonglong)uVar4 * 4));
          iVar9 = uVar10 - 5;
        }
        else {
          iVar7 = FUN_14001ecff(uVar11,*(uint *)(&DAT_1400f6c80 + (ulonglong)uVar4 * 4));
          iVar9 = uVar10 - 4;
        }
        *param_4 = iVar9;
        goto LAB_14004fbd9;
      }
      if (0x7fff < (int)uVar11) {
        iVar7 = FUN_14001ecff(uVar11,10);
        *param_4 = (iVar14 - iVar15) + 1;
        goto LAB_14004fbd9;
      }
      if ((int)uVar10 < 1) {
LAB_14004fb6a:
        iVar14 = iVar14 - iVar15;
      }
      else {
        uVar12 = 5;
        if (uVar10 < 5) {
          uVar12 = uVar10;
        }
        if (uVar12 - uVar4 == 0 || (int)uVar12 < (int)uVar4) goto LAB_14004fb6a;
        iVar14 = uVar10 - uVar12;
        uVar11 = uVar11 * *(int *)(&DAT_1400f6c90 + (ulonglong)(uVar12 - uVar4) * 4);
        if (0x7fff < (int)uVar11) {
          uVar11 = uVar11 / 10;
          iVar14 = iVar14 + 1;
        }
      }
      *param_4 = iVar14;
      iVar7 = uVar11 << 0x10;
      goto LAB_14004fbd9;
    }
    iVar8 = iVar14 + iVar9;
    iVar7 = 0x7fffffff;
    if (5 < iVar8) goto LAB_14004fbd9;
    if (-6 < iVar8) {
      if (iVar8 < 0) {
        uVar11 = (int)uVar11 / *(int *)(&DAT_1400f6c90 + (ulonglong)(uint)-iVar8 * 4);
      }
      else {
        iVar9 = -iVar14;
      }
      uVar4 = iVar15 + iVar9;
      if (uVar4 == 10) {
        uVar11 = (int)uVar11 / 10;
      }
      uVar10 = 9;
      if (uVar4 != 10) {
        uVar10 = uVar4;
      }
      if ((int)uVar10 < 1) {
        iVar7 = 0x7fffffff;
        if ((int)(uVar11 * *(int *)(&DAT_1400f6c90 + (ulonglong)-uVar10 * 4)) < 0x8000) {
          iVar7 = uVar11 * *(int *)(&DAT_1400f6c90 + (ulonglong)-uVar10 * 4) * 0x10000;
        }
        goto LAB_14004fbd9;
      }
      if ((int)uVar11 / (int)*(uint *)(&DAT_1400f6c90 + (ulonglong)uVar10 * 4) < 0x8000) {
        iVar7 = FUN_14001ecff(uVar11,*(uint *)(&DAT_1400f6c90 + (ulonglong)uVar10 * 4));
        goto LAB_14004fbd9;
      }
    }
  }
LAB_14004fbd7:
  iVar7 = 0;
LAB_14004fbd9:
  iVar9 = -iVar7;
  if (!bVar3) {
    iVar9 = iVar7;
  }
  return iVar9;
}

