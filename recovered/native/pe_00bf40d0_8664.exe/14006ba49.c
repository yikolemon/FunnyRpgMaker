/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006ba49 */

void FUN_14006ba49(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  FUN_14006c53b(param_1 + 0xf,lVar1);
  FUN_14006c53b(param_1 + 6,lVar1);
  FUN_14001c53d(lVar1,param_1[1]);
  param_1[1] = 0;
  FUN_14001c53d(lVar1,param_1[2]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

