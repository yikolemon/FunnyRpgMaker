/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005da3c */

ulonglong FUN_14005da3c(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 extraout_var;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 extraout_var_00;
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar1 = param_2[0x13];
  local_58 = 0;
  uVar7 = FUN_140020a41((longlong)param_1,0);
  local_4c = (uint)uVar7;
  if (local_4c != 0) goto LAB_14005e0d1;
  local_4c = FUN_14005e4d9(param_1,lVar1,&local_58);
  lVar12 = local_58;
  uVar7 = CONCAT44(extraout_var,local_4c);
  if ((char)local_4c == -0x50) {
    FUN_14005e150((longlong)param_2);
    uVar7 = 2;
    goto LAB_14005e0d1;
  }
  if (local_4c != 0) goto LAB_14005e0d1;
  param_2[0x1d] = local_58;
  if ((short)param_3 != 0 && 0 < param_3) {
    FUN_14005e150((longlong)param_2);
    uVar7 = 6;
    goto LAB_14005e0d1;
  }
  *param_2 = 1;
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x12;
  lVar8 = FUN_14005e48d(local_58,"SPACING");
  if (((lVar8 != 0) && (*(byte **)(lVar8 + 0x10) != (byte *)0x0)) &&
     (uVar3 = **(byte **)(lVar8 + 0x10) - 0x43, uVar7 = (ulonglong)uVar3, uVar3 < 0x2e)) {
    if ((0x100000001U >> (uVar7 & 0x3f) & 1) == 0) {
      if ((0x40000000400U >> (uVar7 & 0x3f) & 1) == 0) {
        uVar14 = 8;
        if ((0x200000002000U >> (uVar7 & 0x3f) & 1) == 0) goto LAB_14005db5f;
      }
      else {
        uVar14 = 0x10;
      }
    }
    else {
      uVar14 = 0x20;
    }
    *(undefined4 *)(lVar12 + 0x20) = uVar14;
  }
LAB_14005db5f:
  if ((*(int *)(lVar12 + 0x20) == 0x20) || (*(int *)(lVar12 + 0x20) == 0x10)) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 4;
  }
  lVar8 = FUN_14005e48d(lVar12,"FAMILY_NAME");
  if ((lVar8 == 0) || (*(char **)(lVar8 + 0x10) == (char *)0x0)) {
    param_2[3] = 0;
  }
  else {
    uVar9 = FUN_140021e43(lVar1,*(char **)(lVar8 + 0x10),(int *)&local_4c);
    param_2[3] = uVar9;
    uVar7 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_14005e0d1;
  }
  local_4c = FUN_14005e69a((longlong)param_2);
  uVar7 = CONCAT44(extraout_var_00,local_4c);
  if (local_4c != 0) goto LAB_14005e0d1;
  *(int *)(param_2 + 2) = *(int *)(lVar12 + 0x30) + 1;
  *(undefined4 *)(param_2 + 5) = 1;
  pauVar10 = FUN_14001c423(lVar1,0x10,(int *)&local_4c);
  param_2[6] = pauVar10;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14005e0d1;
  lVar8 = FUN_14005e48d(lVar12,"FONT_ASCENT");
  if (lVar8 == 0) {
    iVar5 = (int)*(short *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x28) = iVar5;
LAB_14005dc38:
    if (iVar5 < 0) {
      *(undefined4 *)(lVar12 + 0x28) = 0;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar12 + 0x28) = iVar5;
    if (iVar5 < 0x8000) goto LAB_14005dc38;
    *(undefined4 *)(lVar12 + 0x28) = 0x7fff;
  }
  lVar8 = FUN_14005e48d(lVar12,"FONT_DESCENT");
  if (lVar8 == 0) {
    iVar5 = (int)*(short *)(lVar12 + 0x12);
    *(int *)(lVar12 + 0x2c) = iVar5;
LAB_14005dc7f:
    if (iVar5 < 0) {
      *(undefined4 *)(lVar12 + 0x2c) = 0;
      iVar5 = 0;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar12 + 0x2c) = iVar5;
    if (iVar5 < 0x8000) goto LAB_14005dc7f;
    *(undefined4 *)(lVar12 + 0x2c) = 0x7fff;
    iVar5 = 0x7fff;
  }
  *(short *)*pauVar10 = (short)iVar5 + (short)*(undefined4 *)(lVar12 + 0x28);
  lVar8 = FUN_14005e48d(lVar12,"AVERAGE_WIDTH");
  if (lVar8 == 0) {
    uVar2 = (undefined2)((*(short *)*pauVar10 * 2 + 1) / 3);
  }
  else {
    uVar2 = 0x7fff;
    if (0xfff6001c < *(int *)(lVar8 + 0x10) - 0x4fff2U) {
      iVar5 = (*(int *)(lVar8 + 0x10) + 5) / 10;
      iVar4 = -iVar5;
      if (iVar4 < 0) {
        iVar4 = iVar5;
      }
      uVar2 = (undefined2)iVar4;
    }
  }
  *(undefined2 *)(*pauVar10 + 2) = uVar2;
  lVar8 = FUN_14005e48d(lVar12,"POINT_SIZE");
  if (lVar8 == 0) {
    uVar3 = *(uint *)(lVar12 + 0x14);
    if (uVar3 == 0) {
      iVar5 = (int)*(short *)(*pauVar10 + 2) << 6;
    }
    else {
      iVar5 = 0x7fff;
      if (uVar3 < 0x8000) {
        iVar5 = uVar3 << 6;
      }
    }
  }
  else {
    uVar3 = *(uint *)(lVar8 + 0x10);
    iVar5 = 0x7fff;
    if (0xfff5f67a < uVar3 - 0x504c3) {
      uVar16 = -uVar3;
      if ((int)-uVar3 < 0) {
        uVar16 = uVar3;
      }
      iVar5 = FUN_14001de7c(uVar16,0x70800,0x11a4e);
    }
  }
  *(int *)(*pauVar10 + 4) = iVar5;
  lVar8 = FUN_14005e48d(lVar12,"PIXEL_SIZE");
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
    *(int *)(*pauVar10 + 0xc) = iVar6;
  }
  lVar8 = FUN_14005e48d(lVar12,"RESOLUTION_X");
  puVar15 = (uint *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    puVar15 = (uint *)(lVar12 + 0x18);
  }
  uVar3 = *puVar15;
  if (uVar3 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x7fff;
    if ((0xffff0000 < uVar3 - 0x8000) && (uVar16 = (int)(short)-(short)uVar3, -1 < (int)uVar3)) {
      uVar16 = uVar3;
    }
  }
  lVar8 = FUN_14005e48d(lVar12,"RESOLUTION_Y");
  puVar15 = (uint *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    puVar15 = (uint *)(lVar12 + 0x1c);
  }
  uVar3 = *puVar15;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(*pauVar10 + 0xc);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(*pauVar10 + 4);
      *(uint *)(*pauVar10 + 0xc) = uVar3;
    }
  }
  else {
    if (uVar3 - 0x8000 < 0xffff0001) {
      uVar3 = *(uint *)(*pauVar10 + 0xc);
      uVar17 = 0x7fff;
      if (uVar3 == 0) {
        uVar3 = *(uint *)(*pauVar10 + 4);
        *(uint *)(*pauVar10 + 0xc) = uVar3;
        uVar17 = 0x7fff;
LAB_14005de76:
        uVar3 = FUN_14001de7c(uVar3,uVar17 & 0xffff,0x48);
        *(uint *)(*pauVar10 + 0xc) = uVar3;
      }
    }
    else {
      uVar17 = -uVar3;
      if ((int)-uVar3 < 0) {
        uVar17 = uVar3;
      }
      uVar3 = *(uint *)(*pauVar10 + 0xc);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(*pauVar10 + 4);
        *(uint *)(*pauVar10 + 0xc) = uVar3;
        goto LAB_14005de76;
      }
    }
    if (uVar16 != 0) {
      uVar3 = FUN_14001de7c(uVar3,uVar16,uVar17 & 0xffff);
    }
  }
  *(uint *)(*pauVar10 + 8) = uVar3;
  lVar8 = FUN_14005e48d(lVar12,"DEFAULT_CHAR");
  if (lVar8 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = *(undefined4 *)(lVar8 + 0x10);
  }
  *(undefined4 *)(lVar12 + 0x24) = uVar14;
  lVar8 = *(longlong *)(lVar12 + 0x38);
  lVar11 = FUN_14001f231(lVar1,8,0,*(uint *)(lVar12 + 0x30),0,(int *)&local_4c);
  param_2[0x1e] = lVar11;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14005e0d1;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  if (*(int *)(lVar12 + 0x30) != 0) {
    piVar18 = (int *)(lVar8 + 8);
    uVar7 = 0;
    do {
      *(int *)(param_2[0x1e] + uVar7 * 8) = *piVar18;
      *(short *)(param_2[0x1e] + 4 + uVar7 * 8) = (short)uVar7;
      if (*piVar18 == *(int *)(lVar12 + 0x24)) {
        *(int *)(param_2 + 0x1f) = (int)uVar7;
      }
      uVar7 = uVar7 + 1;
      piVar18 = piVar18 + 0xc;
    } while (uVar7 < *(uint *)(lVar12 + 0x30));
  }
  lVar8 = FUN_14005e48d(lVar12,"CHARSET_REGISTRY");
  lVar12 = FUN_14005e48d(lVar12,"CHARSET_ENCODING");
  if ((((lVar12 == 0 || lVar8 == 0) || (*(int *)(lVar8 + 8) != 1)) || (*(int *)(lVar12 + 8) != 1))
     || ((*(longlong *)(lVar8 + 0x10) == 0 || (*(char **)(lVar12 + 0x10) == (char *)0x0)))) {
    local_60 = 0x741444f42;
    local_68 = param_2;
    iVar5 = FUN_14001f301((uint *)&DAT_1400f9860,0,(longlong *)&local_68,(undefined8 *)0x0);
    uVar7 = CONCAT44(extraout_var_02,iVar5);
    if (*(int *)(param_2 + 7) != 0) {
      param_2[0x11] = *(undefined8 *)param_2[8];
    }
    goto LAB_14005e0d1;
  }
  uVar9 = FUN_140021e43(lVar1,*(char **)(lVar12 + 0x10),(int *)&local_4c);
  param_2[0x1b] = uVar9;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14005e0d1;
  pbVar13 = (byte *)FUN_140021e43(lVar1,*(char **)(lVar8 + 0x10),(int *)&local_4c);
  param_2[0x1c] = pbVar13;
  uVar7 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14005e0d1;
  if ((((*pbVar13 | 0x20) == 0x69) && ((pbVar13[1] | 0x20) == 0x73)) &&
     ((pbVar13[2] | 0x20) == 0x6f)) {
    pbVar13 = pbVar13 + 3;
    iVar5 = strcmp((char *)pbVar13,"10646");
    if ((iVar5 == 0) ||
       (((iVar5 = strcmp((char *)pbVar13,"8859"), iVar5 == 0 && (*(char *)param_2[0x1b] == '1')) &&
        (((char *)param_2[0x1b])[1] == '\0')))) {
LAB_14005e104:
      local_60 = 0x10003756e6963;
    }
    else {
      iVar5 = strcmp((char *)pbVar13,"646.1991");
      if (iVar5 != 0) goto LAB_14005e070;
      iVar5 = strcmp((char *)param_2[0x1b],"IRV");
      local_60 = 0;
      if (iVar5 == 0) goto LAB_14005e104;
    }
  }
  else {
LAB_14005e070:
    local_60 = 0;
  }
  local_68 = param_2;
  iVar5 = FUN_14001f301((uint *)&DAT_1400f9860,0,(longlong *)&local_68,(undefined8 *)0x0);
  uVar7 = CONCAT44(extraout_var_01,iVar5);
LAB_14005e0d1:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return uVar7;
}

