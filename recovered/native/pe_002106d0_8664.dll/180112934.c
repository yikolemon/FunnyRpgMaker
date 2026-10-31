/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112934 */

void FUN_180112934(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = DAT_180419160;
  uVar1 = *(undefined4 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10);
  iVar3 = *(int *)(DAT_180419160 + 0x2118);
  if (iVar3 == *(int *)(DAT_180419160 + 0x211c)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_1800fe7f8((longlong)iVar6 << 3);
    if (*(longlong *)(lVar2 + 0x2120) != 0) {
      FUN_1802a82f0(lVar4,*(longlong *)(lVar2 + 0x2120),(longlong)*(int *)(lVar2 + 0x2118) << 3);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2120));
    }
    *(longlong *)(lVar2 + 0x2120) = lVar4;
    *(int *)(lVar2 + 0x211c) = iVar6;
    iVar3 = *(int *)(lVar2 + 0x2118);
  }
  else {
    lVar4 = *(longlong *)(DAT_180419160 + 0x2120);
  }
  *(ulonglong *)(lVar4 + (longlong)iVar3 * 8) = CONCAT44(uVar1,param_1);
  *(int *)(lVar2 + 0x2118) = *(int *)(lVar2 + 0x2118) + 1;
  *(undefined4 *)(lVar2 + 0x1f9c) = param_1;
  return;
}

