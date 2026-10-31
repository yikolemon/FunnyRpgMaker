/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128abc */

void FUN_140128abc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_140128b39(uVar1,param_1[4]);
  param_1[4] = 0;
  FUN_140128b39(uVar1,param_1[5]);
  param_1[5] = 0;
  FUN_140128b39(uVar1,param_1[6]);
  param_1[6] = 0;
  FUN_140128b39(uVar1,param_1[8]);
  param_1[8] = 0;
  FUN_140128b39(uVar1,param_1[0xb]);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_140128a9c(param_1);
  return;
}

