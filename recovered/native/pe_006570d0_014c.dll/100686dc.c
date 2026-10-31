/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100686dc */

int * __thiscall FUN_100686dc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((char)param_1[2] == '\x01') {
    if (param_1 != param_2) {
      iVar1 = *param_1;
      FUN_10060a06(param_1,*(undefined4 *)(iVar1 + 4));
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
  piVar2 = (int *)FUN_10068746(param_2);
  *(undefined1 *)(param_1 + 2) = 1;
  return piVar2;
}

