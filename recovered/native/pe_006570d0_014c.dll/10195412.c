/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195412 */

int * __fastcall FUN_10195412(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  FUN_101954b2(param_3,param_4);
  piVar1 = (int *)param_1[2];
  if (((piVar1 == (int *)0x0) || (iVar2 = param_1[1], *(int *)(param_2 + 4) < param_4 + iVar2)) ||
     (piVar3 = *(int **)(param_2 + 0x1c), piVar3 == (int *)0x0)) {
    param_1[2] = 0;
  }
  else {
    iVar5 = *param_1;
    *piVar3 = iVar5;
    piVar3[1] = param_4 + iVar2;
    *(int *)(param_2 + 0x1c) = piVar3[2];
    piVar6 = (int *)*piVar1;
    if (*piVar6 < iVar5) {
      piVar1 = (int *)piVar6[2];
      piVar6[2] = (int)piVar3;
      piVar6 = piVar1;
    }
    else {
      *piVar1 = (int)piVar3;
    }
    iVar5 = iVar5 + param_3;
    piVar1 = (int *)piVar6[2];
    while ((piVar4 = piVar1, piVar4 != (int *)0x0 && (*piVar4 <= iVar5))) {
      piVar6[2] = *(int *)(param_2 + 0x1c);
      *(int **)(param_2 + 0x1c) = piVar6;
      piVar6 = piVar4;
      piVar1 = (int *)piVar4[2];
    }
    piVar3[2] = (int)piVar6;
    if (*piVar6 < iVar5) {
      *piVar6 = iVar5;
    }
  }
  return param_1;
}

