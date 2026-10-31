/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140310f58 */

void FUN_140310f58(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 2);
  iVar1 = *param_1;
  lVar6 = (longlong)iVar1;
  piVar8 = (int *)(lVar6 * 0x10 + lVar4);
  piVar3 = (int *)FUN_140310b80(lVar4,piVar8,param_2);
  if ((piVar3 == piVar8) || (*piVar3 != param_2)) {
    lVar9 = (longlong)piVar3 - lVar4;
    if (iVar1 == param_1[1]) {
      if (iVar1 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar1 / 2 + iVar1;
      }
      iVar5 = iVar1 + 1;
      if (iVar1 + 1 < iVar2) {
        iVar5 = iVar2;
      }
      lVar4 = FUN_14030fcc8((longlong)iVar5 << 4);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1404b97c0(lVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
        FUN_14030fda4(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar4;
      param_1[1] = iVar5;
      lVar6 = (longlong)*param_1;
    }
    lVar7 = lVar6 - (lVar9 >> 4);
    if (lVar7 != 0 && lVar9 >> 4 <= lVar6) {
      FUN_1404b97c0(lVar4 + lVar9 + 0x10,lVar4 + lVar9,lVar7 * 0x10);
      lVar4 = *(longlong *)(param_1 + 2);
    }
    *(int *)(lVar4 + lVar9) = param_2;
    *(undefined8 *)(lVar4 + 8 + lVar9) = param_3;
    *param_1 = *param_1 + 1;
  }
  else {
    *(undefined8 *)(piVar3 + 2) = param_3;
  }
  return;
}

