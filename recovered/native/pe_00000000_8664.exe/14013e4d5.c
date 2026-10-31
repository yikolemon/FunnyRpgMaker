/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013e4d5 */

void FUN_14013e4d5(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar1 = *param_2;
  uVar7 = uVar1 & 0xffff;
  if ((uVar7 < *(ushort *)(param_1 + 0x40)) && (param_2[1] < *(uint *)(param_1 + 0x1f8))) {
    iVar2 = (**(code **)(param_1 + 0x308))(param_1);
    if (*(short *)(param_1 + 0x192) == 0) {
      lVar4 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)iVar2;
      uVar6 = (ulonglong)(uVar7 * 8);
      *(int *)(*(longlong *)(param_1 + 0x48) + uVar6) =
           (int)((ulonglong)(lVar4 + 0x2000 + (lVar4 >> 0x3f)) >> 0xe);
      lVar4 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)iVar2;
      *(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar6) =
           (int)((ulonglong)(lVar4 + 0x2000 + (lVar4 >> 0x3f)) >> 0xe);
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar6) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar6);
    }
    iVar3 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar7 * 8)
                       ,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar7 * 8));
    if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
      iVar5 = -(iVar2 - iVar3);
      if (iVar5 < 0) {
        iVar5 = iVar2 - iVar3;
      }
      if (*(int *)(param_1 + 0x1c0) < iVar5) {
        iVar2 = iVar3;
      }
      iVar2 = (**(code **)(param_1 + 0x2c8))(param_1,iVar2,0);
    }
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x40,uVar1,iVar2 - iVar3);
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  *(short *)(param_1 + 0x18c) = (short)uVar1;
  *(short *)(param_1 + 0x18e) = (short)uVar1;
  return;
}

