/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802203dc */

void FUN_1802203dc(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    if (param_3 == iVar1 + *(int *)(param_1 + 3)) {
      uVar2 = *param_1;
      iVar3 = FUN_1802204d1(param_1 + 3,param_4,iVar1,*(int *)(param_1 + 3),param_2,uVar2);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1802204d1(param_1 + 9,param_4,0,iVar1,param_2,uVar2), iVar3 == 0)) {
        return;
      }
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}

