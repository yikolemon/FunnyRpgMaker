/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101188bc */

undefined * FUN_101188bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar2 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x26cc) = 0;
  piVar1 = (int *)(iVar2 + 0x26d0);
  if (*(int *)(iVar2 + 0x26d4) < 0) {
    uVar4 = FUN_100fa1fa(0);
    if (*(int *)(iVar2 + 0x26d8) != 0) {
      FUN_1025b2d0(uVar4,*(int *)(iVar2 + 0x26d8),*(undefined4 *)(iVar2 + 0x26d0));
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x26d8));
    }
    *(undefined4 *)(iVar2 + 0x26d8) = uVar4;
    *(undefined4 *)(iVar2 + 0x26d4) = 0;
    *(undefined4 *)(iVar2 + 0x26d0) = 0;
  }
  else {
    *piVar1 = 0;
    if (*(int *)(iVar2 + 0x26d4) != 0) {
      iVar6 = *(int *)(iVar2 + 0x26d8);
      iVar3 = 0;
      goto LAB_10118986;
    }
  }
  iVar6 = FUN_100fa1fa(8);
  if (*(int *)(iVar2 + 0x26d8) != 0) {
    FUN_1025b2d0(iVar6,*(int *)(iVar2 + 0x26d8),*(undefined4 *)(iVar2 + 0x26d0));
    FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x26d8));
  }
  *(int *)(iVar2 + 0x26d8) = iVar6;
  *(undefined4 *)(iVar2 + 0x26d4) = 8;
  iVar3 = *(int *)(iVar2 + 0x26d0);
LAB_10118986:
  *(undefined1 *)(iVar6 + iVar3) = 0;
  *(int *)(iVar2 + 0x26d0) = *(int *)(iVar2 + 0x26d0) + 1;
  if (*(int *)(iVar2 + 0x26dc) != 0) {
    iVar6 = *(int *)(iVar2 + 0x26e4);
    iVar3 = *(int *)(iVar2 + 0x26dc) * 0x24;
    do {
      (**(code **)(iVar6 + 0x1c))(iVar2,iVar6,piVar1);
      iVar6 = iVar6 + 0x24;
      iVar3 = iVar3 + -0x24;
    } while (iVar3 != 0);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *piVar1 + -1 + (uint)(*piVar1 == 0);
  }
  puVar5 = &DAT_1039d750;
  if (*(undefined **)(iVar2 + 0x26d8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(iVar2 + 0x26d8);
  }
  return puVar5;
}

