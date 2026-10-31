/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001bf40 */

undefined8 * FUN_18001bf40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18023d070(1);
  param_1[3] = uVar1;
  uVar1 = FUN_18001bfdc(param_1 + 2);
  *param_1 = uVar1;
  uVar1 = FUN_18001c0ec(param_1 + 2);
  param_1[1] = uVar1;
  return param_1;
}

