/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f855 */

void FUN_18011f855(longlong param_1,int param_2)

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
        piVar4 = (int *)FUN_180120868(param_1);
        piVar3 = piVar4;
        if (param_2 != 0) {
          do {
            piVar5 = piVar3;
            piVar3 = *(int **)(piVar5 + 6);
          } while (piVar3 != (int *)0x0);
          if (*piVar5 != param_2) goto LAB_18011f8cd;
        }
        FUN_18012f9a1(piVar4,lVar2,1);
      }
LAB_18011f8cd:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}

