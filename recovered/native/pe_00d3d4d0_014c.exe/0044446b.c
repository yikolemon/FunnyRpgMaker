/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044446b */

undefined4 __fastcall
FUN_0044446b(int param_1,uint *param_2,uint *param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  bVar8 = (*(byte *)(param_1 + 0x148) & 1) == 0;
  iVar3 = 0x28;
  if (bVar8) {
    iVar3 = 0x44;
  }
  uVar1 = *(ushort *)(param_1 + 0xea + (uint)bVar8 * 2);
  uVar5 = (uint)uVar1;
  if (uVar1 < *(ushort *)(param_1 + iVar3)) {
    if (param_5 != (uint *)0x0) {
      uVar6 = 0xffffffff;
      if (param_4 == *(int *)(param_1 + 8 + iVar3)) {
        uVar6 = uVar5;
      }
      *param_5 = uVar6;
    }
    iVar7 = *(int *)(param_1 + 4 + iVar3);
    iVar3 = *(int *)(param_1 + 8 + iVar3);
    iVar3 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(int *)(iVar3 + uVar5 * 8) - *(int *)(iVar7 + uVar5 * 8),
                       *(int *)(iVar3 + 4 + uVar5 * 8) - *(int *)(iVar7 + 4 + uVar5 * 8));
    lVar2 = (longlong)iVar3 * (longlong)*(int *)(param_1 + 0x1d4);
    iVar7 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar7,iVar7) + 0x8000;
    *param_2 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
    lVar2 = (longlong)iVar3 * (longlong)*(int *)(param_1 + 0x1d8);
    iVar3 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
    *param_3 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
  return uVar4;
}

