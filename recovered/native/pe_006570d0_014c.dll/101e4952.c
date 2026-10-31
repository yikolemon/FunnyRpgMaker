/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4952 */

void __fastcall FUN_101e4952(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  
  uVar1 = *param_2;
  uVar12 = uVar1 & 0xffff;
  if (((uVar12 < *(ushort *)(param_1 + 0x44)) &&
      (uVar5 = param_2[1], uVar5 + 1 < *(int *)(param_1 + 0x150) + 1U)) &&
     (uVar8 = *(ushort *)(param_1 + 0xe8), uVar8 < *(ushort *)(param_1 + 0x28))) {
    if (uVar5 == 0xffffffff) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(param_1 + 500))(param_1,uVar5);
      uVar8 = *(ushort *)(param_1 + 0xe8);
    }
    uVar6 = *(uint *)(param_1 + 0x124);
    iVar9 = -(uVar5 - uVar6);
    if (iVar9 < 0) {
      iVar9 = uVar5 - uVar6;
    }
    uVar10 = -uVar6;
    if (-1 < (int)uVar5) {
      uVar10 = uVar6;
    }
    if (*(int *)(param_1 + 0x120) <= iVar9) {
      uVar10 = uVar5;
    }
    if (*(short *)(param_1 + 0xf0) == 0) {
      lVar4 = (longlong)(int)*(short *)(param_1 + 0xfc) * (longlong)(int)uVar10;
      iVar9 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar9,iVar9) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x48) + uVar12 * 8) =
           ((int)((ulonglong)lVar4 >> 0x20) * 0x40000 | (uint)lVar4 >> 0xe) +
           *(int *)(*(int *)(param_1 + 0x2c) + (uint)uVar8 * 8);
      lVar4 = (longlong)(int)*(short *)(param_1 + 0xfe) * (longlong)(int)uVar10;
      iVar9 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar9,iVar9) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x48) + 4 + uVar12 * 8) =
           ((int)((ulonglong)lVar4 >> 0x20) * 0x40000 | (uint)lVar4 >> 0xe) +
           *(int *)(*(int *)(param_1 + 0x2c) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8);
      *(undefined8 *)(*(int *)(param_1 + 0x4c) + uVar12 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x48) + uVar12 * 8);
      uVar8 = *(ushort *)(param_1 + 0xe8);
    }
    uVar6 = (**(code **)(param_1 + 0x1e0))
                      (param_1,*(int *)(*(int *)(param_1 + 0x48) + uVar12 * 8) -
                               *(int *)(*(int *)(param_1 + 0x2c) + (uint)uVar8 * 8),
                       *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar12 * 8) -
                       *(int *)(*(int *)(param_1 + 0x2c) + 4 + (uint)uVar8 * 8));
    iVar9 = param_1;
    iVar7 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar12 * 8) -
                               *(int *)(*(int *)(param_1 + 0x30) +
                                       (uint)*(ushort *)(param_1 + 0xe8) * 8),
                       *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar12 * 8) -
                       *(int *)(*(int *)(param_1 + 0x30) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8
                               ));
    uVar5 = -uVar10;
    if (-1 < (int)(uVar6 ^ uVar10)) {
      uVar5 = uVar10;
    }
    if (*(char *)(param_1 + 300) == '\0') {
      uVar5 = uVar10;
    }
    uVar10 = (uint)*(byte *)(param_1 + 0x148);
    uVar2 = *(undefined4 *)(param_1 + 0x108 + (uVar10 & 3) * 4);
    if ((*(byte *)(param_1 + 0x148) & 4) == 0) {
      iVar9 = FUN_101ece37(iVar9,uVar5,uVar2);
    }
    else {
      if (*(short *)(param_1 + 0xee) == *(short *)(param_1 + 0xf0)) {
        iVar9 = -(uVar5 - uVar6);
        if (iVar9 < 0) {
          iVar9 = uVar5 - uVar6;
        }
        if (*(int *)(param_1 + 0x11c) < iVar9) {
          uVar5 = uVar6;
        }
      }
      iVar9 = (**(code **)(param_1 + 0x1d0))(param_1,uVar5,uVar2);
      uVar10 = (uint)*(byte *)(param_1 + 0x148);
    }
    if ((uVar10 & 8) != 0) {
      iVar3 = *(int *)(param_1 + 0x118);
      if ((int)uVar6 < 0) {
        if (-iVar3 <= iVar9) {
          iVar9 = -iVar3;
        }
      }
      else if (iVar9 <= iVar3) {
        iVar9 = iVar3;
      }
    }
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar12,iVar9 - iVar7);
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  uVar11 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 0xec) = uVar11;
  if ((*(byte *)(param_1 + 0x148) & 0x10) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = uVar11;
  }
  return;
}

