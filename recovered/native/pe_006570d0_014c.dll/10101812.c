/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101812 */

void FUN_10101812(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_100fa6c3("Docking",0,0);
  iVar2 = *(int *)(param_1 + 0x26dc);
  if (iVar2 == *(int *)(param_1 + 0x26e0)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 0x24);
    if (*(int *)(param_1 + 0x26e4) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x26e4),*(int *)(param_1 + 0x26dc) * 0x24);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x26e4));
    }
    *(int *)(param_1 + 0x26e4) = iVar3;
    *(int *)(param_1 + 0x26e0) = iVar4;
    iVar2 = *(int *)(param_1 + 0x26dc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x26e4);
  }
  *(char **)(iVar3 + iVar2 * 0x24) = "Docking";
  *(undefined4 *)(iVar3 + 4 + iVar2 * 0x24) = uVar1;
  *(undefined1 **)(iVar3 + 8 + iVar2 * 0x24) = &LAB_101195c7;
  *(undefined1 **)(iVar3 + 0xc + iVar2 * 0x24) = &LAB_101195c7;
  *(undefined1 **)(iVar3 + 0x10 + iVar2 * 0x24) = &LAB_10119611;
  *(undefined1 **)(iVar3 + 0x14 + iVar2 * 0x24) = &LAB_1011962c;
  *(undefined1 **)(iVar3 + 0x18 + iVar2 * 0x24) = &LAB_101199eb;
  *(undefined1 **)(iVar3 + 0x1c + iVar2 * 0x24) = &LAB_10119a20;
  *(undefined4 *)(iVar3 + 0x20 + iVar2 * 0x24) = 0;
  *(int *)(param_1 + 0x26dc) = *(int *)(param_1 + 0x26dc) + 1;
  *(undefined1 **)(param_1 + 0x26c4) = &LAB_10119e47;
  return;
}

