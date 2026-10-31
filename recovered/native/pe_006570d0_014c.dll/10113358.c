/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113358 */

void FUN_10113358(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  uVar2 = FUN_10113122(param_1);
  iVar3 = *(int *)(iVar1 + 0x138);
  if (iVar3 == *(int *)(iVar1 + 0x13c)) {
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
    iVar4 = FUN_100fa1fa(iVar5 * 4);
    if (*(int *)(iVar1 + 0x140) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x140),*(int *)(iVar1 + 0x138) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x140));
    }
    *(int *)(iVar1 + 0x140) = iVar4;
    *(int *)(iVar1 + 0x13c) = iVar5;
    iVar3 = *(int *)(iVar1 + 0x138);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x140);
  }
  *(undefined4 *)(iVar4 + iVar3 * 4) = uVar2;
  *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
  return;
}

