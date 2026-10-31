/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e7c04 */

void FUN_1801e7c04(uint param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  
  if (1 < param_1) {
    uVar3 = 1;
    uVar5 = 0;
    do {
      piVar1 = *(int **)(param_2 + (ulonglong)uVar3 * 8);
      uVar6 = uVar5;
      do {
        piVar2 = *(int **)(param_2 + (uVar6 & 0xffffffff) * 8);
        piVar4 = piVar2;
        if ((*(byte *)(piVar2 + 8) & 6) == 0) {
          piVar4 = piVar2 + 3;
        }
        piVar7 = piVar1;
        if ((*(byte *)(piVar1 + 8) & 6) == 0) {
          piVar7 = piVar1 + 3;
        }
        if (*piVar4 <= *piVar7) break;
        *(int **)(param_2 + 8 + uVar6 * 8) = piVar2;
        *(int **)(param_2 + (uVar6 & 0xffffffff) * 8) = piVar1;
        uVar6 = uVar6 - 1;
      } while ((int)uVar6 != -1);
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar3 != param_1);
  }
  return;
}

