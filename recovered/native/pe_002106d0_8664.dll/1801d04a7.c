/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d04a7 */

void FUN_1801d04a7(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  FUN_1801c9b65(uVar1,*param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  FUN_1801c9b65(uVar1,param_1);
  return;
}

