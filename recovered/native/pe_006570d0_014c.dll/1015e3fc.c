/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e3fc */

int * __thiscall FUN_1015e3fc(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_1;
    FUN_10016fee(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    iVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = iVar1;
  }
  return param_1;
}

