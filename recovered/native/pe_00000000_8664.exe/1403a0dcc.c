/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a0dcc */

void FUN_1403a0dcc(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if ((0xffff < (uint)(param_1[0xd] + param_3)) && ((*(byte *)(param_1 + 0xc) & 8) != 0)) {
    param_1[0x20] = param_1[8];
    FUN_1403a09ae(param_1);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar1 = *piVar1 + param_2;
  iVar2 = param_1[8];
  param_3 = param_3 + iVar2;
  iVar4 = param_1[9];
  if (iVar4 < param_3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    lVar3 = FUN_14030fcc8((longlong)iVar4 * 0x14);
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 10),(longlong)param_1[8] * 0x14);
      FUN_14030fda4(*(undefined8 *)(param_1 + 10));
    }
    *(longlong *)(param_1 + 10) = lVar3;
    param_1[9] = iVar4;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 10);
  }
  param_1[8] = param_3;
  *(longlong *)(param_1 + 0x10) = lVar3 + (longlong)iVar2 * 0x14;
  iVar2 = param_1[4];
  param_2 = param_2 + iVar2;
  iVar4 = param_1[5];
  if (iVar4 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    lVar3 = FUN_14030fcc8((longlong)iVar4 * 2);
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 6),(longlong)param_1[4] * 2);
      FUN_14030fda4(*(undefined8 *)(param_1 + 6));
    }
    *(longlong *)(param_1 + 6) = lVar3;
    param_1[5] = iVar4;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 6);
  }
  param_1[4] = param_2;
  *(longlong *)(param_1 + 0x12) = lVar3 + (longlong)iVar2 * 2;
  return;
}

