/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101025fb */

void FUN_101025fb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x408) = 0;
  iVar3 = *(int *)(param_1 + 0x2e8);
  iVar1 = *(int *)(param_1 + 0x400);
  if (*(int *)(iVar3 + 0x10) < iVar1) {
    uVar2 = FUN_100fa1fa(iVar1 * 2);
    if (*(int *)(iVar3 + 0x14) != 0) {
      FUN_1025b2d0(uVar2,*(int *)(iVar3 + 0x14),*(int *)(iVar3 + 0xc) * 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x14));
    }
    *(undefined4 *)(iVar3 + 0x14) = uVar2;
    *(int *)(iVar3 + 0x10) = iVar1;
    iVar3 = *(int *)(param_1 + 0x2e8);
  }
  iVar1 = *(int *)(param_1 + 0x404);
  if (*(int *)(iVar3 + 0x1c) < iVar1) {
    uVar2 = FUN_100fa1fa(iVar1 * 0x14);
    if (*(int *)(iVar3 + 0x20) != 0) {
      FUN_1025b2d0(uVar2,*(int *)(iVar3 + 0x20),*(int *)(iVar3 + 0x18) * 0x14);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x20));
    }
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
    *(int *)(iVar3 + 0x1c) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  return;
}

