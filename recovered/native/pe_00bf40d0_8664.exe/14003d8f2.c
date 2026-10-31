/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d8f2 */

void FUN_14003d8f2(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar2 = *param_2;
  uVar9 = uVar2 & 0xffff;
  if ((*(ushort *)(param_1 + 0x78) <= uVar9) ||
     (uVar12 = (ulonglong)*(ushort *)(param_1 + 0x18c),
     *(ushort *)(param_1 + 0x40) <= *(ushort *)(param_1 + 0x18c))) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    goto LAB_14003daf9;
  }
  uVar14 = (ulonglong)uVar9;
  if ((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) {
    uVar13 = (ulonglong)
             (uint)(*(int *)(*(longlong *)(param_1 + 0x80) + 4 + (ulonglong)uVar9 * 8) -
                   *(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar12 * 8));
    uVar10 = (ulonglong)
             (uint)(*(int *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar9 * 8) -
                   *(int *)(*(longlong *)(param_1 + 0x48) + uVar12 * 8));
LAB_14003da21:
    uVar9 = (**(code **)(param_1 + 0x2e0))(param_1,uVar10,uVar13);
    uVar12 = (ulonglong)uVar9;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x58);
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x164)) {
      lVar11 = (longlong)(*(int *)(lVar4 + uVar14 * 8) - *(int *)(lVar8 + uVar12 * 8)) *
               (longlong)*(int *)(param_1 + 0x160);
      uVar10 = (ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10;
      lVar8 = (longlong)(*(int *)(lVar4 + 4 + uVar14 * 8) - *(int *)(lVar8 + 4 + uVar12 * 8)) *
              (longlong)*(int *)(param_1 + 0x164);
      uVar13 = (ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10;
      goto LAB_14003da21;
    }
    iVar7 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(lVar4 + uVar14 * 8) - *(int *)(lVar8 + uVar12 * 8),
                       *(int *)(lVar4 + 4 + uVar14 * 8) - *(int *)(lVar8 + 4 + uVar12 * 8));
    lVar8 = (longlong)iVar7 * (longlong)*(int *)(param_1 + 0x160);
    uVar12 = lVar8 + (lVar8 >> 0x3f) + 0x8000U >> 0x10;
  }
  uVar9 = *(uint *)(param_1 + 0x1c4);
  uVar10 = (ulonglong)uVar9;
  if (0 < (int)uVar9) {
    uVar3 = *(uint *)(param_1 + 0x1c8);
    iVar7 = (int)uVar12;
    bVar5 = (int)(uVar3 + uVar9) <= iVar7;
    bVar6 = iVar7 <= (int)(uVar3 - uVar9);
    uVar10 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar6 || bVar5);
    if (!bVar6 && !bVar5) {
      uVar9 = -uVar3;
      if (-1 < iVar7) {
        uVar9 = uVar3;
      }
      uVar10 = (ulonglong)uVar9;
      uVar12 = uVar10;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x1f0);
  if ((bVar1 & 4) == 0) {
    uVar9 = FUN_14004656d(uVar10,(int)uVar12,*(int *)(param_1 + 0x1ac + (ulonglong)(bVar1 & 3) * 4))
    ;
  }
  else {
    uVar9 = (**(code **)(param_1 + 0x2c8))(param_1,uVar12 & 0xffffffff);
    bVar1 = *(byte *)(param_1 + 0x1f0);
  }
  if ((bVar1 & 8) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1bc);
    if ((int)uVar12 < 0) {
      if ((int)-uVar3 <= (int)uVar9) {
        uVar9 = -uVar3;
      }
    }
    else if ((int)uVar9 <= (int)uVar3) {
      uVar9 = uVar3;
    }
  }
  iVar7 = (**(code **)(param_1 + 0x2d8))
                    (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + uVar14 * 8) -
                             *(int *)(*(longlong *)(param_1 + 0x50) +
                                     (ulonglong)*(ushort *)(param_1 + 0x18c) * 8),
                     *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar14 * 8) -
                     *(int *)(*(longlong *)(param_1 + 0x50) + 4 +
                             (ulonglong)*(ushort *)(param_1 + 0x18c) * 8));
  (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar2,uVar9 - iVar7);
LAB_14003daf9:
  *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
  *(short *)(param_1 + 400) = (short)uVar2;
  if ((*(byte *)(param_1 + 0x1f0) & 0x10) != 0) {
    *(short *)(param_1 + 0x18c) = (short)uVar2;
  }
  return;
}

