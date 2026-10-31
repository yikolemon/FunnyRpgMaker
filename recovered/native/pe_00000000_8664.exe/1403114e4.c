/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403114e4 */

void FUN_1403114e4(int *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_3 == 0) {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  else {
    iVar5 = (int)param_3 - (int)param_2;
  }
  iVar1 = param_1[1];
  iVar7 = *param_1 + (uint)(*param_1 == 0);
  iVar4 = iVar7 + iVar5;
  if (iVar4 < iVar1) {
LAB_140311536:
    if (iVar4 <= iVar1) {
      lVar3 = *(longlong *)(param_1 + 2);
      goto LAB_140311593;
    }
    if (iVar1 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar1 / 2 + iVar1;
    }
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
  }
  else {
    iVar6 = iVar1 * 2;
    if (iVar1 * 2 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar6 <= iVar1) goto LAB_140311536;
  }
  lVar3 = FUN_14030fcc8((longlong)iVar6);
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
    FUN_14030fda4(*(undefined8 *)(param_1 + 2));
  }
  *(longlong *)(param_1 + 2) = lVar3;
  param_1[1] = iVar6;
LAB_140311593:
  *param_1 = iVar4;
  FUN_1404b97c0(iVar7 + lVar3 + -1,param_2,(longlong)iVar5);
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (longlong)(iVar7 + iVar5 + -1)) = 0;
  return;
}

