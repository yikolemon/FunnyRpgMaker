/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f878 */

uint FUN_1002f878(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar2 = param_1[1];
  iVar5 = param_1[0x25] + iVar2;
  iVar4 = param_2[1];
  iVar7 = param_2[0x25] + iVar4;
  bVar9 = SBORROW4(iVar5,iVar7);
  iVar6 = iVar5 - iVar7;
  bVar8 = iVar5 == iVar7;
  if (bVar8) {
    iVar6 = 0;
    if (0 < iVar2 - iVar4) {
      iVar6 = iVar2 - iVar4;
    }
    iVar5 = iVar6;
    if (iVar2 < iVar6) {
      iVar5 = iVar2;
    }
    do {
      if (iVar2 <= iVar6) {
        bVar9 = SBORROW4(iVar5,iVar4);
        iVar6 = iVar5 - iVar4;
        bVar8 = false;
        if (iVar5 == iVar4) {
          return 0;
        }
        goto LAB_1002f8dd;
      }
      uVar3 = *(uint *)(*param_1 + -4 + iVar2 * 4);
      iVar2 = iVar2 + -1;
      uVar1 = *(uint *)(*param_2 + -4 + iVar4 * 4);
      iVar4 = iVar4 + -1;
    } while (uVar3 == uVar1);
    uVar3 = (uVar1 < uVar3) - 1 | 1;
  }
  else {
LAB_1002f8dd:
    uVar3 = (uint)(!bVar8 && bVar9 == iVar6 < 0) * 2 - 1;
  }
  return uVar3;
}

