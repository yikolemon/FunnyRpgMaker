/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a60f */

void __fastcall FUN_1011a60f(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x1484) != 0) {
    piVar4 = *(int **)(param_1 + 0x148c);
    piVar5 = piVar4 + *(int *)(param_1 + 0x1484);
    do {
      iVar1 = *piVar4;
      if (((*(int *)(iVar1 + 0x438) != 0) && (*(int *)(param_1 + 4) + -1 <= *(int *)(iVar1 + 0x2b4))
          ) && (*(int *)(iVar1 + 0x430) == 0)) {
        piVar2 = (int *)FUN_1011b528(param_1,*(int *)(iVar1 + 0x438));
        if (param_2 != 0) {
          do {
            piVar3 = piVar2;
            piVar2 = (int *)piVar3[6];
          } while (piVar2 != (int *)0x0);
          if (*piVar3 != param_2) goto LAB_1011a684;
        }
        FUN_10129877(1);
      }
LAB_1011a684:
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar5);
  }
  return;
}

