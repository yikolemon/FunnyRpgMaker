/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195685 */

void FUN_180195685(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *param_3;
  if (((longlong)iVar1 != 0) &&
     (((iVar1 != 1 || (*(int *)(*(longlong *)(param_3 + 2) + 0x28) != 0)) ||
      (*(longlong *)(*(longlong *)(param_3 + 2) + 0x30) != 0)))) {
    if (0 < param_3[0x30]) {
      lVar2 = *(longlong *)(param_3 + 2);
      lVar4 = 0;
      do {
        if (((*(longlong *)(lVar2 + 0x30 + lVar4) != 0) &&
            (lVar6 = (longlong)*(int *)(lVar2 + 0x44 + lVar4), lVar6 != -1)) &&
           (0 < *(int *)(lVar2 + 0x40 + lVar4))) {
          *(longlong *)(lVar2 + 0x38 + lVar4) = lVar6 + *(longlong *)(param_3 + 0x32);
        }
        lVar4 = lVar4 + 0x48;
      } while ((longlong)iVar1 * 0x48 != lVar4);
    }
    iVar1 = *param_2;
    if (iVar1 == param_2[1]) {
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
      lVar2 = FUN_1800fe7f8((longlong)iVar5 << 3);
      if (*(longlong *)(param_2 + 2) != 0) {
        FUN_1802a82f0(lVar2,*(longlong *)(param_2 + 2),(longlong)*param_2 << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_2 + 2));
      }
      *(longlong *)(param_2 + 2) = lVar2;
      param_2[1] = iVar5;
      iVar1 = *param_2;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 2);
    }
    *(int **)(lVar2 + (longlong)iVar1 * 8) = param_3;
    *param_2 = *param_2 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[8];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3[4];
  }
  return;
}

