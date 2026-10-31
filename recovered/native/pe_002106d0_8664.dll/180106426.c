/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106426 */

void FUN_180106426(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = DAT_180419160;
  *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
  iVar2 = *(int *)(lVar1 + 0x1300);
  if (iVar2 == *(int *)(lVar1 + 0x1304)) {
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
    lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
    if (*(longlong *)(lVar1 + 0x1308) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(lVar1 + 0x1308),(longlong)*(int *)(lVar1 + 0x1300) << 3);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x1308));
    }
    *(longlong *)(lVar1 + 0x1308) = lVar3;
    *(int *)(lVar1 + 0x1304) = iVar5;
    iVar2 = *(int *)(lVar1 + 0x1300);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x1308);
  }
  *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_1;
  *(int *)(lVar1 + 0x1300) = *(int *)(lVar1 + 0x1300) + 1;
  FUN_180198dd1(param_1);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar3 = 0;
    do {
      *(undefined2 *)(*(longlong *)(lVar1 + lVar3) + 0x54) = *(undefined2 *)(param_1 + 0x2d4);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  return;
}

