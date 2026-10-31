/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ebafc */

undefined8 FUN_1801ebafc(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x318);
  uVar7 = *(int *)(*(longlong *)(param_2 + 0x80) + 0x18) * 0x10000;
  uVar15 = 0x40000;
  if (0x40000 < (int)uVar7) {
    uVar15 = uVar7;
  }
  uVar7 = FUN_1801cc3a4(0x3e80000,*(int *)(param_2 + 0x68) << 0x10);
  if ((int)uVar7 < 0x28f) {
    return 0;
  }
  if (param_3 < 1) {
    uVar14 = 0x4b0000;
  }
  else {
    lVar13 = (ulonglong)uVar7 * (longlong)(param_3 << 0x10);
    uVar14 = (uint)((ulonglong)((lVar13 >> 0x3f) + lVar13 + 0x8000) >> 0x10);
  }
  iVar9 = *(int *)(lVar6 + 0x24);
  iVar10 = *(int *)(lVar6 + 0x3c);
  iVar8 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  iVar16 = 0x1f;
  if (uVar15 != 0) {
    for (; uVar15 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  if ((uint)(iVar16 + iVar8) < 0x2e) {
    iVar8 = (int)(((longlong)((ulonglong)uVar15 * (longlong)(int)uVar14) >> 0x3f) +
                  (ulonglong)uVar15 * (longlong)(int)uVar14 + 0x8000 >> 0x10);
  }
  else {
    iVar8 = iVar10 << 0x10;
  }
  iVar16 = *(int *)(lVar6 + 0x28);
  iVar12 = iVar9 * 0x10000;
  if (iVar8 < iVar12) {
LAB_1801ebc8a:
    iVar10 = FUN_1801cc3a4(iVar16 << 0x10,uVar15);
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x2c);
    iVar2 = *(int *)(lVar6 + 0x30);
    iVar3 = *(int *)(lVar6 + 0x34);
    iVar4 = *(int *)(lVar6 + 0x38);
    iVar5 = *(int *)(lVar6 + 0x40);
    if (iVar8 < iVar1 * 0x10000) {
      iVar8 = FUN_1801cc3a4(iVar12,uVar15);
      if (iVar1 == iVar9) goto LAB_1801ebc4c;
      iVar9 = FUN_1801cb4a4(uVar14 - iVar8,iVar2 - iVar16);
      iVar16 = iVar16 << 0x10;
    }
    else {
      if (iVar8 < iVar3 * 0x10000) {
LAB_1801ebc4c:
        iVar9 = FUN_1801cc3a4(iVar1 * 0x10000,uVar15);
        if (iVar3 != iVar1) {
          iVar9 = FUN_1801cb4a4(uVar14 - iVar9,iVar4 - iVar2);
          iVar16 = iVar2 << 0x10;
          goto LAB_1801ebcd0;
        }
      }
      else {
        iVar16 = iVar5;
        if (iVar10 * 0x10000 <= iVar8) goto LAB_1801ebc8a;
      }
      iVar9 = FUN_1801cc3a4(iVar3 << 0x10,uVar15);
      iVar16 = iVar5;
      if (iVar10 - iVar3 == 0) goto LAB_1801ebc8a;
      iVar9 = FUN_1801cb4a4(uVar14 - iVar9,iVar5 - iVar4,iVar10 - iVar3);
      iVar16 = iVar4 << 0x10;
    }
LAB_1801ebcd0:
    iVar10 = FUN_1801cc3a4(iVar16,uVar15);
    iVar10 = iVar10 + iVar9;
  }
  uVar11 = FUN_1801cc3a4(iVar10,(ulonglong)uVar7);
  return uVar11;
}

