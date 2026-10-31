/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c6a0 */

void __thiscall FUN_1012c6a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < *param_1) {
    *(undefined1 *)(param_1[2] + param_2) = 0;
  }
  iVar2 = param_2 + 1;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  iVar3 = param_1[1];
  if (iVar3 < iVar2) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar1 = FUN_100fa1fa(iVar3);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar1,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar1;
    param_1[1] = iVar3;
  }
  iVar3 = *param_1;
  if (iVar3 < iVar2) {
    do {
      *(undefined1 *)(param_1[2] + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  *param_1 = iVar2;
  return;
}

