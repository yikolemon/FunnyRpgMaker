/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd00c */

void __fastcall FUN_101dd00c(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (1 < param_1) {
    uVar4 = 1;
    uVar5 = uVar4;
LAB_101dd01e:
    do {
      piVar1 = *(int **)(param_2 + -4 + uVar4 * 4);
      piVar6 = piVar1;
      if ((*(byte *)(piVar1 + 8) & 6) == 0) {
        piVar6 = piVar1 + 3;
      }
      piVar2 = *(int **)(param_2 + uVar4 * 4);
      piVar3 = piVar2 + 3;
      if ((*(byte *)(piVar2 + 8) & 6) != 0) {
        piVar3 = piVar2;
      }
      if (*piVar3 < *piVar6) {
        *(int **)(param_2 + uVar4 * 4) = piVar1;
        *(int **)(param_2 + -4 + uVar4 * 4) = piVar2;
        uVar4 = uVar4 - 1;
        if (uVar4 != 0) goto LAB_101dd01e;
      }
      uVar4 = uVar5 + 1;
      uVar5 = uVar4;
    } while (uVar4 != param_1);
  }
  return;
}

