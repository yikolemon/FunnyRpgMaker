/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403477a1 */

void FUN_1403477a1(int param_1,byte *param_2,char *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined8 uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined8 unaff_RBP;
  byte bVar19;
  uint uVar20;
  float *pfVar21;
  byte bVar22;
  longlong lVar23;
  byte bVar24;
  bool bVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  uint local_c0;
  
  lVar10 = DAT_14062a630;
  lVar23 = *(longlong *)(DAT_14062a630 + 0x1608);
  bVar24 = *param_2;
  cVar13 = *param_3;
  piVar6 = *(int **)(DAT_14062a630 + 0x2638);
  if (cVar13 == '\x01') {
    *(undefined1 *)((longlong)piVar6 + 0x52) = 1;
  }
  lVar7 = *(longlong *)(piVar6 + 10);
  if ((*(byte *)(lVar10 + 0x1fe8) & 1) == 0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = FUN_140318a6c(0x20);
  }
  if ((cVar12 == '\0') && (*(char *)((longlong)piVar6 + 0x52) == '\0')) {
    return;
  }
  if (*(int *)(lVar10 + 0x21f8) == param_1) {
    bVar25 = *(longlong *)(lVar7 + 0x18) == -1;
  }
  else {
    bVar25 = false;
  }
  uVar20 = piVar6[0x13];
  lVar8 = *(longlong *)(lVar10 + 0x1fb8);
  uVar5 = piVar6[0xd];
  if (*(char *)((longlong)piVar6 + 0x51) == '\0') {
    if (piVar6[1] < 0) {
      uVar15 = FUN_14030fcc8(0);
      if (*(longlong *)(piVar6 + 2) != 0) {
        FUN_1404b97c0(uVar15,*(longlong *)(piVar6 + 2),(longlong)*piVar6 * 0x18);
        FUN_14030fda4(*(undefined8 *)(piVar6 + 2));
      }
      *(undefined8 *)(piVar6 + 2) = uVar15;
      piVar6[1] = 0;
    }
    *piVar6 = 0;
    *(undefined1 *)((longlong)piVar6 + 0x51) = 1;
  }
  cVar14 = cVar13;
  if (*(int *)(lVar10 + 0x23cc) == param_1) {
    if ((uVar5 & 8) != 0) {
      cVar14 = '\x01';
      if ((uVar20 & 0x2000) == 0) {
        cVar14 = cVar13;
      }
      bVar25 = (bool)((uVar20 & 0x3000) == 0 | bVar25);
      goto LAB_140347962;
    }
    cVar14 = '\x01';
    if ((uVar20 & 0x3000) == 0x3000) goto LAB_140347962;
    bVar26 = (uVar20 & 0x1000) == 0;
    cVar14 = cVar13;
    if (bVar26) {
      cVar14 = '\x01';
    }
    uVar18 = (ulonglong)bVar24;
    if (bVar26) {
      uVar18 = 1;
    }
  }
  else {
LAB_140347962:
    uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar24) & 0xffffffff;
  }
  if (bVar25) {
    *(longlong *)(lVar7 + 0x18) = lVar8;
    *(char *)(lVar7 + 0x14) = (char)uVar18;
  }
  lVar11 = DAT_14062a630;
  local_c0 = uVar20 & 0x1000;
  if (((piVar6[0x12] != 0) && (*(int *)(DAT_14062a630 + 0x25b0) == piVar6[0x12])) &&
     (*(char *)(DAT_14062a630 + 0x25b4) == '\x01')) {
    fVar28 = *(float *)(lVar10 + 0x1fec);
    fVar2 = *(float *)(lVar10 + 0x1ff0);
    fVar29 = *(float *)(lVar10 + 0x1ff4);
    fVar3 = *(float *)(lVar10 + 0x1ff8);
    if (((*(char *)(lVar23 + 0x1b8) == '\0') && (lVar9 = *(longlong *)(lVar10 + 0x24f8), lVar9 != 0)
        ) && ((longlong)*(int *)(lVar9 + 0x74) != -1)) {
      lVar16 = (longlong)*(int *)(lVar9 + 0x74) * 0x74;
      lVar1 = *(longlong *)(lVar9 + 0x18) + lVar16;
      bVar25 = (*(byte *)(lVar10 + 0x1fe5) & 2) != 0;
      pfVar21 = (float *)(lVar23 + 0x2b8);
      if (bVar25) {
        pfVar21 = (float *)(lVar10 + 0x201c);
      }
      pfVar17 = (float *)(lVar23 + 0x2c0);
      if (bVar25) {
        pfVar17 = (float *)(lVar10 + 0x2024);
      }
      fVar4 = *pfVar17;
      uVar27 = *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + 8 + lVar16);
      if ((*pfVar21 != fVar4) || (NAN(*pfVar21) || NAN(fVar4))) {
        uVar27 = FUN_1403000b2(uVar27);
        fVar28 = (float)FUN_140313933(fVar28,uVar27);
        uVar27 = FUN_140313933(*(undefined4 *)(lVar1 + 0xc),fVar4);
      }
      else {
        fVar28 = (float)FUN_140313933(fVar28,uVar27);
        uVar27 = *(undefined4 *)(lVar1 + 0xc);
      }
      fVar29 = (float)FUN_1403000b2(fVar29,uVar27);
    }
    if (((*(float *)(lVar11 + 0x2630) <= fVar2) ||
        (fVar3 < *(float *)(lVar11 + 0x2628) || fVar3 == *(float *)(lVar11 + 0x2628))) ||
       (*(float *)(lVar11 + 0x262c) <= fVar28)) {
      bVar25 = false;
    }
    else {
      bVar25 = *(float *)(lVar11 + 0x2624) <= fVar29 && fVar29 != *(float *)(lVar11 + 0x2624);
    }
    if (((*(float *)(lVar11 + 0x2620) <= fVar2) ||
        (fVar3 < *(float *)(lVar11 + 0x2618) || fVar3 == *(float *)(lVar11 + 0x2618))) ||
       (*(float *)(lVar11 + 0x261c) <= fVar28)) {
      bVar26 = false;
    }
    else {
      bVar26 = *(float *)(lVar11 + 0x2614) <= fVar29 && fVar29 != *(float *)(lVar11 + 0x2614);
    }
    if ((!(bool)(bVar26 ^ 1U | bVar25)) || ((!bVar26 && !(bool)(bVar25 ^ 1)) && (uVar18 & 1) == 0))
    {
      if ((*(int *)(lVar7 + 0x10) < 1) && (*(char *)(lVar11 + 0x25b7) == '\x01')) {
        *(undefined1 *)(lVar11 + 0x25b7) = 0;
        cVar14 = '\x01';
      }
      else {
        uVar18 = uVar18 ^ 1;
        FUN_140360893(piVar6,uVar18,1,lVar8,lVar8);
      }
      uVar27 = FUN_1403118b9(*(int *)(lVar7 + 0x10) + 1);
      *(undefined4 *)(lVar7 + 0x10) = uVar27;
    }
  }
  bVar24 = (byte)uVar18;
  if (((cVar12 == '\0') || (cVar13 = FUN_1403198a6(1), cVar13 == '\0')) || ((uVar5 & 0x20008) != 0))
  {
LAB_140347bc2:
    if (cVar14 != '\0') {
      bVar19 = (byte)(local_c0 >> 0xc);
      cVar13 = (char)((uVar20 & 0x2000) >> 0xd);
      goto LAB_140347bd7;
    }
    cVar12 = '\0';
    bVar22 = bVar24;
  }
  else {
    if ((*(int *)(lVar10 + 0x167c) != 0) && (*(int *)(lVar10 + 0x167c) != param_1)) {
      FUN_140318926();
    }
    FUN_14032d52d(param_1);
    if (bVar24 != 0 || cVar14 != '\0') goto LAB_140347bc2;
    bVar19 = 0;
    cVar13 = '\0';
LAB_140347bd7:
    if (*(int *)(lVar10 + 0x2214) == param_1) {
      if ((*(byte *)(lVar10 + 0x2220) & 1) != 0) {
        cVar12 = '\x01';
        bVar22 = 1;
        if (bVar24 != 0) goto LAB_140347dec;
      }
LAB_140347c0f:
      uVar20 = *(uint *)(lVar10 + 0x2250);
    }
    else {
      uVar20 = 1;
      if (*(int *)(lVar10 + 0x23cc) == param_1) goto LAB_140347c0f;
    }
    if ((((uVar5 & 0xc0) != 0) && (*(char *)(lVar10 + 0x25b4) == '\0')) &&
       ((uVar20 == 1 && *(char *)(lVar10 + 0x25b5) == '\0' && (*(short *)(lVar10 + 0xb5a) == 1)))) {
      FUN_1403607dc(piVar6[0x12]);
    }
    if ((uVar5 & 0x10) == 0) {
      if ((uVar5 & 1) == 0) {
        if (uVar20 == 1) {
          if (bVar19 != 0) goto LAB_140347d59;
LAB_140347d16:
          bVar22 = (byte)uVar5 >> 5 & bVar24;
        }
        else {
          if ((*(int *)(lVar10 + 0x2214) == param_1) && (bVar19 == 0)) goto LAB_140347d16;
          if (((uVar20 & 0xfffffffe) != 2) || (bVar22 = bVar19, cVar13 == '\0')) goto LAB_140347d59;
        }
        if (bVar22 != 0) goto LAB_140347d59;
      }
      FUN_140360257(piVar6);
    }
LAB_140347d59:
    if ((cVar13 == '\0') || ((uVar5 & 1) != 0)) {
      uVar18 = (ulonglong)((-((uVar5 & 8) != 0) | bVar19) & bVar24) ^ 1;
      bVar24 = (byte)uVar18;
      *(longlong *)(lVar7 + 0x18) = lVar8;
      uVar20 = 1;
      lVar23 = lVar8;
    }
    else {
      lVar23 = *(longlong *)(lVar7 + 0x18);
      if (*(longlong *)(lVar7 + 0x18) == -1) {
        *(longlong *)(lVar7 + 0x18) = lVar8;
        lVar23 = lVar8;
      }
      if ((uVar5 & 8) == 0) {
        uVar18 = 1;
        if ((bVar19 != 0) && (cVar13 = *(char *)(lVar7 + 0x14), cVar13 != -1)) {
LAB_140347dbf:
          uVar18 = (ulonglong)(cVar13 != '\0');
        }
      }
      else {
        if (*(char *)((longlong)piVar6 + 0x53) == '\x01') {
          cVar13 = *(char *)(lVar7 + 0x14);
          goto LAB_140347dbf;
        }
        uVar18 = uVar18 ^ 1;
      }
      uVar20 = *(byte *)((longlong)piVar6 + 0x55) - 1 | 1;
    }
    FUN_140360893(piVar6,uVar18,uVar20,lVar23,lVar8);
    cVar12 = '\x01';
    bVar22 = bVar24;
  }
LAB_140347dec:
  if (*(longlong *)(lVar7 + 0x18) == lVar8) {
    *(byte *)(lVar7 + 0x14) = bVar22;
  }
  if (*(int *)(lVar10 + 0x21f8) == param_1) {
    *(longlong *)(lVar7 + 0x20) = lVar8;
    *(byte *)(lVar7 + 0x15) = bVar22;
  }
  else if (*(longlong *)(lVar7 + 0x20) != lVar8) goto LAB_140347e1c;
  *(undefined1 *)(piVar6 + 0x15) = 1;
LAB_140347e1c:
  *param_2 = bVar22;
  *param_3 = cVar12;
  return;
}

