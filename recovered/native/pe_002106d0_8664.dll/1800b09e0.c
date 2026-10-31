/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b09e0 */

undefined8 * FUN_1800b09e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x38);
  param_1[1] = lVar1;
  FUN_1800b0a66(lVar1 + 0x10,param_3);
  return param_1;
}

