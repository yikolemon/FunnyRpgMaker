/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ff88 */

uint __cdecl FUN_0041ff88(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar11 = *param_1;
  uVar13 = -uVar11;
  if ((int)-uVar11 < 0) {
    uVar13 = uVar11;
  }
  uVar1 = param_1[1];
  uVar2 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar2 = uVar1;
  }
  if (uVar11 == 0) {
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      param_1[1] = (~uVar1 >> 0xe & 0x20000) - 0x10000;
    }
  }
  else if (uVar1 == 0) {
    *param_1 = (~uVar11 >> 0xe & 0x20000) - 0x10000;
    uVar2 = uVar13;
  }
  else {
    uVar6 = (uVar13 >> 1) + uVar2;
    if (uVar2 < uVar13) {
      uVar6 = (uVar2 >> 1) + uVar13;
    }
    uVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    iVar5 = ((uVar12 ^ 0x1f) - 0x10) + (uint)(uVar6 < 0xaaaaaaaaU >> ((byte)(uVar12 ^ 0x1f) & 0x1f))
    ;
    bVar3 = (byte)iVar5;
    if (iVar5 < 1) {
      bVar4 = -bVar3;
      uVar13 = uVar13 >> (bVar4 & 0x1f);
      uVar2 = uVar2 >> (bVar4 & 0x1f);
      uVar6 = uVar6 >> (bVar4 & 0x1f);
    }
    else {
      uVar13 = uVar13 << (bVar3 & 0x1f);
      uVar2 = uVar2 << (bVar3 & 0x1f);
      uVar6 = (uVar13 >> 1) + uVar2;
      if (uVar2 < uVar13) {
        uVar6 = (uVar2 >> 1) + uVar13;
      }
    }
    iVar8 = 0x10000 - uVar6;
    do {
      uVar6 = ((int)(iVar8 * uVar13) >> 0x10) + uVar13;
      uVar12 = ((int)(iVar8 * uVar2) >> 0x10) + uVar2;
      iVar9 = uVar6 * uVar6 + uVar12 * uVar12;
      iVar7 = uVar6 * uVar6 + uVar12 * uVar12 + 0x1ff;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      uVar10 = (iVar8 + 0x10000 >> 8) * -(iVar7 >> 9);
      iVar8 = iVar8 + (uVar10 >> 0x10);
    } while (0xffff < (int)uVar10);
    uVar10 = -uVar6;
    if (-1 < (int)uVar11) {
      uVar10 = uVar6;
    }
    uVar11 = -uVar12;
    if (-1 < (int)uVar1) {
      uVar11 = uVar12;
    }
    iVar7 = uVar13 * uVar6 + uVar2 * uVar12;
    iVar8 = uVar13 * uVar6 + 0xffff + uVar2 * uVar12;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    *param_1 = uVar10;
    param_1[1] = uVar11;
    iVar8 = (iVar8 >> 0x10) + 0x10000;
    if (iVar5 < 1) {
      uVar2 = iVar8 << (-bVar3 & 0x1f);
    }
    else {
      uVar2 = (uint)(iVar8 + (1 << (bVar3 - 1 & 0x1f))) >> (bVar3 & 0x1f);
    }
  }
  return uVar2;
}

