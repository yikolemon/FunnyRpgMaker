/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac190 */

undefined8 * FUN_1400ac190(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_1400d3680(0x60);
  param_1[1] = uVar1;
  return param_1;
}

