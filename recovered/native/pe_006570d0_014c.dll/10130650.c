/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10130650 */

void FUN_10130650(int param_1,byte *param_2,char *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  byte bVar23;
  float10 fVar24;
  float10 fVar25;
  float fVar26;
  float fVar27;
  byte local_5c;
  byte local_58;
  char local_54;
  uint local_50;
  float local_38;
  
  iVar11 = DAT_1039d74c;
  iVar5 = *(int *)(DAT_1039d74c + 0x14cc);
  local_5c = *param_2;
  cVar13 = *param_3;
  piVar6 = *(int **)(DAT_1039d74c + 0x2414);
  if (cVar13 == '\x01') {
    *(undefined1 *)((int)piVar6 + 0x4e) = 1;
  }
  iVar7 = piVar6[10];
  if ((*(byte *)(iVar11 + 0x1e88) & 1) == 0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = FUN_10102a1a(0x20);
  }
  if ((cVar12 == '\0') && (*(char *)((int)piVar6 + 0x4e) == '\0')) {
    return;
  }
  if (*(int *)(iVar11 + 0x2044) == param_1) {
    bVar22 = (*(uint *)(iVar7 + 0x18) & *(uint *)(iVar7 + 0x1c)) == 0xffffffff;
  }
  else {
    bVar22 = false;
  }
  uVar20 = piVar6[0x12];
  uVar8 = *(uint *)(iVar11 + 0x1e58);
  uVar9 = *(uint *)(iVar11 + 0x1e5c);
  uVar21 = piVar6[0xc];
  if (*(char *)((int)piVar6 + 0x4d) == '\0') {
    if (piVar6[1] < 0) {
      iVar14 = FUN_100fa1fa(0);
      if (piVar6[2] != 0) {
        FUN_1025b2d0(iVar14,piVar6[2],*piVar6 * 0x18);
        FUN_100fa2cb(piVar6[2]);
      }
      piVar6[2] = iVar14;
      piVar6[1] = 0;
    }
    *piVar6 = 0;
    *(undefined1 *)((int)piVar6 + 0x4d) = 1;
  }
  local_54 = cVar13;
  if (*(int *)(iVar11 + 0x2204) == param_1) {
    if ((uVar21 & 8) == 0) {
      local_54 = '\x01';
      if ((uVar20 & 0x3000) == 0x3000) goto LAB_101307dd;
      local_54 = cVar13;
      if ((uVar20 & 0x1000) == 0) {
        local_5c = 1;
        local_54 = '\x01';
      }
      bVar22 = !bVar22;
    }
    else {
      if ((uVar20 & 0x2000) != 0) {
        local_54 = '\x01';
      }
      bVar22 = (uVar20 & 0x3000) != 0 && !bVar22;
    }
  }
  else {
LAB_101307dd:
    bVar22 = !bVar22;
  }
  if (!bVar22) {
    *(uint *)(iVar7 + 0x18) = uVar8;
    *(uint *)(iVar7 + 0x1c) = uVar9;
    *(byte *)(iVar7 + 0x10) = local_5c;
  }
  iVar14 = DAT_1039d74c;
  if (((piVar6[0x11] != 0) && (*(int *)(DAT_1039d74c + 0x2394) == piVar6[0x11])) &&
     (*(char *)(DAT_1039d74c + 0x2398) == '\x01')) {
    local_38 = *(float *)(iVar11 + 0x1e8c);
    fVar2 = *(float *)(iVar11 + 0x1e90);
    fVar27 = *(float *)(iVar11 + 0x1e94);
    fVar3 = *(float *)(iVar11 + 0x1e98);
    if (((*(char *)(iVar5 + 0x1a4) == '\0') && (iVar10 = *(int *)(iVar11 + 0x2308), iVar10 != 0)) &&
       (*(int *)(iVar10 + 0x48) != -1)) {
      iVar18 = *(int *)(iVar10 + 0x48) * 0x74;
      bVar22 = (*(byte *)(iVar11 + 0x1e85) & 2) != 0;
      pfVar17 = (float *)(iVar5 + 0x28c);
      if (bVar22) {
        pfVar17 = (float *)(iVar11 + 0x1ebc);
      }
      iVar1 = *(int *)(iVar10 + 0x10) + iVar18;
      uVar15 = *(undefined4 *)(*(int *)(iVar10 + 0x10) + 8 + iVar18);
      pfVar19 = (float *)(iVar5 + 0x294);
      if (bVar22) {
        pfVar19 = (float *)(iVar11 + 0x1ec4);
      }
      fVar26 = *pfVar17;
      fVar4 = *pfVar19;
      if ((fVar26 != fVar4) || (NAN(fVar26) || NAN(fVar4))) {
        fVar24 = (float10)FUN_100ea38a(uVar15,fVar26);
        fVar25 = (float10)FUN_100fdbca(local_38,(float)fVar24);
        fVar24 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0xc),fVar4);
        fVar26 = (float)fVar24;
      }
      else {
        fVar25 = (float10)FUN_100fdbca(local_38,uVar15);
        fVar26 = *(float *)(iVar1 + 0xc);
      }
      local_38 = (float)fVar25;
      fVar24 = (float10)FUN_100ea38a(fVar27,fVar26);
      fVar27 = (float)fVar24;
    }
    if (((*(float *)(iVar14 + 0x2410) <= fVar2) ||
        (fVar3 < *(float *)(iVar14 + 0x2408) || fVar3 == *(float *)(iVar14 + 0x2408))) ||
       (*(float *)(iVar14 + 0x240c) <= local_38)) {
      bVar22 = false;
    }
    else {
      bVar22 = *(float *)(iVar14 + 0x2404) <= fVar27 && fVar27 != *(float *)(iVar14 + 0x2404);
    }
    if (((*(float *)(iVar14 + 0x2400) <= fVar2) ||
        (fVar3 < *(float *)(iVar14 + 0x23f8) || fVar3 == *(float *)(iVar14 + 0x23f8))) ||
       (*(float *)(iVar14 + 0x23fc) <= local_38)) {
      bVar16 = false;
    }
    else {
      bVar16 = *(float *)(iVar14 + 0x23f4) <= fVar27 && fVar27 != *(float *)(iVar14 + 0x23f4);
    }
    if ((!(bool)(bVar16 ^ 1U | bVar22)) || (!(bool)(bVar16 | bVar22 ^ 1U) && (local_5c & 1) == 0)) {
      if ((*(int *)(iVar7 + 0xc) < 1) && (*(char *)(iVar14 + 0x239b) == '\x01')) {
        *(undefined1 *)(iVar14 + 0x239b) = 0;
        local_54 = '\x01';
      }
      else {
        local_5c = local_5c ^ 1;
        FUN_1014ae84(piVar6,local_5c,1,uVar8,uVar9,uVar8,uVar9);
      }
      uVar15 = FUN_100fbc6a(*(int *)(iVar7 + 0xc) + 1,1);
      *(undefined4 *)(iVar7 + 0xc) = uVar15;
    }
  }
  if (((cVar12 == '\0') || (cVar13 = FUN_1010377a(1,0), cVar13 == '\0')) ||
     ((uVar21 & 0x20008) != 0)) {
LAB_10130afe:
    if (local_54 != '\0') {
      local_58 = (byte)((uVar20 & 0x1000) >> 0xc);
      cVar13 = (char)((uVar20 & 0x2000) >> 0xd);
      goto LAB_10130b11;
    }
    local_50._0_1_ = '\0';
    bVar23 = local_5c;
  }
  else {
    if ((*(int *)(iVar11 + 0x1528) != 0) && (*(int *)(iVar11 + 0x1528) != param_1)) {
      FUN_101028d8();
    }
    FUN_101171b7(param_1,iVar5);
    if (local_5c != 0 || local_54 != '\0') goto LAB_10130afe;
    local_58 = 0;
    cVar13 = '\0';
LAB_10130b11:
    if (*(int *)(iVar11 + 0x2058) == param_1) {
      if ((*(byte *)(iVar11 + 0x2064) & 1) != 0) {
        local_50._0_1_ = '\x01';
        bVar23 = 1;
        if (local_5c != 0) goto LAB_10130d0b;
      }
LAB_10130b4a:
      uVar20 = *(uint *)(iVar11 + 0x208c);
    }
    else {
      if (*(int *)(iVar11 + 0x2204) == param_1) goto LAB_10130b4a;
      uVar20 = 1;
    }
    if ((((uVar21 & 0xc0) != 0) && (*(char *)(iVar11 + 0x2398) == '\0')) &&
       ((uVar20 == 1 && *(char *)(iVar11 + 0x2399) == '\0' && (*(short *)(iVar11 + 0xb22) == 1)))) {
      FUN_1014adba(uVar9);
    }
    if ((uVar21 & 0x10) == 0) {
      if ((uVar21 & 1) == 0) {
        if (uVar20 == 1) {
          if (local_58 != 0) goto LAB_10130c17;
LAB_10130be1:
          bVar23 = (byte)(uVar21 >> 5) & 7 & local_5c;
        }
        else {
          if ((*(int *)(iVar11 + 0x2058) == param_1) && (local_58 == 0)) goto LAB_10130be1;
          if (((uVar20 & 0xfffffffe) != 2) || (bVar23 = local_58, cVar13 == '\0'))
          goto LAB_10130c17;
        }
        if (bVar23 != 0) goto LAB_10130c17;
      }
      FUN_1014a86a(piVar6,0);
    }
LAB_10130c17:
    if ((cVar13 == '\0') || ((uVar21 & 1) != 0)) {
      local_5c = (-((uVar21 & 8) != 0) | local_58) & local_5c ^ 1;
      *(uint *)(iVar7 + 0x18) = uVar8;
      *(uint *)(iVar7 + 0x1c) = uVar9;
      uVar21 = 1;
      uVar20 = uVar9;
      local_50 = uVar8;
      bVar23 = local_5c;
    }
    else {
      uVar20 = *(uint *)(iVar7 + 0x1c);
      local_50 = *(uint *)(iVar7 + 0x18);
      if ((*(uint *)(iVar7 + 0x18) & *(uint *)(iVar7 + 0x1c)) == 0xffffffff) {
        *(uint *)(iVar7 + 0x18) = uVar8;
        *(uint *)(iVar7 + 0x1c) = uVar9;
        uVar20 = uVar9;
        local_50 = uVar8;
      }
      if ((uVar21 & 8) == 0) {
        bVar23 = 1;
        if ((local_58 != 0) && (cVar13 = *(char *)(iVar7 + 0x10), cVar13 != -1)) {
LAB_10130cbc:
          bVar23 = cVar13 != '\0';
        }
      }
      else {
        if (*(char *)((int)piVar6 + 0x4f) == '\x01') {
          cVar13 = *(char *)(iVar7 + 0x10);
          goto LAB_10130cbc;
        }
        bVar23 = local_5c ^ 1;
      }
      uVar21 = *(byte *)((int)piVar6 + 0x51) - 1 | 1;
    }
    FUN_1014ae84(piVar6,bVar23,uVar21,local_50,uVar20,uVar8,uVar9);
    local_50._0_1_ = '\x01';
    bVar23 = local_5c;
  }
LAB_10130d0b:
  if (*(uint *)(iVar7 + 0x1c) == uVar9 && *(uint *)(iVar7 + 0x18) == uVar8) {
    *(byte *)(iVar7 + 0x10) = bVar23;
  }
  if (*(int *)(iVar11 + 0x2044) == param_1) {
    *(uint *)(iVar7 + 0x20) = uVar8;
    *(uint *)(iVar7 + 0x24) = uVar9;
    *(byte *)(iVar7 + 0x11) = bVar23;
  }
  else if (uVar9 != *(uint *)(iVar7 + 0x24) || uVar8 != *(uint *)(iVar7 + 0x20)) goto LAB_10130d6c;
  *(undefined1 *)(piVar6 + 0x14) = 1;
LAB_10130d6c:
  *param_2 = bVar23;
  *param_3 = (char)local_50;
  return;
}

