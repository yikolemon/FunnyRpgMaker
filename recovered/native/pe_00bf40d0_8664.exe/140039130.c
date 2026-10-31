/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039130 */

int FUN_140039130(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x318);
  uVar8 = *(int *)(*(longlong *)(param_2 + 0x80) + 0x18) * 0x10000;
  uVar10 = 0x40000;
  if (0x40000 < (int)uVar8) {
    uVar10 = uVar8;
  }
  uVar8 = FUN_14001ecff(0x3e80000,*(int *)(param_2 + 0x68) << 0x10);
  if ((int)uVar8 < 0x28f) {
    return 0;
  }
  if (param_3 < 1) {
    uVar15 = 0x4b0000;
  }
  else {
    lVar14 = (ulonglong)uVar8 * (longlong)(param_3 << 0x10);
    uVar15 = (uint)((ulonglong)((lVar14 >> 0x3f) + lVar14 + 0x8000) >> 0x10);
  }
  iVar12 = *(int *)(lVar6 + 0x24);
  iVar11 = *(int *)(lVar6 + 0x3c);
  iVar9 = 0x1f;
  if (uVar15 != 0) {
    for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar7 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if ((uint)(iVar7 + iVar9) < 0x2e) {
    iVar9 = (int)(((longlong)((ulonglong)uVar10 * (longlong)(int)uVar15) >> 0x3f) +
                  (ulonglong)uVar10 * (longlong)(int)uVar15 + 0x8000 >> 0x10);
  }
  else {
    iVar9 = iVar11 << 0x10;
  }
  iVar7 = *(int *)(lVar6 + 0x28);
  uVar13 = iVar12 * 0x10000;
  if (iVar9 < (int)uVar13) {
LAB_1400392be:
    uVar10 = FUN_14001ecff(iVar7 << 0x10,uVar10);
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x2c);
    iVar2 = *(int *)(lVar6 + 0x30);
    iVar3 = *(int *)(lVar6 + 0x34);
    iVar4 = *(int *)(lVar6 + 0x38);
    iVar5 = *(int *)(lVar6 + 0x40);
    if (iVar9 < iVar1 * 0x10000) {
      iVar9 = FUN_14001ecff(uVar13,uVar10);
      uVar13 = iVar1 - iVar12;
      if (uVar13 == 0) goto LAB_140039280;
      iVar12 = FUN_14001de7c(uVar15 - iVar9,iVar2 - iVar7,uVar13);
      uVar15 = iVar7 << 0x10;
    }
    else {
      if (iVar9 < iVar3 * 0x10000) {
LAB_140039280:
        iVar12 = FUN_14001ecff(iVar1 * 0x10000,uVar10);
        if (iVar3 - iVar1 != 0) {
          iVar12 = FUN_14001de7c(uVar15 - iVar12,iVar4 - iVar2,iVar3 - iVar1);
          uVar15 = iVar2 << 0x10;
          goto LAB_140039304;
        }
      }
      else {
        iVar7 = iVar5;
        if (iVar11 * 0x10000 <= iVar9) goto LAB_1400392be;
      }
      iVar12 = FUN_14001ecff(iVar3 << 0x10,uVar10);
      iVar7 = iVar5;
      if (iVar11 - iVar3 == 0) goto LAB_1400392be;
      iVar12 = FUN_14001de7c(uVar15 - iVar12,iVar5 - iVar4,iVar11 - iVar3);
      uVar15 = iVar4 << 0x10;
    }
LAB_140039304:
    iVar11 = FUN_14001ecff(uVar15,uVar10);
    uVar10 = iVar11 + iVar12;
  }
  iVar12 = FUN_14001ecff(uVar10,uVar8);
  return iVar12;
}

