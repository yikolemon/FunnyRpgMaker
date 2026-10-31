/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021f9f9 */

void FUN_18021f9f9(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    iVar2 = FUN_18021fa3f(param_1 + 3,param_2,uVar1);
    if (iVar2 == 0) {
      FUN_18021fa3f(param_1 + 9,param_2 & 0xffffffff,uVar1);
      return;
    }
  }
  return;
}

