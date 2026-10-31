/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00435245 */

int __fastcall FUN_00435245(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int local_2c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4);
  iVar11 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4);
  iVar9 = iVar11 - iVar1;
  if (iVar9 != 0) {
    pbVar2 = *(byte **)(*(int *)(param_1 + 0x28) + param_2 * 4);
    iVar5 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar5 = iVar9;
    }
    local_2c = 0x7fffffff;
    bVar4 = false;
    pbVar8 = pbVar2;
    do {
      pbVar8 = *(byte **)(pbVar8 + 0x20);
      if ((*pbVar8 & 3) == 0) {
        pbVar7 = *(byte **)(pbVar8 + 0x24);
        iVar3 = *(int *)(pbVar7 + 0x14);
        if (((((iVar3 == *(int *)(pbVar8 + 0x14)) && (iVar6 = iVar11 - iVar3, iVar6 != 0)) &&
             (iVar3 - iVar1 != 0)) &&
            ((pbVar10 = *(byte **)(pbVar8 + 0x20), *(int *)(pbVar10 + 0x14) == iVar3 &&
             ((*pbVar7 & 3) != 0)))) && ((*pbVar10 & 3) != 0)) {
          do {
            pbVar7 = *(byte **)(pbVar7 + 0x24);
          } while ((*pbVar7 & 3) != 0);
          do {
            pbVar10 = *(byte **)(pbVar10 + 0x20);
          } while ((*pbVar10 & 3) != 0);
          if ((((iVar3 < *(int *)(pbVar10 + 0x14)) &&
               (iVar12 = iVar3 - iVar1, iVar3 < *(int *)(pbVar7 + 0x14))) ||
              ((*(int *)(pbVar10 + 0x14) < iVar3 &&
               (iVar12 = iVar6, *(int *)(pbVar7 + 0x14) < iVar3)))) && (iVar5 >> 3 <= iVar12)) {
            if (iVar12 < local_2c) {
              local_2c = iVar12;
            }
            if (!bVar4) {
              local_2c = iVar12;
            }
            bVar4 = true;
          }
        }
      }
    } while (pbVar8 != pbVar2);
    FUN_00436b23(param_1,param_2);
    iVar11 = 0x40;
    if (bVar4) {
      iVar11 = local_2c + 0x40;
    }
    pbVar8 = pbVar2;
    if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
      do {
        pbVar8 = *(byte **)(pbVar8 + 0x20);
        *(int *)(pbVar8 + 0x14) = ((*(int *)(pbVar8 + 0x14) - iVar1) * iVar11) / iVar9 + iVar1;
      } while (pbVar8 != pbVar2);
      return iVar11 - iVar9;
    }
  }
  return 0;
}

