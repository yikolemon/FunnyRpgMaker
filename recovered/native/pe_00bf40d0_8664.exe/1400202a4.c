/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400202a4 */

uint FUN_1400202a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  uVar1 = *param_1;
  uVar13 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar13 = uVar1;
  }
  uVar2 = param_1[1];
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      param_1[1] = (~uVar2 >> 0xe & 0x20000) - 0x10000;
    }
  }
  else if (uVar2 == 0) {
    *param_1 = (~uVar1 >> 0xe & 0x20000) - 0x10000;
    uVar3 = uVar13;
  }
  else {
    uVar6 = (uVar13 >> 1) + uVar3;
    if (uVar3 < uVar13) {
      uVar6 = (uVar3 >> 1) + uVar13;
    }
    uVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar10 == 0; uVar10 = uVar10 - 1) {
      }
    }
    iVar12 = ((uVar10 ^ 0x1f) - 0x10) +
             (uint)(uVar6 < 0xaaaaaaaaU >> ((byte)(uVar10 ^ 0x1f) & 0x1f));
    bVar4 = (byte)iVar12;
    if (iVar12 < 1) {
      bVar5 = -bVar4;
      uVar13 = uVar13 >> (bVar5 & 0x1f);
      uVar3 = uVar3 >> (bVar5 & 0x1f);
      uVar6 = uVar6 >> (bVar5 & 0x1f);
    }
    else {
      uVar13 = uVar13 << (bVar4 & 0x1f);
      uVar3 = uVar3 << (bVar4 & 0x1f);
      uVar6 = (uVar13 >> 1) + uVar3;
      if (uVar3 < uVar13) {
        uVar6 = (uVar3 >> 1) + uVar13;
      }
    }
    iVar11 = 0x10000 - uVar6;
    do {
      uVar6 = ((int)(iVar11 * uVar13) >> 0x10) + uVar13;
      uVar10 = ((int)(iVar11 * uVar3) >> 0x10) + uVar3;
      iVar8 = uVar6 * uVar6 + uVar10 * uVar10;
      iVar7 = uVar6 * uVar6 + uVar10 * uVar10 + 0x1ff;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      uVar9 = (iVar11 + 0x10000 >> 8) * -(iVar7 >> 9);
      iVar11 = (uVar9 >> 0x10) + iVar11;
    } while (0xffff < (int)uVar9);
    uVar9 = -uVar6;
    if (-1 < (int)uVar1) {
      uVar9 = uVar6;
    }
    uVar1 = -uVar10;
    if (-1 < (int)uVar2) {
      uVar1 = uVar10;
    }
    iVar7 = uVar13 * uVar6 + uVar3 * uVar10;
    iVar11 = uVar13 * uVar6 + 0xffff + uVar3 * uVar10;
    if (-1 < iVar7) {
      iVar11 = iVar7;
    }
    iVar11 = (iVar11 >> 0x10) + 0x10000;
    *param_1 = uVar9;
    param_1[1] = uVar1;
    if (iVar12 < 1) {
      uVar3 = iVar11 << (-bVar4 & 0x1f);
    }
    else {
      uVar3 = (uint)(iVar11 + (1 << (bVar4 - 1 & 0x1f))) >> (bVar4 & 0x1f);
    }
  }
  return uVar3;
}

