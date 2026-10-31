/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025df0 */

int __thiscall FUN_10025df0(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    piVar1 = (int *)FUN_1022bce0(1);
  }
  else {
    piVar1 = *(int **)(*param_1 + 4);
    (**(code **)(*piVar1 + 4))();
  }
  *(int **)(param_2 + 4) = piVar1;
  return param_2;
}

