/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021f970 */

void FUN_18021f970(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = 6;
    if (*(int *)(param_1 + 2) == 1) {
      uVar1 = *param_1;
      iVar2 = FUN_1802202a3(param_1 + 3,param_2,uVar1);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_1802202a3(param_1 + 9,param_2 & 0xffffffff,uVar1), iVar2 == 0)) {
        return;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}

