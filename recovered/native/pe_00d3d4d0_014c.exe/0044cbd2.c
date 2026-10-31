/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044cbd2 */

int __fastcall FUN_0044cbd2(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_28;
  int local_1c;
  uint local_18;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  iVar7 = 4;
  bVar4 = false;
  local_28 = 0;
  local_1c = 0;
  uVar6 = 0;
  while( true ) {
    while( true ) {
      local_18 = uVar6;
      pbVar5 = param_1;
      if ((iVar7 != 0) && (pbVar5 = param_1 + 1, pbVar5 <= param_2 && param_2 < param_1 + 2))
      goto LAB_0044ce57;
      uVar8 = (uint)*pbVar5;
      bVar2 = *pbVar5 >> ((byte)iVar7 & 0x1f);
      uVar9 = bVar2 & 0xf;
      iVar7 = 4 - iVar7;
      param_1 = pbVar5;
      uVar6 = local_18;
      if (uVar9 != 0xe) break;
      bVar4 = true;
    }
    if (9 < uVar9) break;
    if ((int)local_18 < 0xccccccc) {
      uVar6 = 0;
      if ((bVar2 & 0xf) != 0 || local_18 != 0) {
        local_1c = local_1c + 1;
        uVar6 = uVar9 + local_18 * 10;
      }
    }
    else {
      local_28 = local_28 + 1;
    }
  }
  iVar10 = 0;
  if (uVar9 == 10) {
    iVar10 = 0;
LAB_0044cc97:
    do {
      do {
        if (iVar7 != 0) {
          pbVar1 = pbVar5 + 1;
          if (pbVar1 <= param_2 && param_2 < pbVar5 + 2) goto LAB_0044ce57;
          uVar8 = (uint)*pbVar1;
          pbVar5 = pbVar1;
        }
        uVar9 = uVar8 >> ((byte)iVar7 & 0x1f) & 0xf;
        iVar7 = 4 - iVar7;
        if (9 < uVar9) goto LAB_0044cd38;
        if (uVar9 == 0 && local_18 == 0) {
          local_28 = local_28 + -1;
          local_18 = 0;
          goto LAB_0044cc97;
        }
      } while (8 < iVar10 || 0xccccccb < (int)local_18);
      iVar10 = iVar10 + 1;
      local_18 = uVar9 + local_18 * 10;
    } while( true );
  }
LAB_0044cd38:
  if (uVar9 - 0xb < 2) {
    bVar3 = false;
    iVar12 = 0;
    while( true ) {
      iVar11 = iVar12;
      if (iVar7 != 0) {
        pbVar1 = pbVar5 + 1;
        if (pbVar1 <= param_2 && param_2 < pbVar5 + 2) goto LAB_0044ce57;
        uVar8 = (uint)*pbVar1;
        pbVar5 = pbVar1;
      }
      uVar6 = uVar8 >> ((byte)iVar7 & 0x1f) & 0xf;
      if (9 < uVar6) break;
      iVar7 = 4 - iVar7;
      iVar12 = uVar6 + iVar11 * 10;
      if (1000 < iVar11) {
        bVar3 = true;
        iVar12 = iVar11;
      }
    }
    if (local_18 == 0) {
LAB_0044ce57:
      iVar7 = 0;
      goto LAB_0044ce5c;
    }
    iVar7 = -iVar11;
    if (uVar9 != 0xc) {
      iVar7 = iVar11;
    }
    if (!bVar3) goto LAB_0044cdda;
    iVar7 = 0x7fffffff;
    if (uVar9 != 0xc) goto LAB_0044ce5c;
  }
  else {
    iVar7 = 0;
    if (local_18 == 0) goto LAB_0044ce5c;
LAB_0044cdda:
    iVar12 = local_28 + param_3 + iVar7;
    if (param_4 != (int *)0x0) {
      iVar7 = iVar10 + local_1c;
      uVar6 = local_1c + iVar12;
      if (5 < iVar7) {
        if ((int)local_18 / (int)*(uint *)(&DAT_004e4760 + iVar7 * 4) < 0x8000) {
          iVar7 = FUN_0041eaa0(local_18,*(uint *)(&DAT_004e4760 + iVar7 * 4));
          iVar10 = uVar6 - 5;
        }
        else {
          iVar7 = FUN_0041eaa0(local_18,*(uint *)(&DAT_004e4764 + iVar7 * 4));
          iVar10 = uVar6 - 4;
        }
        *param_4 = iVar10;
        goto LAB_0044ce5c;
      }
      if (0x7fff < (int)local_18) {
        iVar7 = FUN_0041eaa0(local_18,10);
        *param_4 = (iVar12 - iVar10) + 1;
        goto LAB_0044ce5c;
      }
      if ((int)uVar6 < 1) {
LAB_0044cf12:
        iVar12 = iVar12 - iVar10;
      }
      else {
        uVar8 = 5;
        if (uVar6 < 5) {
          uVar8 = uVar6;
        }
        if (uVar8 - iVar7 == 0 || (int)uVar8 < iVar7) goto LAB_0044cf12;
        iVar12 = uVar6 - uVar8;
        local_18 = local_18 * *(int *)(&DAT_004e4774 + (uVar8 - iVar7) * 4);
        if (0x7fff < (int)local_18) {
          local_18 = local_18 / 10;
          iVar12 = iVar12 + 1;
        }
      }
      iVar7 = local_18 << 0x10;
      *param_4 = iVar12;
      goto LAB_0044ce5c;
    }
    iVar11 = local_1c + iVar12;
    iVar7 = 0x7fffffff;
    if (5 < iVar11) goto LAB_0044ce5c;
    if (-6 < iVar11) {
      if (iVar11 < 0) {
        local_18 = (int)local_18 / *(int *)(&DAT_004e4774 + iVar11 * -4);
      }
      else {
        local_1c = -iVar12;
      }
      iVar10 = iVar10 + local_1c;
      uVar6 = (int)local_18 / 10;
      if (iVar10 != 10) {
        uVar6 = local_18;
      }
      iVar12 = 9;
      if (iVar10 != 10) {
        iVar12 = iVar10;
      }
      if (iVar12 < 1) {
        iVar7 = 0x7fffffff;
        if ((int)(uVar6 * *(int *)(&DAT_004e4774 + iVar12 * -4)) < 0x8000) {
          iVar7 = uVar6 * *(int *)(&DAT_004e4774 + iVar12 * -4) * 0x10000;
        }
        goto LAB_0044ce5c;
      }
      if ((int)uVar6 / (int)*(uint *)(&DAT_004e4774 + iVar12 * 4) < 0x8000) {
        iVar7 = FUN_0041eaa0(uVar6,*(uint *)(&DAT_004e4774 + iVar12 * 4));
        goto LAB_0044ce5c;
      }
    }
  }
  iVar7 = 0;
LAB_0044ce5c:
  iVar10 = -iVar7;
  if (!bVar4) {
    iVar10 = iVar7;
  }
  return iVar10;
}

