/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400802e0 */

void FUN_1400802e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar3 = param_2[8];
  if (iVar3 == 1) {
    iVar5 = *param_2;
    iVar4 = param_2[1];
    iVar3 = iVar5;
    iVar2 = iVar4;
  }
  else {
    if (iVar3 == 2) {
      iVar5 = param_2[4];
      *param_1 = iVar5;
      iVar4 = param_2[5];
      iVar3 = iVar5;
      iVar2 = iVar4;
    }
    else {
      if (iVar3 != 3) {
        return;
      }
      iVar3 = param_2[6];
      *param_1 = iVar3;
      iVar2 = param_2[7];
      iVar4 = param_2[4];
      iVar1 = param_2[5];
      iVar5 = iVar3;
      if (iVar4 < iVar3) {
        iVar5 = iVar4;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      iVar4 = iVar2;
      if (iVar1 < iVar2) {
        iVar4 = iVar1;
      }
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
    }
    iVar1 = *param_2;
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = param_2[1];
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  iVar1 = param_2[2];
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  *param_1 = iVar5;
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  param_1[2] = iVar3;
  iVar3 = param_2[3];
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  param_1[1] = iVar4;
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  param_1[3] = iVar2;
  return;
}

