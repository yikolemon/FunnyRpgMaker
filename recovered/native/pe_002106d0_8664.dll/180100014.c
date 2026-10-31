/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180100014 */

void FUN_180100014(int *param_1,char *param_2,longlong param_3)

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
LAB_180100066:
    if (iVar4 <= iVar1) {
      lVar3 = *(longlong *)(param_1 + 2);
      goto LAB_1801000c3;
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
    if (iVar6 <= iVar1) goto LAB_180100066;
  }
  lVar3 = FUN_1800fe7f8((longlong)iVar6);
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
    FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
  }
  *(longlong *)(param_1 + 2) = lVar3;
  param_1[1] = iVar6;
LAB_1801000c3:
  *param_1 = iVar4;
  FUN_1802a82f0(iVar7 + lVar3 + -1,param_2,(longlong)iVar5);
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (longlong)(iVar7 + iVar5 + -1)) = 0;
  return;
}

