/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006da1c */

void FUN_14006da1c(longlong *param_1,undefined4 param_2,int param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((int)param_1[1] == 0) {
    uVar1 = *(uint *)(param_1 + 9);
    if (param_3 == uVar1 + (int)param_1[3]) {
      lVar2 = *param_1;
      iVar3 = FUN_14006db11((longlong)(param_1 + 3),param_4,uVar1,(int)param_1[3],param_2,lVar2);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_14006db11((longlong)(param_1 + 9),param_4,0,uVar1,param_2,lVar2), iVar3 == 0))
      {
        return;
      }
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}

