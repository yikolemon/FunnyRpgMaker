/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb8e0 */

void __thiscall FUN_100fb8e0(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  
  if (param_3 == 0) {
    sVar5 = _strlen(param_2);
  }
  else {
    sVar5 = param_3 - (int)param_2;
  }
  iVar1 = param_1[1];
  iVar4 = *param_1 + (uint)(*param_1 == 0);
  iVar2 = sVar5 + iVar4;
  if (iVar2 < iVar1) {
LAB_100fb920:
    if (iVar2 <= iVar1) {
      iVar2 = param_1[2];
      goto LAB_100fb97c;
    }
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = iVar1 * 2;
    if (iVar1 * 2 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar3 <= iVar1) goto LAB_100fb920;
  }
  iVar2 = FUN_100fa1fa(iVar3);
  if (param_1[2] != 0) {
    FUN_1025b2d0(iVar2,param_1[2],*param_1);
    FUN_100fa2cb(param_1[2]);
  }
  param_1[2] = iVar2;
  param_1[1] = iVar3;
LAB_100fb97c:
  *param_1 = sVar5 + iVar4;
  FUN_1025b2d0(iVar2 + iVar4 + -1,param_2,sVar5);
  *(undefined1 *)(sVar5 + iVar4 + -1 + param_1[2]) = 0;
  return;
}

