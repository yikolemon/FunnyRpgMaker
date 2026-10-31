/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f8d86 */

void FUN_1801f8d86(longlong *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_4;
  iVar2 = *(int *)(param_1[1] + uVar4 * 8) - *(int *)(*param_1 + uVar4 * 8);
  if (iVar2 != 0) {
    if (param_2 < param_4) {
      uVar3 = (ulonglong)param_2;
      do {
        piVar1 = (int *)(param_1[1] + uVar3 * 8);
        *piVar1 = *piVar1 + iVar2;
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    while( true ) {
      param_4 = param_4 + 1;
      if (param_3 < param_4) break;
      piVar1 = (int *)(param_1[1] + (ulonglong)param_4 * 8);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  return;
}

