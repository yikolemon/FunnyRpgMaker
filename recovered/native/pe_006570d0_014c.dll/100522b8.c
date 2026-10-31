/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100522b8 */

void __thiscall FUN_100522b8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 8);
  *param_2 = iVar2;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    *(int **)(iVar2 + 4) = param_2;
  }
  piVar3 = (int *)param_2[1];
  *(int **)(iVar1 + 4) = piVar3;
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
  }
  else if (param_2 == (int *)piVar3[2]) {
    piVar3[2] = iVar1;
  }
  else {
    *piVar3 = iVar1;
  }
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}

