/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002140 */

undefined8 * FUN_180002140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

