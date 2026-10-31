/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191ca8 */

void FUN_10191ca8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == -1) {
    param_2 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c);
  }
  iVar3 = *(int *)(param_1 + 0x290);
  if (param_3 == -1) {
    param_3 = *(int *)(*(int *)(param_1 + 0x30) + 0x20);
  }
  iVar5 = *(int *)(param_1 + 8) + -1;
  uVar4 = *(int *)(iVar3 + 0x98) + iVar5;
  uVar4 = (int)uVar4 >> 1 | uVar4;
  uVar4 = (int)uVar4 >> 2 | uVar4;
  uVar4 = (int)uVar4 >> 4 | uVar4;
  uVar4 = (int)uVar4 >> 8 | uVar4;
  uVar1 = FUN_100fbc6a(param_2 << (param_2 < param_3),((int)uVar4 >> 0x10 | uVar4) + 1);
  uVar4 = iVar5 + *(int *)(iVar3 + 0x9c);
  uVar4 = (int)uVar4 >> 1 | uVar4;
  uVar4 = (int)uVar4 >> 2 | uVar4;
  uVar4 = (int)uVar4 >> 4 | uVar4;
  uVar4 = (int)uVar4 >> 8 | uVar4;
  uVar2 = FUN_100fbc6a(param_3 << (param_3 <= param_2),((int)uVar4 >> 0x10 | uVar4) + 1,uVar1);
  iVar3 = FUN_10125d9a(uVar1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar5 = FUN_10125d9a(uVar2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if ((iVar3 != param_2) || (iVar5 != param_3)) {
    FUN_101916c8(param_1,iVar3,iVar5);
  }
  return;
}

