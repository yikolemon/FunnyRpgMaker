/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10104173 */

void FUN_10104173(undefined4 param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  undefined1 local_16;
  
  iVar5 = DAT_1039d74c;
  uVar2 = *(undefined4 *)(DAT_1039d74c + 0xce4);
  fVar15 = (float10)FUN_100fdbca(*(undefined4 *)(DAT_1039d74c + 0xd34),
                                 *(undefined4 *)(DAT_1039d74c + 0xd38));
  fVar15 = (float10)FUN_100fdbca((float)fVar15,uVar2);
  *(float *)(iVar5 + 0x14c4) = (float)fVar15;
  FUN_101043d8(param_1,0,iVar5 + 0x14d0,iVar5 + 0x14d4);
  iVar11 = *(int *)(iVar5 + 0x14d0);
  *(int *)(iVar5 + 0x14d8) = iVar11;
  iVar8 = FUN_1010400a();
  bVar6 = 1;
  if (iVar11 != 0 && iVar8 != 0) {
    bVar6 = FUN_101029f7(*(undefined4 *)(iVar11 + 0x3a8),iVar8);
  }
  uVar4 = *(uint *)(iVar5 + 0x30);
  iVar11 = *(int *)(iVar5 + 0x1fbc);
  iVar13 = 0;
  iVar10 = -1;
  bVar12 = 0;
  do {
    if (*(char *)(iVar5 + 0xb18 + iVar13) == '\x01') {
      *(bool *)(iVar5 + 0xb68 + iVar13) = *(int *)(iVar5 + 0x14d0) != 0 || 0 < iVar11;
      *(bool *)(iVar5 + 0xb6d + iVar13) = *(int *)(iVar5 + 0x14d0) != 0 || iVar8 != 0;
    }
    bVar9 = *(byte *)(iVar5 + 0xec + iVar13);
    if (((bVar9 != 0) || (*(char *)(iVar5 + 0xb36 + iVar13) == '\x01')) &&
       ((iVar10 == -1 ||
        (dVar3 = *(double *)(iVar5 + 0xaf0 + iVar10 * 8),
        pdVar1 = (double *)(iVar5 + 0xaf0 + iVar13 * 8), *pdVar1 <= dVar3 && dVar3 != *pdVar1)))) {
      iVar10 = iVar13;
    }
    bVar12 = bVar12 & 1 | bVar9;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 5);
  bVar14 = (uVar4 & 0x10) == 0;
  if (iVar10 == -1) {
    uVar7 = (undefined2)CONCAT31((uint3)bVar14,1);
    local_16 = '\x01';
  }
  else {
    uVar7 = CONCAT11(bVar14,*(undefined1 *)(iVar5 + 0xb68 + iVar10));
    local_16 = *(char *)(iVar5 + 0xb6d + iVar10);
  }
  if (*(char *)(iVar5 + 0x2250) == '\x01') {
    bVar9 = (*(byte *)(iVar5 + 0x2254) & 0x10) >> 4;
  }
  else {
    bVar9 = 0;
  }
  if ((byte)((bVar9 | (byte)uVar7) & bVar6 & (byte)((ushort)uVar7 >> 8)) == 0) {
    *(undefined4 *)(iVar5 + 0x14d4) = 0;
    *(undefined4 *)(iVar5 + 0x14d0) = 0;
  }
  if (*(int *)(iVar5 + 0x2994) == -1) {
    if (((byte)uVar7 == 0) || ((bVar14 = true, *(int *)(iVar5 + 0x14d0) == 0 && (bVar12 == 0)))) {
      bVar14 = 0 < iVar11;
    }
    *(bool *)(iVar5 + 0xbc) = bVar14;
    if (local_16 != '\0') {
      bVar14 = true;
      iVar11 = 0xabc;
      if ((*(int *)(iVar5 + 0x14d0) != 0) || (bVar12 != 0)) goto LAB_10104370;
    }
    bVar14 = iVar8 != 0;
    iVar11 = 0xabc;
  }
  else {
    bVar14 = *(int *)(iVar5 + 0x2994) != 0;
    *(bool *)(iVar5 + 0xabc) = bVar14;
    iVar11 = 0xbc;
  }
LAB_10104370:
  *(bool *)(iVar5 + iVar11) = bVar14;
  *(undefined1 *)(iVar5 + 0xbd) = 0;
  if (((uVar4 & 0x40) == 0) &&
     (((iVar8 != 0 || (*(int *)(iVar5 + 0x1528) != 0)) ||
      (((uVar4 & 1) != 0 &&
       ((*(char *)(iVar5 + 0xc1) != '\0' && (*(char *)(iVar5 + 0x67) == '\x01')))))))) {
    *(undefined1 *)(iVar5 + 0xbd) = 1;
  }
  if (*(int *)(iVar5 + 0x2998) != -1) {
    *(bool *)(iVar5 + 0xbd) = *(int *)(iVar5 + 0x2998) != 0;
  }
  *(bool *)(iVar5 + 0xbe) = *(int *)(iVar5 + 0x299c) - 1U < 0xfffffffe;
  return;
}

