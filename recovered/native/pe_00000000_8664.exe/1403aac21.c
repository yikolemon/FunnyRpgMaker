/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403aac21 */

void FUN_1403aac21(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == -1) {
    param_2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x1c);
  }
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if (param_3 == -1) {
    param_3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x20);
  }
  iVar6 = *(int *)(param_1 + 8) + -1;
  uVar5 = *(int *)(lVar1 + 0xa8) + iVar6;
  uVar5 = (int)uVar5 >> 1 | uVar5;
  uVar5 = (int)uVar5 >> 2 | uVar5;
  uVar5 = (int)uVar5 >> 4 | uVar5;
  uVar5 = (int)uVar5 >> 8 | uVar5;
  uVar2 = FUN_1403118b9(param_2 << (param_2 < param_3),((int)uVar5 >> 0x10 | uVar5) + 1);
  uVar5 = iVar6 + *(int *)(lVar1 + 0xac);
  uVar5 = (int)uVar5 >> 1 | uVar5;
  uVar5 = (int)uVar5 >> 2 | uVar5;
  uVar5 = (int)uVar5 >> 4 | uVar5;
  uVar5 = (int)uVar5 >> 8 | uVar5;
  uVar3 = FUN_1403118b9(param_3 << (param_3 <= param_2),((int)uVar5 >> 0x10 | uVar5) + 1);
  iVar6 = FUN_14033d1af(uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar4 = FUN_14033d1af(uVar3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if ((iVar6 == param_2) && (iVar4 == param_3)) {
    return;
  }
  FUN_1403aa64b(param_1,iVar6,iVar4);
  return;
}

