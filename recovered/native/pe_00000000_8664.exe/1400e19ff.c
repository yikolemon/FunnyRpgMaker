/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e19ff */

void FUN_1400e19ff(longlong param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = *(int *)(param_1 + 0x3c);
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        if (0 < *(int *)(param_1 + 0x38)) {
          uVar7 = *(int *)(param_1 + 0x38) + 1;
          pbVar8 = pbVar6;
          do {
            bVar3 = FUN_1400e1add((longlong)((float)pbVar8[3] * param_2),0xff);
            pbVar8[3] = bVar3;
            pbVar8 = pbVar8 + 4;
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
        }
        pbVar6 = pbVar6 + iVar1;
        iVar5 = iVar4 + -1;
        bVar2 = 0 < iVar4;
        iVar4 = iVar5;
      } while (iVar5 != 0 && bVar2);
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 1) &&
          (iVar4 = *(int *)(param_1 + 0x3c), 0 < *(int *)(param_1 + 0x3c))) {
    do {
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar7 = *(int *)(param_1 + 0x38) + 1;
        pbVar8 = pbVar6;
        do {
          bVar3 = FUN_1400e1add((longlong)((float)*pbVar8 * param_2),0xff);
          *pbVar8 = bVar3;
          pbVar8 = pbVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      pbVar6 = pbVar6 + iVar1;
      iVar5 = iVar4 + -1;
      bVar2 = 0 < iVar4;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar2);
  }
  return;
}

