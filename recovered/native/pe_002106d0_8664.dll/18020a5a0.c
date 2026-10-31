/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020a5a0 */

void FUN_18020a5a0(longlong *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 4);
  *param_1 = lVar4;
  iVar1 = param_2[2];
  *(int *)(param_1 + 1) = iVar1;
  iVar2 = param_2[1];
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  iVar3 = *param_2;
  *(int *)(param_1 + 2) = iVar3;
  *(int *)((longlong)param_1 + 0x14) = iVar3 * iVar2;
  if (param_3 != '\0') {
    return;
  }
  *param_1 = lVar4 + (*param_2 + -1) * iVar1;
  *(int *)(param_1 + 1) = -iVar1;
  return;
}

