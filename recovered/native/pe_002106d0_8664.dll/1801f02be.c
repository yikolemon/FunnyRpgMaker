/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f02be */

void FUN_1801f02be(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar2 = *param_2;
  uVar10 = uVar2 & 0xffff;
  if ((*(ushort *)(param_1 + 0x78) <= uVar10) ||
     (uVar13 = (ulonglong)*(ushort *)(param_1 + 0x18c),
     *(ushort *)(param_1 + 0x40) <= *(ushort *)(param_1 + 0x18c))) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    goto LAB_1801f04c5;
  }
  uVar15 = (ulonglong)uVar10;
  if ((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) {
    uVar14 = (ulonglong)
             (uint)(*(int *)(*(longlong *)(param_1 + 0x80) + 4 + (ulonglong)uVar10 * 8) -
                   *(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar13 * 8));
    uVar11 = (ulonglong)
             (uint)(*(int *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar10 * 8) -
                   *(int *)(*(longlong *)(param_1 + 0x48) + uVar13 * 8));
LAB_1801f03ed:
    uVar10 = (**(code **)(param_1 + 0x2e0))(param_1,uVar11,uVar14);
    uVar13 = (ulonglong)uVar10;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x164)) {
      lVar12 = (longlong)(*(int *)(lVar4 + uVar15 * 8) - *(int *)(lVar9 + uVar13 * 8)) *
               (longlong)*(int *)(param_1 + 0x160);
      uVar11 = (ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10;
      lVar9 = (longlong)(*(int *)(lVar4 + 4 + uVar15 * 8) - *(int *)(lVar9 + 4 + uVar13 * 8)) *
              (longlong)*(int *)(param_1 + 0x164);
      uVar14 = (ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10;
      goto LAB_1801f03ed;
    }
    iVar7 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(lVar4 + uVar15 * 8) - *(int *)(lVar9 + uVar13 * 8),
                       *(int *)(lVar4 + 4 + uVar15 * 8) - *(int *)(lVar9 + 4 + uVar13 * 8));
    lVar9 = (longlong)iVar7 * (longlong)*(int *)(param_1 + 0x160);
    uVar13 = lVar9 + (lVar9 >> 0x3f) + 0x8000U >> 0x10;
  }
  uVar10 = *(uint *)(param_1 + 0x1c4);
  uVar11 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    uVar3 = *(uint *)(param_1 + 0x1c8);
    iVar7 = (int)uVar13;
    bVar5 = (int)(uVar3 + uVar10) <= iVar7;
    bVar6 = iVar7 <= (int)(uVar3 - uVar10);
    uVar11 = (ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar6 || bVar5);
    if (!bVar6 && !bVar5) {
      uVar10 = -uVar3;
      if (-1 < iVar7) {
        uVar10 = uVar3;
      }
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar11;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x1f0);
  if ((bVar1 & 4) == 0) {
    iVar7 = FUN_1801f8f39(uVar11,uVar13 & 0xffffffff);
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x2c8))
                      (param_1,uVar13 & 0xffffffff,
                       *(undefined4 *)(param_1 + 0x1ac + (ulonglong)(bVar1 & 3) * 4));
    bVar1 = *(byte *)(param_1 + 0x1f0);
  }
  if ((bVar1 & 8) != 0) {
    iVar8 = *(int *)(param_1 + 0x1bc);
    if ((int)uVar13 < 0) {
      if (-iVar8 <= iVar7) {
        iVar7 = -iVar8;
      }
    }
    else if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
  }
  iVar8 = (**(code **)(param_1 + 0x2d8))
                    (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + uVar15 * 8) -
                             *(int *)(*(longlong *)(param_1 + 0x50) +
                                     (ulonglong)*(ushort *)(param_1 + 0x18c) * 8),
                     *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar15 * 8) -
                     *(int *)(*(longlong *)(param_1 + 0x50) + 4 +
                             (ulonglong)*(ushort *)(param_1 + 0x18c) * 8));
  (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar2,iVar7 - iVar8);
LAB_1801f04c5:
  *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
  *(short *)(param_1 + 400) = (short)uVar2;
  if ((*(byte *)(param_1 + 0x1f0) & 0x10) != 0) {
    *(short *)(param_1 + 0x18c) = (short)uVar2;
  }
  return;
}

