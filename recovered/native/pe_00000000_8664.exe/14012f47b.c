/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f47b */

void FUN_14012f47b(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  FUN_140128b39(uVar1,*param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  FUN_140128b39(uVar1,param_1);
  return;
}

