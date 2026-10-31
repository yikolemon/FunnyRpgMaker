/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db9d2 */

undefined8 * FUN_1800db9d2(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x68);
  param_1[1] = lVar1;
  FUN_1800dbbb2(lVar1 + 0x10);
  return param_1;
}

