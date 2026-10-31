/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022dbfe */

void FUN_18022dbfe(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (((param_3 < param_1[1]) || (param_1[3] <= param_3)) || (param_1[2] <= param_2)) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    iVar1 = *param_1 + -1;
    if (*param_1 <= param_2) {
      iVar1 = param_2;
    }
    lVar2 = (longlong)(param_3 - param_1[1]);
    piVar5 = *(int **)(*(longlong *)(param_1 + 0xe) + lVar2 * 8);
    iVar4 = *piVar5;
    if (iVar1 < iVar4) {
      piVar5 = (int *)(*(longlong *)(param_1 + 0xe) + lVar2 * 8);
    }
    else {
      do {
        piVar3 = piVar5;
        if (iVar4 == iVar1) goto LAB_18022dc7f;
        iVar4 = **(int **)(piVar3 + 4);
        piVar5 = *(int **)(piVar3 + 4);
      } while (iVar4 <= iVar1);
      piVar5 = piVar3 + 4;
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if (piVar3 == *(int **)(param_1 + 8)) {
      param_1[4] = 0x62;
    }
    else {
      *(int **)(param_1 + 0xc) = piVar3 + 6;
      *piVar3 = iVar1;
      piVar3[1] = 0;
      piVar3[2] = 0;
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)piVar5;
      *(int **)piVar5 = piVar3;
    }
  }
LAB_18022dc7f:
  *(int **)(param_1 + 10) = piVar3;
  return;
}

