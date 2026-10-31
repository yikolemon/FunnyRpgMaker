/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bfa18 */

undefined8 * FUN_1402bfa18(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_14044ab00(0x38);
  param_1[1] = lVar1;
  FUN_1402bfbc2(lVar1 + 0x10);
  return param_1;
}

