/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192167 */

void FUN_10192167(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  
  uVar3 = (int)(*(int *)(param_2 + 0xc) - 1U) >> 1 | *(int *)(param_2 + 0xc) - 1U;
  uVar3 = (int)uVar3 >> 2 | uVar3;
  uVar3 = (int)uVar3 >> 4 | uVar3;
  uVar3 = (int)uVar3 >> 8 | uVar3;
  iVar4 = ((int)uVar3 >> 0x10 | uVar3) + 1;
  uVar3 = (int)(*(int *)(param_2 + 0x10) - 1U) >> 1 | *(int *)(param_2 + 0x10) - 1U;
  uVar3 = (int)uVar3 >> 2 | uVar3;
  uVar3 = (int)uVar3 >> 4 | uVar3;
  uVar3 = (int)uVar3 >> 8 | uVar3;
  iVar5 = ((int)uVar3 >> 0x10 | uVar3) + 1;
  iVar2 = *(int *)(param_2 + 0x290);
  if (((iVar2 != 0) && (*(int *)(param_2 + 0x30) != 0)) &&
     (*(int *)(*(int *)(param_2 + 0x30) + 4) != 4)) {
    uVar3 = *(int *)(iVar2 + 0x98) - 1;
    uVar3 = (int)uVar3 >> 1 | uVar3;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    iVar4 = FUN_100fbc6a(((int)uVar3 >> 0x10 | uVar3) + 1,iVar4);
    uVar3 = *(int *)(iVar2 + 0x9c) - 1;
    uVar3 = (int)uVar3 >> 1 | uVar3;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    iVar5 = FUN_100fbc6a(((int)uVar3 >> 0x10 | uVar3) + 1,iVar5);
    iVar2 = *(int *)(iVar2 + 0x88) - *(int *)(iVar2 + 0x90);
    dVar7 = (double)iVar2;
    if (dVar7 < 0.0) {
      fVar6 = (float10)FUN_10270500(dVar7);
      dVar7 = (double)fVar6;
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    uVar3 = (int)((int)dVar7 - 1U) >> 1 | (int)dVar7 - 1U;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    iVar1 = ((int)uVar3 >> 0x10 | uVar3) + 1;
    if (iVar4 < iVar5) {
      iVar5 = FUN_100fbc6a(iVar5,iVar1);
      if ((*param_2 & 1) == 0) {
        uVar3 = (int)(iVar5 - 1U) >> 1 | iVar5 - 1U;
        uVar3 = (int)uVar3 >> 2 | uVar3;
        uVar3 = (int)uVar3 >> 4 | uVar3;
        uVar3 = (int)uVar3 >> 8 | uVar3;
        iVar5 = ((int)uVar3 >> 0x10 | uVar3) + 1;
      }
      iVar4 = FUN_100fbc6a(iVar4,(iVar2 + iVar5 + -1) / iVar5);
    }
    else {
      iVar4 = FUN_100fbc6a(iVar4,iVar1);
      iVar5 = FUN_100fbc6a(iVar5,(iVar4 + iVar2 + -1) / iVar4);
      if ((*param_2 & 1) == 0) {
        uVar3 = (int)(iVar5 - 1U) >> 1 | iVar5 - 1U;
        uVar3 = (int)uVar3 >> 2 | uVar3;
        uVar3 = (int)uVar3 >> 4 | uVar3;
        uVar3 = (int)uVar3 >> 8 | uVar3;
        iVar5 = ((int)uVar3 >> 0x10 | uVar3) + 1;
      }
    }
  }
  *param_1 = iVar4;
  param_1[1] = iVar5;
  return;
}

