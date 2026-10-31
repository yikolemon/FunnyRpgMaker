/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801166df */

void FUN_1801166df(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
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
    lVar3 = FUN_1800fe7f8((longlong)iVar5 << 2);
    if (*(longlong *)(lVar1 + 0x260) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(lVar1 + 0x260),(longlong)*(int *)(lVar1 + 600) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x260));
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

