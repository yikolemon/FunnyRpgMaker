/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016daf5 */

void FUN_14016daf5(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  FUN_14016e5e7(param_1 + 0xf,uVar1);
  FUN_14016e5e7(param_1 + 6,uVar1);
  FUN_140128b39(uVar1,param_1[1]);
  param_1[1] = 0;
  FUN_140128b39(uVar1,param_1[2]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

