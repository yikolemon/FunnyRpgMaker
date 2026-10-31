/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4bae */

void __fastcall FUN_101e4bae(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = *param_2;
  uVar10 = uVar1 & 0xffff;
  if ((*(ushort *)(param_1 + 0x44) <= uVar10) ||
     (uVar11 = (uint)*(ushort *)(param_1 + 0xe8),
     *(ushort *)(param_1 + 0x28) <= *(ushort *)(param_1 + 0xe8))) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
    goto LAB_101e4d96;
  }
  iVar6 = param_1;
  if ((*(short *)(param_1 + 0xee) == 0) || (*(short *)(param_1 + 0xf0) == 0)) {
    uVar12 = *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar10 * 8) -
             *(int *)(*(int *)(param_1 + 0x2c) + 4 + uVar11 * 8);
    uVar9 = *(int *)(*(int *)(param_1 + 0x48) + uVar10 * 8) -
            *(int *)(*(int *)(param_1 + 0x2c) + uVar11 * 8);
LAB_101e4cb9:
    uVar11 = (**(code **)(param_1 + 0x1e0))(param_1,uVar9,uVar12);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xc0)) {
      lVar4 = (longlong)(*(int *)(iVar2 + uVar10 * 8) - *(int *)(iVar5 + uVar11 * 8)) *
              (longlong)*(int *)(param_1 + 0xbc);
      iVar8 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar8,iVar8) + 0x8000;
      uVar9 = (int)((ulonglong)lVar4 >> 0x20) * 0x10000 | (uint)lVar4 >> 0x10;
      lVar4 = (longlong)(*(int *)(iVar2 + 4 + uVar10 * 8) - *(int *)(iVar5 + 4 + uVar11 * 8)) *
              (longlong)*(int *)(param_1 + 0xc0);
      iVar5 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar5,iVar5) + 0x8000;
      uVar12 = (int)((ulonglong)lVar4 >> 0x20) * 0x10000 | (uint)lVar4 >> 0x10;
      goto LAB_101e4cb9;
    }
    iVar5 = (**(code **)(param_1 + 0x1e0))
                      (param_1,*(int *)(iVar2 + uVar10 * 8) - *(int *)(iVar5 + uVar11 * 8),
                       *(int *)(iVar2 + 4 + uVar10 * 8) - *(int *)(iVar5 + 4 + uVar11 * 8));
    lVar4 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0xbc);
    iVar5 = (int)(lVar4 >> 0x3f);
    lVar4 = lVar4 + CONCAT44(iVar5,iVar5) + 0x8000;
    uVar11 = (int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10;
  }
  iVar5 = *(int *)(param_1 + 0x120);
  uVar12 = uVar11;
  if (((0 < iVar5) &&
      (uVar9 = *(uint *)(param_1 + 0x124),
      (int)(uVar9 - iVar5) < (int)uVar11 && (int)uVar11 < (int)(uVar9 + iVar5))) &&
     (uVar12 = -uVar9, -1 < (int)uVar11)) {
    uVar12 = uVar9;
  }
  uVar11 = (uint)*(byte *)(param_1 + 0x148);
  uVar3 = *(undefined4 *)(param_1 + 0x108 + (uVar11 & 3) * 4);
  if ((*(byte *)(param_1 + 0x148) & 4) == 0) {
    iVar6 = FUN_101ece37(iVar6,uVar12,uVar3);
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x1d0))(param_1,uVar12,uVar3);
    uVar11 = (uint)*(byte *)(param_1 + 0x148);
  }
  if ((uVar11 & 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x118);
    if ((int)uVar12 < 0) {
      if (-iVar5 <= iVar6) {
        iVar6 = -iVar5;
      }
    }
    else if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
  }
  iVar5 = (**(code **)(param_1 + 0x1dc))
                    (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar10 * 8) -
                             *(int *)(*(int *)(param_1 + 0x30) +
                                     (uint)*(ushort *)(param_1 + 0xe8) * 8),
                     *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar10 * 8) -
                     *(int *)(*(int *)(param_1 + 0x30) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8))
  ;
  (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar10,iVar6 - iVar5);
LAB_101e4d96:
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  uVar7 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 0xec) = uVar7;
  if ((*(byte *)(param_1 + 0x148) & 0x10) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = uVar7;
  }
  return;
}

