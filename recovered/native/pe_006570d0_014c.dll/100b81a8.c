/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b81a8 */

void __thiscall FUN_100b81a8(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  if ((uint)(param_1[2] - iVar1 >> 2) < param_3) {
    FUN_100b822a(param_3);
    iVar5 = *param_1;
    thunk_FUN_1009fa47(param_2,param_3,iVar5);
    iVar5 = iVar5 + param_3 * 4;
  }
  else {
    iVar2 = param_1[1];
    uVar3 = iVar2 - iVar1 >> 2;
    iVar4 = param_3 - uVar3;
    if (param_3 < uVar3 || iVar4 == 0) {
      iVar5 = iVar1 + param_3 * 4;
      thunk_FUN_1009fa47(param_2,param_3,iVar1);
    }
    else {
      thunk_FUN_1009fa47(param_2,uVar3,iVar1);
      iVar5 = param_1[1];
      thunk_FUN_1009fa47((iVar2 - iVar1) + param_2,iVar4,iVar5);
      iVar5 = iVar5 + iVar4 * 4;
    }
  }
  param_1[1] = iVar5;
  return;
}

