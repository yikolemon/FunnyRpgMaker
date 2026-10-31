/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140180c23 */

void FUN_140180c23(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar2 = (int)param_1[1];
    uVar5 = (ulonglong)(*(int *)((longlong)param_1 + 0xc) - 2);
    lVar4 = (longlong)iVar2 * uVar5 * 0x10;
    lVar8 = lVar4 + *param_1 + 0x10;
    lVar9 = (longlong)iVar2 * -0x10;
    lVar1 = (longlong)(iVar2 + -2) + 1;
    lVar4 = (longlong)(iVar2 + -2) * 0x10 + *param_1 + lVar4;
    do {
      lVar6 = lVar8;
      lVar10 = (ulonglong)(iVar2 - 1) - 1;
      lVar7 = lVar4;
      lVar11 = lVar1;
      if (iVar2 < 3) {
        if (1 < iVar2) goto LAB_140180cfa;
      }
      else {
        do {
          FUN_140180d3a(lVar6,0xffffffff,1,iVar2);
          FUN_140180d3a(lVar6,0,1,iVar2);
          FUN_140180d3a(lVar6,1,1,iVar2);
          FUN_140180d3a(lVar6,0xffffffff,0,iVar2);
          lVar10 = lVar10 + -1;
          lVar6 = lVar6 + 0x10;
        } while (lVar10 != 0);
LAB_140180cfa:
        do {
          FUN_140180d3a(lVar7,1,0,iVar2);
          lVar11 = lVar11 + -1;
          lVar7 = lVar7 + -0x10;
        } while (lVar11 != 0);
      }
      lVar8 = lVar8 + lVar9;
      lVar4 = lVar4 + lVar9;
      bVar3 = 0 < (longlong)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}

