/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006da93 */

void FUN_14006da93(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] == 0) {
    uVar1 = *(uint *)(param_1 + 3);
    lVar3 = param_1[9];
    if (param_2 == (int)lVar3 + uVar1) {
      lVar2 = *param_1;
      iVar4 = FUN_14006db11((longlong)(param_1 + 3),param_3,0,uVar1,0,lVar2);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_14006db11((longlong)(param_1 + 9),param_3,uVar1,(int)lVar3,0,lVar2),
         iVar4 == 0)) {
        return;
      }
      *(int *)(param_1 + 1) = iVar4;
    }
  }
  return;
}

