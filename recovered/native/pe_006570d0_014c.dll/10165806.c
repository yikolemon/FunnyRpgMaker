/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165806 */

void FUN_10165806(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (0 < iVar2) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    fVar6 = 0.0;
    fVar7 = 0.0;
    iVar4 = iVar2;
    do {
      if ((pbVar3[0x66] == 1) && ((*pbVar3 & 8) != 0)) {
        fVar6 = fVar6 + *(float *)(pbVar3 + 0x1c);
        fVar7 = fVar7 + *(float *)(pbVar3 + 0x10);
      }
      pbVar3 = pbVar3 + 0x74;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      if ((*(char *)(iVar1 + 0x66 + iVar4) == '\x01') && ((*(byte *)(iVar1 + iVar4) & 8) != 0)) {
        *(float *)(iVar1 + 0x1c + iVar4) = (*(float *)(iVar1 + 0x10 + iVar4) / fVar7) * fVar6;
        iVar2 = *(int *)(param_1 + 0x40);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x74;
    } while (iVar5 < iVar2);
  }
  return;
}

