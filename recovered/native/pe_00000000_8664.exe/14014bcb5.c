/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014bcb5 */

int FUN_14014bcb5(byte *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*piVar2 < param_2) {
    uVar4 = (ulonglong)*param_1;
    if (1 < uVar4) {
      uVar5 = 1;
      do {
        if (param_2 <= piVar2[uVar5]) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 8) + -4 + uVar5 * 4);
          iVar3 = FUN_14012a478(param_2 - piVar2[uVar5 - 1],
                                *(int *)(*(longlong *)(param_1 + 8) + uVar5 * 4) - iVar1,
                                piVar2[uVar5] - piVar2[uVar5 - 1]);
          iVar3 = iVar3 + iVar1;
          goto LAB_14014bd1b;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + -4 + uVar4 * 4);
  }
  else {
    iVar3 = **(int **)(param_1 + 8);
  }
LAB_14014bd1b:
  return iVar3 << 0x10;
}

