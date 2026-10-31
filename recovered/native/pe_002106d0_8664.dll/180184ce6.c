/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180184ce6 */

undefined8 * FUN_180184ce6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180239630(0x68);
  param_1[1] = uVar1;
  return param_1;
}

