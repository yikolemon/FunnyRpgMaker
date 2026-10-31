/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c75df */

longlong FUN_1400c75df(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong local_c0 [11];
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  lVar2 = DAT_140f2a910;
  local_48 = 0xfffffffffffffffe;
  local_60 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar14 = *(int *)(DAT_140f2a910 + 0x2640);
  iVar5 = iVar14 + 1;
  *(int *)(DAT_140f2a910 + 0x2640) = iVar5;
  local_64 = param_2;
  if (*(int *)(lVar2 + 0x2648) <= iVar14) {
    FUN_1400c7b34(local_c0);
    iVar5 = *(int *)(lVar2 + 0x2640);
    iVar14 = *(int *)(lVar2 + 0x264c);
    if (iVar14 < iVar5) {
      if (iVar14 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar14 / 2 + iVar14;
      }
      if (iVar14 <= iVar5) {
        iVar14 = iVar5;
      }
      uVar9 = FUN_140077ab4((longlong)iVar14 * 0x58);
      if (*(longlong *)(lVar2 + 0x2650) != 0) {
        FUN_1401c5180(uVar9,*(longlong *)(lVar2 + 0x2650),(longlong)*(int *)(lVar2 + 0x2648) * 0x58)
        ;
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x2650));
      }
      *(undefined8 *)(lVar2 + 0x2650) = uVar9;
      *(int *)(lVar2 + 0x264c) = iVar14;
    }
    iVar14 = *(int *)(lVar2 + 0x2648);
    if (iVar14 < iVar5) {
      lVar13 = (longlong)iVar5 - (longlong)iVar14;
      lVar16 = (longlong)iVar14 * 0x58;
      do {
        plVar10 = local_c0;
        plVar15 = (longlong *)(*(longlong *)(lVar2 + 0x2650) + lVar16);
        for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
          *plVar15 = *plVar10;
          plVar10 = plVar10 + 1;
          plVar15 = plVar15 + 1;
        }
        lVar16 = lVar16 + 0x58;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    *(int *)(lVar2 + 0x2648) = iVar5;
    if (local_c0[1] != 0) {
      FUN_140077b90();
    }
    iVar5 = *(int *)(lVar2 + 0x2640);
  }
  lVar16 = *(longlong *)(lVar2 + 0x24f8);
  lVar13 = *(longlong *)(lVar2 + 0x2650) + (longlong)iVar5 * 0x58;
  local_58 = *(longlong *)(lVar2 + 0x2650) + (longlong)iVar5 * 0x58 + -0x58;
  uVar6 = param_1 | 0x800;
  if ((param_1 & 0x1800) != 0) {
    uVar6 = param_1;
  }
  *(longlong *)(lVar2 + 0x2638) = local_58;
  uVar7 = uVar6 & 0xffffff3f;
  if ((uVar6 & 1) == 0) {
    uVar7 = uVar6;
  }
  uVar6 = uVar7 & 0xffffffbf;
  if (-1 < (char)uVar7) {
    uVar6 = uVar7;
  }
  if (lVar16 != 0) {
    if (*(char *)(lVar16 + 0x239) == '\0') {
      FUN_14010e60a();
    }
    else if (*(int *)(lVar16 + 0x74) != -1) {
      FUN_14011281c();
    }
  }
  lVar16 = local_60;
  uVar8 = *(undefined4 *)
           (*(longlong *)(local_60 + 0x150) + -4 + (longlong)*(int *)(local_60 + 0x148) * 4);
  FUN_1400cf9f2(local_58);
  *(undefined8 *)(lVar13 + -0x30) = 0;
  *(undefined8 *)(lVar13 + -0x28) = 0;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  *(undefined8 *)(lVar13 + -8) = 0;
  *(undefined8 *)(lVar13 + -0x20) = 0;
  *(undefined8 *)(lVar13 + -0x18) = 0;
  *(undefined4 *)(lVar13 + -0x28) = uVar8;
  *(uint *)(lVar13 + -0x24) = uVar6;
  *(undefined8 *)(lVar13 + -0x18) = *(undefined8 *)(lVar16 + 0x170);
  uVar9 = *(undefined8 *)(lVar16 + 0x158);
  *(undefined8 *)(lVar13 + -0x20) = uVar9;
  uVar1 = uVar8;
  if ((uVar6 >> 0xc & 1) != 0) {
    *(undefined8 *)(local_60 + 0x170) = uVar9;
    uVar1 = *(undefined4 *)(lVar13 + -0x28);
  }
  FUN_14008bc4c(uVar1);
  uVar3 = FUN_140090092(*(undefined4 *)(lVar2 + 0x1f9c));
  *(undefined1 *)(lVar13 + -6) = uVar3;
  if ((uVar6 >> 0xb & 1) != 0) {
    *(byte *)(local_60 + 0x1b4) = *(byte *)(local_60 + 0x1b4) | 1;
  }
  if (*(int *)(lVar2 + 0x23cc) == 0) {
    lVar16 = 0x13c;
code_r0x0001400c783c:
    uVar7 = *(uint *)(lVar2 + lVar16);
  }
  else {
    lVar16 = 0x23d4;
    uVar7 = 0;
    if (*(char *)(lVar2 + 0x23d8) == '\0') goto code_r0x0001400c783c;
  }
  uVar11 = uVar7 & 0xffffdfff;
  if ((uVar6 & 4) == 0) {
    uVar11 = uVar7;
  }
  *(uint *)(lVar13 + -0xc) = uVar11;
  plVar10 = (longlong *)FUN_1400c7c18(lVar2 + 0x2658,uVar8);
  *(undefined4 *)(plVar10 + 1) = uVar8;
  *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)(lVar2 + 4);
  *(int *)(plVar10 + 2) = local_64;
  *plVar10 = local_60;
  *(longlong **)(lVar13 + -0x30) = plVar10;
  if (*(int *)(lVar13 + -0x54) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar13 + -0x50) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar13 + -0x50),(longlong)*(int *)(lVar13 + -0x58) * 0x18);
      FUN_140077b90(*(undefined8 *)(lVar13 + -0x50));
    }
    *(undefined8 *)(lVar13 + -0x50) = uVar9;
    *(undefined4 *)(lVar13 + -0x54) = 0;
  }
  *(undefined4 *)(lVar13 + -0x58) = 0;
  *(longlong *)(lVar13 + -0x48) = plVar10[3];
  *(longlong *)(lVar13 + -0x40) = plVar10[4];
  *(bool *)(lVar13 + -0x38) = *(char *)((longlong)plVar10 + 0x15) == '\x01';
  *(undefined4 *)(lVar13 + -0x34) = param_3;
  if (((*(int *)(lVar2 + 0x23cc) == 0) || (*(int *)(lVar2 + 0x23d0) != *(int *)(lVar13 + -0x28))) ||
     (*(char *)(lVar2 + 0x23d9) != '\x01')) {
    if (*(int *)(lVar2 + 0x23c8) == *(int *)(lVar13 + -0x28)) {
      uVar7 = *(uint *)(lVar13 + -0xc) & 0x3000;
      local_4c = CONCAT31((int3)(uVar7 >> 8),(uVar6 & 0x18) == 0 && uVar7 == 0);
    }
    else {
      local_4c = 0;
    }
  }
  else {
    if ((*(uint *)(lVar13 + -0xc) >> 0xd & 1) != 0) {
      *(undefined1 *)(lVar13 + -5) = 1;
    }
    uVar7 = *(uint *)(lVar13 + -0xc) & 0x3000;
    local_4c = CONCAT31((int3)(uVar7 >> 8),(uVar6 & 0x18) == 0 && uVar7 == 0);
  }
  if ((uVar6 & 0xc0) != 0) {
    uVar8 = FUN_140091695("##BoxSelect");
    lVar16 = local_60;
    *(undefined4 *)(lVar13 + -0x10) = uVar8;
    FUN_1400c7c5c(local_c0,local_58,local_60);
    cVar4 = FUN_1400c6a98(local_c0,lVar16,uVar8,uVar6);
    if (cVar4 != '\0') {
      local_4c = CONCAT31((int3)((uint)local_4c >> 8),(byte)local_4c | *(byte *)(lVar2 + 0x25b8));
    }
  }
  if (*(char *)(lVar13 + -6) == '\x01') {
    if ((uVar6 >> 9 & 1) != 0) {
      if (local_64 == 0) {
        if (*(char *)(lVar2 + 0x25b4) != '\0') goto code_r0x0001400c79e5;
      }
      else {
        uVar8 = 0;
        if (*(char *)(lVar2 + 0x25b4) != '\0') {
code_r0x0001400c79e5:
          uVar8 = *(undefined4 *)(lVar2 + 0x25b0);
        }
        uVar9 = FUN_14008467f(0x20e,0,uVar8);
        if (((char)uVar9 != '\0') &&
           (local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1),
           *(char *)(lVar2 + 0x25b4) == '\x01')) {
          FUN_1400c7136((undefined4 *)(lVar2 + 0x25b0));
        }
      }
    }
    if ((uVar6 & 3) != 0) goto LAB_1400c7a13;
    uVar8 = FUN_14008e617(0x1222,0);
  }
  else {
LAB_1400c7a13:
    uVar8 = 0;
  }
  if (((char)uVar8 != '\0') || ((char)local_4c != '\0')) {
    FUN_1400c7cb7(local_58,uVar8);
    cVar4 = '\x01';
    if ((char)uVar8 != '\0') goto code_r0x0001400c7a43;
    *(undefined4 *)(plVar10 + 2) = 0;
  }
  cVar4 = (char)local_4c + -1;
code_r0x0001400c7a43:
  *(char *)(lVar13 + -8) = cVar4;
  if ((*(byte *)(lVar2 + 0x2acc) & 0x40) != 0) {
    FUN_1400c7d7b("BeginMultiSelect",local_58);
  }
  return local_58;
}

