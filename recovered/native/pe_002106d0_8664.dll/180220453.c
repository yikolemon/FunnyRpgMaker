/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180220453 */

void FUN_180220453(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 3);
    iVar2 = *(int *)(param_1 + 9);
    if (param_2 == iVar2 + iVar1) {
      uVar3 = *param_1;
      iVar4 = FUN_1802204d1(param_1 + 3,param_3,0,iVar1,0,uVar3);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_1802204d1(param_1 + 9,param_3,iVar1,iVar2,0,uVar3), iVar4 == 0)) {
        return;
      }
      *(int *)(param_1 + 1) = iVar4;
    }
  }
  return;
}

