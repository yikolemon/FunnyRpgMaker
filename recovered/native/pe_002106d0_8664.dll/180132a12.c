/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132a12 */

void FUN_180132a12(int *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < *param_1) {
    *(undefined1 *)(*(longlong *)(param_1 + 2) + (longlong)param_2) = 0;
  }
  iVar3 = param_2 + 1;
  if (param_2 == 0) {
    iVar3 = 0;
  }
  iVar4 = param_1[1];
  if (iVar4 < iVar3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    uVar1 = FUN_1800fe7f8((longlong)iVar4);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = iVar4;
  }
  lVar2 = (longlong)*param_1;
  if (*param_1 < iVar3) {
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 2) + lVar2) = 0;
      lVar2 = lVar2 + 1;
    } while (iVar3 != lVar2);
  }
  *param_1 = iVar3;
  return;
}

