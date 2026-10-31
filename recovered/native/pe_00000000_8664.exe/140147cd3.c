/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140147cd3 */

void FUN_140147cd3(uint param_1,uint param_2,uint param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_3;
  iVar6 = *(int *)(param_5 + uVar7 * 8);
  iVar5 = *(int *)(param_5 + 4 + uVar7 * 8);
  iVar2 = *(int *)(param_4 + uVar7 * 8);
  iVar3 = *(int *)(param_4 + 4 + uVar7 * 8);
  if (iVar5 != iVar3 || iVar6 != iVar2) {
    iVar6 = iVar6 - iVar2;
    iVar5 = iVar5 - iVar3;
    if (param_1 < param_3) {
      uVar4 = (ulonglong)param_1;
      do {
        piVar1 = (int *)(param_5 + uVar4 * 8);
        *piVar1 = *piVar1 + iVar6;
        piVar1 = (int *)(param_5 + 4 + uVar4 * 8);
        *piVar1 = *piVar1 + iVar5;
        uVar4 = uVar4 + 1;
      } while (uVar7 != uVar4);
    }
    if (param_3 < param_2) {
      do {
        piVar1 = (int *)(param_5 + 8 + uVar7 * 8);
        *piVar1 = *piVar1 + iVar6;
        piVar1 = (int *)(param_5 + 0xc + uVar7 * 8);
        *piVar1 = *piVar1 + iVar5;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
    }
  }
  return;
}

