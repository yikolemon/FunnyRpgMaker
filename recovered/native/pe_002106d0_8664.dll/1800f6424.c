/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6424 */

undefined8 * FUN_1800f6424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  *param_2 = 0;
  local_20 = *param_1;
  *param_1 = uVar1;
  FUN_1800f54c6(&local_20);
  return param_1;
}

