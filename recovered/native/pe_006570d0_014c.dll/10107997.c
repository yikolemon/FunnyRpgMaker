/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107997 */

void FUN_10107997(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x30) & 0x80) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2894) = 0;
  iVar2 = *(int *)(param_1 + 0x14d4);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x434) == 0) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x3a8) + 0x430);
      if (iVar2 == 0) goto LAB_101079f3;
    }
    else {
      iVar2 = FUN_1011a856();
    }
    *(int *)(param_1 + 0x2894) = iVar2;
  }
LAB_101079f3:
  if (*(int *)(param_1 + 0x26a8) != 0) {
    piVar4 = *(int **)(param_1 + 0x26b0);
    iVar2 = *(int *)(param_1 + 0x26a8) * 0x24;
    do {
      if (*piVar4 == 1) {
        FUN_1011a8cd();
      }
      piVar4 = piVar4 + 9;
      iVar2 = iVar2 + -0x24;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x26ac) < 0) {
    uVar3 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 0x26b0) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(param_1 + 0x26b0),*(int *)(param_1 + 0x26a8) * 0x24);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x26b0));
    }
    *(undefined4 *)(param_1 + 0x26b0) = uVar3;
    *(undefined4 *)(param_1 + 0x26ac) = 0;
  }
  *(undefined4 *)(param_1 + 0x26a8) = 0;
  iVar2 = *(int *)(param_1 + 0x269c);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x26a4) + 4 + iVar5 * 8);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) &&
         ((*(uint *)(iVar1 + 0x10) & 0x400) == 0)) {
        FUN_1011ab9c();
        iVar2 = *(int *)(param_1 + 0x269c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

