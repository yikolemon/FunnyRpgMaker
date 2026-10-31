/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079b62 */

void FUN_140079b62(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    iVar4 = iVar1 + 1;
    if (iVar1 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    lVar2 = FUN_140077ab4((longlong)iVar4 * 0xc);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xc);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar2;
    param_1[1] = iVar4;
    iVar1 = *param_1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
  }
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

