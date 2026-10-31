/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f9f7 */

void FUN_14008f9f7(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar2 = *(int *)(lVar1 + 600);
  if (iVar2 == *(int *)(lVar1 + 0x25c)) {
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    iVar5 = iVar2 + 1;
    if (iVar2 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    lVar3 = FUN_140077ab4((longlong)iVar5 << 2);
    if (*(longlong *)(lVar1 + 0x260) != 0) {
      FUN_1401c5180(lVar3,*(longlong *)(lVar1 + 0x260),(longlong)*(int *)(lVar1 + 600) << 2);
      FUN_140077b90(*(undefined8 *)(lVar1 + 0x260));
    }
    *(longlong *)(lVar1 + 0x260) = lVar3;
    *(int *)(lVar1 + 0x25c) = iVar5;
    iVar2 = *(int *)(lVar1 + 600);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x260);
  }
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar1 + 0x244);
  *(int *)(lVar1 + 600) = *(int *)(lVar1 + 600) + 1;
  *(undefined4 *)(lVar1 + 0x244) = param_1;
  return;
}

