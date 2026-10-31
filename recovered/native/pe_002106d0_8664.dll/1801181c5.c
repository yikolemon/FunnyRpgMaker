/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801181c5 */

void FUN_1801181c5(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(int *)(DAT_180419160 + 0x1660) == param_1) {
    FUN_180117b67(param_1,0xd,0,0);
  }
  iVar2 = *(int *)(lVar1 + 0x148);
  if (iVar2 == *(int *)(lVar1 + 0x14c)) {
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
    if (*(longlong *)(lVar1 + 0x150) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(lVar1 + 0x150),(longlong)*(int *)(lVar1 + 0x148) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x150));
    }
    *(longlong *)(lVar1 + 0x150) = lVar3;
    *(int *)(lVar1 + 0x14c) = iVar5;
    iVar2 = *(int *)(lVar1 + 0x148);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x150);
  }
  *(int *)(lVar3 + (longlong)iVar2 * 4) = param_1;
  *(int *)(lVar1 + 0x148) = *(int *)(lVar1 + 0x148) + 1;
  return;
}

