/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f0e5 */

void FUN_14016f0e5(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    iVar2 = FUN_14016f12b(param_1 + 3,param_2,uVar1);
    if (iVar2 == 0) {
      FUN_14016f12b(param_1 + 9,param_2 & 0xffffffff,uVar1);
      return;
    }
  }
  return;
}

