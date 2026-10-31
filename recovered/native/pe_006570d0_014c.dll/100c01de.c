/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c01de */

undefined4 * FUN_100c01de(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_10271d80(param_2);
  param_1[1] = uVar1;
  return param_1;
}

