/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018df9f */

void FUN_1018df9f(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_3;
  if ((iVar2 != 0) &&
     (((iVar2 != 1 || (*(int *)(param_3[2] + 0x28) != 0)) || (*(int *)(param_3[2] + 0x2c) != 0)))) {
    if (0 < param_3[0x27]) {
      iVar3 = param_3[2];
      iVar4 = 0;
      do {
        if (((*(int *)(iVar3 + 0x2c + iVar4) != 0) &&
            (iVar1 = *(int *)(iVar3 + 0x38 + iVar4), iVar1 != -1)) &&
           (0 < *(int *)(iVar3 + 0x34 + iVar4))) {
          *(int *)(iVar3 + 0x30 + iVar4) = iVar1 + param_3[0x29];
        }
        iVar4 = iVar4 + 0x40;
      } while (iVar2 << 6 != iVar4);
    }
    iVar2 = *param_2;
    if (iVar2 == param_2[1]) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar4 = iVar2 + 1;
      if (iVar2 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar4 * 4);
      if (param_2[2] != 0) {
        FUN_1025b2d0(iVar3,param_2[2],*param_2 << 2);
        FUN_100fa2cb(param_2[2]);
      }
      param_2[2] = iVar3;
      param_2[1] = iVar4;
      iVar2 = *param_2;
    }
    else {
      iVar3 = param_2[2];
    }
    *(int **)(iVar3 + iVar2 * 4) = param_3;
    *param_2 = *param_2 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[6];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3[3];
  }
  return;
}

