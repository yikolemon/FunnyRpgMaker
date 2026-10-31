/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ddd11 */

int __fastcall FUN_101ddd11(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int local_2c;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4);
  iVar10 = iVar1 - iVar11;
  if (iVar10 != 0) {
    pbVar2 = *(byte **)(*(int *)(param_1 + 0x28) + param_2 * 4);
    iVar5 = iVar10 + 7;
    if (-1 < iVar10) {
      iVar5 = iVar10;
    }
    local_2c = 0x7fffffff;
    bVar4 = false;
    pbVar9 = pbVar2;
    do {
      pbVar9 = *(byte **)(pbVar9 + 0x20);
      if ((*pbVar9 & 3) == 0) {
        pbVar8 = *(byte **)(pbVar9 + 0x24);
        iVar3 = *(int *)(pbVar8 + 0x14);
        if (((((iVar3 == *(int *)(pbVar9 + 0x14)) && (iVar1 - iVar3 != 0)) &&
             (iVar6 = iVar3 - iVar11, iVar6 != 0)) &&
            ((pbVar7 = *(byte **)(pbVar9 + 0x20), *(int *)(pbVar7 + 0x14) == iVar3 &&
             ((*pbVar8 & 3) != 0)))) && ((*pbVar7 & 3) != 0)) {
          do {
            pbVar8 = *(byte **)(pbVar8 + 0x24);
          } while ((*pbVar8 & 3) != 0);
          do {
            pbVar7 = *(byte **)(pbVar7 + 0x20);
          } while ((*pbVar7 & 3) != 0);
          if ((((iVar3 < *(int *)(pbVar7 + 0x14)) && (iVar3 < *(int *)(pbVar8 + 0x14))) ||
              ((*(int *)(pbVar7 + 0x14) < iVar3 &&
               (iVar6 = iVar1 - iVar3, *(int *)(pbVar8 + 0x14) < iVar3)))) && (iVar5 >> 3 <= iVar6))
          {
            if (iVar6 < local_2c) {
              local_2c = iVar6;
            }
            if (!bVar4) {
              local_2c = iVar6;
            }
            bVar4 = true;
          }
        }
      }
    } while (pbVar9 != pbVar2);
    FUN_101df427();
    iVar11 = 0x40;
    if (bVar4) {
      iVar11 = local_2c + 0x40;
    }
    pbVar9 = pbVar2;
    if (iVar11 - iVar10 != 0 && iVar10 <= iVar11) {
      do {
        pbVar9 = *(byte **)(pbVar9 + 0x20);
        *(int *)(pbVar9 + 0x14) = ((*(int *)(pbVar9 + 0x14) - iVar1) * iVar11) / iVar10 + iVar1;
      } while (pbVar9 != pbVar2);
      return iVar11 - iVar10;
    }
  }
  return 0;
}

