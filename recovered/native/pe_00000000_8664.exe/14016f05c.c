/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f05c */

void FUN_14016f05c(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = 6;
    if (*(int *)(param_1 + 2) == 1) {
      uVar1 = *param_1;
      iVar2 = FUN_14016f98f(param_1 + 3,param_2,uVar1);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_14016f98f(param_1 + 9,param_2 & 0xffffffff,uVar1), iVar2 == 0)) {
        return;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}

