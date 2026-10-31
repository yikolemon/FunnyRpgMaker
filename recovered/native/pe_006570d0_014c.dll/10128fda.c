/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10128fda */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10128fda(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2048);
  iVar5 = *(int *)(DAT_1039d74c + 0x2050) * 0x10;
  iVar2 = *(int *)(DAT_1039d74c + 0x20e8);
  uVar3 = *(uint *)(DAT_1039d74c + 0x20dc);
  if (*(int *)(DAT_1039d74c + 0x2050) == 1) {
    uVar9 = *(ulonglong *)(iVar1 + 0x58);
  }
  else {
    uVar9 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0x80) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(iVar1 + 0x68) >> 0x20),
                     (float)*(undefined8 *)(iVar1 + 0x80) + (float)*(undefined8 *)(iVar1 + 0x68));
  }
  fVar10 = *(float *)(iVar1 + 0x3d0 + iVar5);
  fVar11 = *(float *)(iVar1 + 0x3d8 + iVar5);
  if ((uVar3 & 5) == 0 || iVar2 != 0) {
    if (iVar2 != 1 || (uVar3 & 5) == 0) {
      fVar12 = *(float *)(iVar1 + 0x3cc + iVar5);
      fVar8 = *(float *)(iVar1 + 0x3d4 + iVar5);
      if ((uVar3 & 10) == 0 || iVar2 != 2) {
        if (iVar2 != 3 || (uVar3 & 10) == 0) {
          return;
        }
        fVar10 = (float)(*(uint *)(iVar1 + 0x84) ^ _DAT_1028f620);
        uVar6 = 3;
        fVar11 = fVar10;
        if ((uVar3 & 8) != 0) {
          fVar7 = fVar8 - fVar12;
          fVar12 = fVar12 + fVar7;
          fVar8 = fVar7 + fVar8;
          uVar6 = 1;
        }
      }
      else {
        fVar10 = (float)(uVar9 >> 0x20);
        uVar6 = 2;
        fVar11 = fVar10;
        if ((uVar3 & 8) != 0) {
          fVar7 = fVar8 - fVar12;
          fVar12 = fVar12 - fVar7;
          fVar8 = fVar8 - fVar7;
          uVar6 = 0;
        }
      }
      goto LAB_1012912c;
    }
    uVar9 = (ulonglong)(*(uint *)(iVar1 + 0x80) ^ _DAT_1028f620);
    if ((uVar3 & 4) == 0) {
      uVar6 = 1;
    }
    else {
      fVar12 = fVar11 - fVar10;
      fVar10 = fVar10 + fVar12;
      fVar11 = fVar11 + fVar12;
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 0;
    if ((uVar3 & 4) != 0) {
      fVar12 = fVar11 - fVar10;
      fVar10 = fVar10 - fVar12;
      fVar11 = fVar11 - fVar12;
      uVar6 = 2;
    }
  }
  fVar12 = (float)uVar9;
  fVar8 = fVar12;
LAB_1012912c:
  iVar5 = iVar5 + iVar1;
  *(float *)(iVar5 + 0x3cc) = fVar12;
  *(float *)(iVar5 + 0x3d0) = fVar10;
  *(float *)(iVar5 + 0x3d4) = fVar8;
  *(float *)(iVar5 + 0x3d8) = fVar11;
  FUN_10117123(0);
  FUN_10117123(1);
  FUN_1011733e(*(undefined4 *)(iVar4 + 0x20e8),uVar6,uVar3,*(undefined4 *)(iVar4 + 0x20e0));
  return;
}

