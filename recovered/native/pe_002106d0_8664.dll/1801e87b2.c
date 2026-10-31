/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e87b2 */

int FUN_1801e87b2(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  
  lVar9 = (longlong)param_2;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar9 * 4);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar9 * 4);
  iVar6 = iVar8 - iVar1;
  if (iVar6 != 0) {
    pbVar3 = *(byte **)(*(longlong *)(param_1 + 0x30) + lVar9 * 8);
    iVar7 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    iVar5 = 0x7fffffff;
    bVar4 = false;
    pbVar10 = pbVar3;
    do {
      pbVar10 = *(byte **)(pbVar10 + 0x20);
      if ((*pbVar10 & 3) == 0) {
        pbVar12 = *(byte **)(pbVar10 + 0x28);
        iVar2 = *(int *)(pbVar12 + 0x14);
        if (((((iVar2 == *(int *)(pbVar10 + 0x14)) && (iVar13 = iVar8 - iVar2, iVar13 != 0)) &&
             (iVar2 - iVar1 != 0)) &&
            ((pbVar14 = *(byte **)(pbVar10 + 0x20), *(int *)(pbVar14 + 0x14) == iVar2 &&
             ((*pbVar12 & 3) != 0)))) && ((*pbVar14 & 3) != 0)) {
          do {
            pbVar12 = *(byte **)(pbVar12 + 0x28);
          } while ((*pbVar12 & 3) != 0);
          do {
            pbVar14 = *(byte **)(pbVar14 + 0x20);
          } while ((*pbVar14 & 3) != 0);
          if ((((iVar2 < *(int *)(pbVar14 + 0x14)) &&
               (iVar11 = iVar2 - iVar1, iVar2 < *(int *)(pbVar12 + 0x14))) ||
              ((*(int *)(pbVar14 + 0x14) < iVar2 &&
               (iVar11 = iVar13, *(int *)(pbVar12 + 0x14) < iVar2)))) && (iVar7 >> 3 <= iVar11)) {
            if (iVar11 < iVar5) {
              iVar5 = iVar11;
            }
            if (!bVar4) {
              iVar5 = iVar11;
            }
            bVar4 = true;
          }
        }
      }
    } while (pbVar10 != pbVar3);
    FUN_1801ea0d5();
    iVar8 = 0x40;
    if (bVar4) {
      iVar8 = iVar5 + 0x40;
    }
    pbVar10 = pbVar3;
    if (iVar8 - iVar6 != 0 && iVar6 <= iVar8) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 0x20);
        *(int *)(pbVar10 + 0x14) = ((*(int *)(pbVar10 + 0x14) - iVar1) * iVar8) / iVar6 + iVar1;
      } while (pbVar10 != pbVar3);
      return iVar8 - iVar6;
    }
  }
  return 0;
}

