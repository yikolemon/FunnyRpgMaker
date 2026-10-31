/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016fd09 */

void FUN_14016fd09(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_14016fd42(param_1 + 3,uVar1);
  FUN_14016fd42(param_1 + 9,uVar1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

