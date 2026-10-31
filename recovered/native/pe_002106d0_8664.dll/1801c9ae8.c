/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9ae8 */

void FUN_1801c9ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1801c9b65(uVar1,param_1[4]);
  param_1[4] = 0;
  FUN_1801c9b65(uVar1,param_1[5]);
  param_1[5] = 0;
  FUN_1801c9b65(uVar1,param_1[6]);
  param_1[6] = 0;
  FUN_1801c9b65(uVar1,param_1[8]);
  param_1[8] = 0;
  FUN_1801c9b65(uVar1,param_1[0xb]);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1801c9ac8(param_1);
  return;
}

