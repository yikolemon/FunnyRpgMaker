/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098b11 */

void FUN_140098b11(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 0x15a8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x15b0);
    plVar1 = plVar6 + *(int *)(param_1 + 0x15a8);
    do {
      lVar2 = *plVar6;
      if (((*(int *)(lVar2 + 0x4d0) != 0) && (*(int *)(param_1 + 4) + -1 <= *(int *)(lVar2 + 0x2e0))
          ) && (*(longlong *)(lVar2 + 0x4c0) == 0)) {
        piVar4 = (int *)FUN_140099b24(param_1);
        piVar3 = piVar4;
        if (param_2 != 0) {
          do {
            piVar5 = piVar3;
            piVar3 = *(int **)(piVar5 + 6);
          } while (piVar3 != (int *)0x0);
          if (*piVar5 != param_2) goto LAB_140098b89;
        }
        FUN_1400a88d1(piVar4,lVar2,1);
      }
LAB_140098b89:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}

