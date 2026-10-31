/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180089272 */

undefined8 * FUN_180089272(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_180080a14(param_1 + 1,0);
  *(undefined1 *)param_1 = 7;
  param_1[1] = uVar1;
  return param_1;
}

