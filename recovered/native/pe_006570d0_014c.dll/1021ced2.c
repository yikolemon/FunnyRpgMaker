/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ced2 */

void __fastcall FUN_1021ced2(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = param_3 - param_1[1];
  if (((param_3 < param_1[1]) || (param_1[3] <= param_3)) || (param_1[2] <= param_2)) {
    piVar2 = (int *)param_1[6];
  }
  else {
    iVar1 = *param_1 + -1;
    if (*param_1 <= param_2) {
      iVar1 = param_2;
    }
    piVar4 = *(int **)(param_1[9] + iVar3 * 4);
    iVar5 = *piVar4;
    if (iVar1 < iVar5) {
      piVar4 = (int *)(param_1[9] + iVar3 * 4);
    }
    else {
      do {
        piVar2 = piVar4;
        if (iVar5 == iVar1) goto LAB_1021cf3d;
        iVar5 = *(int *)piVar2[3];
        piVar4 = (int *)piVar2[3];
      } while (iVar5 <= iVar1);
      piVar4 = piVar2 + 3;
    }
    piVar2 = (int *)param_1[8];
    if (piVar2 == (int *)param_1[6]) {
      param_1[4] = 0x62;
    }
    else {
      param_1[8] = (int)(piVar2 + 4);
      *piVar2 = iVar1;
      piVar2[2] = 0;
      piVar2[1] = 0;
      piVar2[3] = *piVar4;
      *piVar4 = (int)piVar2;
    }
  }
LAB_1021cf3d:
  param_1[7] = (int)piVar2;
  return;
}

