/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043c0c2 */

void __fastcall FUN_0043c0c2(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  
  uVar1 = *param_2;
  uVar11 = uVar1 & 0xffff;
  if (((uVar11 < *(ushort *)(param_1 + 0x44)) &&
      (uVar4 = param_2[1], uVar4 + 1 < *(int *)(param_1 + 0x150) + 1U)) &&
     (uVar7 = *(ushort *)(param_1 + 0xe8), uVar7 < *(ushort *)(param_1 + 0x28))) {
    if (uVar4 == 0xffffffff) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(param_1 + 500))(param_1,uVar4);
      uVar7 = *(ushort *)(param_1 + 0xe8);
    }
    uVar5 = *(uint *)(param_1 + 0x124);
    iVar8 = -(uVar4 - uVar5);
    if (iVar8 < 0) {
      iVar8 = uVar4 - uVar5;
    }
    uVar9 = -uVar5;
    if (-1 < (int)uVar4) {
      uVar9 = uVar5;
    }
    if (*(int *)(param_1 + 0x120) <= iVar8) {
      uVar9 = uVar4;
    }
    if (*(short *)(param_1 + 0xf0) == 0) {
      lVar3 = (longlong)(int)*(short *)(param_1 + 0xfc) * (longlong)(int)uVar9;
      iVar8 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x48) + uVar11 * 8) =
           ((int)((ulonglong)lVar3 >> 0x20) * 0x40000 | (uint)lVar3 >> 0xe) +
           *(int *)(*(int *)(param_1 + 0x2c) + (uint)uVar7 * 8);
      lVar3 = (longlong)(int)*(short *)(param_1 + 0xfe) * (longlong)(int)uVar9;
      iVar8 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x48) + 4 + uVar11 * 8) =
           ((int)((ulonglong)lVar3 >> 0x20) * 0x40000 | (uint)lVar3 >> 0xe) +
           *(int *)(*(int *)(param_1 + 0x2c) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8);
      *(undefined8 *)(*(int *)(param_1 + 0x4c) + uVar11 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x48) + uVar11 * 8);
      uVar7 = *(ushort *)(param_1 + 0xe8);
    }
    uVar5 = (**(code **)(param_1 + 0x1e0))
                      (param_1,*(int *)(*(int *)(param_1 + 0x48) + uVar11 * 8) -
                               *(int *)(*(int *)(param_1 + 0x2c) + (uint)uVar7 * 8),
                       *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar11 * 8) -
                       *(int *)(*(int *)(param_1 + 0x2c) + 4 + (uint)uVar7 * 8));
    iVar8 = param_1;
    iVar6 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar11 * 8) -
                               *(int *)(*(int *)(param_1 + 0x30) +
                                       (uint)*(ushort *)(param_1 + 0xe8) * 8),
                       *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar11 * 8) -
                       *(int *)(*(int *)(param_1 + 0x30) + 4 + (uint)*(ushort *)(param_1 + 0xe8) * 8
                               ));
    uVar4 = -uVar9;
    if (-1 < (int)(uVar5 ^ uVar9)) {
      uVar4 = uVar9;
    }
    if (*(char *)(param_1 + 300) == '\0') {
      uVar4 = uVar9;
    }
    uVar9 = (uint)*(byte *)(param_1 + 0x148);
    iVar2 = *(int *)(param_1 + 0x108 + (uVar9 & 3) * 4);
    if ((*(byte *)(param_1 + 0x148) & 4) == 0) {
      uVar4 = FUN_004445ac(iVar8,uVar4,iVar2);
    }
    else {
      if (*(short *)(param_1 + 0xee) == *(short *)(param_1 + 0xf0)) {
        iVar8 = -(uVar4 - uVar5);
        if (iVar8 < 0) {
          iVar8 = uVar4 - uVar5;
        }
        if (*(int *)(param_1 + 0x11c) < iVar8) {
          uVar4 = uVar5;
        }
      }
      uVar4 = (**(code **)(param_1 + 0x1d0))(param_1,uVar4,iVar2);
      uVar9 = (uint)*(byte *)(param_1 + 0x148);
    }
    if ((uVar9 & 8) != 0) {
      uVar9 = *(uint *)(param_1 + 0x118);
      if ((int)uVar5 < 0) {
        if ((int)-uVar9 <= (int)uVar4) {
          uVar4 = -uVar9;
        }
      }
      else if ((int)uVar4 <= (int)uVar9) {
        uVar4 = uVar9;
      }
    }
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar11,uVar4 - iVar6);
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  uVar10 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 0xec) = uVar10;
  if ((*(byte *)(param_1 + 0x148) & 0x10) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = uVar10;
  }
  return;
}

