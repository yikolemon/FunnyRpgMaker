/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140056569 */

undefined8 * FUN_140056569(undefined8 *param_1)

{
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = param_1;
  local_18 = param_1;
  FUN_1400565e0(&local_20,0xffffffff80000002);
  FUN_1400565e0(&local_20,0xffffffff80000001);
  return local_18;
}

