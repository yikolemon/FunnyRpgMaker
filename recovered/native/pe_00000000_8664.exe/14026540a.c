/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026540a */

undefined8 * FUN_14026540a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_14044ab00(0x50);
  param_1[1] = uVar1;
  return param_1;
}

