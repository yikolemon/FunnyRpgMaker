/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180108e2d */

void FUN_180108e2d(undefined8 param_1)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  lVar6 = DAT_180419160;
  uVar17 = *(undefined4 *)(DAT_180419160 + 0xdcc);
  uVar16 = FUN_180102463(*(undefined4 *)(DAT_180419160 + 0xe1c),
                         *(undefined4 *)(DAT_180419160 + 0xe20));
  uVar17 = FUN_180102463(uVar16,uVar17);
  *(undefined4 *)(lVar6 + 0x15fc) = uVar17;
  plVar1 = (longlong *)(lVar6 + 0x1610);
  FUN_180109090(param_1,0,plVar1,lVar6 + 0x1618);
  lVar13 = *(longlong *)(lVar6 + 0x1610);
  *(longlong *)(lVar6 + 0x1620) = lVar13;
  lVar8 = FUN_180108ca9();
  bVar7 = 1;
  if (lVar13 != 0 && lVar8 != 0) {
    bVar7 = FUN_18010757d(*(undefined8 *)(lVar13 + 0x418));
  }
  uVar4 = *(uint *)(lVar6 + 0x30);
  iVar5 = *(int *)(lVar6 + 0x2148);
  iVar12 = -1;
  lVar13 = 0;
  bVar9 = 0;
  do {
    if (*(char *)(lVar6 + 0xb50 + lVar13) == '\x01') {
      *(bool *)(lVar6 + 0xba0 + lVar13) = *(longlong *)(lVar6 + 0x1610) != 0 || 0 < iVar5;
      *(bool *)(lVar6 + 0xba5 + lVar13) = *(longlong *)(lVar6 + 0x1610) != 0 || lVar8 != 0;
    }
    bVar11 = *(byte *)(lVar6 + 0x120 + lVar13);
    if ((bVar11 != 0) || (*(char *)(lVar6 + 0xb6e + lVar13) == '\x01')) {
      if (iVar12 != -1) {
        dVar3 = *(double *)(lVar6 + 0xb28 + (longlong)iVar12 * 8);
        pdVar2 = (double *)(lVar6 + 0xb28 + lVar13 * 8);
        if (dVar3 < *pdVar2 || dVar3 == *pdVar2) goto LAB_180108f53;
      }
      iVar12 = (int)lVar13;
    }
LAB_180108f53:
    bVar9 = bVar9 & 1 | bVar11;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 5);
  if (iVar12 == -1) {
    bVar11 = 1;
    cVar10 = '\x01';
  }
  else {
    bVar11 = *(byte *)(lVar6 + 0xba0 + (longlong)iVar12);
    cVar10 = *(char *)(lVar6 + 0xba5 + (longlong)iVar12);
  }
  if (*(char *)(lVar6 + 0x2428) == '\x01') {
    bVar14 = (*(byte *)(lVar6 + 0x242c) & 0x10) >> 4;
  }
  else {
    bVar14 = 0;
  }
  if ((byte)((bVar14 | bVar11) & bVar7 & (uVar4 & 0x10) == 0) == 0) {
    *plVar1 = 0;
    *(undefined8 *)(lVar6 + 0x1618) = 0;
  }
  if (*(int *)(lVar6 + 0x2ccc) == -1) {
    if ((bVar11 == 0) || ((bVar15 = true, *plVar1 == 0 && (bVar9 == 0)))) {
      bVar15 = 0 < iVar5;
    }
    *(bool *)(lVar6 + 0xe8) = bVar15;
    if (cVar10 != '\0') {
      bVar15 = true;
      lVar13 = 0xaf0;
      if ((*plVar1 != 0) || (bVar9 != 0)) goto LAB_180109021;
    }
    bVar15 = lVar8 != 0;
    lVar13 = 0xaf0;
  }
  else {
    bVar15 = *(int *)(lVar6 + 0x2ccc) != 0;
    *(bool *)(lVar6 + 0xaf0) = bVar15;
    lVar13 = 0xe8;
  }
LAB_180109021:
  *(bool *)(lVar6 + lVar13) = bVar15;
  *(undefined1 *)(lVar6 + 0xe9) = 0;
  if (((uVar4 & 0x40) == 0) &&
     (((lVar8 != 0 || (*(int *)(lVar6 + 0x167c) != 0)) ||
      (((uVar4 & 1) != 0 &&
       ((*(char *)(lVar6 + 0xed) != '\0' && (*(char *)(lVar6 + 0x7b) == '\x01')))))))) {
    *(undefined1 *)(lVar6 + 0xe9) = 1;
  }
  if (*(int *)(lVar6 + 0x2cd0) != -1) {
    *(bool *)(lVar6 + 0xe9) = *(int *)(lVar6 + 0x2cd0) != 0;
  }
  *(bool *)(lVar6 + 0xea) = *(int *)(lVar6 + 0x2cd4) - 1U < 0xfffffffe;
  return;
}

