/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ac33 */

void FUN_18019ac33(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_1800ff714(param_1 + 0x38,*param_2,*param_2);
    *param_2 = uVar1;
  }
  return;
}

