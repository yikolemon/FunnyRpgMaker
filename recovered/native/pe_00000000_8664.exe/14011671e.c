/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011671e */

void FUN_14011671e(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_b8 [104];
  longlong local_50;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar4 = (longlong)*(int *)(param_1 + 0x300);
  if (0 < lVar4) {
    piVar2 = *(int **)(param_1 + 0x308);
    do {
      if (*piVar2 == param_2) {
        return;
      }
      piVar2 = piVar2 + 0x22;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_140116948(local_b8);
  iVar1 = *(int *)(param_1 + 0x300);
  if (iVar1 == *(int *)(param_1 + 0x304)) {
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    iVar5 = iVar1 + 1;
    if (iVar1 + 1 < iVar3) {
      iVar5 = iVar3;
    }
    lVar4 = FUN_140077ab4((longlong)iVar5 * 0x88);
    if (*(longlong *)(param_1 + 0x308) != 0) {
      FUN_1401c5180(lVar4,*(longlong *)(param_1 + 0x308),(longlong)*(int *)(param_1 + 0x300) * 0x88)
      ;
      FUN_140077b90(*(undefined8 *)(param_1 + 0x308));
    }
    *(longlong *)(param_1 + 0x308) = lVar4;
    *(int *)(param_1 + 0x304) = iVar5;
    iVar1 = *(int *)(param_1 + 0x300);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x308);
  }
  FUN_1401c5180((longlong)iVar1 * 0x88 + lVar4,local_b8,0x88);
  *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 1;
  FUN_1400da5e2(local_48);
  if (local_38 != 0) {
    FUN_140077b90();
  }
  if (local_50 != 0) {
    FUN_140077b90();
  }
  *(int *)(*(longlong *)(param_1 + 0x308) + (longlong)*(int *)(param_1 + 0x300) * 0x88 + -0x88) =
       param_2;
  return;
}

