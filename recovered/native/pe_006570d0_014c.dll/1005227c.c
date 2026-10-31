/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005227c */

void __thiscall FUN_1005227c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_2 + 8);
  iVar2 = *piVar1;
  *(int *)(param_2 + 8) = iVar2;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    *(int *)(iVar2 + 4) = param_2;
  }
  piVar3 = *(int **)(param_2 + 4);
  piVar1[1] = (int)piVar3;
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
  }
  else if (param_2 == *piVar3) {
    *piVar3 = (int)piVar1;
  }
  else {
    piVar3[2] = (int)piVar1;
  }
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}

