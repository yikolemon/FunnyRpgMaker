/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b032 */

void __fastcall FUN_0043b032(int param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  
  uVar1 = *param_2;
  uVar6 = uVar1 & 0xffff;
  if ((uVar6 < *(ushort *)(param_1 + 0x28)) && (param_2[1] < *(uint *)(param_1 + 0x150))) {
    iVar3 = (**(code **)(param_1 + 500))(param_1,param_2[1]);
    if (*(short *)(param_1 + 0xee) == 0) {
      lVar2 = (longlong)(int)*(short *)(param_1 + 0xfc) * (longlong)iVar3;
      iVar5 = (int)(lVar2 >> 0x3f);
      lVar2 = lVar2 + CONCAT44(iVar5,iVar5) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x2c) + uVar6 * 8) =
           (int)((ulonglong)lVar2 >> 0x20) * 0x40000 | (uint)lVar2 >> 0xe;
      lVar2 = (longlong)(int)*(short *)(param_1 + 0xfe) * (longlong)iVar3;
      iVar5 = (int)(lVar2 >> 0x3f);
      lVar2 = lVar2 + CONCAT44(iVar5,iVar5) + 0x2000;
      *(uint *)(*(int *)(param_1 + 0x2c) + 4 + uVar6 * 8) =
           (int)((ulonglong)lVar2 >> 0x20) * 0x40000 | (uint)lVar2 >> 0xe;
      *(undefined8 *)(*(int *)(param_1 + 0x30) + uVar6 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x2c) + uVar6 * 8);
    }
    iVar5 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + uVar6 * 8),
                       *(undefined4 *)(*(int *)(param_1 + 0x30) + 4 + uVar6 * 8));
    if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
      iVar4 = -(iVar3 - iVar5);
      if (iVar4 < 0) {
        iVar4 = iVar3 - iVar5;
      }
      if (*(int *)(param_1 + 0x11c) < iVar4) {
        iVar3 = iVar5;
      }
      iVar3 = (**(code **)(param_1 + 0x1d0))(param_1,iVar3,0);
    }
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x28,uVar6,iVar3 - iVar5);
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  uVar7 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 0xe8) = uVar7;
  *(undefined2 *)(param_1 + 0xea) = uVar7;
  return;
}

