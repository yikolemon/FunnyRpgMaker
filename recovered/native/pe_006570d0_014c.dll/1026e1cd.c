/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e1cd */

void FUN_1026e1cd(undefined2 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    FUN_1027f9f9(param_1,param_2,param_3);
    return;
  }
  *(undefined2 *)*param_2 = param_1;
  *param_2 = *param_2 + 2;
  return;
}

