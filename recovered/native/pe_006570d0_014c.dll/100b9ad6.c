/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9ad6 */

void __thiscall FUN_100b9ad6(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2) < param_3) {
    FUN_100b9b5a(param_3);
    iVar4 = *(int *)(param_1 + 4);
    thunk_FUN_1009fa47(param_2,param_3,iVar4);
    iVar4 = iVar4 + param_3 * 4;
  }
  else {
    iVar5 = *(int *)(param_1 + 8) - iVar1;
    uVar2 = iVar5 >> 2;
    iVar3 = param_3 - uVar2;
    if (param_3 < uVar2 || iVar3 == 0) {
      iVar4 = iVar1 + param_3 * 4;
      thunk_FUN_1009fa47(param_2,param_3,iVar1);
    }
    else {
      thunk_FUN_1009fa47(param_2,uVar2,iVar1);
      iVar4 = *(int *)(param_1 + 8);
      thunk_FUN_1009fa47(iVar5 + param_2,iVar3,iVar4);
      iVar4 = iVar4 + iVar3 * 4;
    }
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}

