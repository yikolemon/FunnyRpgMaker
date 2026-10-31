/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000f558 */

undefined8 * FUN_14000f558(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_1401887b0(0x50);
  param_1[1] = uVar1;
  return param_1;
}

