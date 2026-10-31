/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c64c2 */

undefined8 * FUN_1402c64c2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_14044ab00(0x80);
  param_1[1] = uVar1;
  return param_1;
}

