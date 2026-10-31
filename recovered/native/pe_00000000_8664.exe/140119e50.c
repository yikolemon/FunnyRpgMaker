/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119e50 */

undefined8 FUN_140119e50(longlong param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = DAT_140e8e470;
  iVar6 = 100;
  iVar7 = 0;
  do {
    iVar8 = (iVar7 + iVar6) / 2;
    dVar9 = (double)FUN_14011a1a4(param_1,(double)iVar8);
    dVar10 = (double)FUN_14011a1a4(param_1,(double)(iVar8 + 1));
    dVar11 = (double)FUN_14011a1a4(param_1,(double)iVar8);
    if (*(double *)(param_1 + 0x10) + dVar1 <= dVar11) {
      uVar4 = -(iVar7 - 0x32U);
      if ((int)uVar4 < 0) {
        uVar4 = iVar7 - 0x32U;
      }
      uVar5 = -(iVar6 - 0x32U);
      if ((int)uVar5 < 0) {
        uVar5 = iVar6 - 0x32U;
      }
      iVar2 = iVar8;
      iVar3 = iVar7;
      if ((uVar5 <= uVar4) && (iVar2 = iVar6, iVar3 = iVar8, iVar7 == iVar8)) break;
    }
    else {
      iVar2 = iVar6;
      iVar3 = iVar8 + 1;
      if (dVar10 <= dVar9) {
        iVar2 = iVar8;
        iVar3 = iVar7;
      }
    }
    iVar7 = iVar3;
    iVar6 = iVar2;
  } while (iVar7 < iVar6);
  FUN_14010beec(param_2,*(undefined8 *)(param_1 + 8),*(double *)(param_1 + 0x10),(double)iVar7);
  return param_2;
}

