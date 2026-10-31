/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000326e */

undefined8 * FUN_18000326e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = std::exception::vftable;
  local_20 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = 1;
  local_30 = param_2;
  local_18 = param_1;
  FUN_18026e9f0(&local_30,local_20);
  *local_18 = std::runtime_error::vftable;
  return local_18;
}

