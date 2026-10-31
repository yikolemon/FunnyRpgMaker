/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b467 */

void __fastcall FUN_0043b467(int param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (uint)(ushort)*param_2;
  if ((uVar6 < *(ushort *)(param_1 + 0x28)) &&
     (uVar5 = (uint)(ushort)param_2[1], uVar5 < *(ushort *)(param_1 + 0x44))) {
    if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
      if ((*(short *)(param_1 + 0xee) == 0) || (*(short *)(param_1 + 0xf0) == 0)) {
        uVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 4 + uVar6 * 8) -
                *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar5 * 8);
        uVar8 = *(int *)(*(int *)(param_1 + 0x2c) + uVar6 * 8) -
                *(int *)(*(int *)(param_1 + 0x48) + uVar5 * 8);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x34);
        iVar1 = *(int *)(param_1 + 0x50);
        if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc0)) {
          iVar3 = (**(code **)(param_1 + 0x1e0))
                            (param_1,*(int *)(iVar3 + uVar6 * 8) - *(int *)(iVar1 + uVar5 * 8),
                             *(int *)(iVar3 + 4 + uVar6 * 8) - *(int *)(iVar1 + 4 + uVar5 * 8));
          lVar2 = (longlong)iVar3 * (longlong)*(int *)(param_1 + 0xbc);
          iVar3 = (int)(lVar2 >> 0x3f);
          lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
          uVar6 = (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
          goto LAB_0043b5cb;
        }
        lVar2 = (longlong)(*(int *)(iVar3 + uVar6 * 8) - *(int *)(iVar1 + uVar5 * 8)) *
                (longlong)*(int *)(param_1 + 0xbc);
        iVar7 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar7,iVar7) + 0x8000;
        uVar8 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
        lVar2 = (longlong)(*(int *)(iVar3 + 4 + uVar6 * 8) - *(int *)(iVar1 + 4 + uVar5 * 8)) *
                (longlong)*(int *)(param_1 + 0xc0);
        iVar3 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
        uVar4 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
      }
      uVar6 = (**(code **)(param_1 + 0x1e0))(param_1,uVar8,uVar4);
    }
    else {
      uVar6 = (**(code **)(param_1 + 0x1dc))
                        (param_1,*(int *)(*(int *)(param_1 + 0x30) + uVar6 * 8) -
                                 *(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 8),
                         *(int *)(*(int *)(param_1 + 0x30) + 4 + uVar6 * 8) -
                         *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar5 * 8));
    }
  }
  else {
    uVar6 = 0;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
LAB_0043b5cb:
  *param_2 = uVar6;
  return;
}

