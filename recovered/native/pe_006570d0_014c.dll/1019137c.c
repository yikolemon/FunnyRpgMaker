/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019137c */

void FUN_1019137c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x284);
  if (iVar1 == *(int *)(param_1 + 0x288)) {
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
    iVar2 = FUN_100fa1fa(iVar3 * 4);
    if (*(int *)(param_1 + 0x28c) != 0) {
      FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x28c),*(int *)(param_1 + 0x284) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x28c));
    }
    *(int *)(param_1 + 0x28c) = iVar2;
    *(int *)(param_1 + 0x288) = iVar3;
    iVar1 = *(int *)(param_1 + 0x284);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28c);
  }
  *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
  return;
}

