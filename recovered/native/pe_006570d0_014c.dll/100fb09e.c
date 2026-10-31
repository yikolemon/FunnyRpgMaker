/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb09e */

int __thiscall FUN_100fb09e(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1[2] + *param_1 * 8);
  piVar2 = (int *)FUN_100fb004(param_1[2],piVar1,param_2);
  iVar3 = 0;
  if ((piVar2 != piVar1) && (*piVar2 == param_2)) {
    iVar3 = piVar2[1];
  }
  return iVar3;
}

