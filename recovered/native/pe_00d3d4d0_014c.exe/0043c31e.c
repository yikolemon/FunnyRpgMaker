/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043c31e */

void __fastcall FUN_0043c31e(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar1 = *param_2;
  uVar9 = uVar1 & 0xffff;
  if ((*(ushort *)(param_1 + 0x44) <= uVar9) ||
     (uVar10 = (uint)*(ushort *)(param_1 + 0xe8),
     *(ushort *)(param_1 + 0x28) <= *(ushort *)(param_1 + 0xe8))) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
    goto LAB_0043c506;
  }
  iVar6 = param_1;
  if ((*(short *)(param_1 + 0xee) == 0) || (*(short *)(param_1 + 0xf0) == 0)) {
    uVar11 = *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar9 * 8) -
             *(int *)(*(int *)(param_1 + 0x2c) + 4 + uVar10 * 8);
    uVar5 = *(int *)(*(int *)(param_1 + 0x48) + uVar9 * 8) -
            *(int *)(*(int *)(param_1 + 0x2c) + uVar10 * 8);
LAB_0043c429:
    uVar10 = (**(code **)(param_1 + 0x1e0))(param_1,uVar5,uVar11);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xc0)) {
      lVar3 = (longlong)(*(int *)(iVar2 + uVar9 * 8) - *(int *)(iVar4 + uVar10 * 8)) *
              (longlong)*(int *)(param_1 + 0xbc);
      iVar8 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x8000;
      uVar5 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
      lVar3 = (longlong)(*(int *)(iVar2 + 4 + uVar9 * 8) - *(int *)(iVar4 + 4 + uVar10 * 8)) *
              (longlong)*(int *)(param_1 + 0xc0);
      iVar4 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar4,iVar4) + 0x8000;
      uVar11 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
      goto LAB_0043c429;
    }
    iVar4 = (**(code **)(param_1 + 0x1e0))
                      (param_1,*(int *)(iVar2 + uVar9 * 8) - *(int *)(iVar4 + uVar10 * 8),
                       *(int *)(iVar2 + 4 + uVar9 * 8) - *(int *)(iVar4 + 4 + uVar10 * 8));
    lVar3 = (longlong)iVar4 * (longlong)*(int *)(param_1 + 0xbc);
    iVar4 = (int)(lVar3 >> 0x3f);
    lVar3 = lVar3 + CONCAT44(iVar4,iVar4) + 0x8000;
    uVar10 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
  }
  iVar4 = *(int *)(param_1 + 0x120);
  uVar11 = uVar10;
  if (((0 < iVar4) &&
      (uVar5 = *(uint *)(param_1 + 0x124),
      (int)(uVar5 - iVar4) < (int)uVar10 && (int)uVar10 < (int)(uVar5 + iVar4))) &&
     (uVar11 = -uVar5, -1 < (int)uVar10)) {
    uVar11 = uVar5;
  }
  uVar10 = (uint)*(byte *)(param_1 + 0x148);
  iVar4 = *(int *)(param_1 + 0x108 + (uVar10 & 3) * 4);
  if ((*(byte *)(param_1 + 0x148) & 4) == 0) {
    uVar5 = FUN_004445ac(iVar6,uVar11,iVar4);
  }
  else {
    uVar5 = (**(code **)(param_1 + 0x1d0))(param_1,uVar11,iVar4);
    uVar10 = (uint)*(byte *)(param_1 + 0x148);
  }
  if ((uVar10 & 8) != 0) {
    uVar10 = *(uint *)(param_1 + 0x118);
    if ((int)uVar11 < 0) {
      if ((int)-uVar10 <= (int)uVar5) {
        uVar5 = -uVar10;
      }
    }
    else if ((int)uVar5 <= (int)uVar10) {
      uVar5 = uVar10;
    }
  }
  iVar6 = (**(code **)(param_1 + 0x1dc))
                    (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar9 * 8) -
                             *(int *)(*(int *)(param_1 + 0x30) +
                                     (uint)*(ushort *)(param_1 + 0xe8) * 8),
                     *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar9 * 8) -
                     *(int *)(*(int *)(param_1 + 0x30) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8))
  ;
  (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar9,uVar5 - iVar6);
LAB_0043c506:
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  uVar7 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 0xec) = uVar7;
  if ((*(byte *)(param_1 + 0x148) & 0x10) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = uVar7;
  }
  return;
}

