/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010dc71 */

void FUN_1010dc71(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_1039d74c;
  uVar1 = *(undefined4 *)(*(int *)(DAT_1039d74c + 0x14cc) + 8);
  iVar3 = *(int *)(DAT_1039d74c + 0x1f98);
  if (iVar3 == *(int *)(DAT_1039d74c + 0x1f9c)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 8);
    if (*(int *)(iVar2 + 0x1fa0) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar2 + 0x1fa0),*(int *)(iVar2 + 0x1f98) << 3);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1fa0));
    }
    *(int *)(iVar2 + 0x1fa0) = iVar4;
    *(int *)(iVar2 + 0x1f9c) = iVar5;
    iVar3 = *(int *)(iVar2 + 0x1f98);
  }
  else {
    iVar4 = *(int *)(DAT_1039d74c + 0x1fa0);
  }
  *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = uVar1;
  *(undefined4 *)(iVar4 + iVar3 * 8) = param_1;
  *(int *)(iVar2 + 0x1f98) = *(int *)(iVar2 + 0x1f98) + 1;
  *(undefined4 *)(iVar2 + 0x1e3c) = param_1;
  return;
}

