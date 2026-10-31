/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045722 */

undefined8 * FUN_140045722(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_1401887b0(0x50);
  param_1[1] = lVar1;
  FUN_140007f78(lVar1 + 0x10,param_3);
  return param_1;
}

