/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011767a */

longlong FUN_14011767a(int *param_1)

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
      lVar3 = FUN_140077ab4((longlong)iVar4 * 0x250);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x250);
        FUN_140077b90(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar3;
      param_1[1] = iVar4;
      iVar4 = param_1[8] + 1;
    }
    *param_1 = iVar1;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 2);
    iVar4 = *(int *)(lVar3 + (longlong)iVar2 * 0x250);
  }
  param_1[8] = iVar4;
  FUN_140117750(lVar3 + (longlong)iVar2 * 0x250);
  param_1[9] = param_1[9] + 1;
  return (longlong)iVar2 * 0x250 + *(longlong *)(param_1 + 2);
}

