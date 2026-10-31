/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801598f8 */

longlong FUN_1801598f8(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = param_1[8];
  if (iVar2 == *param_1) {
    iVar1 = iVar2 + 1;
    iVar4 = param_1[1];
    if (iVar2 < iVar4) {
      lVar3 = *(longlong *)(param_1 + 2);
      iVar4 = iVar1;
    }
    else {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      lVar3 = FUN_1800fe7f8((longlong)iVar4 * 0xb0);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xb0);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar3;
      param_1[1] = iVar4;
      iVar4 = param_1[8] + 1;
    }
    *param_1 = iVar1;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 2);
    iVar4 = *(int *)(lVar3 + (longlong)iVar2 * 0xb0);
  }
  param_1[8] = iVar4;
  FUN_1801524c8(lVar3 + (longlong)iVar2 * 0xb0);
  param_1[9] = param_1[9] + 1;
  return (longlong)iVar2 * 0xb0 + *(longlong *)(param_1 + 2);
}

