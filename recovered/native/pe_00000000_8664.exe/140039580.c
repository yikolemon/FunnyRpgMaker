/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140039580 */

undefined8 * FUN_140039580(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_1401887b0(0x40);
  param_1[1] = lVar1;
  FUN_140039762(lVar1 + 0x10);
  return param_1;
}

