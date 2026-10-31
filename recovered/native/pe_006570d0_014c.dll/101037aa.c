/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101037aa */

void FUN_101037aa(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x26a8);
  if (iVar1 == *(int *)(param_1 + 0x26ac)) {
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    iVar3 = iVar1 + 1;
    if (iVar1 + 1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = FUN_100fa1fa(iVar3 * 0x24);
    if (*(int *)(param_1 + 0x26b0) != 0) {
      FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x26b0),*(int *)(param_1 + 0x26a8) * 0x24);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x26b0));
    }
    *(int *)(param_1 + 0x26b0) = iVar2;
    *(int *)(param_1 + 0x26ac) = iVar3;
    iVar1 = *(int *)(param_1 + 0x26a8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x26b0);
  }
  *(undefined4 *)(iVar2 + iVar1 * 0x24) = 2;
  *(undefined8 *)(iVar2 + 4 + iVar1 * 0x24) = 0;
  *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x24) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14 + iVar1 * 0x24) = 0x3f000000;
  *(undefined1 *)(iVar2 + 0x18 + iVar1 * 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x1c + iVar1 * 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x20 + iVar1 * 0x24) = param_2;
  *(int *)(param_1 + 0x26a8) = *(int *)(param_1 + 0x26a8) + 1;
  return;
}

