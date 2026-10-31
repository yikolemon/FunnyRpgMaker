/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d11e */

int FUN_18019d11e(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_1;
  iVar7 = 0;
  iVar5 = 0;
  if (iVar6 < param_3 + param_2) {
    iVar5 = 0;
    iVar4 = 0;
    iVar7 = 0;
    do {
      iVar1 = param_1[1];
      if (iVar1 - iVar7 == 0 || iVar1 < iVar7) {
        param_1 = *(int **)(param_1 + 2);
        iVar6 = *param_1 - iVar6;
        iVar8 = param_3 - iVar4;
        if (iVar6 + iVar4 <= param_3) {
          iVar8 = iVar6;
        }
        iVar3 = (iVar7 - iVar1) * iVar8;
        iVar6 = *param_1;
      }
      else {
        iVar3 = (iVar1 - iVar7) * iVar4;
        param_1 = *(int **)(param_1 + 2);
        iVar2 = *param_1;
        iVar7 = iVar1;
        if (iVar6 < param_2) {
          iVar8 = iVar2 - param_2;
          iVar6 = iVar2;
        }
        else {
          iVar8 = iVar2 - iVar6;
          iVar6 = iVar2;
        }
      }
      iVar5 = iVar5 + iVar3;
      iVar4 = iVar4 + iVar8;
    } while (iVar6 < param_3 + param_2);
  }
  *param_4 = iVar5;
  return iVar7;
}

