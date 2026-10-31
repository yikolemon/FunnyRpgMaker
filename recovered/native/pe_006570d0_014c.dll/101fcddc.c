/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fcddc */

void __fastcall FUN_101fcddc(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2[3];
  *param_1 = iVar1;
  iVar2 = param_2[2];
  param_1[1] = iVar2;
  iVar3 = param_2[1];
  param_1[2] = iVar3;
  iVar4 = *param_2;
  param_1[3] = iVar4;
  param_1[4] = iVar4 * iVar3;
  if (param_3 == '\0') {
    *param_1 = iVar1 + (*param_2 + -1) * iVar2;
    param_1[1] = -iVar2;
  }
  return;
}

