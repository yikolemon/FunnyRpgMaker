/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183bd8 */

undefined8 * FUN_180183bd8(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x38);
  param_1[1] = lVar1;
  FUN_180183c68(lVar1 + 0x10);
  return param_1;
}

