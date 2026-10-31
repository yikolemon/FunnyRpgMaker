/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007798c */

void __thiscall FUN_1007798c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if ((uint)(param_1[2] - iVar1) < param_3) {
    FUN_100779fe(param_3);
    iVar4 = *param_1;
    uVar3 = param_3;
  }
  else {
    uVar2 = param_1[1] - iVar1;
    uVar3 = param_3 - uVar2;
    if (param_3 < uVar2 || uVar3 == 0) {
      iVar4 = iVar1 + param_3;
      thunk_FUN_10006e05(param_2,param_3,iVar1);
      goto LAB_100779f3;
    }
    thunk_FUN_10006e05(param_2,uVar2,iVar1);
    param_2 = param_2 + uVar2;
    iVar4 = param_1[1];
  }
  thunk_FUN_10006e05(param_2,uVar3,iVar4);
  iVar4 = iVar4 + uVar3;
LAB_100779f3:
  param_1[1] = iVar4;
  return;
}

