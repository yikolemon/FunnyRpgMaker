/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e787a */

undefined8 * FUN_1800e787a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1800578f2(param_2);
  return param_1;
}

