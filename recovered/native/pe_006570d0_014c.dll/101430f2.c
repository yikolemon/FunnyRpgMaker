/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101430f2 */

void __thiscall FUN_101430f2(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    iVar3 = iVar1 + 1;
    if (iVar1 + 1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = FUN_100fa1fa(iVar3);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar2,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar2;
    param_1[1] = iVar3;
    iVar1 = *param_1;
  }
  else {
    iVar2 = param_1[2];
  }
  *(undefined1 *)(iVar2 + iVar1) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}

