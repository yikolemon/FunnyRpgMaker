/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015faec */

ulonglong FUN_14015faec(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  short *psVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  int *piVar16;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  uVar1 = param_2[0x13];
  local_58 = 0;
  uVar7 = FUN_14012d612(param_1,0);
  local_4c = (uint)uVar7;
  if (local_4c != 0) goto LAB_140160181;
  uVar7 = FUN_140160589(param_1,uVar1,&local_58);
  lVar11 = local_58;
  local_4c = (uint)uVar7;
  if ((char)uVar7 == -0x50) {
    FUN_140160200(param_2);
    uVar7 = 2;
    goto LAB_140160181;
  }
  if (local_4c != 0) goto LAB_140160181;
  param_2[0x1d] = local_58;
  if ((short)param_3 != 0 && 0 < param_3) {
    FUN_140160200(param_2);
    uVar7 = 6;
    goto LAB_140160181;
  }
  *param_2 = 1;
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x12;
  lVar8 = FUN_14016053d(local_58,"SPACING");
  if (((lVar8 != 0) && (*(byte **)(lVar8 + 0x10) != (byte *)0x0)) &&
     (uVar3 = **(byte **)(lVar8 + 0x10) - 0x43, uVar7 = (ulonglong)uVar3, uVar3 < 0x2e)) {
    if ((0x100000001U >> (uVar7 & 0x3f) & 1) == 0) {
      if ((0x40000000400U >> (uVar7 & 0x3f) & 1) == 0) {
        uVar13 = 8;
        if ((0x200000002000U >> (uVar7 & 0x3f) & 1) == 0) goto LAB_14015fc0f;
      }
      else {
        uVar13 = 0x10;
      }
    }
    else {
      uVar13 = 0x20;
    }
    *(undefined4 *)(lVar11 + 0x20) = uVar13;
  }
LAB_14015fc0f:
  if ((*(int *)(lVar11 + 0x20) == 0x20) || (*(int *)(lVar11 + 0x20) == 0x10)) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 4;
  }
  lVar8 = FUN_14016053d(lVar11,"FAMILY_NAME");
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x10) == 0)) {
    param_2[3] = 0;
  }
  else {
    uVar9 = FUN_14012ea14(uVar1,*(longlong *)(lVar8 + 0x10),&local_4c);
    param_2[3] = uVar9;
    uVar7 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140160181;
  }
  uVar7 = FUN_14016074a(param_2);
  local_4c = (uint)uVar7;
  if (local_4c != 0) goto LAB_140160181;
  *(int *)(param_2 + 2) = *(int *)(lVar11 + 0x30) + 1;
  *(undefined4 *)(param_2 + 5) = 1;
  psVar10 = (short *)FUN_140128a1f(uVar1,0x10,&local_4c);
  param_2[6] = psVar10;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140160181;
  lVar8 = FUN_14016053d(lVar11,"FONT_ASCENT");
  if (lVar8 == 0) {
    iVar5 = (int)*(short *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x28) = iVar5;
LAB_14015fce8:
    if (iVar5 < 0) {
      *(undefined4 *)(lVar11 + 0x28) = 0;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar11 + 0x28) = iVar5;
    if (iVar5 < 0x8000) goto LAB_14015fce8;
    *(undefined4 *)(lVar11 + 0x28) = 0x7fff;
  }
  lVar8 = FUN_14016053d(lVar11,"FONT_DESCENT");
  if (lVar8 == 0) {
    iVar5 = (int)*(short *)(lVar11 + 0x12);
    *(int *)(lVar11 + 0x2c) = iVar5;
LAB_14015fd2f:
    if (iVar5 < 0) {
      *(undefined4 *)(lVar11 + 0x2c) = 0;
      iVar5 = 0;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar11 + 0x2c) = iVar5;
    if (iVar5 < 0x8000) goto LAB_14015fd2f;
    *(undefined4 *)(lVar11 + 0x2c) = 0x7fff;
    iVar5 = 0x7fff;
  }
  *psVar10 = (short)iVar5 + (short)*(undefined4 *)(lVar11 + 0x28);
  lVar8 = FUN_14016053d(lVar11,"AVERAGE_WIDTH");
  if (lVar8 == 0) {
    sVar2 = (short)((*psVar10 * 2 + 1) / 3);
  }
  else {
    sVar2 = 0x7fff;
    if (0xfff6001c < *(int *)(lVar8 + 0x10) - 0x4fff2U) {
      iVar5 = (*(int *)(lVar8 + 0x10) + 5) / 10;
      iVar4 = -iVar5;
      if (iVar4 < 0) {
        iVar4 = iVar5;
      }
      sVar2 = (short)iVar4;
    }
  }
  psVar10[1] = sVar2;
  lVar8 = FUN_14016053d(lVar11,"POINT_SIZE");
  if (lVar8 == 0) {
    uVar3 = *(uint *)(lVar11 + 0x14);
    if (uVar3 == 0) {
      iVar5 = (int)psVar10[1] << 6;
    }
    else {
      iVar5 = 0x7fff;
      if (uVar3 < 0x8000) {
        iVar5 = uVar3 << 6;
      }
    }
  }
  else {
    iVar4 = *(int *)(lVar8 + 0x10);
    iVar5 = 0x7fff;
    if (0xfff5f67a < iVar4 - 0x504c3U) {
      iVar5 = -iVar4;
      if (-iVar4 < 0) {
        iVar5 = iVar4;
      }
      iVar5 = FUN_14012a478(iVar5,0x70800,0x11a4e);
    }
  }
  *(int *)(psVar10 + 2) = iVar5;
  lVar8 = FUN_14016053d(lVar11,"PIXEL_SIZE");
  if (lVar8 != 0) {
    iVar5 = *(int *)(lVar8 + 0x10);
    iVar4 = -iVar5;
    if (-iVar5 < 0) {
      iVar4 = iVar5;
    }
    iVar6 = 0x1fffc0;
    if (0xffff0000 < iVar5 - 0x8000U) {
      iVar6 = iVar4 << 6;
    }
    *(int *)(psVar10 + 6) = iVar6;
  }
  lVar8 = FUN_14016053d(lVar11,"RESOLUTION_X");
  piVar16 = (int *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    piVar16 = (int *)(lVar11 + 0x18);
  }
  iVar5 = *piVar16;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0x7fff;
    if ((0xffff0000 < iVar5 - 0x8000U) && (iVar4 = (int)(short)-(short)iVar5, -1 < iVar5)) {
      iVar4 = iVar5;
    }
  }
  lVar8 = FUN_14016053d(lVar11,"RESOLUTION_Y");
  puVar14 = (uint *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    puVar14 = (uint *)(lVar11 + 0x1c);
  }
  uVar3 = *puVar14;
  if (uVar3 == 0) {
    iVar5 = *(int *)(psVar10 + 6);
    if (iVar5 == 0) {
      iVar5 = *(int *)(psVar10 + 2);
      *(int *)(psVar10 + 6) = iVar5;
    }
  }
  else {
    if (uVar3 - 0x8000 < 0xffff0001) {
      iVar5 = *(int *)(psVar10 + 6);
      uVar15 = 0x7fff;
      if (iVar5 == 0) {
        uVar13 = *(undefined4 *)(psVar10 + 2);
        *(undefined4 *)(psVar10 + 6) = uVar13;
        uVar15 = 0x7fff;
LAB_14015ff26:
        iVar5 = FUN_14012a478(uVar13,uVar15 & 0xffff,0x48);
        *(int *)(psVar10 + 6) = iVar5;
      }
    }
    else {
      uVar15 = -uVar3;
      if ((int)-uVar3 < 0) {
        uVar15 = uVar3;
      }
      iVar5 = *(int *)(psVar10 + 6);
      if (iVar5 == 0) {
        uVar13 = *(undefined4 *)(psVar10 + 2);
        *(undefined4 *)(psVar10 + 6) = uVar13;
        goto LAB_14015ff26;
      }
    }
    if (iVar4 != 0) {
      iVar5 = FUN_14012a478(iVar5,iVar4,uVar15 & 0xffff);
    }
  }
  *(int *)(psVar10 + 4) = iVar5;
  lVar8 = FUN_14016053d(lVar11,"DEFAULT_CHAR");
  if (lVar8 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(undefined4 *)(lVar8 + 0x10);
  }
  *(undefined4 *)(lVar11 + 0x24) = uVar13;
  lVar8 = *(longlong *)(lVar11 + 0x38);
  local_78 = 0;
  local_70 = &local_4c;
  uVar9 = FUN_14012b8aa(uVar1,8,0,*(undefined4 *)(lVar11 + 0x30));
  param_2[0x1e] = uVar9;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140160181;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  if (*(int *)(lVar11 + 0x30) != 0) {
    piVar16 = (int *)(lVar8 + 8);
    uVar7 = 0;
    do {
      *(int *)(param_2[0x1e] + uVar7 * 8) = *piVar16;
      *(short *)(param_2[0x1e] + 4 + uVar7 * 8) = (short)uVar7;
      if (*piVar16 == *(int *)(lVar11 + 0x24)) {
        *(int *)(param_2 + 0x1f) = (int)uVar7;
      }
      uVar7 = uVar7 + 1;
      piVar16 = piVar16 + 0xc;
    } while (uVar7 < *(uint *)(lVar11 + 0x30));
  }
  lVar8 = FUN_14016053d(lVar11,"CHARSET_REGISTRY");
  lVar11 = FUN_14016053d(lVar11,"CHARSET_ENCODING");
  if ((((lVar11 == 0 || lVar8 == 0) || (*(int *)(lVar8 + 8) != 1)) || (*(int *)(lVar11 + 8) != 1))
     || ((*(longlong *)(lVar8 + 0x10) == 0 || (*(longlong *)(lVar11 + 0x10) == 0)))) {
    local_60 = 0x741444f42;
    local_68 = param_2;
    uVar7 = FUN_14012b97a(&DAT_140ea0aa0,0,&local_68,0);
    if (*(int *)(param_2 + 7) != 0) {
      param_2[0x11] = *(undefined8 *)param_2[8];
    }
    goto LAB_140160181;
  }
  uVar9 = FUN_14012ea14(uVar1,*(longlong *)(lVar11 + 0x10),&local_4c);
  param_2[0x1b] = uVar9;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140160181;
  pbVar12 = (byte *)FUN_14012ea14(uVar1,*(undefined8 *)(lVar8 + 0x10),&local_4c);
  param_2[0x1c] = pbVar12;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140160181;
  if ((((*pbVar12 | 0x20) == 0x69) && ((pbVar12[1] | 0x20) == 0x73)) &&
     ((pbVar12[2] | 0x20) == 0x6f)) {
    pbVar12 = pbVar12 + 3;
    iVar5 = strcmp((char *)pbVar12,"10646");
    if ((iVar5 == 0) ||
       (((iVar5 = strcmp((char *)pbVar12,"8859"), iVar5 == 0 && (*(char *)param_2[0x1b] == '1')) &&
        (((char *)param_2[0x1b])[1] == '\0')))) {
LAB_1401601b4:
      local_60 = 0x10003756e6963;
    }
    else {
      iVar5 = strcmp((char *)pbVar12,"646.1991");
      if (iVar5 != 0) goto LAB_140160120;
      iVar5 = strcmp((char *)param_2[0x1b],"IRV");
      local_60 = 0;
      if (iVar5 == 0) goto LAB_1401601b4;
    }
  }
  else {
LAB_140160120:
    local_60 = 0;
  }
  local_68 = param_2;
  uVar7 = FUN_14012b97a(&DAT_140ea0aa0,0,&local_68,0);
LAB_140160181:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar7;
}

