/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003c8fa */

void FUN_14003c8fa(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *param_2;
  uVar8 = (ulonglong)uVar1;
  if ((uint)uVar1 < (uint)*(ushort *)(param_1 + 0x40)) {
    uVar2 = param_2[2];
    if ((uint)uVar2 < (uint)*(ushort *)(param_1 + 0x78)) {
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
        if ((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) {
          uVar10 = (ulonglong)
                   (uint)(*(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar8 * 8) -
                         *(int *)(*(longlong *)(param_1 + 0x80) + 4 + (ulonglong)uVar2 * 8));
          uVar8 = (ulonglong)
                  (uint)(*(int *)(*(longlong *)(param_1 + 0x48) + uVar8 * 8) -
                        *(int *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar2 * 8));
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x58);
          lVar3 = *(longlong *)(param_1 + 0x90);
          uVar9 = (ulonglong)(uint)uVar1;
          uVar10 = (ulonglong)(uint)uVar2;
          if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
            iVar4 = (**(code **)(param_1 + 0x2e0))
                              (param_1,*(int *)(lVar6 + uVar9 * 8) - *(int *)(lVar3 + uVar10 * 8),
                               *(int *)(lVar6 + 4 + uVar9 * 8) - *(int *)(lVar3 + 4 + uVar10 * 8));
            lVar6 = (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x160);
            uVar5 = (undefined4)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
            goto LAB_14003ca72;
          }
          lVar7 = ((longlong)*(int *)(lVar6 + uVar9 * 8) - (longlong)*(int *)(lVar3 + uVar10 * 8)) *
                  (longlong)*(int *)(param_1 + 0x160);
          uVar8 = (ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10;
          lVar6 = ((longlong)*(int *)(lVar6 + 4 + uVar9 * 8) -
                  (longlong)*(int *)(lVar3 + 4 + uVar10 * 8)) * (longlong)*(int *)(param_1 + 0x164);
          uVar10 = (ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10;
        }
        uVar5 = (**(code **)(param_1 + 0x2e0))(param_1,uVar8,uVar10);
      }
      else {
        uVar5 = (**(code **)(param_1 + 0x2d8))
                          (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + uVar8 * 8) -
                                   *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar2 * 8),
                           *(int *)(*(longlong *)(param_1 + 0x50) + 4 + uVar8 * 8) -
                           *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar2 * 8));
      }
      goto LAB_14003ca72;
    }
  }
  uVar5 = 0;
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
LAB_14003ca72:
  *(undefined4 *)param_2 = uVar5;
  return;
}

