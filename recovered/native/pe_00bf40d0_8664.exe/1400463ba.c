/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400463ba */

void FUN_1400463ba(longlong *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)param_4;
  uVar6 = (ulonglong)param_4;
  iVar2 = *(int *)(param_1[1] + uVar6 * 8) - *(int *)(*param_1 + uVar6 * 8);
  if (iVar2 != 0) {
    if (param_2 < param_4) {
      uVar3 = (ulonglong)param_2;
      do {
        piVar1 = (int *)(param_1[1] + uVar3 * 8);
        *piVar1 = *piVar1 + iVar2;
        uVar3 = uVar3 + 1;
      } while (uVar6 != uVar3);
    }
    while (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, uVar4 <= param_3) {
      piVar1 = (int *)(param_1[1] + uVar5 * 8);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  return;
}

