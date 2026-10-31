/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180199d18 */

int * FUN_180199d18(int *param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  uVar2 = (int)(*(int *)(param_2 + 0xc) - 1U) >> 1 | *(int *)(param_2 + 0xc) - 1U;
  uVar2 = (int)uVar2 >> 2 | uVar2;
  uVar2 = (int)uVar2 >> 4 | uVar2;
  uVar2 = (int)uVar2 >> 8 | uVar2;
  iVar5 = ((int)uVar2 >> 0x10 | uVar2) + 1;
  uVar2 = (int)(*(int *)(param_2 + 0x10) - 1U) >> 1 | *(int *)(param_2 + 0x10) - 1U;
  uVar2 = (int)uVar2 >> 2 | uVar2;
  uVar2 = (int)uVar2 >> 4 | uVar2;
  uVar2 = (int)uVar2 >> 8 | uVar2;
  iVar4 = ((int)uVar2 >> 0x10 | uVar2) + 1;
  lVar1 = *(longlong *)(param_2 + 0x2b0);
  if (((lVar1 != 0) && (*(longlong *)(param_2 + 0x38) != 0)) &&
     (*(int *)(*(longlong *)(param_2 + 0x38) + 4) != 4)) {
    uVar2 = *(int *)(lVar1 + 0xa8) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    iVar5 = FUN_1801003e9(((int)uVar2 >> 0x10 | uVar2) + 1,iVar5);
    uVar2 = *(int *)(lVar1 + 0xac) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    iVar4 = FUN_1801003e9(((int)uVar2 >> 0x10 | uVar2) + 1,iVar4);
    iVar6 = *(int *)(lVar1 + 0x98) - *(int *)(lVar1 + 0xa0);
    if ((float)iVar6 < 0.0) {
      fVar7 = (float)FUN_18028ac40();
    }
    else {
      fVar7 = SQRT((float)iVar6);
    }
    uVar2 = (int)((int)fVar7 - 1U) >> 1 | (int)fVar7 - 1U;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    iVar3 = ((int)uVar2 >> 0x10 | uVar2) + 1;
    if (iVar5 < iVar4) {
      iVar4 = FUN_1801003e9(iVar4,iVar3);
      if ((*param_2 & 1) == 0) {
        uVar2 = (int)(iVar4 - 1U) >> 1 | iVar4 - 1U;
        uVar2 = (int)uVar2 >> 2 | uVar2;
        uVar2 = (int)uVar2 >> 4 | uVar2;
        uVar2 = (int)uVar2 >> 8 | uVar2;
        iVar4 = ((int)uVar2 >> 0x10 | uVar2) + 1;
      }
      iVar5 = FUN_1801003e9(iVar5,(longlong)(iVar6 + iVar4 + -1) / (longlong)iVar4 & 0xffffffff);
    }
    else {
      iVar5 = FUN_1801003e9(iVar5,iVar3);
      iVar4 = FUN_1801003e9(iVar4,(longlong)(iVar6 + iVar5 + -1) / (longlong)iVar5 & 0xffffffff);
      if ((*param_2 & 1) == 0) {
        uVar2 = (int)(iVar4 - 1U) >> 1 | iVar4 - 1U;
        uVar2 = (int)uVar2 >> 2 | uVar2;
        uVar2 = (int)uVar2 >> 4 | uVar2;
        uVar2 = (int)uVar2 >> 8 | uVar2;
        iVar4 = ((int)uVar2 >> 0x10 | uVar2) + 1;
      }
    }
  }
  *param_1 = iVar5;
  param_1[1] = iVar4;
  return param_1;
}

