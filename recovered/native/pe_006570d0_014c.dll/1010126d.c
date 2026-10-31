/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010126d */

void FUN_1010126d(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = DAT_1039d74c;
  iVar10 = *(int *)(DAT_1039d74c + 0x26dc);
  if (iVar10 == *(int *)(DAT_1039d74c + 0x26e0)) {
    if (iVar10 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar10 / 2 + iVar10;
    }
    iVar12 = iVar10 + 1;
    if (iVar10 + 1 < iVar11) {
      iVar12 = iVar11;
    }
    iVar11 = FUN_100fa1fa(iVar12 * 0x24);
    if (*(int *)(iVar9 + 0x26e4) != 0) {
      FUN_1025b2d0(iVar11,*(int *)(iVar9 + 0x26e4),*(int *)(iVar9 + 0x26dc) * 0x24);
      FUN_100fa2cb(*(undefined4 *)(iVar9 + 0x26e4));
    }
    *(int *)(iVar9 + 0x26e4) = iVar11;
    *(int *)(iVar9 + 0x26e0) = iVar12;
    iVar10 = *(int *)(iVar9 + 0x26dc);
  }
  else {
    iVar11 = *(int *)(DAT_1039d74c + 0x26e4);
  }
  *(undefined4 *)(iVar11 + 0x20 + iVar10 * 0x24) = param_1[8];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  puVar1 = (undefined4 *)(iVar11 + 0x10 + iVar10 * 0x24);
  *puVar1 = param_1[4];
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)(iVar11 + iVar10 * 0x24);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(int *)(iVar9 + 0x26dc) = *(int *)(iVar9 + 0x26dc) + 1;
  return;
}

