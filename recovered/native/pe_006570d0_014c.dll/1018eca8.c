/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018eca8 */

void FUN_1018eca8(int param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  float fVar10;
  
  pbVar5 = *(byte **)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar6 = *(int *)(param_1 + 0x24);
    fVar10 = DAT_1028f6d0;
    if (0 < iVar6) {
      do {
        if (0 < *(int *)(param_1 + 0x20)) {
          uVar8 = *(int *)(param_1 + 0x20) + 1;
          pbVar9 = pbVar5;
          do {
            uVar4 = (uint)((float)pbVar9[3] * param_2);
            bVar3 = FUN_1011e1bd((int)((float)pbVar9[3] * param_2 - fVar10) & (int)uVar4 >> 0x1f |
                                 uVar4,0xff);
            fVar10 = DAT_1028f6d0;
            pbVar9[3] = bVar3;
            pbVar9 = pbVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
        }
        pbVar5 = pbVar5 + iVar1;
        iVar7 = iVar6 + -1;
        bVar2 = 0 < iVar6;
        iVar6 = iVar7;
      } while (iVar7 != 0 && bVar2);
    }
  }
  else if ((*(int *)(param_1 + 0x18) == 1) &&
          (iVar6 = *(int *)(param_1 + 0x24), fVar10 = DAT_1028f6d0, 0 < iVar6)) {
    do {
      if (0 < *(int *)(param_1 + 0x20)) {
        uVar8 = *(int *)(param_1 + 0x20) + 1;
        pbVar9 = pbVar5;
        do {
          uVar4 = (uint)((float)*pbVar9 * param_2);
          bVar3 = FUN_1011e1bd((int)((float)*pbVar9 * param_2 - fVar10) & (int)uVar4 >> 0x1f | uVar4
                               ,0xff);
          fVar10 = DAT_1028f6d0;
          *pbVar9 = bVar3;
          pbVar9 = pbVar9 + 1;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
      pbVar5 = pbVar5 + iVar1;
      iVar7 = iVar6 + -1;
      bVar2 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar2);
  }
  return;
}

