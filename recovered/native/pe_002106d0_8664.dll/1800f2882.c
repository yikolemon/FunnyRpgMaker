/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2882 */

undefined8 * FUN_1800f2882(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180239630(0x28);
  param_1[1] = uVar1;
  return param_1;
}

